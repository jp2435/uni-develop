#include <iostream>
#include <algorithm>

using namespace std;
int Max3(int a,int b,int c){
    return max({a,b,c});
}
int main(){
    int a,b,c;
    cout << "Find out which of the 3 is the biggest" << endl;
    cout << "a:";
    cin >> a;
    cout << "b:";
    cin >> b;
    cout << "c:";
    cin >> c;

    cout << "The Maximum number is " << Max3(a,b,c) << endl;
    return 0;
}
