#include<stdio.h>
#include<math.h>
int main() {
	int a, b;
	float h, x, y;

	scanf_s("%d %d %f", &a, &b, &h);

	for (x = a; x < b; x += h)
	{
		if (x < 2.2)
		{
			y = cos(x) + tan(x);
			//printf("x=%f\n \t y=%f\n", x, y);
			printf("x=%.3f       ", x);
			printf("y=%.3f\n", y);
		}
		else if (x <= 2.7)
		{
			y = 1.0 / tan(x) + sin(x);
			//printf("x=%f\n \t y=%f\n", x, y);
			printf("x=%.3f       ", x);
			printf("y=%.3f\n", y);
		}
		else
		{
			y = pow(x * log(x), 3);
			//printf("x=%f\n \t y=%f\n", x, y);
			printf("x=%.3f       ", x);
			printf("y=%.3f\n", y);
		}
	}
}