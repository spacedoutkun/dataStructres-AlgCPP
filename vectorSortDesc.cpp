/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <algorithm>//A range is any sequence of objects that can be accessed through iterators or pointers, such as an array or an instance of some of the STL containers. Notice though, that algorithms operate through iterators directly on the values, not affecting in any way the structure of any possible container (it never affects the size or storage allocation of the container).
#include <vector>
#include<functional>//Function objects are objects specifically designed to be used with a syntax similar to that of functions. Instances of std::function can store, copy, and invoke any Callable target -- functions, lambda expressions, bind expressions, or other function objects, as well as pointers to member functions and pointers to data members.
#include <bits/stdc++.h>

using namespace std;
// return whether first element is greater than the second  
bool userdefgreater(int elem1, int elem2)  
{    return elem1 > elem2;    }  
   
int main()
{
    vector<int> v;
    vector<int>::iterator iter; //Two colons (::) are used in C++ as a scope resolution operator. This operator gives you more freedom in naming your variables by letting you distinguish between variables with the same name.
    int k;  
  for (k = 0; k <= 15; k++)  
    v.push_back(k);  
  random_shuffle(v.begin(), v.end());  
    for(iter=v.begin();iter!=v.end(); iter++) //
    {
        cout<<*iter<<endl;//A pointer is a variable that stores the memory address of an object. Pointers are used extensively in both C and C++ for three main purposes: to allocate new objects on the heap, to pass functions to other functions. to iterate over elements in arrays or other data structures.
    }
    sort(v.begin(),v.end(),greater<int>());//
    cout<<"afer sort in descending"<<endl;
    for(iter=v.begin();iter!=v.end();iter++)
    {
        cout<<*iter<<endl;
    }
    
    cout<<"----------------"<<endl;
    reverse(v.begin(),v.end());
    for_each(v.begin(),v.end(),[](int x)
    {
        cout<<x;
        
    });
    cout<<endl<<endl;
    cout<<*max_element(v.begin(),v.end());
    
    cout<<endl<<endl;
    cout<<*min_element(v.begin(),v.end());
    
     
    cout<<endl<<endl;
    cout<<accumulate(v.begin(),v.end(),0);// Starting the summation from 0

    return 0;
}