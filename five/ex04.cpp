#include <iostream>
#include <algorithm>

using namespace std;
int MaxFunc(int a,int b){
    return max(a,b);
}

int main(){
    int a,b;
    cout << "Find the maximum number" << endl;
    cout << "a:";
    cin >> a;
    cout << "b:";
    cin >> b;
    cout << "The Maximum number is " << MaxFunc(a,b) << endl;
    return 0;
}
