// Programa executado em Terminal externo
#include <iostream>
#include <cmath>
using namespace std;

double bmi(double weight,double height){
    double res = weight/pow(height,2);
    return res;
}

int main() {
    bool Verification=true;
    double inpW,inpH;
    do{
        cout << "BMI Calculator (0 to exit)" << endl;
        cout << "Insert your weight(kg):";
        cin >> inpW;
        cout << "Insert your height(meters):";
        cin >> inpH;

        if(inpW == 0 || inpH == 0){
            return 0;
        }else if(inpW>0 && inpH >0){
            break;
        }
    }while(true);

    double BMI = bmi(inpW, inpH);
    cout << "Your BMI is: " << BMI << "\nLevel ";
    if(BMI < 18.5){
        cout << "Underweight";
    }else if(BMI <=25){
        cout << "Normal";
    }else if(BMI < 30){
        cout << "Overweight";
    }else {
        cout << "Obese";
    }
    return 0;
}
