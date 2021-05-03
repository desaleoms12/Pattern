//how to print pattern  of row and columns
#include <iostream>
using namespace std;

int main()
{
	//we will make two variables to store numbers of rows and columns
	int row,column;
	cout<<"Enter the Numbers of rows : ";
	cin>>row;
	cout<<"Enter the Numbers of column : ";
	cin>>column;

	//now we will nested for loop to make pattern
	//we have to run two for loop one for row and other for column

	for(int i = 1; i <= row; i++)//same for i
	{
		for(int j = 1; j <= column; j++)//j will run till j is less than or equal to columns
		{
			cout<<"*";//here a * will be printed 
		}
		//we will need to print space after every column i have made new line after every column
		//its done lets run it i am using sublime you can use any but you need complier
		cout<<"\n";
	}
	return 0;
}