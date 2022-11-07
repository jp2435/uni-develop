//Marta Oliveira 114259

#include <iomanip>
#include <iostream>
using namespace std;

float calcularMedia(int valores[], unsigned int nVal);
void compararRef(int refVal, int valores[], unsigned int nVal);

int main(){
    // a)
    cout << "a)\n"
            "Nome: Marta Oliveira\n"
            "NMec: 114259" ;

    // b)
    cout << "\nb)\n";
    int N;
    do{
        cout << "Introduza o valor de N (tem de estar entre 8 e 12): " ;
        cin >> N ;
    }while((N<8)||(N>12));
    cout << "N=" << N ;

    // c)
    cout << "\nc)\n";
    int array[N];
        for (int i=0 ; i<N ; i++){
        cout << "Introduza val[" << i << "] (valor inteiro): " ;
        cin >> array[i];
        if (array[i]<=0)
            return 0;
    }

    // d)
    cout << "d)";
    for (int i=0 ; i<N ; i++){
        cout << "\n"  << setw(6) << right << array[i] << setw(5) << " " ;
        if ((0<=array[i])&&(array[i]<=20))
            cout << "Muito Bom";
        else if ((21<=array[i])&&(array[i]<=35))
            cout << "Bom";
        else if ((36<=array[i])&&(array[i]<=45))
            cout << "Regular";
        else if ((46<=array[i])&&(array[i]<=70))
            cout << "Fraco";
        else if (70<array[i])
            cout << "Mau";
    }

    // e)
    cout << "\ne)\n";
    cout << setw(24) << left << "Classificação"  << "# occor.\n"
         << setw(32) << setfill('-') << "-" << setfill(' ');
    int Mau=0 , Fraco=0 , Regular=0 , Bom=0 , Muito_Bom=0 ;
    for (int i=0 ; i<N ; i++){
        if (70<array[i])
            Mau++ ;
        else if ((46<=array[i])&&(array[i]<=70))
            Fraco++ ;
        else if ((36<=array[i])&&(array[i]<=45))
            Regular++ ;
        else if ((21<=array[i])&&(array[i]<=35))
            Bom++ ;
        else if ((0<=array[i])&&(array[i]<=20))
            Muito_Bom++ ;
    }
    cout << "\n" << setw(32) << left << "Mau" << Mau ;
    cout << "\n" << setw(32) << left << "Fraco" << Fraco ;
    cout << "\n" << setw(32) << left << "Regular" << Regular ;
    cout << "\n" << setw(32) << left << "Bom" << Bom ;
    cout << "\n" << setw(32) << left << "Muito Bom" << Muito_Bom ;

    // f)
    cout << "\nf)\n";
    cout << "Concentração média: "  << setprecision(1) << fixed << calcularMedia(array,N); ;

    // g)
    cout << "\ng)\n";
    int refVal ;
    cout << "Introduza o valor de referência: ";
    cin >> refVal ;
    compararRef( refVal, array, N);
}


float calcularMedia(int valores[], unsigned int nVal){         // função alínea f)
    float sum=0 ;
    for (int i=0 ; i<nVal ; i++){
        sum+=valores[i] ;
    }
    return (sum/nVal) ;
}

void compararRef(int refVal, int valores[], unsigned int nVal){        // função alínea g)
    for (int i=0 ; i<nVal ; i++){
        cout << setw(6) << right << valores[i] << setw(5) << " " ;
        if (valores[i]<=refVal){
            cout << "Não excede\n";}
        else{
            cout << "Excede\n";}                     
    }
}