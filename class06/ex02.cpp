#include <iostream>

using namespace std;

int cout_alpha(const string &s){
    int nAlpha=0;
    for(char c:s){
        if(isalpha(c) != 0){
            nAlpha++;
        }
    }
    return nAlpha;
}
int main(){
    cout_alpha("Hello");
    return 0;
}