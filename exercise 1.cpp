/*Create two-dimensional array with number of rows ( r ) and number of columns ( c ).
The number of r and c shall be inputted by the user. Input the elements of the matrix or array.
Get the highest element from the array. Print the array and the highest element.*/

#include <stdio.h>

int main(void){
	
	//This section is for getting the matrix size.
	int r, c;
	
	//This is for getting the number of rows.
	printf("Enter the number of rows.\n");
	scanf("%d", &r);
	
	//This is for getting the number of columns.
	printf("\nEnter the number of columns.\n");
	scanf("%d", &c);
	
	//If the size of array is invalid.
	if(r<=0||c<=0){
		printf("Invalid matrix size. Please try again.");
		return 0;
	}
	
	//This section is for inputting the elements of the array.
	int element[r][c];
	int i, j;
	int highest;
	
	printf("\nEnter %d numbers.\n", r*c);
	
	for(i=0; i<r; i++){
		for(j=0; j<c; j++){
			//Inputting the elements of the array.
			scanf("%d", &element[i][j]);
		}
	}
	
	//This section is for finding the highest value element.
	highest=element[0][0];

	for(i=0; i<r; i++){
		for(j=0; j<c; j++){
			if(element[i][j]>highest){
			highest=element[i][j];
			}
		}
	}
	
	//This section is printing the results.
	printf("\n--------------------\n");
	printf("This is the matrix or array in two-dimensional array.\n");
	
	for(i=0; i<r; i++){
		for(j=0; j<c; j++){
			//Printing the elements of the array.
			printf("%d\t", element[i][j]);
		}
		printf("\n");
	}
	
	printf("\nThis is the highest element in the array: %d", highest);
	
	return 0;
}
