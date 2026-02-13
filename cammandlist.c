#include <stdio.h>


#define COMMAND_LIST \
    X(IDLE, "System is waiting") \
    X(RUNNING, "Process in progress") \
    X(STOPPED, "User halted execution")


enum State {
#define X(name, str) STATE_##name,
    COMMAND_LIST
#undef X
};


const char* state_strings[] = {
#define X(name, str) str,
    COMMAND_LIST
#undef X
};

int main() {
    enum State current = STATE_RUNNING;
    printf("Status Code %d: %s\n", current, state_strings[current]);
    return 0;
}