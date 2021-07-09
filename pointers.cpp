#include <iostream>
#include <vector>

using namespace std;

template<typename T>
void prin(T *p, T s){
    for(T i=0; i < ((s/4)/2); i++){
        cout << *(p+i) << '\t';
    }
    cout << endl;
    for(T i=10; i < 20; i++){
        cout << *(p+i) << '\t';
    }
    cout << endl << "the end" << endl;
}
int main(){
    int a[2][10]={{0,1,2,3,4,5,6,7,8,9},{10,11,12,13,14,15,16,17,18,19}}; 
    int *p = &a[0][0];
    int s = sizeof(a);
    prin(p, s);
}