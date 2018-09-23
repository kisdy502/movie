//
// Created by Administrator on 2018/9/19.
//
#include <stdio.h>

int max(int x, int y) {
    return x > y ? x : y;
}

int main() {
    int (*p)(int, int)=&max;

    int a, b, c, d;
    printf("enter three digital:");
    scanf("%d %d %d", &a, &b, &c);
    d =p(p(a, b),c) ;

    printf("max is:%d", d);

    return 0;
}
