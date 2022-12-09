#include <iostream>
using namespace std;

#define ln                 "\n"
#define lp(i,k,n)          for(int i=k; i<n; i++)

class bit_set{
    public:

        bit_set(int size){
            this -> size = size;
            s = string(size,'0');
        }

        void fix(int idx){
            s[--idx]='1';
        }

        void unfix(int idx){
            s[--idx]='0';
        }

        void flip(){
            lp(i,0,size){
                if(s[i]=='0') s[i]='1';
                else s[i]='0';
            }
        }

        void operator ~(){
            this -> flip();
        }

        void print(){
            cout<<s<<ln;
        }

    private:
        string s;
        int size=0;
};


int main()
{
    bit_set b(5);
    b.fix(5);
    b.print();
    b.unfix(5);
    b.print();
    ~b;
    b.print();
   return 0;
}
