#include <iostream>
using namespace std;

class Customer
{
private:
    string name;
    int phoneNmbr;

public:
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
    Customer cstmr1;
    cstmr1.setName("Yasemin");
    cstmr1.setPhoneNmbr(123);
    cout << cstmr1.getName() << " " << cstmr1.getPhoneNmbr();
    return 0;
}
