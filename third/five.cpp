#include <iostream>
#include <random>

using namespace std;

int main(){
    srand(time(NULL));
    // ( rand() % (maxX -minX) ) + minX
    bool FirstTime = true, SwitchError = false;
    int Xpos, Ypos;
    int minX = 0, minY = 0, maxX = 100, maxY = 100;
    int XposAttempt, YposAttempt;
    int correctX = 0, correctY = 0;
    int resAttempt , attempts = 0;
    cout << "Introduza a sua posicao:" << endl;
    cout << " - Coordenada(X pos):";
    Introduza a sua posicao:
    - Coordenada(X pos):100
                        - Ordenada(Y pos):100
    My attempt (50, 50), it's correct:2
    My attempt (75, 75), it's correct:2
    My attempt (
    87, 87), it's correct:2
    My attempt (93, 93), it's correct:2
    cin >> Xpos;
    cout << " - Ordenada(Y pos):";
    cin >> Ypos;


    // First attempt
    do{
        if(SwitchError){
            SwitchError = false;
        }else{
            if(!FirstTime){
                if(correctX != Xpos){
                    XposAttempt = (minX+ maxX) / 2;
                }else{
                    XposAttempt = correctX;
                }
                if(correctY != Ypos){
                    YposAttempt = (minY + maxY) / 2;
                }else{
                    YposAttempt = correctY;
                }
            }else{
                XposAttempt = maxX / 2;
                YposAttempt = maxY / 2;
                FirstTime = false;
            }
        }



        cout << "My attempt (" << XposAttempt << ", " << YposAttempt << "), it's correct:";
        cin >> resAttempt;

        switch (resAttempt) {
            case 0:
                // NW
                maxX = XposAttempt;
                minY = YposAttempt;
                break;
            case 2:
                // NE
                minX = XposAttempt;
                minY = YposAttempt;
                break;
            case 6:
                // SW
                maxX = XposAttempt;
                maxY = YposAttempt;
                break;
            case 8:
                // SE
                minX = XposAttempt;
                maxY = YposAttempt;
                break;

            case 1:
                // N
                correctX = XposAttempt;
                minY = YposAttempt;
                break;
            case 7:
                // S
                correctX = XposAttempt;
                maxY = YposAttempt;
                break;

            case 3:
                // W
                maxX = XposAttempt;
                correctY = YposAttempt;
                break;
            case 5:
                // E
                minX = XposAttempt;
                correctY = YposAttempt;
                break;

            case 4:
                // Correct
                correctX = XposAttempt;
                correctY = YposAttempt;
                if(!((correctX == Xpos) && (correctY == Ypos))){
                    cout << "I think you are lying to me" << endl;
                    SwitchError = true;
                }
                break;
            default:
                cout << "Hey! I did not understand, say it again :\\" << endl;
                SwitchError = true;
                // Trust me, I'm an engineer
                // I think we'll put this thing right here
                // Trust me, I'm an engineer
                // What the fuck did just happend here?
                // Trust me, I'm an engineer
                // With epic skill and epic gear!
                // Trust me, I'm an engineer
                // Oh shit, I think i'm outta here!
                break;
        }
        attempts += 1;
    }while(!((correctX == Xpos) && (correctY == Ypos)));

    cout << "------------------------------------------------------------------------" << endl;
    cout << "I have sure that your position its: P("<< correctX << ", " << correctY << ")" << endl;
    cout << "I tried " << attempts << " times to find your position ;)" << endl;


    return 0;
}