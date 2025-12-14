#include<stdio.h>
int main()
{
    int n,i;
    long long fact;
    fact=1;
    
    printf("Enter number: ");
    scanf("%d",&n);
    
    for(i=1;i<=n;i++)
    {
        fact=fact*i;
    }
    

    printf("Fact of %d = %lld\n",n,fact);
    return 0;
}
