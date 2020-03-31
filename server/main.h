#ifndef STDBOOL
    #include <stdbool.h>
    #define STDBOOL
#endif
int err_exit(char* msg, bool perr);
int init_sock(int port, int sock_type);