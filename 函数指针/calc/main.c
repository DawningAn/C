#include <stdio.h>

void menu() {
    printf("------------------------------------");
    printf("--------1. Add        2. Sub--------");
    printf("--------3. Mul        4. Div--------");
    printf("--------        0.Exit      --------");
    printf("------------------------------------");
}

int Add(int x, int y) {
    return x + y;
}

int Sub(int x, int y) {
    return x - y;
}

int Mul(int x, int y) {
    return x * y;
}

int Div(int x, int y) {
    return x / y;
}

int main() {
    int (*pfArr[4])(int, int) = {Add, Sub, Mul, Div};  //函数指针数组
    int choose = 0;
    do {
        int a, b = 0;
        printf_s("请输入你的选择：");
        scanf("%d", &choose);
        switch (choose) {
            case 1:
                printf("请输入两个整形操作数：");
                scanf("%d %d", &a, &b);
                printf("%d\n", pfArr[0](a, b));
                break;
            case 2:
                printf("请输入两个整形操作数：");
                scanf("%d %d", &a, &b);
                printf("%d\n", pfArr[1](a, b));
                break;
            case 3:
                printf("请输入两个整形操作数：");
                scanf("%d %d", &a, &b);
                printf("%d\n", pfArr[2](a, b));
                break;
            case 4:
                printf("请输入两个整形操作数：");
                scanf("%d %d", &a, &b);
                printf("%d\n", pfArr[3](a, b));
                break;
            case 0:
                break;
            default:
                printf("非法输入！\n");
                break;
        }
    } while (choose);
    return 0;
}
