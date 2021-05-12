//所有语句都以;号表示结束
#include<stdio.h> //预处理命令 导入头文件 stdio.h
int main(void){	  // 第一个被调用的函数 main
    //声明一个字符类型的指针变量，它指向的一块内存中有"hello world\n"这几个字符 /n为转义字符 代表换行 像这样的转义字符还有好几个
    // = 为赋值运算符 把右边的东西给左边
    char * str = "hello world!\n";
    //调用格式化输出函数printf(),str为传入的参数
    printf(str); 
    //可加入getchar()来防止黑屏一闪而过
    getchar();
    //返回数字1给外部调用者
    return 1;
}//花括号表示这是一个代码块 