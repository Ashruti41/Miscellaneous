//Q13


#include<stdio.h>
int main()
{
    const int i=23;
    const int j=thrice(i);                 //here i=23
    printf("j=%d\n",j);                    
}
thrice(int i)
{
    return 3*i;
}

/*output:
j=69
*/
