#include <stdio.h>
#include <stdlib.h>

/*  PROGRAM OF COUNT THE UPPER_CASE AND LOWER_CASE.  */
void main()
{
    int i;
    int upper = 0, lower = 0;
    char ch[100];
    printf("Enter the String:\n");
    gets(ch);
    for (i = 0; ch[i] != 0; i++)
    {
        if (ch[i] >= 'A' && ch[i] <= 'Z')
        {
            upper++;
        }
        else if (ch[i] >= 'a' && ch[i] <= 'z')
        {
            lower++;
        }
    }
    printf("\nLowercase letters: %d", lower);
    printf("\nUppercase letters: %d\n", upper);
}

/*  Write a C Program to Count Total Number of Words in a String.    */
void main()
{
    char str[100];
    int i, count = 1;
    printf("\n Please Enter any String : ");
    gets(str);
    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == ' ' || str[i] == '\n' || str[i] == '\t')
        {
            count++;
        }
    }
    printf("\n The Total Number of Words in this String %s = %d", str, count);
}

/*   C Program to Count Vowels and Consonants in a String   */
void main()
{
    char str[100];
    int i;
    int vowels = 0;
    int consonants = 0;
    printf("\nEnter any String : ");
    gets(str);
    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' ||
            str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U')
        {
            vowels++;
        }
        else
            consonants++;
    }
    printf("\n Number of Vowels in this String = %d", vowels);
    printf("\n Number of Consonants in this String = %d\n\n", consonants);
}

