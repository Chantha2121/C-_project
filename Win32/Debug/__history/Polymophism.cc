#include<iostream>
using namespace std;
class King{
    public:
        // Overloading Functions
        void sum(int a, int b){
            int res = a + b;
            cout << res << endl;
        }
        void sum(int a, int b, int c){
            int res = a + b + c;
            cout << res << endl;
        }
};
class Overloading{
    private:
        int n1;
        int n2;
    public:
        Overloading(int a, int b){
            this->n1 = a;
            this->n2 = b;
            int res = n1 - n2;
            cout<<"res = "<<res<<endl;
        }
        void operator-(){
            n1 = -n1;
            n2 = -n2;
        }
        void display(){
            cout<<"n1 = "<<n1<<endl;
            cout<<"n2 = "<<n2<<endl;
        }
};
class Parent{
    public:
        void print(){
            cout<<"This is the base class"<<endl;
        }
};
class Child:public Parent{
    public:
        void print(){
            cout<<"This is the derivde class"<<endl;
        }
};
int main(){
    King a;
    a.sum(1,9);
    a.sum(1,10,3);
    Overloading over(12,3);
    -over;
    over.display();
    Child child;
    child.print();
}