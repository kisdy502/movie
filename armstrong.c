//
// Created by Administrator on 2018/9/19.
//阿姆斯壮数

// armstrong.c
//

#include <stdio.h>
#include <math.h>

int checkPrimeNumber(int n);

int checkArmstrongNumber(int n);

int main() {
    int n, flag;

    printf("enter a int number: ");
    scanf("%d", &n);

    // 检测素数
    flag = checkPrimeNumber(n);
    if (flag == 1)
        printf("%d is prime\n", n);
    else
        printf("%d is not prime\n", n);


    // 检测 Armstrong 数
    flag = checkArmstrongNumber(n);
    if (flag == 1)
        printf("%d is Armstrong number", n);
    else
        printf("%d is not Armstrong number", n);
    return 0;
}


int checkPrimeNumber(int n) {
    int i, flag = 1;

    for (i = 2; i <= n / 2; ++i) {
        // 非素数条件
        if (n % i == 0) {
            flag = 0;
            break;
        }
    }
    return flag;
}

int checkArmstrongNumber(int number) {
    int originalNumber, remainder, result = 0, n = 0, flag;
    originalNumber = number;
    //计算是几位数
    while (originalNumber != 0) {
        originalNumber /= 10;
        ++n;
    }
    printf("is a %d bit data\n", n);

    originalNumber = number;

    while (originalNumber != 0) {
        remainder = originalNumber % 10;
        int temp = pow(remainder, n);
        printf("%d 's pow %d:%d ", remainder, n, temp);
        result += temp;
        printf("remainder:%d ", remainder);
        printf("result:%d\n", result);
        originalNumber /= 10;
    }


    // 判断条件
    if (result == number)
        flag = 1;
    else
        flag = 0;

    return flag;


}