#include <cstdio>
#include <cstring>

int main()
{
	char *t = "Hello World";
	char *s = " HE";
	char buf[1000];
	memset(buf, 0, sizeof(buf));
	
	strcat(buf, t);
	strcat(buf, s);
	
	printf("%s", buf);
	
	return 0;
}
 
