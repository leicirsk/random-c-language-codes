//Talidtid, Mark A. | BSIT 1-2N | COMP 003

/*Create 2 two-dimensional array with number of rows ( r1 ) and number of columns ( c1 ) for the first array.
Use r2 and c2 for the second array. The number of r1, r2, c1 and c2 shall be inputted by the user
(note: r1 and r2 should be equal and c1 and c2 should be equal). Input the elements of the matrices. Print the 2 arrays.
Swap the elements of the first array to the second array and the elements of the second array to the first array. Print the arrays.*/

#include <stdio.h>

int main(void){
	
	//This section is for inputting the size of rows and columns.
	int r1;
	int c1;
	
	//Getting the size of rows.
	printf("Enter the number of rows.  >> ");
	scanf("%d", &r1);
	int r2=r1;
	
	//Getting the size of columns.
	printf("\nEnter the number of columns.   >> ");
	scanf("%d", &c1);
	int c2=c1;
	
	//Indicates error or invalid size of the array.
	if(r1<=0||c1<=0){
		printf("\nInvalid matrix size. Please try again. :((");
		return 0;
	}
	
	//This section is for inputting the values of the arrays.
	int element1[r1][c1]; //First Array
	int element2[r2][c2]; //Second Array
	int i, j;
	
	//Getting the elements for the First Array.
	printf("\nEnter %d numbers.\n", r1*c1);
	for(i=0; i<r1; i++){
		for(j=0; j<c1; j++){
			scanf("%d", &element1[i][j]);
		}
	}
	
	//Getting the elements for the Second Array.
	printf("\nEnter another %d numbers.\n", r2*c2);
	for(i=0; i<r2; i++){
		for(j=0; j<c2; j++){
			scanf("%d", &element2[i][j]);
		}
	}
	
	printf("\n---------------------\n"); //Line Break
	
	//This section is for displaying the initial first and second arrays.
	//Displaying the 1st Array.
	printf("\nFirst Array:\n");
	for(i=0; i<r1; i++){
		for(j=0; j<c1; j++){
			printf("%d\t", element1[i][j]);
		}
		printf("\n");
	}
	
	//Displaying the 2nd Array.
	printf("\nSecond Array:\n");
	for(i=0; i<r2; i++){
		for(j=0; j<c2; j++){
			printf("%d\t", element2[i][j]);
		}
		printf("\n");
	}
	
	//This section is for swapping the elements of the 1st and 2nd Arrays.
	int swap;
	
	for(i=0; i<r1; i++){
		for(j=0; j<c1; j++){
			swap=element1[i][j];
			element1[i][j]=element2[i][j];
			element2[i][j]=swap;
		}
	}
	
	printf("\n--------------------\n"); //Line Break
	
	printf("\nAfter swapping the two arrays:\n");
	
	//Displaying the swapped first array.
	printf("\nFirst Array:\n");
	for(i=0; i<r1; i++){
		for(j=0; j<c1; j++){
			printf("%d\t", element1[i][j]);
		}
		printf("\n");
	}
	
	//Displaying the swapped second array.
	printf("\nSecond Array:\n");
	for(i=0; i<r2; i++){
		for(j=0; j<c2; j++){
			printf("%d\t", element2[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}
