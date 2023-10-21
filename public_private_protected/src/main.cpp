#include <iostream>
using namespace std;

class A{
public:
    int x;
};

class B{
protected:
    int y;
};

class C{
private:
    int z;
    // bu z degerini sadece bu class icerisinde degistirebiliriz.
public:
    void setZ(int yeni){
        z = yeni;
    }
    void getZ(){
        cout<<z<<endl;
    }
};

class D:public A,public B,public C{
public:
    D(){
        y = 25;
    }
public:
    void getY(){
        cout<<y<<endl;
    }
};

// public olunca her yerden erisim var.
// protected olunca sadece miras alarak erisim var.(kendi icerisinde de erisiliyor)
// private sadece kendi class ı icerisinde o degere ulasabiliriz.


int main()
{
    D objectD;

    objectD.x = 12;
    cout<<objectD.x<<endl;

    objectD.getY();

    objectD.setZ(230);
    objectD.getZ();

    return 0;

}

