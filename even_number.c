#include <stdio.h>
int main()
{
    int n, i;
    printf("Enter a number: ");
    scanf("%d",&n);
    printf("The even numbers upto %d are: ",n);
    for(i=0;i<=n;i++)
    {
        if(i%2==0)
        {
            printf("%d ",i);
        }
    }
    return 0;
}
