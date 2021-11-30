#include<stdio.h>
int main(void)
{
    int a[] = {21,59,31,11,56,99,123,468,146,792,567,12,65,32};
    int k;
    int Size;
    Size = sizeof(a)/sizeof(a[0]);
   for (int i = 0; i < Size-1; i++)
   {
       for (int j = 0; j<Size-1-i; j++)
       {
           if(a[i]>a[i+1])
           {
               k = a[i+1];
               a[i+1] = a[i];
               a[i] = k;
           }
       }
       
   }
    printf("数组经过冒泡排序后从小到大的排序是:\r\n");
   for (int i = 0; i < Size; i++)
   {
       printf("%d ",a[i]);
   }
   
    
}