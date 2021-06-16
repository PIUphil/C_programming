#include <iostream>
#include "Stack.h"

int main() {

    Stack s1;
    Stack s2(100);

    s1.push(100);
    s1.push(200);
    s1.push(300);

    std::cout << "s1 1st pop() : " << s1.pop() << std::endl;
    std::cout << "s1 2nd pop() : " << s1.pop() << std::endl;
    std::cout << "s1 3rd pop() : " << s1.pop() << std::endl;


    s2.push(900);
    s2.push(800);
    s2.push(700);

    while (!s2.empty()) {
        std::cout << "s2 pop() : " << s2.pop() << std::endl;
    }

    return 0; 
}