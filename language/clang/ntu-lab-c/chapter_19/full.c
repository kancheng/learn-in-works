#include "stack-define"
int stack_full (Stack *s) {
	return (s->top >= STACKSIZE)
}