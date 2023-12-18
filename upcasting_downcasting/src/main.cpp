#include "upcastingDowncasting.h"

int main()
{
    Employee *emp1;
    Manager mng("Yasemin", "Deniz", 3500, "Software");
    emp1 = &mng;
    emp1->displayInformation();
    // 8.satırdaki şekilde çağırdığımızda Employee sınıfının displayInformation fonksiyonunu çağrıyor.

    mng.displayInformation();
    // mng nesnesi üzerinden çağırdığımızda manager sınıfının displayInformation fonksiyonunu çağırır.
    // upcasting işlemi nedir?
    // miras alarak oluşturduğumuz yeni bir sınıftan oluşturduğumuz nesneyi base sınıfın pointerı ile base sınıfın pointerı ile yönetme işlemidir.güvenlidir.
    
    cout << "--------------------------" << endl;

    Employee emp("Yasemin", "Ozturk", 4000);
    Employee *emp2 = &emp;

    Manager *mng2 = (Manager *)(emp1);
    Manager *mng3 = (Manager *)(emp2);

    // her yönetici bir çalışandır o yğzden upcasting işleminde sorun çıkmadı. ama her çalışan bir yönetici değildir.
    // bu yüzden çalışanın bilgilerini yönetici sınıfının pointerına çalıştım. olmayan bir bilgiyi atamaya çalıştık.
    cout << mng3->mngDepartment << endl;

    cout << "--------------" << endl;
    emp1->displayInformation();
    mng2->displayInformation();

    return 0;
}
