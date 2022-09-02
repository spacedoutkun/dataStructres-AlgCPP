#include <iostream>
#include <vector>
 
using namespace std;
 
int main()
{
    vector<int> g1;
 
    for (int i = 1; i <= 9; i++)
        g1.push_back(i); //inserts new element at the end of vector and increases size of vector by one.
 
    cout << "Output of begin and end: ";
    for (auto i = g1.begin(); i != g1.end(); ++i) //The auto keyword in C++ automatically detects and assigns a data type to the variable with which it is used. The compiler analyses the variable's data type by looking at its initialization. It is necessary to initialize the variable when declaring it using the auto keyword.
        cout << *i << " ";
}