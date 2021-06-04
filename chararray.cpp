#include "chararray.h"
#include <string>
#include <cstring>
#include <cctype>
#include<bits/stdc++.h>

using namespace std;

CharArray::CharArray()
{
    //The default constructor
    str=new char[1];
    *str = '\0';
    Size=strlen(str);
//    counter++;
}
void CharArray::AddCharArray(char* val)
{
    //The constructor initializing the array to a string
    str=new char [strlen(val)+1];
    strcpy(str,val);
    Size=strlen(val);
 //   counter++;
}
CharArray::~CharArray()
{
    cout << "\nDestroying array!" << endl;
}
/*void CharArray::printchar(){

    if(strlen(str) == 1){
        cout<<"There is no string yet\n";
    }

    else{
        char alpha = 'a';
        for(int i = 0 ; i < strlen(str); i++){

        if(i == 0){
            cout<<alpha<<". ";
        }

        if(str[i] != '^'){

            cout<<str[i];
        }

        else
        {
            alpha++;
            cout<<endl;
            cout<<alpha<<". ";
        }
    }

    }

}
*/
