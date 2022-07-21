#include <cstdio>
#include <cstring>

#define MAX_CHARSET_SIZE 10
#define MAX_BUFFER_SIZE 99

char charset[MAX_CHARSET_SIZE], buffer[MAX_BUFFER_SIZE];

int main()
{
	int cnt = 0, length = 0;
	scanf("%s", charset);
	
	for (int abc = 100; abc <= 999; abc++)
		for (int de = 10; de <= 99; de++)
		{
			int x = abc * (de % 10), y = abc * (de / 10), z = abc * de;
			sprintf(buffer, "%d%d%d%d%d", abc, de, x, y, z);
			bool ok = true;
			length = strlen(buffer);
			for (int i = 0; i < length; i++)
				if (strchr(charset, buffer[i]) == NULL) ok = false;
			
			if (ok)
			{
				printf("<%d>\n", ++cnt);
				printf("%5d\nX%4d\n-----\n%5d\n%4d\n-----\n%5d\n", abc, de, x, y, z);
			}
		}
	printf("%d", cnt);
	
	return 0;
}
 
