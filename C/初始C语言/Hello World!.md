# Hello World!

## 做任何事的步骤

* 定义目标
* 设计该怎么做
* 按照设计的步骤去做
* 不断反思这样做有没有其他问题，有问题就解决，没问题就保持

## 第一个C程序

```c
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
```

* 注释
  * // 行注释
  * /**/ 块注释
* 变量
  * 命名规则
    * 只允许字符或下划线开头
    * 有意义
* 语法错误
  * 这种错误会让程序无法执行，相对来说是比较好解决的问题
* 语义错误
  * 难以发现，找不到问题所在就无法解决问题

## 关键字和保留字符

|          |          |          |                |
| :------: | -------- | -------- | -------------- |
|   auto   | extern   | short    | while          |
|  break   | float    | signed   | _Alignas       |
|   case   | for      | sizeof   | _Alignof       |
|   char   | goto     | static   | _Atomic        |
|  const   | if       | struct   | _Bool          |
| continue | inline   | switch   | _Complex       |
| default  | int      | typedef  | _Generic       |
|    do    | long     | union    | _Imaginary     |
|  double  | register | unsigned | _Noreturn      |
|   else   | restrict | void     | _Static_assert |
|   enum   | return   | volatile | _Thread_local  |

