//把你的年龄转换成天数并把年龄和转换的天数打印出来(不考虑闰年)
#include<stdio.h>
int main(void){
    int age = 21;
    int day = age * 365;
    printf("我的年龄是%d岁,转换成天数是%d天\n", age, day);
    getchar();
    return 1;
}