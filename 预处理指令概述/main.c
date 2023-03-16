//
//  main.c
//  预处理指令概述
//
//  Created by 何建华 on 2023/2/17.
//

/*
 1.预处理指令
 1）都以#开头
 2）预处理指令都是在编译之前执行
 比如，#include <stdio.h>，在编译前先把代码拷到当前位置来。
 3）预处理指令后面没有分号
 
 2.c程序从编写到编译、链接、执行的流程：
 1）先创建一个.c源文件
 touch main.c
 2）在.c文件中写源代码
 open main.c
 c语言严格区分大小写
 3）使用cc -c去编译源文件
 cc -c main.c
 得到main.o文件，编译做的是：
 a.先处理预处理指令，如果有包含指令，就先把文件内容
 拷到写指令的位置，还有执行其预处理文件...
 b.检查源文件的语法规范，如果符合，就生成目标文件main.o，
 如果不符合，则不会生成。
 4）链接
 cc main.o
 做的工作是：
 a.生成启动代码
 b.链接函数。告诉编译器，要链接的函数在什么地方能调到。
 c.链接成功以后，就生成执行文件.out
 
 
 
 */

#include <stdio.h>//这行只拷了函数头，只有链接后再链接函数

int main(int argc, const char * argv[]) {
    
    //源文写在 手工代码上了
    
    return 0;
}
