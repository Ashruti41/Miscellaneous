//Q17

#include<stdio.h>
int main()
{
    int x=6;
    ++x++;
    printf("%d\n",x);
}
//here error:lvalue required

#include<stdio.h>
int main()
{
    int x=6,a;
    a=x++;                                         //or a=++x; a=7
    printf("%d\n",a);
}
/*output:
a=6
*/
