#include <iostream>
#include "Subscriber.h"

int main() {
    // Test default constructor and input function
    Subscriber sub1;
    sub1.inputValues();
    sub1.outputValues();

    // Test parameterized constructor
    std::string channels[] = { "Channel1", "Channel2", "Channel3" };
    Subscriber sub2("John Doe", 3, channels);
    sub2.outputValues();

    // Test copy constructor
    Subscriber sub3 = sub2;
    sub3.outputValues();

    // Test assignment operator
    Subscriber sub4;
    sub4 = sub2;
    sub4.outputValues();

    // Test reset function
    sub4.reset();
    sub4.outputValues();

    return 0;
}
