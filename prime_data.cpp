//
// Created by Administrator on 2018/9/19.
//
#include <stdio.h>

int main() {
    int low, high, i, flag;
    printf("enter two integer: ");
    scanf("%d %d", &low, &high);
    int count=0;

    printf("between %d and %d 's prime data is  :\n ", low, high);

    while (low < high) {
        flag = 0;

        for (i = 2; i <= low / 2; ++i) {
            if (low % i == 0) {
                flag = 1;
                break;
            }
        }

        if (flag == 0) {
            count++;
            if(count%20==0){
                printf("%-6d", low);
                printf("\n");

            }else{
                printf("%-6d ", low);
            }
        }

        ++low;
    }
    printf("\ntotal prime is:%d", count);

    return 0;
}
