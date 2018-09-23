//
// Created by Administrator on 2018/9/20.
//
#include <stdio.h>
int main() {
    int cur, prev;
    int day = 9;
    prev = 1;
    while (day > 0) {
        cur = prev * 2 + 2;
        prev = cur;
        day--;
    }

    printf("cur:%d",cur);
}