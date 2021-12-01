#include<stdio.h>
void SelectSort(int *a,int n)
{
    for (int i = 0; i < n; i++)
    {
        int key = i;
        for (int j = key+1; j < n; j++)
        {
            if (a[key]>a[j])
            {
                key = j;
            }
            
        }
        if (key != i)
        {
            int temp = a[i];
            a[i] = a[key];
            a[key] = temp;
        }
        printf("经过第%d遍历排序后的结果是:\r",i);
        for (int i = 0; i < n; i++)
        {
            printf("%d ",a[i]);
        }
        printf("\r");
    }
    
}
int main(void)
{
    int a[] = {21,59,31,11,56,99};
    int Size = sizeof(a)/sizeof(a[0]);
    SelectSort(a,Size);
    printf("数组长度是:%d\r",Size);
    printf("数组经过选择排序后从小到大的排序是:\r");
   for (int i = 0; i < Size; i++)
   {
       printf("%d ",a[i]);
   }
   
}