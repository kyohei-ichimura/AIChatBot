/* 1本198円の清涼飲料水1本と、1本138円の牛乳2本を購入し、
千円札で払った場合のお釣りを求めよ。
ただし、5%の消費税を追加し、お釣りの額は整数とする。
なお、消費税を四捨五入するかどうかは自由とする。*/
#include<stdio.h>
int main(void){
	int milk = 138;
	int drink = 198;
	int money = 1000;
	double tax = 1.05;
	
	printf("お釣り: %d 円\n",money-(int)((milk*2+drink)*tax));
	return 0;
}