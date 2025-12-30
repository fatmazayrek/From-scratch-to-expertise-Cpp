#include <stdio.h>
#include <string.h>
#include <sys/stat.h>
#include <mqueue.h>

#define QUEUE_NAME "/queue3"

int main(void)
{
    mqd_t myqueue;
    unsigned int sender;
    char message_text[10000];
    int status;

    myqueue = mq_open(QUEUE_NAME, O_RDWR);

    if(myqueue == -1)
    {
        perror("Unable to open queue");
        return 2;
    }

    else
    {
        struct mq_attr attributes;

        mq_getattr(myqueue, &attributes);

        //Getting all attributes--->
        printf("Queue: %s\n", QUEUE_NAME);
        printf("Max message: %ld\n", attributes.mq_maxmsg);
        printf("Max length: %ld\n", attributes.mq_msgsize);
        printf("current messages: %ld\n", attributes.mq_curmsgs);

    }

    status = mq_receive(myqueue, message_text, sizeof(message_text), &sender);

    if(status == -1)
    {
        perror("unable to receive message");
        return 2;
    }

    printf("Received message:  %d bytes from %d %s", status, sender, message_text);

    status = mq_close(myqueue);

    if(status == -1)
    {
        perror("Unable to close message queue");
        return 2;
    }

    return 0;
}