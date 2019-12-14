#include <iostream>

#include "Comptage.h"
#include "FilsComptage.h"

int Comptage::nbR=0;
int Comptage::nbCreate=0;
static void test1();
static void test2();
static void test3();
static void test4();

int main() {
    std::cout << "Hello, World!" << std::endl;
    cout << endl;
    test1();
    cout << "Nombre restant : " << Comptage::nbR << endl;
    cout << "Nombre Crée : " << Comptage::nbCreate << endl;

    Comptage::nbR=0;
    Comptage::nbCreate=0;

    cout << endl;
    test2();
    cout << "Nombre restant : " << Comptage::nbR << endl;
    cout << "Nombre Crée : " << Comptage::nbCreate << endl;

    Comptage::nbR=0;
    Comptage::nbCreate=0;

    cout << endl;
    test3();
    cout << "Nombre restant : " << Comptage::nbR << endl;
    cout << "Nombre Crée : " << Comptage::nbCreate << endl;

    Comptage::nbR=0;
    Comptage::nbCreate=0;

    cout << endl;
    test4();
    cout << "Nombre restant : " << Comptage::nbR << endl;
    cout << "Nombre Crée : " << Comptage::nbCreate << endl;
    return 0;
}

static void test1()
{
    cout << "Test0" << endl;

    Comptage c1;
}
static void test2()
{
    cout << "Test1" << endl;
    Comptage c1;
    Comptage c2(c1);
}
static void test3()
{
    cout << "Test2" << endl;
    FilsComptage fc1;
    FilsComptage fc2(fc1);
}
static void test4()
{
    cout << "Test3" << endl;
    Comptage *pfc1;
    pfc1=new FilsComptage;
    delete pfc1;
}