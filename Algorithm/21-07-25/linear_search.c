#include<stdio.h>

int main()
{
    int n,arr[100],key,i;
    int found=0;
    
    printf("Enter n: ");
    scanf("%d",&n);
    
    printf("Enter elements:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    
    printf("Search: ");
    scanf("%d",&key);
    
    for(i=0;i<n;i++)
    {
        if(arr[i]==key)
        {
            printf("Found at index %d\n",i);
            found=1;
            break;
        }
    }
    
    if(found==0)
    {
        printf("Not found\n");
    }
    
    return 0;
}
