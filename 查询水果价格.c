#include<stdio.h>


int main() {
    printf("[1] apple\n"
           "[2] pear\n"
           "[3] orange\n"
           "[4] grape\n"
           "[0] exit\n");
    int a[5];
    int i;
    int n=0;
    while (1) {
        scanf("%d", &a[i]);
        if (0<= a[i] & a[i] <= 4) {
            switch (a[i]) {
                case 1:
                    printf("price = 3.00\n");
                    break;
                case 2:
                    printf("price = 2.50\n");
                    break;
                case 3:
                    printf("price = 4.10\n");
                    break;
                case 4:
                    printf("price = 10.20\n");
                    break;
                case 0:
                    return 0;
            }


        }


        else if(a[i]=0){
            return 0;
        }
        else{
            printf("price = 0.00\n");
        }
        n++;
        if(n>=5){
            return 0;
        }
    }
}