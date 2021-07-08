#include <iostream>
#include <conio.h>
#include <string>

using namespace std;

bool Up; bool Down; bool Left; bool Right;

#define KEY_UP 72
#define KEY_DOWN 80
#define KEY_LEFT 75
#define KEY_RIGHT 77
#define KEY_X 120

int main() {

	char key = _getch(); //keybord input
	int value = key;

	while (value != KEY_X)
	{
		switch (_getch())
		{
		case KEY_UP:
			Up = true;
            //cout << "up" << endl << endl;
			break;
		case KEY_DOWN:
			Down = true;
            //cout << "down" << endl << endl;
			break;
		case KEY_LEFT:
			Left = true;
            //cout << "left" << endl << endl;
			break;
		case KEY_RIGHT:
			Right = true;
            //cout << "right" << endl << endl;
			break;
		}
		key = _getch();
		value = key;
	}
	if (Up == true){cout << "It did IT!!!!!!!" << endl;}
	
    system("pause");
	return 0;
}