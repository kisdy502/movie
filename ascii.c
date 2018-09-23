//
// Created by Administrator on 2018/9/19.
//

#include <stdio.h>

int main() {
    char c;
    printf("Enter a char: ");

    // 读取用户输入
    scanf("%c", &c);
    // %d 显示整数
    // %c 显示对应字符
    printf("%c  ASCII is %d", c, c);
    return 0;
}