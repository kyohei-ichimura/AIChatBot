/* 1�{198�~�̐���������1�{�ƁA1�{138�~�̋���2�{���w�����A
��~�D�ŕ������ꍇ�̂��ނ�����߂�B
�������A5%�̏���ł�ǉ����A���ނ�̊z�͐����Ƃ���B
�Ȃ��A����ł��l�̌ܓ����邩�ǂ����͎��R�Ƃ���B*/
#include<stdio.h>
int main(void){
	int milk = 138;
	int drink = 198;
	int money = 1000;
	double tax = 1.05;
	
	printf("���ނ�: %d �~\n",money-(int)((milk*2+drink)*tax));
	return 0;
}