#include <iostream>

using std::cin;
using std::cout;

int eggs_liad (int chicken, int day)
{
    int egg = 1;
    //for (int i = 0; i < day; i++)
    {
        //egg = egg * chicken;
        egg = chicken * day;
    }
    return egg;
}

void print_eggs(int chicken, int day)
{
    int Eggs_liad = eggs_liad(chicken, day);
    cout << "If you have " << chicken << " chicks for " << day << " days." << std::endl << "Then you have " << Eggs_liad << " eggs!" << std::endl;
}

int main()
{
    int chicken;
    int day;
    cout << "How many chicken have you? ";
    cin >> chicken;
    cout << "How many day do you have them? ";
    cin >> day;
    print_eggs(chicken, day);
    print_eggs(chicken, (day + 7));
    print_eggs(chicken, (day + 30));
    print_eggs(chicken, (day + 365));
}