static int queue[100];
static int front, rear;

void push(int data) {
    queue[rear++] = data;
}

int pop(void) {
    return queue[front++];
}