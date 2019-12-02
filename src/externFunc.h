#ifndef __EXTERNFUNC
#define __EXTERNFUNC

#ifdef _WIN32
#define __DLLEXPORT __declspec(dllexport)
#else
//#define __DLLEXPORT __attribute__((dllexport))
#define DLLEXPORT
#endif

//extern "C" DLLEXPORT int putchard(int x) {
extern "C" DLLEXPORT int putchard(int x) {
    fputc((char)x, stderr);    
    return 0;
}

#endif

