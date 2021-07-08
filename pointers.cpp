#include <iostream>
#include <vector>

using namespace std;

template<typename T>
void prin(T *p){
    cout << *p << endl;
}
int main(){
    int a = 10, *p = &a;
    *p = 15;
    *p+1;
    prin(p);
}