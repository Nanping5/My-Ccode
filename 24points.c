#include <stdio.h>
#include <stdbool.h>
// 定义四种运算符的枚举类型
enum Operator {
    ADD,
    SUBTRACT,
    MULTIPLY,
    DIVIDE
};

// 定义一个结构体，用于存储表达式的信息
struct Expression {
    int num1;
    int num2;
    int num3;
    int num4;
    enum Operator op1;
    enum Operator op2;
    enum Operator op3;
};
int add(int a, int b) {
    return a + b;
}
int subtract(int a, int b) {
    return a - b;
}
int multiply(int a, int b) {
    return a * b;
}
int divide(int a, int b) {
    return a / b;
}

// 定义一个函数，用于计算一个表达式的值
int evaluate(struct Expression expr) {
    int result1, result2, result3, result4, result5;

    // 计算第一层运算
    switch (expr.op1) {
        case ADD:
            result1 = add(expr.num1, expr.num2);
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

    // 计算第二层运算
    switch (expr.op2) {
        case ADD:
            result2 = add(result1, expr.num3);
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

    // 计算第三层运算
    switch (expr.op3) {
        case ADD:
            result3 = add(result2, expr.num4);
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

    // 返回最终结果
    return result3;
}

// 定义一个递归函数，用于生成所有可能的表达式
bool generate_expressions(struct Expression *exprs, int level) {
    if (level == 4) {
        // 如果已经生成了四个数字和三个运算符，则计算表达式的值
        int result = evaluate(exprs[level - 1]);
        if (result == 24) {
            // 如果表达式的值为 24，则输出表达式并返回 true
            printf("%d %c %d %c %d %c %d = %d\n",
                   exprs[0].num1, "+-*/"[exprs[0].op1], exprs[0].num2,
                   "+-*/"[exprs[1].op2], exprs[1].num3,
                   "+-*/"[exprs[2].op3], exprs[2].num4, result);
            return true;
        } else {
            // 否则返回 false
            return false;
        }
    } else if (level == 0) {
        // 如果还没有生成任何数字，则提示用户输入四个数字，并递归调用自身
        printf("请输入四个数字：");
        scanf("%d %d %d %d", &exprs[level].num1, &exprs[level].num2,
              &exprs[level].num3, &exprs[level].num4);
        return generate_expressions(exprs, level + 1);
    } else {
        // 否则生成下一个运算符，并递归调用自身
        bool found_solution = false;

        for (int i = 0; i < 4; i++) {
            exprs[level - 1].op1 = i;

            for (int j = 0; j < 4; j++) {
                exprs[level - 1].op2 = j;

                for (int k = 0; k < 4; k++) {
                    exprs[level - 1].op3 = k;

                    found_solution |= generate_expressions(exprs, level + 1);
                }
            }
        }

        return found_solution;
    }
}

int main() {
    struct Expression exprs[4];

    if (!generate_expressions(exprs, 0)) {
        printf("无解\n");
    }

    return 0;
}
