//Q15
//program to print array 

#include<stdio.h>
int *func();
int main()
{
    int i,size;
    const int *arr=func(&size);
    for(i=0; i<size; i++)
    {
        printf("Enter a[%d] : ",i);
        scanf("%d",&arr[i]);
    }
    for(i=0; i<size; i++)
    printf("%d\t",arr[i]);
}
int *func(int *psize)
{
    int *p;
    printf("Enter size : ");
    scanf("%d",psize);
    p=malloc(*psize*sizeof(int));
    return p;
}

/*output:
Enter size : 4
Enter a[0] : 1
Enter a[1] : 2
Enter a[2] : 3
Enter a[3] : 4
1       2       3       4
*/
