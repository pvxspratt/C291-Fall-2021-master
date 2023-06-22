/*
 * Question 3
 * Author: Phoebe Spratt
 * 09/13/21
*/

#include <stdio.h>
#include <math.h> // to use pow() 

// distCalc function prototype
int distCalc(int u, int a, int t);

int main(void) {
	int initVelo; 	// initial velocity u -- m/sec
	int accel; 	// acceleration a -- m/sec^2
	int time;	// time t -- sec

	// user input
	printf("%s", "Enter the initial speed of the vehicle: ");
	scanf("%d", &initVelo);

	printf("%s", "Enter the acceleration: ");
	scanf("%d", &accel);

	printf("%s", "Enter how long it accelerates for: ");
	scanf("%d", &time);

	printf("Your vehicle traveled %d metres\n", distCalc(initVelo, accel, time));

} // end main



// defining distCalc function with u, a, and t as parameters
int distCalc(int u, int a, int t) {
	int distance; 	// distance -- m
	int velo = u; 	// velocity -- m/sec
	int acc = a;	// acceleration -- m/sec^2
	int time = t;	// time -- sec

	distance = (velo * time) + ((0.5) * (acc) * (pow(time, 2)));

	return distance;
}

