#include<stdio.h>

int main()
{
    int n,arr[100],copy[100],i;
    int sum,max,min,search,index;
    float avg;
    
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
    



    sum=0;
    for(i=0;i<n;i++)
    {
        sum=sum+arr[i];
    }
    avg=(float)sum/n;
    printf("Sum: %d\n",sum);
    printf("Avg: %.2f\n",avg);
    

    max=arr[0];
    for(i=1;i<n;i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }
    }



    
    min=arr[0];
    for(i=1;i<n;i++)
    {
        if(arr[i]<min)
        {
            min=arr[i];
        }
    }




    printf("Max: %d\n",max);
    printf("Min: %d\n",min);
    
    printf("Search: ");
    scanf("%d",&search);
    

    

    index=-1;
    for(i=0;i<n;i++)
    {
        if(arr[i]==search)
        {
            index=i;
            break;
        }
    }
    

    if(index!=-1)
    {
        printf("Found at index %d\n",index);
    }
    else
    {
        printf("Not found\n");
    }
    
    for(i=0;i<n;i++)
    {
        copy[i]=arr[i];
    }
    
    printf("Copied: ");
    for(i=0;i<n;i++)
    {
        printf("%d ",copy[i]);
    }



    printf("\n");
    return 0;
}
