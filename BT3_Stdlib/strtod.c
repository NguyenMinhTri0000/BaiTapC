#include <stdio.h>



int strtod(char chuoi[])
{
    int i = 0;
    int val = 0;
    while (chuoi[i] != '\0')
    {
        if(chuoi[i]>=48 && chuoi[i]<=57)    //từ 0 đến 9 trong bảng ASCII
        {
            val = val*10;
            val = val+(chuoi[i]-48);

        }
        i++;
    }
    return val;
}
int main(int argc, char const *argv[])
{ 
    char arr[] = "edfgsd 1234";
    // Atoi(arr);
    printf("Ket qua ham strtod %d\n", Atoi(arr));
    return 0;
}
