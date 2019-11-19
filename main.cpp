#include <iostream>

extern "C" {
    int fib(int);
    int f(int);
    int myfunc(int, int);
    int test(int);
}

int main() {
    /*
    std::cout << "Call fib with 10: " << fib(10) << std::endl;
    */

    /*
    std::cout << "Call f with 4: " << f(4) << std::endl;
    std::cout << "Call f with 3: " << f(3) << std::endl;
    std::cout << "Call f with 2: " << f(2) << std::endl;
    std::cout << "Call f with 1: " << f(1) << std::endl;
    */

    /*
    std::cout << "Call myfunc with (3, 3): " << myfunc(3, 3) << std::endl;
    std::cout << "Call myfunc with (2, 3): " << myfunc(2, 3) << std::endl;
    std::cout << "Call myfunc with (3, 2): " << myfunc(3, 2) << std::endl;
    */

    std::cout << "Call test with (0): " << test(0) << std::endl;
    std::cout << "Call test with (1): " << test(1) << std::endl;
    std::cout << "Call test with (2): " << test(2) << std::endl;

    return 0;
}
