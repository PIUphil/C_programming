static int stack[100];  // static -> ���� c���� �ȿ��ִ� �ָ� ���ٰ��� -> main���� ���� ����.
static int tos;         // top of stack      // �ʱⰪ 0

void push(int data) {
    stack[tos] = data;
    ++tos;
}

int pop(void) {
    --tos;
    return stack[tos];
}