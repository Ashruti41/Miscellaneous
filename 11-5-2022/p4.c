//automatic variables
//here when program goes into unother braces then first x value was distroyed.

#include<stdio.h>
int main()
{
    int x=3;
    printf("%d\t",x);
    {
        int x=10;
        printf("%d\t",x);
    }
    {
        int x=26;
        printf("%d\t",x);
    }
    printf("%d\n",x);
}


/*output:
3 10 26 3
*/
