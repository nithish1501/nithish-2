#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int id;
    char grade;
} Student;

int main() {
    
    Student *s1 = malloc(sizeof(Student));
    
    if (s1 == NULL) return 1; 

    s1->id = 101;    
    s1->grade = 'A';

    printf("Student %d got an %c\n", s1->id, s1->grade);

    free(s1); 
    return 0;
}