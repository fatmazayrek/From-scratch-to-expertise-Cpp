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
}Message;

int main(void)
{
    struct mq_attr attributes = {
        .mq_flags = 0,
        .mq_maxmsg = 10,
        .mq_curmsgs = 0,      
        .mq_msgsize = sizeof(Message)
    };

    mqd_t myqueue = mq_open(MQ_NAME, O_CREAT | O_RDONLY | O_NONBLOCK, S_IRUSR | S_IWUSR, &attributes);

    Message toreceive;

    ssize_t size = mq_receive(myqueue, (char*)&toreceive, sizeof(toreceive), NULL);

    printf("%lu", sizeof(size));

    printf("%s\n", toreceive.msg);

    fprintf(stdout, "Press any key to finish\n");
    getchar();

    mq_close(myqueue);
}