#include<iostream>
using namespace std;
int main(){
    char word[26] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
    char str[26];
    cout<<"Enter the string : ";
    cin>>str;
    cout<<"Enter the K: ";
    int k;
    cin>>k;
    int size = sizeof(str)/sizeof(str[0]);
    int fp;
    for(int i = 0; i < size; i++){
        for(int j = 0; j < 26; j++){
            if(str[i] == word[j]){
                fp = (j + k) % 26;
                cout<<word[fp]<<" ";
            }
        }
    }
    return 0;
}
