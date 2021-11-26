#include<stdio.h>
#include<string.h>
char b[2] = "e";
int main(void)
{
    int a[10] = {1,2,3,4,5};
    int a1[][5] = {1,2,3,4,5,6,7,8,9,10};
    int S,S1,S2,S3,S_a1,S_a2,S_a3;
    S = sizeof(a);
    S1 = sizeof(a)/sizeof(int);
    S2= sizeof(a)/sizeof(a[0]);
    S_a1 = sizeof(a1);
    S_a2 = sizeof(a1)/sizeof(int);
    S_a3 = sizeof(a1)/sizeof(a1[0][0]);
    printf("一维整形数组a[]数组的字节长度是\r");
    printf("数组的字节长度是：%d\r",S); 
    printf("用sizeof(int)数组的长度是：%d\r",S1);
    printf("用sizeof(a[0])数组的长度是：%d\r\n",S2);
    printf("二维整形数组a1[][]数组的字节长度是\r");
    printf("数组的字节长度是：%d\r",S_a1);
    printf("用sizeof(int)数组的长度是：%d\r",S_a2);
    printf("用sizeof(a1[0][0])数组的长度是：%d\r\n",S_a3);
    char b[] = "He";
    char b1[][5] = {1,2,3,4,5,6,7,8,9,10};
    int Size,Size1,Size2,Size3,S_b1,S_b2,S_b3;
    Size = sizeof(b);
    Size3 = strlen(b);
    Size1 = sizeof(b)/sizeof(char);
    Size2= sizeof(b)/sizeof(b[0]);
    S_b1 = sizeof(b1);
    S_b2 = sizeof(b1)/sizeof(char);
    S_b3 = sizeof(b1)/sizeof(b1[0][0]);
    printf("一维字符串数组a[]数组的字节长度是\r");
    printf("数组的字节长度是：%d\r",Size); 
    printf("数组的长度是：%d\r",Size3); 
    printf("用sizeof(char)算数组的长度是：%d\r",Size1);
    printf("用sizeof((a[0])算数组的长度是：%d\r\n",Size2);
    printf("二维字符串数组a1[][]数组的字节长度是\r");
    printf("数组的字节长度是：%d\r",S_b1);
    printf("用sizeof(char)数组的长度是：%d\r",S_b2);
    printf("用sizeof((a[0])数组的长度是：%d\r",S_b3);
    /*字符数组表示字符串可以有两种方式：
     （1）char str1[ ]="aaaaa";
     此种方法声明的字符串本质上是字符数组，在赋值前数组大小还没有确定。在赋值后编译器会自动在“aaaaa”后加上’\0‘以表示字符串的结尾，此时str1中存储的数是“aaaaa\0”，数组的大小为6。
     （2）char str2[ 5]=“bbbbb”;
     此种方法声明的字符串本质上是字符数组，在声明部分已经定义了数组的大小为5，在赋值“bbbb”后str2已没有空间来存储‘\0‘，str2存储的数据是“bbbbb”，数组的大小为5；*/
}