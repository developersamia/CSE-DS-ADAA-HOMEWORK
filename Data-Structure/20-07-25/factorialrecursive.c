#include<stdio.h>


long long fact(int n)
{
    if(n==0)
    {
        return 1;
    }
    else
    {
        return n*fact(n-1);
    }
}

int main()
{
    int num;
    
    printf("Enter number: ");
    scanf("%d",&num);
    printf("Fact of %d = %lld\n",num,fact(num));
    
    return 0;
}
