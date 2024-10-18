#include<iostream>
using namespace std;
template<typename T,int length>
class Array{
    T arr[length];
    public:
        void fill(T val){
            for(int i=0; i<length; i++){
                arr[i] = val;
            }
        }
        T& at(int index){
            return arr[index];
        }
};
int main(){
    Array<int,10> array;
    array.fill(4);
    cout<<"Array arr[5]: "<<array.at(5)<<endl;
    Array<string,8> str;
    str.fill("I love you");
    str.at(5) = "fuck you";
    for (int i=0; i<8; i++){
        cout<<"String arr: "<<str.at(i)<<endl;
    }
    return 0;
}