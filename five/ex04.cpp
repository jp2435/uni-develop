#include <iostream>
#include <algorithm>

using namespace std;
int Max2(int a,int b){
    return max(a,b);
}

int main(){
    int a,b;
    cout << "Find the maximum number" << endl;
    cout << "a:";
    cin >> a;
    cout << "b:";
    cin >> b;
    cout << "The Maximum number is " << Max2(a,b) << endl;
    return 0;
}
