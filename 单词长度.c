/*
#include <stdio.h>

int main() {
    char c;
    int length = 0;
    int i = 0;

    while (1) {
        c = getchar();

        if (c == '.' || c == ' ' ) {
            if (i) {
                printf("%d ", length);
                length = 0;
                i = 0;
            }
            if (c == '.') {
                break;
            }
        } else {
            length++;
            i = 1;
        }
    }

    return 0;
}
*/
#include <stdio.h>

int main() {
    char c;
    int length = 0;
    int i = 0;
    int m = 1;//m是为了使输出的第一个结果前没空格
    while(1) {
        scanf("%c", &c);
        if(c=='.') {
            if (length > 0) {
                if (m) {
                    printf("%d", length);
                }
                else {
                    printf(" %d", length);
                }
        }
            break;

        }
        if(c==' '&&length==0){
            continue;
        }
        else if(c==' '&&length>0) {
            if (i) {
                if (m) {
                printf("%d", length);
                m=0;
                }
                else {
                    printf(" %d", length);
                }
                length = 0;
                i = 0;
            }
        }

        else {
            length++;
            i=1;
        }
    }
}