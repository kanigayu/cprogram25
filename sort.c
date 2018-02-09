#include<stdio.h>
int main()
{
int i,j,size,arr[100],temp;
printf("Enter the size of array");
scanf("%d",&size);
printf("Enter the elements\n:");
for(i=0;i<size;i++)
{
       scanf("%d", &arr[i]);
    }
    for(i=0; i<size; i++)
    {
    for(j=i+1; j<size; j++)
        {
        if(arr[i] > arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
printf("\nElements of array in ascending order: ");
    for(i=0; i<size; i++)
    {
        printf("%d\t", arr[i]);
    }
    return 0;
}
