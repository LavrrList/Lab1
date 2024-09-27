/*#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

int main()
{
	int a, b;
	double S, P;
	cout << "Input a: ";
	cin >> a;
	cout << "Input b: ";
	cin >> b;
	S = (a * b);
	P = 2 * (a + b);
	cout << fixed;
	cout << "S = " << S << endl;
	cout << "P = " << P << endl;
	system("pause>>void");
	cout << "S + P = " << S + P << endl;
	cout << "S - P = " << S - P << endl;
	cout << "S * P = " << S * P << endl;
	cout << "S / P = " << S / P << endl;
	system("pause>>void");
	cout << "Adress a:" << &a <<endl;
	cout << "Adress b:" << &b << endl;
	cout << "Adress S:" << &S << endl;
	cout << "Adress P:" << &P << endl;
	system("pause>>void");
	return 0;
}*/


/*
#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	int x;
	cout << "Integer x: ";
	cin >> x;
	cout << "The remainder when dividing by 7: " << (x%7) << endl;
	system("pause>>void");
	int y, z;
	cout << "Integer y: ";
	cin >> y;
	cout << "Integer z: ";
	cin >> z;
	if (y%z == 0)
	{
		cout << "y is divisible by z without a remainder: y/z = " << y / z << endl;
	}
	else { 
		cout << "y is divisible by z without a remainder: y/z = " << y / z << endl;
		cout << "Remainder = " << y%z << endl;
	}
	system("pause>>void");
	if (y%2 == 0)
	{
		cout << "y is an even number" << endl;
	}
	else {
		cout << "y is not an even number" << endl; 
	}
	system("pause>>void");
	if (z % 2 == 0)
	{
		cout << "z is an even number" << endl;
	}
	else {
		cout << "z is not an even number" << endl;
	}
	system("pause>>void");
	return 0;
}
*/


/*
#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	int x;
	cout << "Input integer x: ";
	cin >> x;
	cout << "Incremental prefix form:"<<endl;
	cout << "Before incrementation x = " << x << endl;
	cout << "After incrementation x = " << ++x << endl;
	--x;
	system("pause>>void");
	cout << "Incremental postfix form:" << endl;
	cout << "Before incrementation x = " << x << endl;
	cout << "Iecrementation x++: " << x++ << endl;
	cout << "After incrementation x = " << x << endl;
	--x;
	system("pause>>void");
	cout << "Decremental prefix form:" << endl;
	cout << "Before decrementation x = " << x << endl;
	cout << "After decrementation x = " << --x << endl;
	++x;
	system("pause>>void");
	cout << "Decremental postfix form:" << endl;
	cout << "Before decrementation x = " << x << endl;
	cout<<"Decrementation x--: "<<x--<<endl;
	cout << "After decrementation x = " << x << endl;
	system("pause>>void");
	return 0;
}
*/


/*
#include <iostream>
#include <string>

using namespace std;

int main()
{
	int x, y;
	cout << "Enter your age: ";
	cin >> x;
	cout << "Enter your desired salary: ";
	cin >> y;
	bool t;
	if (x > 20 && y > 400 && y < 1000)
	{
		t = true;
		cout << "We will consider your position" << endl;
	}
	else {
		t = false;
		cout << "You are not suitable" << endl;
	}
	string name, surname, position;
	if (t)
	{
		cout << "Name: ";
		cin.ignore();
		getline(cin, name);

		cout << "Last name: ";
		getline(cin, surname);

		cout << "Desired position: ";
		getline(cin, position);
	}
	system("pause>>void");
	cout << "Name: " << name << endl;
	cout << "Last name: " << surname << endl;
	cout << "Desired position:  " << position << endl;
	cout << "Age: " << x << endl;
	cout << "Desired salary: " << y << endl;
	system("pause>>void");
	return 0;
}
*/


/*
#include <iostream>

using namespace std;

int main()
{
	int x;
	cout << "Your mark: ";
	cin >> x;
	if (x < 0 || x>100)
	{
		cout << "Not valid" << endl;
	}
	else if (x < 64)
	{
		cout << "Unsatisfactory" << endl;
	}
	else if (x < 74)
	{
		cout << "Satisfactory" << endl;
	}
	else if (x < 90)
	{
		cout << "Good" << endl;
	}
	else {
		cout << "Excellent!" << endl;
	}
	system("pause>>void");
	return 0;
}
*/
