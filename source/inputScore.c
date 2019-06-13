#include<stdio.h>

int main(void){
    int score;
    printf("点数を入力してください：");
    // 入力値    
    scanf("%d",&score);
    // 条件判定
    if(score > 100){
       
        printf("入力が100より大きいので修正します。\n");
        score = 100;
    
    }
   
    printf("点数は %d 点です。\n",score);
   
    return 0;


}