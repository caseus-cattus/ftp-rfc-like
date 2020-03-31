#include "main.h"

#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>


int dtp_connect(char *addr, int port, int sockfd) {
    /* code */
    return sockfd;
}


int dtp_disconnect(int sock) {
    /* code */
    return 0;
}