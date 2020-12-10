#include <iostream>
#include <string>
using namespace std;

int main() {
    int min, max, correct = 0, counter = 0;
    char other;
    char letter;
    string password;

//Part 1
    // while(cin){
    //     cin >> min >> other >> max >> letter >> other >> password;
    
    //     for(char c: password){
    //         if(c == letter){
    //             counter ++;
    //         }
    //     }
    //     if(counter >= min && counter <= max) correct ++;
    //     counter = 0;
    // }

    bool flag1 = false;
    bool flag2 = false;
    while(cin){
        cin >> min >> other >> max >> letter >> other >> password;
    
        if(password[min-1] == letter) flag1 = true;
        if(password[max-1] == letter) flag2 = true;

        if(flag1 && !flag2 || flag2 && !flag1){
            correct ++;
        }

        flag1 = false;
        flag2 = false;
    }
    cout << correct;
}