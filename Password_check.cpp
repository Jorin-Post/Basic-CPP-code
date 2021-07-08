#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;

int main()
{
    int i = 0;
    std::string txt;
    std::string WW = "Bandias9";
    

    for (int i = 0; i < 3; i++)
    {
        getline(cin, txt);

         if(txt == WW) 
        { 
            cout << "Pasword corect!" << endl; // if(txt.compare(WW)== 0) cout << "Pasword corect!" << std::endl;
            i = 3;
        }    
        else
        {
            cout << "Pasword incorect!" << endl; // if(txt.compare(WW)== 1) cout << "Pasword incorect!" << std::endl;
        }
    }
    cout << "Have a nice day!" << endl;
}
    
    