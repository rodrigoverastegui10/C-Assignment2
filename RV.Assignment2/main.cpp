
#include <iostream>
#include <conio.h>

using namespace std;


int GetLengthFromUser();
int GetWidthFromUser();
int CalculateArea(int length, int width);
void DisplayArea(int area);

int main()
{
	int length = GetLengthFromUser();
	int width = GetWidthFromUser();


	int area = CalculateArea(length, width);

	DisplayArea(area);

	(void)_getch();
	return 0;
}


int GetLengthFromUser()
{
	int length =-1;
	while (length <= 0) 
	{
		cout << "Enter length of the rectangle: ";
		cin >> length;
		if (length <= 0) {
			cout << "Length must be a positive number" << ".\n";
		}

	}
	return length;
}


int GetWidthFromUser()
{
	int width = -1;
	while (width <= 0)
	{
		cout << "Enter width of the rectangle: ";
		cin >> width;
		if (width <= 0) {
			cout << "Width must be a positive number" << ".\n";
		}

	}
	return width;
}


int CalculateArea(int length, int width)
{
	return length * width;
}


void DisplayArea(int area)
{
	cout << "The rectangle is: " << area << ".\n";
}
