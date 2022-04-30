#include<iostream> 
using namespace std; 



int main() 
{ 
int first; 
int second; 
int result; 
cout << "Enter first number" << endl; 
cin >> first; 
cout << "Enter second number" << endl; 
cin >> second; 
try 
{ 
if (second == 0) 
{ 
throw second; 
} 
result = first / second; 
} 
catch (const int &ex) 
{ 
cout << "Error division" << endl; 

} 

return 0; 
}