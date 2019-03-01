#include<stdio.h>
int main(void){
	/* 定価を入力すると、1割引、3割引、5割引、8割引の値段を、
	一覧表示するプログラムを作成せよ。
	なお、結果の金額は整数値での表示が望ましいが、実数でもかまわない。*/
	
	int value,tenOff,thirtyOff,half,eigthyOff;
	scanf("%d",&value);

	tenOff = value/10*9;
	thirtyOff = value/10*7;
	half = value/2;
	eigthyOff = value/10*2;
	
	printf("%d\n",tenOff);
	printf("%d\n",thirtyOff);
	printf("%d\n",half);
	printf("%d\n",eigthyOff);
	
	return 0;
}
