#include <iostream>
#include <unordered_map>
using namespace std;

int main(){
    unordered_map<int,int> n;
    for(int i=0;i<5;i++){
        n[i] = i+5;
    }
    for(int i=0;i<5;i++){
        cout<<n[i]<<endl;
    }
    return 0;
}