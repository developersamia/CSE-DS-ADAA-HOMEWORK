#include<stdio.h>

void reverse(int arr[],int n)
{
    int i,temp;
    for(i=0;i<n/2;i++)
    {
        temp=arr[i];
        arr[i]=arr[n-1-i];
        arr[n-1-i]=temp;
    }
}



int main()
{
    int n,arr[100],i;
    int even,odd;
    int element,pos;
    int visited[100],count,j;
    int uniqueArr[100],k,flag;
    
    printf("Enter n: ");
    scanf("%d",&n);
    
    printf("Enter elements:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    
    printf("Array: ");
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
    
    printf("Reverse: ");
    reverse(arr,n);
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
    reverse(arr,n);
    
    even=0;
    odd=0;
    for(i=0;i<n;i++)
    {
        if(arr[i]%2==0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }
    printf("Even: %d\n",even);
    printf("Odd: %d\n",odd);
    
    printf("Insert element: ");
    scanf("%d",&element);
    printf("Insert position: ");
    scanf("%d",&pos);
    
    for(i=n;i>pos;i--)
    {
        arr[i]=arr[i-1];
    }
    arr[pos]=element;
    n=n+1;
    
    printf("After insert: ");
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
    
    printf("Remove position: ");
    scanf("%d",&pos);
    
    for(i=pos;i<n-1;i++)
    {
        arr[i]=arr[i+1];
    }
    n=n-1;
    
    printf("After remove: ");
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
    
    for(i=0;i<n;i++)
    {
        visited[i]=0;
    }
    
    printf("Frequency:\n");
    for(i=0;i<n;i++)
    {
        if(visited[i]==1)
        {
            continue;
        }
        
        count=1;
        for(j=i+1;j<n;j++)
        {
            if(arr[i]==arr[j])
            {
                count++;
                visited[j]=1;
            }
        }
        printf("%d: %d times\n",arr[i],count);
    }
    
    k=0;
    for(i=0;i<n;i++)
    {
        flag=1;
        for(j=0;j<k;j++)
        {
            if(arr[i]==uniqueArr[j])
            {
                flag=0;
                break;
            }
        }
        if(flag==1)
        {
            uniqueArr[k]=arr[i];
            k++;
        }
    }


    
    printf("Unique: ");
    for(i=0;i<k;i++)
    {
        printf("%d ",uniqueArr[i]);
    }
    printf("\n");
    printf("Count: %d\n",k);
    
    return 0;
}


