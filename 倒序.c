#include <stdio.h>
//倒序
int main() {
    int n;
    scanf("%d", &n);
    int a=n%10;
    int m=0;
    m=m*10+a;
    n=n/10;
    a=n%10;
    m=m*10+a;
    n=n/10;
    a=n;
    m=m*10+a;

    printf("%d",m);


}
/*#include <stdio.h>

int main() {
    int num;
    scanf("%d", &num);

    int reversedNum = 0;
    while (num > 0) {
        reversedNum = reversedNum * 10 + num % 10;
        num =num/ 10;
    }

    printf("%d\n", reversedNum);

    return 0;
}*/