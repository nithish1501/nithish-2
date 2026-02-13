#include <stdio.h>

#define FLAG_POWER    (1 << 0) 
#define FLAG_ERROR    (1 << 1) 
#define FLAG_NETWORK  (1 << 2) 

int main() {
    unsigned char system_status = 0;

    
    system_status |= (FLAG_POWER | FLAG_NETWORK);

    
    if (system_status & FLAG_POWER) {
        printf("System is Powered On.\n");
    }


    system_status ^= FLAG_ERROR; 

    printf("Raw Status Byte: %u\n", system_status);
    return 0;
}