#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter the number to check even or odd number : ";
    cin >>num;
    if(num % 2 == 0){
        cout<<num<<" is even number"<<endl;
    }else{
        cout<<num<<" is odd number"<<endl;
    }
}