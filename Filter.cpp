#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;

int main()
{
std::string txt;
getline(cin, txt);

    for(int i = 0; i < txt.size(); i++)
    {
        if (txt[i] == ' ')
        {
            //break;
            continue;
        } 
        cout << txt[i] << std::ends; 
    }
}