#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

double funcPoli(double x,double a,double b,double c){
    double res = a*pow(x,2) + b*x + c;
    return res;
}

int main(){
    double x,a,b,c;
    bool Verification = true;
    cout << setw(15)<< left <<"P(x)=a^2+bx+c" << setw(10) << right << "x=[0,2]" << endl;
    do{
       cout << "a:";
       cin >> a;
       cout << "b:";
       cin >> b;
       cout << "c:";
       cin >> c;
       cout << "x:";
       cin >> x;
       if(x>=0 && x<=2){
        Verification = false;
       }
    }while(Verification);
    double y = funcPoli(x,a,b,c);
    cout << "P(" << x << ")="<< y << endl;
    return 0;
}