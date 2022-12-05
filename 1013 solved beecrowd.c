#include <stdio.h>
#include <math.h>

int main (){
	
	int a = 0, b = 0, c = 0, res = 0;
	
	scanf("%d %d %d", &a, &b, &c);
	
	res = (a + b + abs(a - b)) / 2;
	
	res = (res + c + abs(res - c)) / 2;
	
	printf("%d eh o maior\n", res);
	
	return 0;
}
