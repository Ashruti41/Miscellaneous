//automatic variables

#include<stdio.h>
int main()
{
    int x=5;
    printf("x = %d\t",x);
    func();
}
func()
{
    int x=15;
    printf("x =%d\n",x);
}

/*output:
x=5 x=15
*/
