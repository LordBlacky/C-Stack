#include<stdio.h>
#include<stdlib.h>

struct Item {
	int value;
	struct Item *next;
};

struct Stack {
	struct Item *top;
};

struct Stack *createStack () {

	struct Stack *stack = malloc(sizeof(struct Stack));
	if (stack == NULL) {
		printf("ERROR: Cannot malloc stack!\n");
		return NULL;
	}
	else {
		stack->top = NULL;
		return stack;
	}

}

void pushStack (struct Stack *stack, int value) {

	struct Item *item = malloc(sizeof(struct Item));
	if (item == NULL) {
		printf("ERROR: Cannot malloc item!\n");
		return;
	}
	else {
		item->value = value;
		item->next = stack->top;
		stack->top = item;
	}

}

int popStack (struct Stack *stack) {

	if (stack->top == NULL) {
		printf("ERROR: pop on empty stack!\n");
		return 0;
	}
	else {
		struct Item *top = stack->top;
		int value = top->value;
		stack->top = top->next;
		free(top);
		return value;
	}

}

void deleteStack (struct Stack *stack) {

	while ( stack->top != NULL) {
		popStack(stack);
	}
	free(stack);

}

int topStack (struct Stack *stack) {

	if (stack->top == NULL) {
		printf("ERROR: top on empty stack!\n");
		return 0;
	}
	else {
		return stack->top->value;
	}

}

int isEmptyStack (struct Stack *stack) {

	if (stack->top == NULL) {
		return 1;
	}
	else {
		return 0;
	}

}

void reverseStack(struct Stack *stack) {

	struct Stack *reversed = createStack();
	if (reversed == NULL) {
		printf("ERROR: Cannot malloc reversed stack!\n");
		return;
	}
	if (stack->top == NULL) {
		printf("ERROR: reverse on empty stack!\n");
		return;
	}
	else {
		while (stack->top != NULL) {
			pushStack(reversed,popStack(stack));
		}
		stack->top = reversed->top;
		free(reversed);
	}

}

int main () {

	return 0;

}
