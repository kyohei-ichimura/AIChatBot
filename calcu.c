#include <stdio.h>

int main(void){
	int min,max,sum;
	
	printf("�ŏ��l�ƍő�l��,�ŋ�؂��ē��͂��Ă�������.:");
	scanf("%d , %d ",&min,&max);
	
	sum = (min+max) * (max-min+1) / 2;
	
	printf("%d�`%d�̍��v��%d�ł��B\n",min,max,sum);
	
	return 0;
}