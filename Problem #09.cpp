#include <iostream>
#include <string>
#include <iomanip>
using namespace std;


int RandomNumber(int From, int To)
{

	int randNum = rand() % (To - From + 1) + From;
	return randNum;
}

void FillaMatrix3x3(int arr[3][3], int Rows, int Cols)
{
	for (int i = 0; i < Rows; i++)
	{
		for (int j = 0; j < Cols; j++)
		{
			arr[i][j] = RandomNumber(1, 10);

		}

	}


}

void PrintMatrix(int arr[3][3], int Rows, int Cols)
{

	for (int i = 0; i < Rows; i++)
	{
		for (int j = 0; j < Cols; j++)
		{
			printf(" %0*d ", 2, arr[i][j]);

		}
		cout << "\n";
	}

}

void PrintMiddleRowOfMatrix(int arr[3][3],int Middle)
{
	
	for (int i = 0; i < 3; i++)
	{
		
		printf(" %0*d ", 2, arr[Middle][i]);

	}



}

void PrintMiddleColumsOfMatrix(int arr[3][3], int Middle)
{

	for (int i = 0; i < 3; i++)
	{

		printf(" %0*d ", 2, arr[i][Middle]);

	}



}


int main()
{
    
	srand(time(0));

	int arr[3][3];

	FillaMatrix3x3(arr, 3, 3);
	 
	cout << "Matrix 1 :\n";
	PrintMatrix(arr, 3, 3);

	cout << "\nMiddle Rows of Matrixl is: :\n";
	PrintMiddleRowOfMatrix(arr, 1) ;

	cout << "\nMiddle Coulums of Matrixl is: :\n";
	PrintMiddleColumsOfMatrix(arr,1);


}

