//Q16

#include<stdio.h>
#include<stdarg.h>
void func(int n,...);
int main()
{
    int count=4;
    func(count,2,3,4,5);
}
void func(int n, ...)
{
    va_list ap;
    int a,i;
    for(i=0; i<n; i++)
    {
        a=va_arg(ap,int);
        printf("%d ",a);
    }
}
//here program will run successfully but there is nothing will print because Since ap was not initialized by va_start when we initialize this then ans will print like,

#include<stdio.h>
#include<stdarg.h>
void func(int n,...);
int main()
{
    int count=4;
    func(count,2,3,4,5);
}
void func(int n, ...)
{
    va_list ap;
   // va_start(ap,n);
    int a,i;
    for(i=0; i<n; i++)
    {
        a=va_arg(ap,int);
        printf("%d ",a);
    }
}
/*output:
2 3 4 5
*/
