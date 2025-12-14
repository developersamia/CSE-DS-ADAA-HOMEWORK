#include<stdio.h>

int binarySearch(int arr[],int left,int right,int key)
{
    int mid;
    
    if(left>right)
    {
        return -1;
    }
    
    mid=(left+right)/2;
    
    if(arr[mid]==key)
    {
        return mid;
    }
    else if(arr[mid]<key)
    {
        return binarySearch(arr,mid+1,right,key);
    }
    else
    {
        return binarySearch(arr,left,mid-1,key);
    }
}




int main()
{
    int n,arr[100],key,i;
    int result;
    
    printf("Enter n: ");
    scanf("%d",&n);
    
    printf("Enter sorted elements:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    
    printf("Search: ");
    scanf("%d",&key);
    
    result=binarySearch(arr,0,n-1,key);
    
    if(result==-1)
    {
        printf("Not found\n");
    }
    else
    {
        printf("Found at index %d\n",result);
    }
    return 0;
}
