#include <stdio.h>
#include <ctype.h>
#include <math.h>

#define MAX 100

char operatorStack[MAX];
int top = -1;

void pushOperator(char ch)
{
    operatorStack[++top] = ch;
}

char popOperator()
{
    return operatorStack[top--];
}

char peekOperator()
{
    return operatorStack[top];
}

int precedence(char ch)
{

    if (ch == '^')
        return 3;

    if (ch == '*' || ch == '/')
        return 2;

    if (ch == '+' || ch == '-')
        return 1;

    return 0;
}

void infixToPostfix(char infix[], char postfix[])
{

    int i = 0;
    int j = 0;

    while (infix[i] != '\0')
    {

        char ch = infix[i];

        // Operand
        if (isalnum(ch))
        {
            postfix[j++] = ch;
        }

        // Opening parenthesis
        else if (ch == '(')
        {
            pushOperator(ch);
        }

        // Closing parenthesis
        else if (ch == ')')
        {

            while (top != -1 && peekOperator() != '(')
            {
                postfix[j++] = popOperator();
            }

            popOperator(); // Remove '('
        }

        // Operator
        else
        {

            while (
                top != -1 &&
                peekOperator() != '(' &&
                precedence(peekOperator()) >= precedence(ch))
            {
                postfix[j++] = popOperator();
            }

            pushOperator(ch);
        }

        i++;
    }

    // Pop remaining operators
    while (top != -1)
    {
        postfix[j++] = popOperator();
    }

    postfix[j] = '\0';
}

int evaluatePostfix(char postfix[])
{

    int valueStack[MAX];
    int valueTop = -1;

    int values[26] = {0};

    // Get values for A-Z
    for (int i = 0; postfix[i] != '\0'; i++)
    {

        if (isalpha(postfix[i]))
        {

            char variable = postfix[i];

            if (values[variable - 'a'] == 0)
            {
                printf("Enter value of %c: ", variable);
                scanf("%d", &values[variable - 'a']);
            }
        }
    }

    // Evaluate postfix from left to right
    for (int i = 0; postfix[i] != '\0'; i++)
    {

        char ch = postfix[i];

        // Operand
        if (isalpha(ch))
        {
            valueStack[++valueTop] = values[ch - 'a'];
        }

        // Operator
        else
        {

            int right = valueStack[valueTop--];
            int left = valueStack[valueTop--];

            int result;

            switch (ch)
            {

            case '+':
                result = left + right;
                break;

            case '-':
                result = left - right;
                break;

            case '*':
                result = left * right;
                break;

            case '/':
                result = left / right;
                break;

            case '^':
                result = (int)pow(left, right);
                break;
            }

            valueStack[++valueTop] = result;
        }
    }

    return valueStack[valueTop];
}

int main()
{

    char infix[MAX];
    char postfix[MAX];

    printf("Enter infix expression: ");
    scanf("%s", infix);

    infixToPostfix(infix, postfix);

    printf("\nInfix Expression   : %s", infix);
    printf("\nPostfix Expression : %s\n", postfix);

    int result = evaluatePostfix(postfix);

    printf("\nResult = %d\n", result);

    return 0;
}