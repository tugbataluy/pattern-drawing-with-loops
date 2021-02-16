#include <iostream>
#include <cmath>
using namespace std;
int Circle (int x,int y) 
{
	return sqrt (pow(x,2)+ pow(y, 2));
}
void Pattern1(int d)
{
	/*       *
			 ** ( if user enters 4 as dimention value  )
			 ***
			 ****
	*/
	
	for (int i = 1; i <= d; i++)
	{
		for (int j = 1; j <= i; j++)
			cout << "*";
		cout << endl;
	}
	
}
void Pattern2(int d)
{
	/*
				****
				***         ( if user enters 4 as dimention value  )
				**
				*
	*/
	
	
	for (int i = d; i >= 1; i--)
	{
		for (int j = 1; j <= i; j++)
			cout << "*";
		cout << endl;
	}
}
void Pattern3(int d)
{
	/*
					   *
					  **  ( if user enters 4 as dimention value  )
					 ***
					****
	*/
	
	
	for (int i = 1; i <= d; i++)
	{
		for (int j = 1; j <= d - i; j++)
			cout << " ";
		for (int j = 1; j <= i; j++)
			cout << "*";
		cout << endl;
	}
}
void Pattern4(int d)
{
	/*       *
			***    (if user enters 7 as dimension value)
		   *****
		  *******
	*/
	
	
	for (int i = 1; i <= (d + 1) / 2; i++)
	{
		for (int j = 1; j <= ((d + 1) / 2 - i); j++)
			cout << " ";
		for (int j = 1; j <= 2 * i - 1; j++)
			cout << "*";
		cout << endl;
	}
}
void Pattern5(int d) 
{
	/*
				  *
				 ***
				*****
			   ******* (if user enters 7 as dimension value)
				*****
				 ***
				  *
	*/
	
	
	for (int i = 1; i <= (d + 1) / 2; i++)// upper side's algorithm
	{
		for (int j = 1; j <= ((d + 1) / 2 - i); j++)
			cout << " ";
		for (int j = 1; j <= 2 * i - 1; j++)
			cout << "*";
		cout << endl;

	}
	for (int i = ((d + 1) / 2) - 1; i >= 1; i--)// lower side's algortihm
	{
		for (int j = 1; j <= ((d + 1) / 2) - i; j++)
			cout << " ";
		for (int j = 1; j <= 2 * i - 1; j++)
			cout << "*";
		cout << endl;
	}
}
void Pattern6(int d )
{
	float r = d /2 ;
	const float width = r;
	const float length = r;
	for (float y = width; y >= -width; y--)
	{
		for (float x = -length; x <= length; x++)
		{

			if ((float)Circle(x, y) == r)
				cout << "*";
			else cout << " ";

		}
		cout << endl;
	}
}
int main()
{
	cout << "Please Choose Your Pattern According To Following Menu:" << endl;
	cout << "1. Rectangle 1" << endl;
	cout << "2. Rectangle 2" << endl;
	cout << "3. Rectangle 3" << endl;
	cout << "4. Rectangle 4" << endl;
	cout << "5. Rhomb (Only Odd)" << endl;
	cout << "6. Circle" << endl;
	cout << "7. Close Application" << endl;
	int p = 1, d = 0; // p is the value of pattern number , d is the value of dimension.
	cout << "Please Enter Your Pattern Number:" << endl;
	while (p >= 1 && p <= 7 && d>=0)
	{
		cin >> p;
		cout << "Please Enter Your Pattern's Dimension:" << endl;
		cin >> d;
		if (p == 1)
			Pattern1(d);
		else if (p == 2)
			Pattern2(d);
		else if (p == 3)
			Pattern3(d);
		else if (p == 4)
			Pattern4(d);
		else if (p == 5)
			Pattern5(d);
		else if (p == 6)
			Pattern6(d);
		else if (p == 7)
			return 0;
		system("pause");
		system("cls");
	}
	return 0 ;
}