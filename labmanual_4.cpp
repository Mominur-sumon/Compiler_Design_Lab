#include<bits/stdc++.h>
using namespace std;

typedef long long int int64 ;
typedef unsigned long long int uint64 ;

#define pb push_back

bool isVariable(string x){
    bool mark = true;
    if((tolower(x[0])<'i') or tolower(x[0]>'n')){
        mark = false ;
    }
    for(int i = 0 ; x[i]; i++){
        if(tolower(x[i]>= 'a' and tolower(x[i])<='z')){
            continue;
        }
        else if(x[i]>='0' and x[i]<='9'){
            continue;
        }else{
            mark = false ;
            break;
        }

    }
    return mark ;
}

bool isint(string x){
    bool mark = true ;
    for(int i =0 ; x[i];i++){
        if(isdigit(x[i]))
        continue;
        else{
            mark = false;
            break;
        }
    }
    return mark ;
}

int main(){
    string words ;
    cin >> words ;
    if(isVariable(words)){
        cout <<"Inteeger Variable";
    }
    else if(words.size()<=4 and isint(words)){
        cout <<"ShortInt Number";
    }
    else if(isint(words)){
        cout <<"LongInt Number";
    }
    else{
        cout<<"Invalid Input or Undefined";
    }
    return 0 ;
}