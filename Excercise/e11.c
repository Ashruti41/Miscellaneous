//Q11
//here we can't modify a const object and we can't given *p='j' but it is valid for p=str2. 

#include<stdio.h>
int main()
{
    char str1[] ="hockey";
    char str2[]="Cricket";
    char const *p=str1;
    *p='j';                           //invalid
    p=str2;                           //valid
}
