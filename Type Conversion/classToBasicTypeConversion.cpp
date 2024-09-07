/*
  C++ allow to define an overloaded casting that could be used to convert a class  type
  to basic type.
  the genral form of an overloaded casting operator function , usually reffereed to as an conversion function is:

  operator typename(){
  ............
  statements
  ----------
  }

  the function converts a class tpe to type name.

  for example : the operator int() converts and class object to int type , operator float() converts the class tyoe object to float and so on.


  the casting function should satisfy following conditions
  .it must be a class member
  .it must not satisfy return type
  .it must have no any arguments

  Example: price and quantity of product to total cost.
*/

#include <iostream>
using namespace std;

class item
{
private:
    float price;
    int quantity;

public:
    item(float p, int q)
    {
        price = p;
        quantity = q;
    }
    void display()
    {
        cout << "Price of items: " << price << endl;
        cout << "Quantity: " << quantity << endl;
    }
    //  type conversion
    operator float()
    {
        return (price * quantity);
    }
};

int main()
{
    item i1(500.50,10);
    float total;
    total=i1;
    i1.display();
    cout<<"Total Amount: "<<total<<endl;

    return 0;
}