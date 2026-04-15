//Talidtid, Mark A. | BSIT 1-2N | COMP 003

/*Create two-dimensional array with number of rows ( r ) and number of columns ( c ).
The number of r and c shall be inputted by the user. Input the elements of the matrix or array. Print the array.
Arrange elements of the array and then print the array with the elements in ascending order.*/

#include <stdio.h>

int main(void){
	
	//This section is for getting the matrix size.
	int r, c;
	
	//This is for getting the number of rows.
	printf("Enter the number of rows.\n");
	scanf("%d", &r); //Inputting row size
	
	//This is for getting the number of columns.
	printf("\nEnter the number of columns.\n");
	scanf("%d", &c); //Inputting column size.
	
	//If the size is invalid.
	if(r<=0||c<=0){
		printf("Invalid matrix size. Please try again.");
		return 0;
	}
	
	//This section is for inputting the elements of the array.
	int element[r][c];
	int i, j;
	
	printf("\nEnter %d numbers.\n", r*c);
	
	for(i=0; i<r; i++){
		for(j=0; j<c; j++){
			//Inputting the elements of the array.
			scanf("%d", &element[i][j]);
		}
	}
	
	//This section is for displaying the raw array.
	printf("\n--------------------\n");
	printf("This is the matrix or array in two-dimensional array:\n");
	
	for(i=0; i<r; i++){
		for(j=0; j<c; j++){
			//Printing the elements of the array.
			printf("%d\t", element[i][j]);
		}
		printf("\n");
	}
	
	//This section is for arranging the elements in ascending form.
	int ascend[r*c];
	int k=0;
	
	for(i=0; i<r; i++){
		for(j=0; j<c; j++){
			ascend[k++]=element[i][j];
		}
	}
	
	int sort;
	
	for(i=0; i<r*c-1; i++){
		for(j=0; j<r*c-i-1; j++){
			if(ascend[j]>ascend[j+1]){
				sort=ascend[j];
				ascend[j]=ascend[j+1];
				ascend[j+1]=sort;
			}
		}
	}
	
	//This is for displaying the sorted array.
	printf("\nThis is the sorted ascending array in 2D array.\n");
	k=0;
	for(i=0; i<r; i++){
		for(j=0; j<c; j++){
			printf("%d\t", ascend[k++]);
		}
		printf("\n");
	}
	
	return 0;
}
