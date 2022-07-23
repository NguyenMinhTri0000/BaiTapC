#include <stdio.h>
#include <string.h>

int Size_Of(char mang[])
{
    int i;
    while (mang[i]!='\0')
    {
        i++;
    }
    return i;
}

int Equa(char mang1[], char mang2)
{

    for(int i = 0; i<Size_Of(mang1); i++)
    {           
        if(mang1[i] != mang2)
        {
            return 0;
        }    }
}


void Tok(char mang[],  char *KiTu)
{
    int i;
    char Token[100];
    while (i != '\0')
    {
        if(Equa(mang[i], KiTu) == 0)
        {
            printf("%c\n",Token);
            // Token[100] = Token -100;        //xóa token thành chuỗi trống
        }
        // else
        // {
        //     Token[100] = Token[100] + mang[i];        //ghép chuỗi
        // }
    }
    
}
int main(int argc, char const *argv[])
{
    char arr[] = "Mot hai ba bon";
    // char Symbol = "-";
    Tok(arr," ");
    return 0;
}