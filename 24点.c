#include "stdio.h"
enum operator{
    ADD,
    SUBTRACT,
    NULTIPLY,
    DIVIDE
};
struct expression{
    int num1;
    int num2;
    int num3;
    int num4;
    enum  operator op1;
    enum operator op2;
    enum operator op3;

};
int plus(int a,int b){
    return a+b;
}
int subtract(int a,int b){
    return a-b;
}
int nultiply(int a,int b){
    return a*b;
}
float divide(float a,float b){
    return a/b;
}
int result1,result2,result3;
int evaluate(struct expression expr){

    switch (expr.op1) {
        case ADD:result1= plus(expr.num1,expr.num2);
            break;
        case SUBTRACT:result2= subtract(expr.num1,expr.num2);
            break;
        case NULTIPLY:result1= nultiply(expr.num1,expr.num2);
            break;
        case DIVIDE:result1= divide(expr.num1,expr.num2);
            break;
    }
    switch (expr.op2) {
        case ADD:result2= plus(result1,expr.num3);
            break;
        case SUBTRACT:result2= subtract(result1,expr.num3);
            break;
        case NULTIPLY:result2= nultiply(result1,expr.num3);
            break;
        case DIVIDE:result2= divide(result1,expr.num3);
            break;
    }
    switch (expr.op3) {
        case ADD:result3= plus(result2,expr.num4);
            break;
        case SUBTRACT:result3= subtract(result2,expr.num4);
            break;
        case NULTIPLY:result3= nultiply(result2,expr.num4);
            break;
        case DIVIDE:result3= divide(result2,expr.num4);
            break;
    }
    return result3;

}
int level=0;
void possible_result(){
    if(level==4){
        if (result3==24) {
            printf("YES");
        }
        else{
            printf("NO");
        }
    }
    else if(level==3){

    }

}

int main(){
    struct expression expr;
    printf("ÇëÊäÈë4¸öÊý×Ö£º\n");
    scanf("%d %d %d %d",&expr.num1,&expr.num2,&expr.num3,&expr.num4);
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            for (int k = 0; k < 4; k++) {
                expr.op1 = i;
                expr.op2 = j;
                expr.op3 = k;
                evaluate(expr);
                possible_result();
            }
        }
    }



}