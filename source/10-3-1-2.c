/* テストの点数を入力するプログラムを作りたい。
ただし、テストの点数は0～100までしかないので、
それ以外が入力された場合には再入力させるようにすること。*/
#include <stdio.h>

int main(void){

    int score;

    do {
            printf("テストの点数を入力してください:");
            scanf("%d",&score);
    } while (score < 0 || score > 100);

    printf("テストの点数は　%d　です。",score);

    
    return 0;
}