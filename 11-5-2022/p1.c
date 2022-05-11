//print the value of enum variables
//enumerators: The enumeration type is a user defined data type, which can take values only from a user defined list that named integer constants called enumerators.

#include<stdio.h>
int main()
{
    enum month{Jan,Feb,Mar,Apr,May,Jun}m1,m2;                     //here every month has it's own one value(0,1,2,3,4,5) respectively
    m1=Mar;                                                      //Mar=2
    printf("m1 = %d \n",m1);
    printf("Enter value for m2 : ");                               //here we take any value for m2
    scanf("%d",&m2);
    printf("m2 = %d \n",m2);
}

/*output:
m1 = 2 
Enter value for m2 : 4
m2 = 4 
*/
