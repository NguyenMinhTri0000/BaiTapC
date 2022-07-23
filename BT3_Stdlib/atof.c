#include <stdio.h>



int Atof(char chuoi[])
{
    int i = 0;
    int val = 0;
    int point;
    while (chuoi[i] != '\0')
    {
        if(chuoi[i]>=48 && chuoi[i]<=57)    //từ 0 đến 9 trong bảng ASCII
        {
            val = val*10;
            val = val+(chuoi[i]-48);
            i++;
        }
        else if (chuoi[i] == '.')
        {
            point = i;
            printf("dau cham o vi tri %d\n", point);
            i++    ;    
        }

    }
        int imax = i;
        printf("i cuoi cung %d\n", imax);  
        //Ý tưởng làm như bên file excel nhưng không được

        // printf("val %d\n", val);
        // int temp = -(imax - point -1);
        // printf("-(imax - point -1) %d\n", temp);
        // double temp2 = 10^temp; 
        // printf("10^-(imax - point -1) %d\n", temp2);        
        double valdouble = val*10^(-(imax - point -1));
    return valdouble;
    // return val;
}
int main(int argc, char const *argv[])
{
    char arr[] = "123.4";
    printf("Ket qua ham atof %d\n", Atof(arr));
    return 0;
}
