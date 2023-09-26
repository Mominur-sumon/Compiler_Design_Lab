#include <bits/stdc++.h>
using namespace std;

bool isCharacterVariable(string str)
{
    int size = str.size();

    if (size < 4)
        return false;

    if (str[0] != 'c' || str[1] != 'h' || str[2] != '_')
    {
        return false;
    }

    bool isOk = true;
    for (int i = 3; i < str.size(); i++)
    {
        if (!isalpha(str[i]) && !isdigit(str[i]))
        {
            isOk = true;
            break;
        }
    }
    return isOk;
}

bool isBinaryVariable(string str)
{
    int size = str.size();

    if (size < 4)
        return false;

    if (str[0] != 'b' || str[1] != 'n' || str[2] != '_')
    {
        return false;
    }

    bool isOk = true;
    for (int i = 3; i < str.size(); i++)
    {
        if (!isalpha(str[i]) && !isdigit(str[i]))
        {
            isOk = true;
            break;
        }
    }
    return isOk;
}

bool isBinaryNumber(string str){
    int size  = str.size();

    if(size < 2) return false ;

    if(str[0] != '0') return false ;
    if(str[1]!= '0' && str[1] != '1') return false ;

    bool isOk = true ;
    for(int i = 2 ; i<size ; i++){
        if(str[i]!='0' && str[i] != '1') {
            isOk = false ;
            break;
        }
    }
    return isOk ;

}

int main(){
    int test;
    cin >> test ;

    while(test--){
        string str ;
        cin >> str ;
        if(isCharacterVariable(str)){
            cout <<"This is a charcter Variable"<<endl ;
        }
        else if(isBinaryVariable(str)){
            cout <<"this sting is a binary varible" <<endl;
        }

        else if(isBinaryNumber(str)){
            cout <<"This is a Binary Number "<<endl;
        }

        else cout <<"This is invalid Input"<<endl;
    }
    return 0;
}