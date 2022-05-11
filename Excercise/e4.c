//Q4
//so logically when there are two variable name conflicts that time local variable has more priority to global variable.

#include<stdio.h>
int var=6;

int main()
{
    int var=18;
    printf("%d",var);
}


/*output:
18
*/
