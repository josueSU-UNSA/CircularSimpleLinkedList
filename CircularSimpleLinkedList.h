#include<iostream>
#include "Node.h"
using namespace std;
template<typename T>
class CircularSimpleLinkedList{
    private:
        Node<T>*m_pHead;
        int longitud;
    public:
        CircularSimpleLinkedList(){
            this->m_pHead=0;
            this->longitud=0;
        }
        int getLongitud(){
            return this->longitud;
        }
        void pushBack(T value){
            if(!this->m_pHead){
                this->m_pHead=new Node<T>(value);
                this->m_pHead->m_pSig=this->m_pHead;
                this->longitud++;
                return;
            }
            Node<T>*pAux=this->m_pHead;
            while(pAux->m_pSig!=this->m_pHead){
                pAux=pAux->m_pSig;
            }
            pAux->m_pSig=new Node<T>(value);
            pAux->m_pSig->m_pSig=this->m_pHead;
            this->longitud++;
        }

        void pushBackRecursive(Node<T>*pAux,T value){

            if(!pAux){
                this->m_pHead=new Node<T>(value);
                this->m_pHead->m_pSig=this->m_pHead;
                this->longitud++;
                return;
            }

            if(pAux->m_pSig==this->m_pHead){
                pAux->m_pSig=new Node<T>(value);
                pAux->m_pSig->m_pSig=this->m_pHead;
                this->longitud++;
                return;
            }

            else pushBackRecursive(pAux->m_pSig,value);

        }

        void pushBackRecursive(T value){
            pushBackRecursive(this->m_pHead,value);
        }

        void popBack(){
            if(!this->m_pHead)return;
            else if(this->m_pHead->m_pSig==this->m_pHead){
                delete this->m_pHead;
                this->m_pHead=0;
                this->longitud--;
                return;
            }
            Node<T>*pAux=this->m_pHead;
            while(pAux->m_pSig->m_pSig!=this->m_pHead){
                pAux=pAux->m_pSig;
            }
            delete pAux->m_pSig;
            pAux->m_pSig=this->m_pHead;
            this->longitud--;
        }

        void pushFront(T value){
            if(!this->m_pHead){
                this->m_pHead=new Node<T>(value);
                this->m_pHead->m_pSig=this->m_pHead;
                this->longitud++;
                return;
            }
            Node<T>*pAux=this->m_pHead;
            while(pAux->m_pSig!=this->m_pHead){
                pAux=pAux->m_pSig;
            }
            pAux->m_pSig=new Node<T>(value);
            pAux->m_pSig->m_pSig=this->m_pHead;
            this->m_pHead=pAux->m_pSig;
            this->longitud++;
        }

        void popFront(){
            if(!this->m_pHead)return;
            else if(this->m_pHead->m_pSig==this->m_pHead){
                delete this->m_pHead;
                this->m_pHead=0;
                this->longitud--;
                return;
            }
            Node<T>*pAux=this->m_pHead;
            Node<T>*pAuxSigHead=this->m_pHead->m_pSig;
            while(pAux->m_pSig!=this->m_pHead)
                pAux=pAux->m_pSig;
            delete pAux->m_pSig;
            this->m_pHead=pAuxSigHead;
            pAux->m_pSig=this->m_pHead;
            this->longitud--;
        }

        void print(){
            if(!this->m_pHead)return;
            Node<T>*pAux=this->m_pHead;
            do{
                cout<<pAux->value<<" -> ";
                pAux=pAux->m_pSig;
            }
            while (pAux!=this->m_pHead);
            cout<<endl;
        }
        bool find(T value){
            if(!this->m_pHead)return false;
            Node<T>*pAux=this->m_pHead;
            do{
                if(pAux->value==value)return true;
                pAux=pAux->m_pSig;
            }
            while (pAux!=this->m_pHead);
            return false;
        }
        bool findRecursive(Node<T>*pAux,T value){
            if(!this->m_pHead)return false;
            else if(pAux->value==value){
                return true;
            }
            else if(pAux==this->m_pHead){
                return (pAux->value==value);
            }
            else findRecursive(pAux->m_pSig,value);
        }
        bool findRecursive(T value){
            findRecursive(this->m_pHead->m_pSig,value);
        }
};