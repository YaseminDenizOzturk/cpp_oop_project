#include <iostream>
#include "Person.h"
using namespace std;

int main(int argc, char *argv[])
{
    Person *pArray[] = {new TurkishPerson("Yasemin"), new TurkishPerson("Deniz"), new TurkishPerson("Derya"), new DeutschePerson("Thomas"), new DeutschePerson("Carl")};

    // döngü kullanarak birbirlerine merhaba demelerini sağlayacağız.

    int numberOfPerson = sizeof(pArray) / sizeof(pArray[0]);
    // tüm array in boyutunu bir tanesinin boyutuna bölünce kaç tane eleman olduğunu buluruz.

    for (int i = 0; i < numberOfPerson; i++)
    {
        for (int j = 0; j < numberOfPerson; j++)
        {
            if (i != j)
            {
                pArray[i]->sayHi(*pArray[j]);
            }
        }
        cout << "\n";
    }

    return 0;
}
