#include <iostream>
#include <string>

using std::endl;
using std::cout;

int main()
{
 std::string greatings;
 std::string great;
 greatings = "hello";
 greatings += " how are ";
 std::cin >> great ;
 greatings += great;
 cout << greatings << endl;
}