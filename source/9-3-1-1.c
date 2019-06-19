#include <stdio.h>
/* for文を使用して、掛け算九九の表を表示するプログラムを作成せよ。
ヒント：%2d指定子を使うと表を揃えられる。
ヒント：for文の中でfor文を使っても良い。*/
int main(void){
    // 縦列
    for (int length = 1 ;length < 10 ;length++) {
        //　横列
        for (int width ;width < 10; width++) {
            printf(" %2d ", length * width);


        }
        printf("\n");
    }
    return 0;
}