#include <stdio.h>


int Itoa(int n, char *buffer, int CoSo)
{
    int i, temp;
    switch (CoSo)
    {
    case 10:
		temp = 0;
		while (n > 0)
		{
			buffer[i] = (n % 10)+48;
			n = n / 10;
			i++;
		}
		if (i % 2 == 0)
		{
			for (int i = 0; i < (i / 2); i++)
			{
				temp = buffer[i];
				buffer[i] = buffer[i - i - 1];
				buffer[i - i - 1] = temp;
			}
		}
		else
		{
			for (int i = 0; i < (i / 2)+1; i++)
			{
				temp = buffer[i];
				buffer[i] = buffer[i - i - 1];
				buffer[i - i - 1] = temp;
			}
		}
		break;
	case 16:
		temp = 0;
		while (n > 0)
		{
			temp = n % 16;
			if (temp < 10) buffer[i] = temp + 48;
			else if (temp == 10) buffer[i] = 'a';
			else if (temp == 11)  buffer[i] = 'b';
			else if (temp == 12)  buffer[i] = 'c';
			else if (temp == 13)  buffer[i] = 'd';
			else if (temp == 14)  buffer[i] = 'e';
			else buffer[i] = 'f';
			n /= 16;
			i++;
		}
		if (i % 2 == 0)
		{
			for (int i = 0; i < (i / 2); i++)
			{
				temp = buffer[i];
				buffer[i] = buffer[i - i - 1];
				buffer[i - i - 1] = temp;
			}
		}
		else
		{
			for (int i = 0; i < (i / 2) + 1; i++)
			{
				temp = buffer[i];
				buffer[i] = buffer[i - i - 1];
				buffer[i - i - 1] = temp;
			}
		}
		break;
	case 2:
		while (n > 0)
		{
			buffer[i] = (n % 2)+48;
			n = n / 2;
			i++;
		}
		if (i % 2 == 0)
		{
			for (int i = 0; i < (i / 2); i++)
			{
				temp = buffer[i];
				buffer[i] = buffer[i - i - 1];
				buffer[i - i - 1] = temp;
			}
		}
		else
		{
			for (int i = 0; i < (i / 2) + 1; i++)
			{
				temp = buffer[i];
				buffer[i] = buffer[i - i - 1];
				buffer[i - i - 1] = temp;
			}
		}
		break;
	default:
		break;
    }
}
int main(int argc, char const *argv[])
{
    int n = 151;
    char buffer[100];
    Itoa(n, buffer, 2);
    printf("Nhi phan: %d", buffer);
    Itoa(n, buffer, 10);    
    printf("Thap phan: %d", buffer);  
    Itoa(n, buffer, 16)  ;
    printf("Thap luc phan: %d", buffer);      
    return 0;
}
