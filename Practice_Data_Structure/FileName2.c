#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_STACK_SIZE 100
typedef int element;
typedef struct {
	element data[MAX_STACK_SIZE];
	int top;
} StackType;

void init_stack(StackType* s) {
	s->top = -1;
}

int isEmpty(StackType* s) {
	return (s->top == -1);
}

int isFull(StackType* s) {
	return(s->top == (MAX_STACK_SIZE - 1));
}

void push(StackType* s, element item) {
	if (isFull(s)) {
		printf("Stack Overflow\n");
		exit(1);
	}

	s->data[++s->top] = item;
}

element pop(StackType* s) {
	if (isEmpty(s)) {
		printf("Stack underflow\n");
		exit(1);
	}

	return s->data[s->top--];
}

element peek(StackType* s) {
	if (isEmpty(s)) {
		printf("Stack underflow\n");
		exit(1);
	}

	return s->data[s->top];
}
//////////////////// Stack Code End ////////////////////

int checkPS(char* s) {
	StackType st;
	init_stack(&st);

	for (int i = 0; s[i] != '\0'; i++) {
		if (s[i] == '(')
			push(&st, s[i]);
		else if (s[i] == ')') {
			if (isEmpty(&st))
				return 0;
			char ch = pop(&st);
			if (ch != '(') {
				return 0;
			}
		}
	}

	if (!isEmpty(&st))
		return 0;
	return 1;
}

int main()
{
	int testCase;
	char** line = NULL;

	// 1. 테스트 케이스 개의 문자열에 대한 동적 메모리 할당
	scanf("%d", &testCase);

	line = (char**)malloc(sizeof(char*) * testCase);
	for (int i = 0; i < testCase; i++) {
		line[i] = (char*)malloc(sizeof(char) * 51);
	}

	// 2. 문자열 입력 받기
	getchar();  // \n 제거!
	for (int i = 0; i < testCase; i++) {
		//scanf("%50[^\n]", line[i]);
		fgets(line[i], 51, stdin);
		line[i][strcspn(line[i], "\n")] = '\0';	// 개행 제거
	}

	for (int i = 0; i < testCase; i++) {
		if (checkPS(line[i]))
			printf("YES\n");
		else
			printf("NO\n");
	}

	// 동적 메모리 해제
	for (int i = 0; i < testCase; i++)
		free(line[i]);
	free(line);

	return 0;
}