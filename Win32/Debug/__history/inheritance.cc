#include<iostream>
using namespace std;
class parents{
    public:
        int x;
        int y;
        void enterNum(){
            cout<<"Enter x: ";
            cin>>x;
        }
};
class children: public parents{
    public:
        void display(){
            enterNum();
            cout<<x;
        }
};
int main(){
    children ch;
    ch.display();
    return 0;
}