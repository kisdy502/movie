//
// Created by Administrator on 2018/9/23.
//
#include <stdio.h>
#include <math.h>

int binary2decimal(long long n);

long long decimal2binary(int n);

int octal2decimal(int n);

int decimal2octal(int n);

int main(int argc, char *argv[]) {
    long long n = 1010111111L;
    int d = binary2decimal(n);
    printf("d:%d\n", d);
    long long x = decimal2binary(d);
    printf("x:%lld\n", x);

    int octal = 116145;
    int decimal = octal2decimal(octal);
    printf("decimal:%d\n", decimal);

    x = decimal2octal(decimal);
    printf("octal:%d\n", x);
}

//二进制转十进制
int binary2decimal(long long n) {
    int decimal = 0, i = 0, temp = 0;
    while (n != 0) {
        temp = n % 10;  //余数
        n /= 10;
        printf("temp:%-5d i:%-5d n:%-5d\n", temp, i, n);
        decimal += temp * pow(2, i);
        ++i;
    }
    return decimal;
}

long long decimal2binary(int n) {
    long long binary = 0, i = 1;
    int temp = 0;
    while (n != 0) {
        temp = n % 2;
        n /= 2;
        binary += temp * i;
        printf("temp:%-12d i:%-12lld n:%-12d binary:%-12lld\n", temp, i, n, binary);
        i *= 10;
    }
    return binary;
}


int octal2decimal(int octal) {
    int temp = 0, i = 0;
    int decimal = 0;
    while (octal) {
        temp = octal % 10;  //余数
        octal /= 10;
        printf("temp:%-5d i:%-5d n:%-5d\n", temp, i, octal);
        decimal += temp * pow(8, i);
        ++i;
    }
    return decimal;
}

int decimal2octal(int n) {
    int octal = 0;
    int i = 1, temp = 0;
    while (n) {
        temp = n % 8;
        n /= 8;
        octal += temp * i;
        i *= 10;
    }
    return octal;
}
