#include <iostream>
#include <vector>
using namespace std;

int whoHasTheMostMoney(vector<vector<int>>& balance) {
    int max_index = 0;
    int max_balance = 0;
    
    for (int i = 0; i < balance.size(); ++i) {
        int total_balance = 0;
        for (int j = 0; j < balance[i].size(); ++j) {
            total_balance += balance[i][j];
        }
        if (total_balance > max_balance) {
            max_balance = total_balance;
            max_index = i;
        }
    }
    
    return max_index;
}

int main() {
    int sum = 100 % 26;
    cout<<sum<<endl; 
    
    return 0;
}
