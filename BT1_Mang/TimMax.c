
#include <stdio.h>
#define MAX_SIZE 100 //sức chứ tối đa
void InputArray(int n, int arr[])
{
    //Nhập mảng
    for(int i = 0; i<n; i++)
    {
        printf("nhap vao arr[%d]\n",i);
        scanf("%d", &arr[i]);
    }    
}

int FindMax(int n, int arr[])
{
    int max = arr[0];
    for (int i =0; i<n; i++)
    {
        if(arr[i]>max)
        {
            max = arr[i];
        }
    }
    return max;
}

int main(int argc, char const *argv[])
{
    int n;
    int arr[100];
    //kiểm tra số lượng phần tử dùng: n là số lượng dùng, MAXSIZE là tối đa, có thể dùng khong hết
    do
    {
        printf("\nNhap vao so gia tri trong mang n = ");
        scanf("%d",&n);
    }
    while (n <=0||n>MAX_SIZE);
    InputArray( n,  arr);
    printf("\nValue max in array is %d", FindMax(n, arr));
    return 0;
}
