#include <stdio.h>

enum operator {
    ADD,
    SUBTRACT,
    MULTIPLY,
    DIVIDE
};
struct expression {
    int num1;
    int num2;
    int num3;
    int num4;
    enum operator op1;
    enum operator op2;
    enum operator op3;
};


int plus(int a, int b) {
    return a + b;
}

int subtract(int a, int b) {
    return a - b;
}

int multiply(int a, int b) {
    return a * b;
}

float divide(float a, float b) {
    return a / b;
}

int evaluate(struct expression expr) {

    int result1, result2, result3;
    switch (expr.op1) {
        case ADD:
            result1 = plus(expr.num1, expr.num2);
            break;
        case SUBTRACT:
            result1 = subtract(expr.num1, expr.num2);
            break;
        case MULTIPLY:
            result1 = multiply(expr.num1, expr.num2);
            break;
        case DIVIDE:
            result1 = divide(expr.num1, expr.num2);
            break;
    }
    switch (expr.op2) {
        case ADD:
            result2 = plus(result1, expr.num3);
            break;
        case SUBTRACT:
            result2 = subtract(result1, expr.num3);
            break;
        case MULTIPLY:
            result2 = multiply(result1, expr.num3);
            break;
        case DIVIDE:
            result2 = divide(result1, expr.num3);
            break;
    }
    switch (expr.op3) {
        case ADD:
            result3 = plus(result2, expr.num4);
            break;
        case SUBTRACT:
            result3 = subtract(result2, expr.num4);
            break;
        case MULTIPLY:
            result3 = multiply(result2, expr.num4);
            break;
        case DIVIDE:
            result3 = divide(result2, expr.num4);
            break;
    }
    return result3;
}

int main() {
    struct expression expr;

    printf("请输入四个数字：\n");
    scanf("%d %d %d %d", &expr.num1, &expr.num2, &expr.num3, &expr.num4);


        for (int i = 0; i < 4; i++) {
            for (int j = 0; j < 4; j++) {
                for (int k = 0; k < 4; k++) {
                    expr.op1 = i;
                    expr.op2 = j;
                    expr.op3 = k;

                    int result = evaluate(expr);

                    if (result == 24) {
                        printf("符合24点\n");
                        printf("%d %c %d %c %d %c %d = 24\n", expr.num1,
                               expr.op1 == ADD ? '+' : (expr.op1 == SUBTRACT ? '-' : (expr.op1 == MULTIPLY ? '*'
                                                                                                           : '/')),
                               expr.num2,
                               expr.op2 == ADD ? '+' : (expr.op2 == SUBTRACT ? '-' : (expr.op2 == MULTIPLY ? '*'
                                                                                                           : '/')),
                               expr.num3,
                               expr.op3 == ADD ? '+' : (expr.op3 == SUBTRACT ? '-' : (expr.op3 == MULTIPLY ? '*'
                                                                                                           : '/')),
                               expr.num4);

                    }
                }
            }
        }

}
