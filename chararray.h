#ifndef CHARARRAY_H
#define CHARARRAY_H
#include <string>
#include <cstring>
#include <cctype>
#include<bits/stdc++.h>

using namespace std;

class CharArray
{
private:
    char *str;
    int Size;
    static int counter;

public:
    CharArray();
    void AddCharArray(char* val);
   // void printchar();
    ~CharArray();

};

#endif // CHARARRAY_H
