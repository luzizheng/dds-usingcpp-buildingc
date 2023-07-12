#include "string_caculate.h"
#include <iostream>
#include <stack>
#include <sstream>

using namespace std;

int priority(char op) // 计算运算符的优先级
{
    if (op == '*' || op == '/')
        return 2;
    else if (op == '+' || op == '-')
        return 1;
    else
        return 0;
}

int calculate(int a, int b, char op) // 计算两个操作数的结果
{
    if (op == '+')
        return a + b;
    else if (op == '-')
        return a - b;
    else if (op == '*')
        return a * b;
    else if (op == '/')
        return a / b;
    else
        return 0;
}

size_t evaluate_exp(string strExp) // 计算表达式的值
{
    stack<int> operandStack;   // 操作数栈
    stack<char> operatorStack; // 运算符栈
    int i = 0;
    while (i < strExp.size())
    {
        char curr = strExp[i];
        if (isdigit(curr))
        { // 处理数字
            int start = i;
            while (i < strExp.size() && isdigit(strExp[i]))
                i++;
            int operand = stoi(strExp.substr(start, i - start));
            operandStack.push(operand);
        }
        else if (curr == '(')
        { // 处理左括号
            operatorStack.push(curr);
            i++;
        }
        else if (curr == ')')
        { // 处理右括号
            while (operatorStack.top() != '(')
            {
                char op = operatorStack.top();
                operatorStack.pop();
                int b = operandStack.top();
                operandStack.pop();
                int a = operandStack.top();
                operandStack.pop();
                int result = calculate(a, b, op);
                operandStack.push(result);
            }
            operatorStack.pop(); // 弹出左括号
            i++;
        }
        else if (curr == '+' || curr == '-' || curr == '*' || curr == '/')
        { // 处理运算符
            while (!operatorStack.empty() && priority(operatorStack.top()) >= priority(curr))
            {
                char op = operatorStack.top();
                operatorStack.pop();
                int b = operandStack.top();
                operandStack.pop();
                int a = operandStack.top();
                operandStack.pop();
                int result = calculate(a, b, op);
                operandStack.push(result);
            }
            operatorStack.push(curr);
            i++;
        }
        else
        { // 忽略其他字符（例如空格）
            i++;
        }
    }
    while (!operatorStack.empty())
    { // 计算剩余的运算符
        char op = operatorStack.top();
        operatorStack.pop();
        int b = operandStack.top();
        operandStack.pop();
        int a = operandStack.top();
        operandStack.pop();
        int result = calculate(a, b, op);
        operandStack.push(result);
    }
    return operandStack.top(); // 返回最终结果
}

vector<string> seperateStrWithSpace(string str)
{
    vector<string> result;
    istringstream iss(str);
    string token;
    while (getline(iss, token, ' '))
    {
        result.push_back(token);
    }
    return result;
}

int32_t strcmpIgnUpperCase(const char *__s1, const char *__s2)
{
    int i;
    for (i = 0; __s1[i] && __s2[i]; ++i)
    {
        /* If characters are same or inverting the
           6th bit makes them same */
        if (__s1[i] == __s2[i] || (__s1[i] ^ 32) == __s2[i])
            continue;
        else
            break;
    }

    /* Compare the last (or first mismatching in
       case of not same) characters */
    if (__s1[i] == __s2[i])
        return 0;

    // Set the 6th bit in both, then compare
    if ((__s1[i] | 32) < (__s2[i] | 32))
        return -1;
    return 1;
}