#include<stdio.h>
int main(void){
	/* �艿����͂���ƁA1�����A3�����A5�����A8�����̒l�i���A
	�ꗗ�\������v���O�������쐬����B
	�Ȃ��A���ʂ̋��z�͐����l�ł̕\�����]�܂������A�����ł����܂�Ȃ��B*/
	
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
