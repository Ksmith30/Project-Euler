#include <iostream>

bool isEven(int number) {
    return number % 2 == 0;
}

double getFibonacci(int sequenceNumber) {
    if (sequenceNumber == 0) {
        return 0;
    }
    else if (sequenceNumber == 1) {
        return 1;
    } 
    else if(isEven(sequenceNumber)) {
        return getFibonacci(sequenceNumber) + getFibonacci(sequenceNumber - 1);
    }   
}

int main()
{
    int maximum = 400;
    std::cout << "Fibonacci: " << getFibonacci(maximum) << std::endl;
    return 0;
}
