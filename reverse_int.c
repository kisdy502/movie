//
// Created by Administrator on 2018/9/19.
//
#include <stdio.h>

int main() {
    long n, fn, reverse_n, temp;
    printf("输入一个整数: ");
    scanf("%ld", &n);
    fn = n;
    reverse_n = 0;
    temp = 0;

    while (n != 0) {
        temp = n % 10;
        reverse_n = reverse_n * 10 + temp;
        n /= 10;
        printf("temp:%ld,reverse_n:%ld,n:%ld\r\n", temp, reverse_n, n);
    }

    if (reverse_n == fn) {
        printf("is reverse digital");
    } else {
        printf("is not reverse digital");
    }

}