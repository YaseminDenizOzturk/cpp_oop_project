#include <iostream>
using namespace std;

class Student
{
public:
    string studentName, studentSurname, studentID; // uye degiskenler (member variable)
    void displayInformation();                     // uye fonksiyon (member function)
};
void Student::displayInformation()
{
    // student sınıfının displayInformation fonksiyonu olduğu için :: şeklinde bunu belirttik başka bir sınıfın da yanı isimli fonksiyonu olabilirdi.
    cout << "Name:" << studentName << endl;
    cout << "Surname:" << studentSurname << endl;
    cout << "StudentID:" << studentID << endl;
}

int main(int argc, char *argv[])
{
    Student std1;
    Student std2;

// asagidaki verileri string olarak atiyorum cünkü bun degiskenleri string olarak tanimlamistim.
// erisim icin nokta operatoru kullanilir***
    std1.studentName = "Yasemin";
    std1.studentSurname = "Ozturk";
    std1.studentID = "100";

    std1.displayInformation();

    std2.studentName = "Deniz";
    std2.studentSurname = "Ozturk";
    std2.studentID = "101";
    std2.displayInformation();
    // std1 ve std2 kendi uye degiskenlerine sahip olduklari icin birbirlerinden etkilenmezler.


    return 0;
}
