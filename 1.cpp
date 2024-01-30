#include <stdio.h>
#include <ctype.h>

int main()
{
    char input[1000];
    printf("Enter a string: ");
    fgets(input, sizeof(input), stdin);

    int words = 0, letters = 0, digits = 0, others = 0;
    char letterArray[1000], digitArray[1000], othersArray[1000];
    int letterIndex = 0, digitIndex = 0, otherIndex = 0;

    for (int i = 0; input[i] != '\0'; i++)
    {
        if (isalnum(input[i]))
        {
            if (isalpha(input[i]))
            {
                letters++;
                letterArray[letterIndex++] = input[i];
            }
            else if (isdigit(input[i]))
            {
                digits++;
                digitArray[digitIndex++] = input[i];
            }
        }else{
            if(input[i] !=' ' && input[i] != '\n'){
                others++ ;
                othersArray[otherIndex++];
            }
        }
        if(i==0 || isspace(input[i -1])){
            words++;
        }
    }
    letterArray[letterIndex] = '\0';
    digitArray[digitIndex] = '\0';
    othersArray[otherIndex] = '\0';

    printf("Number of words: %d\n", words);
    printf("Number of letters: %d\n", letters);
    printf("Number of digits: %d\n",digits);
    printf("number of others charcters: %d\n", others);

    printf("\nLetters: %s\n", letterArray);
    printf("Digits: %s\n", digitArray);
    printf("Other characters: %s\n", othersArray);

    return 0 ;
}    