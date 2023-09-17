#include <iostream>
using namespace std;

class Customer
{
private:
    string name;
    int phoneNmbr;

public:
    Customer(string name, int phoneNmbr)
    {
        this->name = name;
        this->phoneNmbr = phoneNmbr;
    }
    Customer(string name)
    {
        this->name = name;
        phoneNmbr = 0;
    }
    ~Customer()
    {
        cout << "item deleted" << endl;
    }

    void setName(string name)
    {
        if (name.size() >= 3)
        {
            this->name = name;
        }
        else
        {
            cout << "Please enter 3 characters or more than 3 letters" << endl;
        }
    }
    void setPhoneNmbr(int phoneNmbr)
    {
        if (phoneNmbr > 0)
        {
            this->phoneNmbr = phoneNmbr;
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
    Customer *cstmr1 = new Customer("Yasemin", 1234);
    cstmr1->print();
    delete cstmr1;

    return 0;
}
