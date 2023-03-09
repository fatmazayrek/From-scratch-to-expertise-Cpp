#include <stdio.h>
#include <string.h>
#include <sys/stat.h>
#include <mqueue.h>

#define QUEUE_NAME "/queue3"

int main(void)
{
    mqd_t myqueue;
    unsigned int priority = 33;
    char message_text[100];
    int status;

    myqueue = mq_open(QUEUE_NAME, O_RDWR | O_CREAT, S_IRWXU | S_IRWXG, NULL);

    if (myqueue == -1)
    {
        perror("Unable to create queue");
        return 2;
    }

    strcpy(message_text, "Hello world22!");

    status = mq_send(myqueue, message_text, strlen(message_text)+1, priority);

    if (status == -1)
    {
        perror("Unable to send message");
        return 2;
    }

    printf("Message was sent: %s", message_text);

    status = mq_close(myqueue);

    if (status == -1)
    {
        perror("Unable to close message queue");
        return 2;
    }

    return 0;
}