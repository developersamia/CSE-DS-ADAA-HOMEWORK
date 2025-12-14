#include<stdio.h>

int main()
{
    int n,i;
    int first=0,second=1,next;

    
    printf("Enter: ");
    scanf("%d",&n);
    printf("Fibonacci: ");
    
    if(n>=1) printf("%d ",first);
    if(n>=2) printf("%d ",second);
    
    for(i=2;i<n;i++)
    {
        next=first+second;
        printf("%d ",next);
        first=second;
        second=next;
    }
    
    printf("\n");
    return 0;
}
