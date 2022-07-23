#include <stdlib.h>
#include <stdint.h>
#include <stdio.h>

char arr1[] = "Hello world";
char arr2[] = "Hello worod";

int Size_Of(char mang[])
{
    int i;
    while (mang[i]!='\0')
    {
        i++;
    }
    return i;
}

int Equa(char mang1[], char mang2[])
{

    for(int i = 0; i<Size_Of(arr1); i++)
    {           
        if(mang1[i] != mang2[i])
        {
            return 0;
        }
    }
}

int main(int argc, char const *argv[])
{
    int a = Size_Of(arr1);
    printf("Do dai chuoi %d\n", a);    
    int b = Size_Of(arr2);
    printf("Do dai chuoi %d\n", b);    
    if (a != b)
    {
        printf("Hai chuoi co kich thuoc khac nhau");
    }
    else  
    {
    if(Equa(arr1, arr2) == 0)       //khác nhau thì return về 0
                                    //nhưng giống nhau thì return = sizeof(arr). Tại sao?
    {
        printf("Hai chuoi co noi dung khac nhau");
    
    }
    else 
        printf("Hai chuoi giong nhau");
    }
}