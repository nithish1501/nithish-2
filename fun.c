
#include <stdio.h>


int* fun()
{
    int A = 10;
    return (&A);
}


int main()
{
    
    int* p;


    p = fun();

    printf("%p\n", p);
    printf("%d\n", *p);
    return 0;
}