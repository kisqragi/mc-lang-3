#include <iostream>

extern "C" {
    int fib(int);
    int f(int);
    int myfunc(int, int);
    int test(int);
    int testloop();
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

    // extern test
    //test(10);

    testloop();

    return 0;
}
