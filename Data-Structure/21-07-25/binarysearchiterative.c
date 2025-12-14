#include<stdio.h>

int main()
{
    int n,arr[100],key,i;
    int left,right,mid;
    
    printf("Enter n: ");
    scanf("%d",&n);
    printf("Enter sorted elements:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    
    printf("Search: ");
    scanf("%d",&key);
    


    left=0;
    right=n-1;
    
    while(left<=right)
    {
        mid=(left+right)/2;
        
        if(arr[mid]==key)
        {
            printf("Found at index %d\n",mid);
            return 0;
        }
        else if(arr[mid]<key)
        {
            left=mid+1;
        }
        else
        {
            right=mid-1;
        }
    }



    
    printf("Not found\n");
    return 0;
}
