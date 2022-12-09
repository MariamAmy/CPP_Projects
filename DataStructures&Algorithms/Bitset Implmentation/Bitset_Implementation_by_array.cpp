#include <iostream>
using namespace std;


class Bitset{
    public:
        Bitset(int size){
            bits = new bool[size];
            this -> size=size;
            for (int i=0;i<size;i++){
                bits[i]=false;
            }
        }

        void operator ~ (){
            this -> flip();
        }

        void fix(int idx){
            bits[--idx] = true;
        }
        void unfix(int idx){
            bits[--idx] = false;
        }
        void flip(){
            for(int i=0; i<size; i++){
                bits[i] = !bits[i];
            }
        }
        void print(){
            for (int i=0; i<size; i++){
                cout << bits[i];
            }
            cout << endl;
        }


    private:
        bool* bits;
        int size=0;

};

int main()
{
   Bitset xx(10);
   xx.fix(10);
   xx.print();
   ~xx;
   xx.print();
   return 0;
}

