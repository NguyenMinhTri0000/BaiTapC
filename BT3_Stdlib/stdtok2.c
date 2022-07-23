#include <stdio.h>


char* Tok(char mang[],  char KiTu)
{
    int i;
    // char Token[100];
    while (mang[i] != '\0')
    {
        if(mang[i] == KiTu)
        {
            // printf("%c\n",Token);
            mang[i] = NULL;        
            printf("\n");
        }
        else
        {
            printf("%c", mang[i]);
        }
        i++;
    }
    
}
int main(int argc, char const *argv[])
{
    char arr[] = "Mot hai ba bon";
    // char Symbol = "-";
    Tok(arr,' ');
    return 0;
}