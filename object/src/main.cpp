#include <iostream>
using namespace std;

class Department
{
public:
    string name;
    int salesQuantity;
};

int main()
{
    Department department1;
    Department department2;
    department1.name = "Shoes";
    department1.salesQuantity = 125;

    department2.name = "Clothes";
    department2.salesQuantity = 225;

    cout << department1.name << " " << department1.salesQuantity << endl;
    cout << department2.name << " " << department2.salesQuantity << endl;

    return 0;
}
