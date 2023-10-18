#include <stdio.h>
#include <stdbool.h>
// ���������������ö������
enum Operator {
    ADD,
    SUBTRACT,
    MULTIPLY,
    DIVIDE
};

// ����һ���ṹ�壬���ڴ洢���ʽ����Ϣ
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

// ����һ�����������ڼ���һ�����ʽ��ֵ
int evaluate(struct Expression expr) {
    int result1, result2, result3, result4, result5;

    // �����һ������
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

    // ����ڶ�������
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

    // �������������
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

    // �������ս��
    return result3;
}

// ����һ���ݹ麯���������������п��ܵı��ʽ
bool generate_expressions(struct Expression *exprs, int level) {
    if (level == 4) {
        // ����Ѿ��������ĸ����ֺ�������������������ʽ��ֵ
        int result = evaluate(exprs[level - 1]);
        if (result == 24) {
            // ������ʽ��ֵΪ 24����������ʽ������ true
            printf("%d %c %d %c %d %c %d = %d\n",
                   exprs[0].num1, "+-*/"[exprs[0].op1], exprs[0].num2,
                   "+-*/"[exprs[1].op2], exprs[1].num3,
                   "+-*/"[exprs[2].op3], exprs[2].num4, result);
            return true;
        } else {
            // ���򷵻� false
            return false;
        }
    } else if (level == 0) {
        // �����û�������κ����֣�����ʾ�û������ĸ����֣����ݹ��������
        printf("�������ĸ����֣�");
        scanf("%d %d %d %d", &exprs[level].num1, &exprs[level].num2,
              &exprs[level].num3, &exprs[level].num4);
        return generate_expressions(exprs, level + 1);
    } else {
        // ����������һ������������ݹ��������
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
        printf("�޽�\n");
    }

    return 0;
}
