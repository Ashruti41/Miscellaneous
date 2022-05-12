//Q14


#include<stdio.h>
int main()
{
    int i=3;
    const int j=i;
    const int k=func();
    int *ptr=&k;
    const int m=*ptr;
    printf("%d\t%d\t%d\t%d\n",i,j,k,m);
}
func()
{
    return 4;
}

/*output:
3 3 4 4
*/
