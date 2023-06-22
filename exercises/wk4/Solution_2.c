/* 
 * Question 2
 * Author: Phoebe Spratt
 * 09/21/21
 * Doesn't work but some of the logic makes sense maybe
*/

#include <stdio.h>
#include <math.h>

// determinant function prototype
int determinant(int row, int arr[][row]);

// mini matrix helper funciton prototype
void miniMatrix(int row, int arr[][row], int temp[][row], int l, int k);

int detTwoByTwo(int row, int arr[][row]);

int prod(int row, int arr[][row]);
void lower(int row, int arr[][row]);
void showLow(int row, int arr[][row]);
void operation(int i, int j, int a, int size, int temp[][size]);

// print array function prototype
void printArray(int rows, int x[][rows], int cols);

int main(void) {
	int rows; // number of rows in 2d array
	int cols; // number of columns in 2d array
	int x[50][50]; // initializing the matrix

	// user input
	printf("%s", "Enter number of rows: ");
	scanf("%d", &rows);

	printf("%s", "Enter number of columns: ");
	scanf("%d", &cols);

	// if dimensions entered are not equal
	while(rows != cols) {
		// telling user why they need to enter dimensions again
		printf("%s", "Rows must be equal to columns in order to calculate determinant\n");
		printf("%s", "Enter number of rows: ");
        	scanf("%d", &rows);

        	printf("%s", "Enter number of columns: ");
        	scanf("%d", &cols);
	} // end while


	// create 2d array from dimensions, where row = col
	//int x[rows][cols]; // matrix/2d array is 'x'

	// putting user input into array
	for(int i = 0; i < rows; i++) {
		for(int j = 0; j < cols; j++) {
			printf("Enter element x%d%d: \n", i, j);
			scanf("%d", &x[i][j]);
		}
	}


  printf("\n");
  printf("Determinant: %d\n", detTwoByTwo(rows, x));

	//printArray(rows, x, cols);




	printf("\n");
	printf("Determinant: %d\n", determinant(rows, x));

	printf("Determinant is: %d\n", prod(rows, x));
	lower(rows, x);
	printArray(rows, x, cols);


} // end main

/*
	From mathisfun.com

	2x2 matrix

		A = | a b |
				| c d |

		|A| = ad - bc

	3x3 matrix
				| a b c |
		A = | d e f |
				| g h i |

		|A| = a(ei - fh) - b(di - fg) + c(dh - eg)

	4x4 matrix too much to type

*/

int detTwoByTwo(int row, int arr[][row]) {
  int det;

  if(row == 2) { // if 2x2 matrix
		det = (arr[0][0] * arr[1][1]) - (arr[0][1] * arr[1][0]);
  }

  return det;
}


// calculate determinant using recursion by making temporary mini matrixes
int determinant(int row, int arr[][row]) {
	int det; // the determinant of the matrix

	// if matrix is just one row/column
  if(row == 2) { // if 2x2 matrix
		det = (arr[0][0] * arr[1][1]) - (arr[0][1] * arr[1][0]);
	} else {



		int temp[row][row]; // will be the mini matrix
		int sign = 1; // for the + or - determination in formula

		// for each element in the first row, make mini matrix for each
		for(int i = 0; i < row; i++) {
			miniMatrix(row, arr, temp, 0, i); // the zero is because it is only 1st row
			det += sign * arr[0][i] * determinant(row - 1, temp);

			// switching from pos to negative
			sign = -sign;
		}
	}

	return det;
}

// mini matrix
// the mini matrix will be of elements that arent in l,k row or column
void miniMatrix(int row, int arr[][row], int temp[][row], int l, int k) {
	int r = 0;
	int c = 0;

	// going through matrix
	for(int i = 0; i < row; i++) {
		for(int j = 0; j < row; j++) {
			// putting the elements that are not in the same row and column
			// 	into temp array
			if(i != l && j != k) {
				temp[r][c++] = arr[i][j];

				// once row is filled, go to next row and go back to column 0
				if(c == row - 1) {
					c = 0;
					r++;
				}
			}
		}
	}
}




// accessing lower numbers to be turned to zeroes
void lower(int row, int arr[][row]) {
	for(int i = 0; i < row; i++) {
		for(int j = 0; j < row; j++) {
			if(i > j) {
				arr[i][j] = 0;
				//printf("0%d ", arr[i][j]);
			}
		}
	}
}

// return the numbers that willl have to be zeros
// row is the size of the matrix
void showLow(int row, int arr[][row]) {
	int temp[row][row]; // temp array that will hold the new modified matrix
	int a; // the zero low number

	for(int i = 0; i < row; i++) {
		for(int j = 0; j < row; j++) {
			temp[i][j] = arr[i][j]; // putting orig array in temp one to be modified

			if(i > j) {
				// printf("%d \n", arr[i][j]); // prints the low number that will be 0
				a = arr[i][j];
				printf("%d \n", arr[i][j]);
				//operation(i, j, a, row, temp); // modifying temp based on low
			}
		}
	}
	//arr = temp; // i dont know if this does anything

	//printArray(row, temp, row);
} // should return the modified matrix not the original inputed arr
		// the original should now be the temp one

// operation(i, j, int arr[i][j], size, int temp[][size])
// need to put stuff in a temporary array socan update that one

// operation to update matrix after turning each lowers to zero
void operation(int i, int j, int a, int size, int temp[][size]) {
	int rowPos = i;
	int colPos = j;
	int zNum = a;

	// going through columns but staying on the same row
	// modifying the row
	for(int k = 0; k < size; k++) {
		printf("%d ", temp[rowPos][k]);
		printf("\n");
		//temp[rowPos][k] = temp[rowPos][k] - (zNum * temp[colPos][k]);
	}

}

// determinant by product of diagonals
int prod(int row, int arr[][row]) {
	int det = 1;

	for(int i = 0; i < row; i++) {
		for(int j = 0; j < row; j++) {
			if(i == j) {
				//printf("bdfs %d\n", arr[i][j]);
				det *= arr[i][j];
			}
		}
	}

	return det;
}


// print the array
void printArray(int row, int arr[][row], int col) {
	// column heads
	printf("%s", "   [0]  [1]  [2]  [3]  [4]");

	for(int i = 0; i < row; i++) {
		printf("\n[%d] ", i);

		for(int j = 0; j < col; j++) {
			printf("%-5d", arr[i][j]);
		}
	}
}

