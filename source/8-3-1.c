#include <stdio.h>
// 月を入力すると、対応する陰暦の月を表示するプログラムを作成せよ。
// なお、存在しない月を入力した時にも何かのメッセージを表示せよ。
// ヒント:陰暦は1月から順番に、
// 睦月,如月,弥生,卯月,皐月,水無月,文月,葉月,長月,神無月,霜月,師走
int main (void)
{
    int month;
    printf("変換したい月を整数値で入力してください:");
    scanf("%d",&month);

    switch (month) {
            case 1:
                printf("睦月\n");
                break;
            case 2:
                printf("如月\n");
                break;
            case 3:
                printf("弥生\n");
                break;
            case 4:
                printf("卯月\n");
                break;
            case 5:
                printf("皐月\n");
                break;
            case 6:
                printf("水無月\n");
                break;
            case 7:
                printf("文月\n");
                break;
            case 8:
                printf("葉月\n");
                break;
            case 9:
                printf("長月\n");
                break;
            case 10:
                printf("神無月\n");
                break;
            case 11:
                printf("霜月\n");
                break;
            case 12:
                printf("師走\n");
                break;
            default:
                printf("そんな月はない\n");
                break;

    }
    return 0;
}