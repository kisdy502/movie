//
// Created by Administrator on 2018/9/20.
//

#include <stdio.h>

int main() {
    char *name = "adbc";
    FILE *file = fopen("test.txt", "a+");
    fprintf(file, name);
    fclose(file);
}