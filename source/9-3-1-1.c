#include <stdio.h>
/* for�����g�p���āA�|���Z���̕\��\������v���O�������쐬����B
�q���g�F%2d�w��q���g���ƕ\�𑵂�����B
�q���g�Ffor���̒���for�����g���Ă��ǂ��B*/
int main(void){
    // �c��
    for (int length = 1 ;length < 10 ;length++) {
        //�@����
        for (int width ;width < 10; width++) {
            printf(" %2d ", length * width);


        }
        printf("\n");
    }
    return 0;
}