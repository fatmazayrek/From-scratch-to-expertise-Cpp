#include <fcntl.h>
#include <mqueue.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <sys/stat.h>

#define MQ_NAME "/mq_cola_queue"

typedef struct 
{
    char msg[100];
} Message;

int main(void)
{
    struct mq_attr attributes = {
        .mq_flags = 0,
        .mq_maxmsg = 10,
        .mq_curmsgs = 0,      
        .mq_msgsize = sizeof(Message)
    };

    mqd_t myqueue = mq_open(MQ_NAME, O_CREAT | O_WRONLY, S_IRUSR | S_IWUSR, &attributes);

    Message tosend;

    strcpy(tosend.msg, "MSG from server");

    int a;
    a = mq_send(myqueue, (char*)&tosend, sizeof(tosend), 1);

    printf("%d\n", a);  //return 0, mesaj gönderiliyor.

    printf("%s\n", tosend.msg);  //Mesaj MQ'ya eklendi.

    fprintf(stdout, "Press any key to finish\n");
    getchar();

    mq_close(myqueue);
    mq_unlink(MQ_NAME);    //Process işi bittiğinde message queue'yu silmek için işaretler

    return EXIT_SUCCESS;
}
