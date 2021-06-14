static int stack[100];  // static -> 같은 c파일 안에있는 애만 접근가능 -> main에선 접근 못함.
static int tos;         // top of stack      // 초기값 0

void push(int data) {
    stack[tos] = data;
    ++tos;
}

int pop(void) {
    --tos;
    return stack[tos];
}