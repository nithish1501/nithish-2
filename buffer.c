#include <stdatomic.h>

typedef struct {
    atomic_int head;
    atomic_int tail;
    int buffer[1024];
} RingBuffer;


void push(RingBuffer *rb, int val) {
    int h = atomic_load(&rb->head);
    rb->buffer[h] = val;
    atomic_store(&rb->head, (h + 1) & 1023); 
}