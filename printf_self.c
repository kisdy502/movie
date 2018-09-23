//
// Created by Administrator on 2018/9/19.
//

#include <stdio.h>

int main() {
    FILE *fp;
    char c;
    fp = fopen(__FILE__, "r");
    do {
        c = getc(fp);
        putchar(c);
    } while (c != EOF);
    fclose(fp);
    return 0;
}