#include<stdio.h>
#include<string.h>
int main(void)
{
    /*\r:回车符,\n:换行符,\b:退格符*/
   /* printf("1.正常输出,无回车,无换行,无回退\n");
    printf("Hello Worlde!");
    printf("你好世界！\n");
    printf("2.回车输出(r),无换行,无回退\n");
    printf("   Hello Worlde!\r");
    printf("你好世界！\n");
    printf("3.换行输出(n),无回车,无回退\n");
    printf("Hello Worlde!\n");
    printf("你好世界！\n");
    printf("4.先回车+后换行输出(rn),无回退\n");
    printf("Hello Worlde!\r\n");
    printf("你好世界！\n");
    printf("5.先换行+后回车输出(nr),无回退\n");
    printf("Hello Worlde!\n\r");
    printf("你好世界！\n");
    printf("6.回退输出\n");
    printf("Hello Worlde!\b");
    printf("你好世界！\n");*/


    char str1[ ]="aaaaa";
    char str2[6]="bbbbb";
    char str3[7]="ccccc";
    char *str4;
    str4 ="ddddd";
     printf("       str1  str2  str3  str4 \n");
     printf("length: %d    %d    %d     %d\n",strlen(str1),strlen(str2),strlen(str3),strlen(str4));
     printf("  size: %d    %d     %d     %d\n",sizeof(str1),sizeof(str2),sizeof(str3),sizeof(str4));
     printf("        %d    %d    %d     %d\n",str1[5],str2[5],str3[5],str4[5]);
}