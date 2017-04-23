// Test.h
#ifndef TEST_H
#define TEST_H

extern "C"
void __declspec (dllexport) addWithCuda(int *c, const int *a, const int *b, unsigned int size);

#endif