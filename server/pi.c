#include "pi.h"


int pi_process_request(char *request) {
    switch (*request)
    {    
    case 1:
        break;
    default:
        return 1;
    }
    return 0;
}


int pi_term(int sock) {
    /* code */
}