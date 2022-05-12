//Q9


#include<stdio.h>
 int main()
 {
    func1();
    func2();
 }
 func1()
 {
    extern int x;
    x++;
    printf("%d\t",x);
 }
 int x=89;
 func2()
 {
    x++;
    printf("%d\n",x);
 }
/*output:
90 91
*/
