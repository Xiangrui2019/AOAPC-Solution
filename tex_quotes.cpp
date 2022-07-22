#include <cstdio>

int main()
{
	int ch, q = 1;
	
	while ((ch = getchar()) != EOF)
	{
		if (ch == '"') {
			printf("%s", q ? "``" : "''"); // 三目运算符
			q = !q;
		}
		else putchar((char) ch);
	} 
	
	return 0;
}
 
