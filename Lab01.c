#include <stdio.h>

/* print Fahrenheit-Celsius table
for fahr = 0, 20, ..., 300,
floating-point version*/

main()
{
	float fahr, celsius;
	int lower, upper, step;

	lower = 0;
	upper = 300;
	step = 20;
	 
	printf("  F      C\n\n");
	for (fahr = upper; fahr >= lower;)
	{
		celsius = (5.0 / 9.0) * (fahr - 32);
		printf("%3.0f %6.1f\n", fahr, celsius);
		fahr = fahr - step;
	}
}