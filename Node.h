#include<iostream>
using namespace std;
template<typename T>
class Node{
    public:
        T value;
        Node<T>*m_pSig;
    public:
        Node(T value){
            this->value=value;
            this->m_pSig=0;
        }
};