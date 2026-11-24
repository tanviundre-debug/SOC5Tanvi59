#include<iostream>
using namespace std;
class Animal
{
 public:
 virtual void eat()
 {
  cout<<"Animal eats"<<endl;
 }
};
class Dog:public Animal
{
 public:
 void eat()
 {
  cout<<"Dog eats"<<endl;
 }
};
int main()
{
 Animal *ptr;
 Dog d;
 ptr=&d;
 ptr->eat();
 return 0;
}
