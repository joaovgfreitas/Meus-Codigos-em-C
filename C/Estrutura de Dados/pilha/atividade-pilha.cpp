#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#define MAX_STACK_SIZE 100

/* Defini��o da estrutura de uma pilha */
typedef struct {
    int top;
    char items[MAX_STACK_SIZE];
} Stack;

/* Fun��o para empilhar um elemento na pilha */
void push(Stack *s, char c) {
    if (s->top == MAX_STACK_SIZE - 1) {
        printf("Erro: a pilha est� cheia!\n");
        exit(1);
    }
    s->items[++(s->top)] = c;
}

/* Fun��o para desempilhar um elemento da pilha */
char pop(Stack *s) {
    if (s->top == -1) {
        printf("Erro: a pilha est� vazia!\n");
        exit(1);
    }
    return s->items[(s->top)--];
}

/* Fun��o que verifica se um caractere � um operador */
int is_operator(char c) {
    return (c == '+' || c == '-' || c == '*' || c == '/');
}

/* Fun��o que retorna a preced�ncia de um operador */
int precedence(char c) {
    if (c == '+' || c == '-') {
        return 1;
    }
    else if (c == '*' || c == '/') {
        return 2;
    }
    return 0;
}

/* Fun��o que converte uma express�o normal em nota��o polonesa reversa */
void convert(char *expression) {
    Stack s;
    int i, len;
    char c, temp;

    s.top = -1;
    len = strlen(expression);

    for (i = 0; i < len; i++) {
        c = expression[i];

        if (isdigit(c)) {
            printf("%c", c);
        }
        else if (is_operator(c)) {
            while (s.top != -1 && is_operator(s.items[s.top]) && precedence(s.items[s.top]) >= precedence(c)) {
                temp = pop(&s);
                printf("%c", temp);
            }
            push(&s, c);
        }
        else if (c == '(') {
            push(&s, c);
        }
        else if (c == ')') {
            while (s.top != -1 && s.items[s.top] != '(') {
                temp = pop(&s);
                printf("%c", temp);
            }
            if (s.top == -1) {
                printf("Erro: par�nteses desbalanceados!\n");
                exit(1);
            }
            pop(&s);
        }
    }

    while (s.top != -1) {
        temp = pop(&s);
        if (temp == '(') {
            printf("Erro: par�nteses desbalanceados!\n");
            exit(1);
        }
        printf("%c", temp);
    }
}

/* Fun��o principal */
int main() {
    char expression[100];
    printf("Digite uma expressao em notacao infixa: ");
    fgets(expression, 100, stdin);
    convert(expression);

    return 0;
}

