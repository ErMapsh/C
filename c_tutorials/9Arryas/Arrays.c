/*
Arrays : An array is a collection of data items of the same data type. And it is also known as subscript variable.
Items are stored at contiguous memory locations in Arrays.
It can also store the collection of derived data types such as pointers, structures etc.
The C Language places no limits on the number of dimensions in an array i.e. we can create any no. of dimension array E.g. 2d array, 3d array etc.

##Most Commonly used dimensions of Array :
A one-dimensional array is like a list.
A two-dimensional array is like a table.

Some texts refer to one-dimensional arrays as vectors and two-dimensional arrays as matrices and use the general term Arrays when the no. of dimensions is unspecified or unimportant.

##Why do we need Arrays ?
Code that use arrays for managing large no. of same type variables is more organized and readable.
Arrays allow us to create many variables by just a single line. It means there is no need to create or specify each and every variable.

##Advantage of Arrays :
It is used to represent multiple data items of same type by using only single name.
Accessing an item in a given array is very fast.

##Properties of Array :
Data in an array is stored in contiguous memory locations in RAM.
Each element of an array is of same size i.e. their data types are same so memory consumed by each is also same.
Any element of the array with given index can be accessed very quickly by using its address which can be calculated using the base address and the index.

Index No. – It is the special type of no. which allows us to access variables of Arrays i.e. index no. provides a method to access each element of an array in a program.


Syntax:
Data_type name[size];

*/

#include <stdio.h>

int main()
{
	//---One dimensional array---
	int marks[10], sum = 0; // array size become 40m beacause int size is 4 and array having same datatypes

	// ---lenght of array---
	int length = sizeof(marks) / sizeof(int); // In each int element having a 4 bytes, we need number of item in array so its return 10 beacause int having 4 bytes size and 4*10 blocks in array is 40
	printf("%d\n", length);					  // 10

	printf("Enter marks of 10 students:\n\n");
	for (int i = 0; i <= length - 1; i++)
	{
		printf("Marks of %d student : ", i + 1);
		scanf("%d", &marks[i]);
		sum += marks[i];
	}

	// for average of all student
	float average = sum / length;
	printf("\nThe average marks of %d students are %f", length, average);
	return 0;
}
