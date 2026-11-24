#include<iostream>
using namespace std;
class Calculator
{
 public:
 int add(int a,int b)
 {
  return a+b;
 }
 int add(int c,int d,int e)
 {
  return c-d-e;
 }
};
int main()
{
 Calculator c;
 cout<<"The 1st addition is"<<c.add(2,4);
 cout<<"The 2nd addition is"<<c.add(3,5,1);
 return 0;
}
