#include "upcasting_downcasting.h"

using namespace std;

int main(int argc, char *argv[])
{
    Manager* mng = new Manager("Yasemin","Deniz",69500,"Software");
    Employee* emp = mng;
    Employee* emp2 = new Manager("Derya","Deniz",60000,"Software");


    delete emp;
    delete emp2;

    return 0;
}
