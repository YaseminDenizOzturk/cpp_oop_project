#include <iostream>
using namespace std;

class Customer
{
private:
    string name;
    int phoneNmbr;

public:
    Customer(string newName, int newPhoneNmbr)
    {
        name = newName;
        phoneNmbr = newPhoneNmbr;
    }

    void setName(string newName)
    {
        if (newName.size() >= 3)
        {
            name = newName;
        }
        else
        {
            cout << "Please enter 3 characters or more than 3 letters" << endl;
        }
    }
    void setPhoneNmbr(int newPhoneNmbr)
    {
        if (newPhoneNmbr > 0)
        {
            phoneNmbr = newPhoneNmbr;
        }
        else
        {
            cout << "Please enter a number greater than 0" << endl;
        }
    }
    void print()
    {
        cout << "Name: " << name << endl;
        cout << "Phone Number: " << phoneNmbr << endl;
    }

    string getName()
    {
        return name;
    }
    int getPhoneNmbr()
    {
        return phoneNmbr;
    }
};

int main()
{
    Customer cstmr1("Yasemin", 1234);
    cstmr1.print();
    return 0;
}
