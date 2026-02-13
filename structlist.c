#include <stdio.h>
#include <stddef.h>


struct list_head {
    struct list_head *next, *prev;
};

struct User {
    int id;
    char name[20];
    struct list_head node; 
};


#define container_of(ptr, type, member) \
    ((type *)((char *)(ptr) - offsetof(type, member)))

int main() {
    struct User u1 = {.id = 1, .name = "Alice"};
    struct list_head *ptr = &u1.node;

    
    struct User *recovered = container_of(ptr, struct User, node);
    
    printf("Recovered User ID: %d\n", recovered->id);
    return 0;
}