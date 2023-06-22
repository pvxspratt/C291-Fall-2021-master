/*
 * Question 4
 * Author: Phoebe Spratt
 * 09/13/21
*/

#include <stdio.h>

void fun(int var1, int var2) {
	int sum = var1 + var2;

	// printing the variable sum here, not in main
	printf("%d\n", sum);

}

int main(void) {
	int var1, var2;
	scanf("%d %d", &var1, &var2);
	fun(var1, var2);
	
	// line that gave the error
	// printf("%d", sum);

	return 0;

} // end main
