#include <iostream>

using namespace std;

int main(){
    double sum = 0 , x = 6;
    while(x<=19){
        sum += 1/x;
        x++;
    }
    cout << sum;
}