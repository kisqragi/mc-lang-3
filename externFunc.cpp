#ifdef _WIN32
#define DLLEXPORT __declspec(dllexport)
#else
#define DLLEXPORT
#endif

#include <iostream>

extern "C" DLLEXPORT int printd(int x) {
    fprintf(stderr, "%d\n", x);
    return 0;
}
