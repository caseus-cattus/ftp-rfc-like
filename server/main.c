#ifndef STDLIB
    #include <stdlib.h>
    #define STDLIB
#endif
#ifndef STDIO
    #include <stdio.h>
    #define STDIO
#endif
#ifndef STDBOOL
    #include <stdbool.h>
    #define STDBOOL
#endif
#ifndef UNISTD
    #include <unistd.h>
    #define UNISTD
#endif
#ifndef PTHREAD
    #include <pthread.h>
    #define PTHREAD
#endif
#ifndef STRING
    #include <string.h>
    #define STRING
#endif

#ifndef TYPES
    #include <sys/types.h>
    #define TYPES
#endif
#ifndef SOCKET
    #include <sys/socket.h>
    #define SOCKET
#endif
#ifndef IN
    #include <netinet/in.h>
    #define IN
#endif

#ifndef MAIN
    #include "main.h"
    #define MAIN
#endif

#define PI_PORT 6669
#define BUFSIZE 128


int main(void) {
    struct sockaddr_in raddr;
    int 
    pi_sockfd = init_sock(PI_PORT, SOCK_DGRAM),
    asockfd, raddr_size = sizeof(raddr);

    char buf[BUFSIZE];
    size_t recv_len;
    
    while (true) {
        recv_len = recvfrom(pi_sockfd, buf, BUFSIZE, 0,
                           (struct sockaddr *)&raddr, &raddr_size);
        printf("recieved! %s\n", buf);
    }

    return 0;
}


int init_sock(int port, int sock_type) {
    int sockfd;
    struct sockaddr_in addr;

    if ( (sockfd = socket (AF_INET, sock_type, 0)) == -1)
        err_exit ("socket creation err!", true);
    
    addr.sin_family = AF_INET;
    addr.sin_port = htons (port);
    addr.sin_addr.s_addr = INADDR_ANY;
    memset (&(addr.sin_zero), 0, 8);

    if ( bind (sockfd, (struct sockaddr *)&addr, sizeof (struct sockaddr)) < 0)
        err_exit ("bind error!", true);
    
    return sockfd;
}


int err_exit(char* msg, bool perr) {
    if (perr)
        perror (msg);
    else
        fprintf (stderr, "%s\n", msg);
    
    exit (1);
}