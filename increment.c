#include <stdio.h>
#include <stdatomic.h>
#include <threads.h>

atomic_int counter = 0;

int increment_task(void* arg) {
    for (int i = 0; i < 100000; ++i) {
        atomic_fetch_add(&counter, 1); 
    }
    return 0;
}

int main() {
    thrd_t t1, t2;
    thrd_create(&t1, increment_task, NULL);
    thrd_create(&t2, increment_task, NULL);
    
    thrd_join(t1, NULL);
    thrd_join(t2, NULL);
    
    printf("Final Count: %d\n", counter); 
    return 0;
}