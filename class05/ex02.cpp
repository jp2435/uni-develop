#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

double funcPoli(double x){
    double res = pow(x,2) + 2*x +3;
    return res;
}

int main(){
    double x;
    bool Verification = true;
    cout << setw(15)<< left <<"P(x)=x^2+2x+3" << setw(10) << right << "x=[0,2]" << endl;
    while(Verification){
        cout << "x:";
        cin >> x;
        if(x>=0 && x<=2){
            Verification = false;
        }
    }
    double y = funcPoli(x);
    cout << "P(" << x << ")="<< y << endl;
    return 0;
}