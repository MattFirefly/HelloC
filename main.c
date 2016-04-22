#include <stdint.h>
#include <stdio.h>

#define UP 1
#define DOWN 2
#define LEFT 3
#define RIGHT 4

//#define RIGHT 4这些是定义常量
int main() {
    printf("if语句\n");
    int32_t a = 8;
    int32_t b = 10;
    if (a < b) {
        printf("%d \n", a);
    } else {
        printf("%d \n", b);
    }

    printf("switch语句\n");
    int32_t dir = 3;
    switch (dir) {
        case UP:
            printf("Go up\n");
            break;
        case DOWN:
            printf("Go down\n");
            break;
        case LEFT:
            printf("Go left\n");
            break;
        case RIGHT:
            printf("Go right\n");
            break;
    }


    printf("goto语句\n");
    //goto 意思就是跳转到lable在从新执行一次
    int i = 0;
    lable:
    printf("%d\n", i);
    i++;
    if (i < 10) {
        goto lable;
    }


    printf("for语句\n");
    //貌似在c11什么之类的 才能在for中定义变量 否则必须这样写
    int j;
    for (j = 0; j < 20; j++) {
        printf("%d\n", j);
        if (j == 12) {
            goto end;
        }
    }
    end:;//冒号不能漏
//    printf("结束语句\n");

//先执行do里面的再判断
    int h = 1;
    do {
        printf("%d\n", h);
        h++;
    } while (h < 5);
    return 0;
}
