

static int stack[100];    // static 같은 .c 파일에만 접근가능
static int tos;                  // top of stack

void push(int data)
{
	stack[tos++] = data;
	
}

int pop(void)
{
	return stack[--tos];
}