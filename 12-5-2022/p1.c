//find out the sum of integers

#include<stdio.h>
#include<stdarg.h>
int sum(int , ...);                                       //... represents unnamed argument which is passed to a function
int main()
{
    printf("Total = %d\n",sum(2,99,68));                //here 2 is a number and totoal is calculate with 99+68=167
    printf("Total = %d\n",sum(3,11,79,32));
    printf("Total = %d\n",sum(5,23,34,45,56,78));
}
int sum(int num, ...)
{
    int i;
    va_list ap;
    int arg, total=0;
    va_start(ap,num);
    for(i=0; i<num; i++)
    {
        arg=va_arg(ap,int);
        printf("%d ",arg);
        total+=arg;
    }
    va_end(ap);
    return total;
}
/*output:
99 68 Total = 167
11 79 32 Total = 122
23 34 45 56 78 Total = 236
*/
