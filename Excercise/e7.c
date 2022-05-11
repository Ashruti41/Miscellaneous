//Q7
//here code will start from main function and then compiler d=shoe func1(x) so compiler directly print x=89 withput enters into func1() and then in the func2() compiler checks the condition and print the output.

#include<stdio.h>
int x=89;
int main()
{
    func1(x);
    printf("%d\t",x);
    func2();
    printf("%d\n",x);
}
func1(int x)
{
    x++;
}

func2()
{
    x++;
}

/*output:
89 90
*/
