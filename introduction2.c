#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{


    char ch;
    char word[1000];
    char sentence[1000]; 

    scanf("%c", &ch);

    scanf("%s", word);

    scanf("\n"); 

    scanf("%[^\n]%*c", sentence); 

    printf("%c\n", ch);
    printf("%s\n", word);
    printf("%s", sentence);
    return 0;
}
