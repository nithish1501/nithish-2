#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

typedef struct {
    size_t size;
    size_t curr;
    uint8_t *buffer;
} Arena;

Arena* arena_init(size_t capacity) {
    Arena *a = malloc(sizeof(Arena));
    a->buffer = malloc(capacity);
    a->size = capacity;
    a->curr = 0;
    return a;
}

void* arena_alloc(Arena *a, size_t size) {
    if (a->curr + size > a->size) return NULL; 
    void *ptr = &a->buffer[a->curr];
    a->curr += size; 
    return ptr;
}

void arena_reset(Arena *a) {
    a->curr = 0; 
}

int main() {
    Arena *game_pool = arena_init(1024);
    
    
    int *coords = arena_alloc(game_pool, sizeof(int) * 3);
    char *name = arena_alloc(game_pool, 16);
    
    arena_reset(game_pool); 
    return 0;
}