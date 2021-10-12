#include<iostream>
#include "conio.h"
#include "CircularSimpleLinkedList.h"
using namespace std;
int main(){
    CircularSimpleLinkedList<int>testList;
    int count=1;
    while(count<=9)
        testList.pushBackRecursive(count++);
    count=1;
    testList.print();
    cout<<"La longitud de la lista es "<<testList.getLongitud()<<endl;
    cout<<"Borrando el ultimo elemento: "<<endl;
    testList.popBack();
    testList.print();
    cout<<"La longitud de la lista es "<<testList.getLongitud()<<endl;
    cout<<"Borrando el ultimo elemento: "<<endl;
    testList.popBack();
    testList.print();
    cout<<"La longitud de la lista es "<<testList.getLongitud()<<endl;
    cout<<"Borrando el primer elemento: "<<endl;
    testList.popFront();
    testList.print();
    cout<<"La longitud de la lista es "<<testList.getLongitud()<<endl;
    cout<<"Borrando el primer elemento: "<<endl;
    testList.popFront();
    testList.print();
    cout<<"La longitud de la lista es "<<testList.getLongitud()<<endl;
    for(int i=0;i<40;i++)
        cout<<" - ";
    cout<<endl;
    cout<<"La lista 2"<<endl;
    CircularSimpleLinkedList<int>testList2;cout<<"Borrando el primer elemento: "<<endl;
    while(count<=10)
        testList2.pushFront(count++);
    testList2.print();
    cout<<"La longitud de la lista es "<<testList2.getLongitud()<<endl;
    cout<<"Borrando el primer elemento: "<<endl;
    testList2.popFront();
    testList2.print();
    cout<<"La longitud de la lista es "<<testList2.getLongitud()<<endl;
    cout<<"Borrando el ultimo elemento: "<<endl;
    testList2.popBack();
    testList2.print();
    cout<<"La longitud de la lista es "<<testList2.getLongitud()<<endl;
    /*int a;
    for(int i=0;i<3;i++){
        cout<<"Ingrese el numero a buscar: ";
        cin>>a;
        cout<<endl;
        (testList2.find(a))?cout<<"Se encontro el numero "<<a<<endl:cout<<"No se encontro el numero "<<a<<endl;
        
    }*/
    int a;
    for(int i=0;i<3;i++){
        cout<<"Ingrese el numero a buscar: ";
        cin>>a;
        cout<<endl;
        (testList2.findRecursive(a))?cout<<"Se encontro el numero "<<a<<endl:cout<<"No se encontro el numero "<<a<<endl;
        
    }
    getch();
    return 0;
}