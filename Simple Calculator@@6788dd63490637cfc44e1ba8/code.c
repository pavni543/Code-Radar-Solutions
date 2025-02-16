#include <stdio.h>
int main() {
	int a,c;
	char o;
	scanf("%d %d %c",&a, &c, &o);
	switch (o) {
	case '+':
		printf("%d",a+c);
		break;
	case '-':
		printf("%d", a-c);
		break;
	case '*':
		printf("%d", a*c);
		break;
	case '/':
		printf("%d", a/c);
		break;
	default:
		printf("error");
	}
	return 0;
}