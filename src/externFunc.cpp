//#ifndef __DLLEXPORT
//#define __DLLEXPORT

#include <stdio.h>

extern "C" int putchard(int x) {
    //fputc((char)x, stderr);    
    printf("%d", x);
    return 0;
}

//#endif
