#include <iostream>

using namespace std;

int main(){
    double sum = 0 , x = 2;
    while(x<=69){
        sum += 1/x;
        x++;
    }
    cout << sum;
}