#include <stdio.h>
int main() {
    int arr[5] ,i,size_array,size_element,len_array;
    size_array= sizeof(arr);
    size_element= sizeof(arr[0]);
    len_array= size_array/size_element;
    printf("Enter values for array");
    for(i=0;i<=4;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Display array\t");
    for(i=0;i<5;i++)
    {
        printf("%d\n",arr[i]);
    }
    printf("Size of array is %d\n",size_array);
    printf("Size of one element is %d\n",size_element);
    printf("Length of array is %d\n",len_array);
    return 0;
}
