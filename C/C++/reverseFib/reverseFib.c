#include <stdio.h>

// LIKE AND SUBSCRIBE

void fibRev(int a, int b, int count) {
    if (count == 0){
        return;
    }
    fibRev(b, a + b, count - 1);
    printf("%d ", a);
}

void fib(int a, int b, int count){
    int prevNum = a;
    int num = b;
    printf("%d %d ", prevNum, num);
    for (int i = 0; i < count - 2; i++){
        int temp = prevNum + num;
        printf("%d ", temp);
        prevNum = num;
        num = temp;
    }
}

int main(void){
    printf("Normal Fibonnaci Sequence: ");
    fib(0, 1, 10);
    printf("\n");
    printf("Reversed: ");
    fibRev(0, 1, 10);
    printf("\n");
}