#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

void ReadSeq(vector<int>*p){
    system("CLS");
    int inp;
    do{
        cout << "Introduce a number:";
        cin >> inp;
        if(inp!=0){
            p->push_back(inp);
        }
    }while(inp!=0);
}
void WriteSeq(vector <int>*p){
    system("CLS");
    cout << "Sequence:\n";
    int index = (p->size())-1;
    int indexRefresh = 0;
    for(int number: *p) {
        if (indexRefresh == index) {
            cout << number << endl;
        } else {
            cout << number << ", ";
        }
        indexRefresh++;
    }
    system("PAUSE");
}
void MaxElement(vector<int>*p){
    system("CLS");
    cout << "The maximum number of sequence is: ";
    int MaxEle = *max_element(p->begin(),p->end());
    cout << MaxEle << endl;
    system("PAUSE");
}
void MinElement(vector<int>*p){
    system("CLS");
    cout << "The minimum number of sequence is: ";
    int MinEle = *min_element(p->begin(), p->end());
    cout << MinEle << endl;
    system("PAUSE");
}
void AverageValue(vector<int>*p){
    system("CLS");
    double media=0;
    for(int number:*p){
        media += number;
    }
    media = (double) media/p->size();
    cout << "The average value of sequence is: " << media << endl;
    system("PAUSE");
}
void CheckEven(vector<int>*p){
    system("CLS");
    bool Even = false;
    for(int number:*p){
        if(number % 2 == 0){
            Even = true;
            break;
        }
    }
    if(Even){
        cout << "The sequence have even numbers\n";
    }else{
        cout << "The sequence is made up of numbers odd\n";
    }
    system("PAUSE");
}
void ascedingOrder(vector<int>*p){
    system("CLS");
    sort(p->begin(),p->end());
    cout << "Asceding order completed!\n";
    system("PAUSE");
}
void Search(vector<int>*p){
    system("CLS");
    int inp;
    bool Finded=false;
    do{
        cout << "Enter the value you want to search for:";
        cin >> inp;
    }while(inp!=0);

    Finded = binary_search(p->begin(),p->end(),inp);
    cout << "The number "<< inp;
    if(Finded){
        cout << "was finded\n";
    }else{
        cout << "wasn't finded\n";
    }
    system("PAUSE");
}
void menu(){
    system("CLS");
    cout << "Analysis of sequence of interger numbers\n"
         << "1 - Read a sequence\n"
         << "2 - Write the sequence in the screen\n"
         << "3 - Calculate the maximum value\n"
         << "4 - Calculate the minimum value\n"
         << "5 - Calculate the average value\n"
         << "6 - Detect if the sequence is constituted by only even values\n"
         << "7 - Order the sequence in asceding order\n"
         << "8 - Search the sequence for a value\n"
         << "9 - End program\n";
}
int main(){
    vector<int> List;
    while(true){
        int Choice;
        menu();
        cout << "Option->";
        cin >> Choice;
        switch (Choice) {
            case 1:
                ReadSeq(&List);
                break;
            case 2:
                WriteSeq(&List);
                break;
            case 3:
                MaxElement(&List);
                break;
            case 4:
                MinElement(&List);
                break;
            case 5:
                AverageValue(&List);
                break;
            case 6:
                CheckEven(&List);
                break;
            case 7:
                ascedingOrder(&List);
                break;
            case 8:
                Search(&List);
                break;
            case 9:
                return 0;
            default:
                system("CLS");

        }
    }
}