#include <stdio.h>

int main()
{

	int i, s = 0;
	int n;
    printf("Enter the range:\n");
    scanf("%d",&n);

	for (i = 0; i <= n; i++) {
		s += i;
	}
	printf("Sum = %d", s);
	return 0;
}
