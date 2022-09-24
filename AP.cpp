#include <iostream>
using namespace std;

int ap(int n){
    int arith=3*n;
    int sum=arith+7;
    return sum;
}


int main(){
    int n;
    cin>> n;
    cout<<ap(n);
}