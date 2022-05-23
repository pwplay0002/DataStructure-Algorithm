#include <iostream>
using namespace std;
template <class T>
class biggest 
{
    T a, b;
public: 
    T max(T a, T b);
      void getdata();
      void display();
};

template <class T>
void biggest<T>::getdata() {
    cout << "Enter two numbers or characters:\n";
    cin >> a >> b;
}
template <class T>
T biggest<T>::max(T a, T b) {
    return(a > b) ? a : b;
}
template <class T>
void biggest<T>::display() {
    cout << "Biggest=" << max(a, b) << endl;
}
int main(void) 
{
    biggest <int>intObj;
    biggest <float>floatObj;
    biggest <char>charObj;
    cout << "Biggest in Integer numbers:\n";
    intObj.getdata();
    intObj.display();
    cout << "Biggest in floating-point numbers:\n";
    floatObj.getdata();
    floatObj.display();
    cout << "Biggest in character:\n";
    charObj.getdata();
    charObj.display();
    return 0;
}