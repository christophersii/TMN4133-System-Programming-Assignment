#include<stdio.h>

void main(){
	int i,n,j[100];

	printf("\n\nRead n number of values in an array and display it in reverse order:\n\n");
	printf("Please enter the number of elements to store in the array: ");
	scanf("%d", &n);

	printf("Please enter %d number of elements in the array: \n", n);
	for(i=0; i<n; i++){
		printf("Element- %d: " ,i);
		scanf("%d", &j[i]);
	}

	printf("\nThe values store into the array are: \n");
	for(i=0; i<n; i++){
		printf("% 5d", j[i]);
	}

	printf("\n\nThe values store into the array in reverse are:\n");
	for(i=n-1; i>=0; i--){
		printf("% 5d",j[i]);
	}

	printf("\n\n");
}
