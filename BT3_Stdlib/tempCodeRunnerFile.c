	if (index % 2 == 0)
		{
			for (int i = 0; i < (index / 2); i++)
			{
				temp = buffer[i];
				buffer[i] = buffer[index - i - 1];
				buffer[index - i - 1] = temp;
			}
		}
		else
		{
			for (int i = 0; i < (index / 2) + 1; i++)
			{
				temp = buffer[i];
				buffer[i] = buffer[index - i - 1];
				buffer[index - i - 1] = temp;
			}
		}