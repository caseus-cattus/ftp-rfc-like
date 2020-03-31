#include "main.h"

#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>

int dtp() {
    int sockfd = init_sock(INADDR_ANY, SOCK_STREAM);

    return 0;
}