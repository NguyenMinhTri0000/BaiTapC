#include <stdio.h>
void Convert(int i, int temp, char *buffer)
{
		if (i % 2 == 0)
		{
			for (int j = 0; j < (i / 2); j++)
			{
				temp = buffer[j];
				buffer[j] = buffer[i - j - 1];
				buffer[i - j - 1] = temp;
			}
		}
		else
		{
			for (int j = 0; j < (i / 2)+1; j++)
			{
				temp = buffer[j];
				buffer[j] = buffer[i - j - 1];
				buffer[i - j - 1] = temp;
			}
		}    
}
void ItoaFunction(int Value, char *buffer, int CoSo)
{
	int i = 0;
	int temp = 0;
	switch (CoSo)
	{
	case 2:
		while (Value > 0)
		{
			buffer[i] = (Value % 2)+48;
			Value = Value / 2;
			i++;
		}
        Convert(i, temp, buffer);        
		break;      
	case 10:
		temp = 0;
		while (Value > 0)
		{
			buffer[i] = (Value % 10)+48;
			Value = Value / 10;
			i++;
		}
        Convert(i, temp, buffer);
		break;
	case 16:
		temp = 0;
		while (Value > 0)
		{
			temp = Value % 16;
			if (temp < 10) buffer[i] = temp + 48;
			else if (temp == 10)  buffer[i] = 'A';
			else if (temp == 11)  buffer[i] = 'B';
			else if (temp == 12)  buffer[i] = 'C';
			else if (temp == 13)  buffer[i] = 'D';
			else if (temp == 14)  buffer[i] = 'E';
			else buffer[i] = 'F';
			Value = Value/ 16;
			i++;
		}
        Convert(i, temp, buffer);        
		break;
    	default:
		break;  
	}
    
}

int main(int argc, char const *argv[])
{
	char buffer[32] = { 0 };
	ItoaFunction(1234, buffer, 16);
	printf("Thap luc phan: %s\n", buffer);
	ItoaFunction(1234, buffer, 10);
	printf("Thap phan: %s\n", buffer);
	ItoaFunction(1234, buffer, 2);
	printf("Nhj phan: %s\n", buffer);
    return 0;
}
