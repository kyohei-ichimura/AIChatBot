/* �e�X�g�̓_������͂���v���O��������肽���B
�������A�e�X�g�̓_����0�`100�܂ł����Ȃ��̂ŁA
����ȊO�����͂��ꂽ�ꍇ�ɂ͍ē��͂�����悤�ɂ��邱�ƁB*/
#include <stdio.h>

int main(void){

    int score;

    do {
            printf("�e�X�g�̓_������͂��Ă�������:");
            scanf("%d",&score);
    } while (score < 0 || score > 100);

    printf("�e�X�g�̓_���́@%d�@�ł��B",score);

    
    return 0;
}