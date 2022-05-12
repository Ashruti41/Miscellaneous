//Q10
//we can not modify a const object so program gives an errors
#include<stdio.h>
int main()
{
    const int *ptr=func();
    *ptr=7;
    printf("*ptr=%d",*ptr);
}
func()
{
    int *p=malloc(1*sizeof(int));
    return p;
}
