#include<iostream>
using namespace std;

double function(double x, double y)
{
double result;
result = x*y;
return result;
}

int main()
{
double width;
double height;
double finaly;

cout<<"Enter width"<<endl;
cin>>width;

cout<<"Enter height"<<endl;
cin»height;

finaly = function(width, height);

cout << finaly << endl;

return 0;
}