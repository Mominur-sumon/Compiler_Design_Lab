/*
Write a program that read the following string:
“Munmun is the student of Computer Science & Engineering”.
a) Count how many vowels and Consonants are there?
b) Find out which vowels and consonants are existed in the above string?
c) Divide the given string into two separate strings, where one string only contains 
 the words started with vowel, and another contains the words started with consonant.
*/

#include<bits/stdc++.h>
using namespace std;

bool is_vowel(char c){
    return tolower(c) =='a'||tolower(c) == 'e'||tolower(c) == 'i'||tolower(c) == '0'||tolower(c) == 'u';
}

int main(){
    freopen("02.input.txt","r", stdin);
    string input;
    getline(cin, input);

    int vowel = 0, consonant = 0 ;
    string vowels , consonants , words ;
    string vowel_words, consonant_words ;

    for(char c: input){
        if(is_vowel(c)){
            vowel++;
            vowels += c ;
        }
        else if(tolower(c)>='a' && tolower(c)<='z'){
            consonant++;
            consonants += c ;
        }
        if(tolower(c) >= 'a' && tolower(c) <= 'z') {
            words += c;
        }
        else if(c==' '){
            if(is_vowel(words[0])) vowel_words += " " + words ;
            else consonant_words+= " " + words ;
            words ="";
        }
    }
    if(is_vowel(words[0])) vowel_words += " " + words;
    else consonant_words += " " + words;
    words = "";

    cout<<"\nNumber of vowels: "<<vowel<<endl;
    cout<<"The vowels are: "<<vowels<<endl;
    cout<<"Number of consonants: "<<consonant<<endl;
    cout<<"The consonants are: "<<consonants<<endl;
    cout<<"Words started with vowel: "<<vowel_words<<endl;
    cout<<"Words started with consonant: "<<consonant_words;
    
    return 0;
}