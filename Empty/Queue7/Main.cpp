#include <iostream>
#include "Queue.h"

int main() {

    Queue q1;
    Queue q2(100);

    q1.push(100);
    q1.push(200);
    q1.push(300);

    std::cout << "q1 1st pop() : " << q1.pop() << std::endl;
    std::cout << "q1 2nd pop() : " << q1.pop() << std::endl;
    std::cout << "q1 3rd pop() : " << q1.pop() << std::endl;


    q2.push(900);
    q2.push(800);
    q2.push(700);

    while (!q2.empty()) {
        std::cout << "q2 pop() : " << q2.pop() << std::endl;
    }

    return 0; 
}