#include <iostream>
#include "Stack.h"

int main() {

    Stack<int> s1;

    s1.push(100);
    s1.push(200);
    s1.push(300);

    std::cout << "s1 1st pop() : " << s1.pop() << std::endl;
    std::cout << "s1 2nd pop() : " << s1.pop() << std::endl;
    std::cout << "s1 3rd pop() : " << s1.pop() << std::endl;


    Stack<double> s2(50);
    s2.push(1.1);
    s2.push(2.2);
    s2.push(3.3);

    while (!s2.empty()) {
        std::cout << "s2 pop() : " << s2.pop() << std::endl;
    }

    return 0; 
}