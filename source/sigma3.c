#include<stdio.h>

int main(void){
	
	int min,max,sum

;	/* ���͕��� */
	printf("�ő�l�ƍŏ��l��,�ŋ�؂��ē��͂��Ă��������B:");
	scanf("%d,%d",&min,&max);

	/* �v�Z���� */
	sum = (min+max) * (max-min+1) / 2;

	/* �\������ */
	printf("%d~%d�̍��v��%d�ł��B\n",min,max,sum);

	return 0;
}