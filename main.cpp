#include <iostream>
#include "chararray.h"
#include <string>
#include <cstring>
#include <cctype>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int x , num  , nums;
    char str[120];
    cout << "enter 1 for add \n";
    cout << "enter 2 for print \n";

    while (true)
    {

        cin >> num;
        if (num==1)
        {
            cin >> str;
            CharArray obj;
            obj.AddCharArray(str);
        }
        else if (num==2)
        {
            cout <<"u have "<<nums<<" strings \n";
        }
        else if (num==3)
        {
            cout << "out \n";
            break;
        }

    }
    return 0;
}
