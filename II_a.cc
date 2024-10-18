#include<iostream>
using namespace std;
void for_loop(int i, int condition){
    for(i ; i < condition ; i++){
        cout<<i<<" ";
    }
}
int main(){
    cout<<"Enter the initialization of loop: ";
    int i,c;
    cin>>i;
    cout<<"Enter the condition of loop: ";
    cin>>c;
    for_loop(i,c);
    return 0;
}