#include <iostream>

using namespace std;

class Student
{

    string studentName, studentSurname, studentID; // uye degiskenler (member variable)
public:
    void displayInformation(); // uye fonksiyon (member function)

    void setName(string name)
    {
        studentName = name;
    }
    void setSurname(string Surname)
    {
        studentSurname = Surname;
    }
    void setID(string ID)
    {
        studentID = ID;
    }
    void setInformation(string name,string surname,string ID){
        studentName = name;
        studentSurname = surname;
        studentID = ID;
    }
    string getName()
    {
        return studentName;
    }
    string getSurname()
    {
        return studentSurname;
    }
    string getID()
    {
        return studentID;
    }
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
    // std1.studentName = "Yasemin";
    // std1.studentSurname = "Ozturk";
    // std1.studentID = "100";

    // std1.displayInformation();

    // std2.studentName = "Deniz";
    // std2.studentSurname = "Ozturk";
    // std2.studentID = "101";
    // std2.displayInformation();
    // std1 ve std2 kendi uye degiskenlerine sahip olduklari icin birbirlerinden etkilenmezler.

    std1.setName("Yasemin");
    std1.setSurname("Ozturk");
    std1.setID("100");

    string name = std1.getName();
    string surname = std1.getSurname();
    string ID = std1.getID();

    cout << name << " ";
    cout << surname << endl;
    cout << ID << endl;

    std2.setInformation("Deniz","Ozturk","200");
    std2.displayInformation();

    return 0;
}