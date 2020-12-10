#include <iostream>
#include <vector>
using namespace std;

void part1(vector<int> input){
    for(int i: input){
            for(int j: input){
                if(i + j == 2020){
                    cout << i*j << endl;
                }
            }
        }
}

void part2(vector<int> input){
    for(int i: input){
        for(int j: input){
            for(int k: input){
                if(i + j + k == 2020){
                    cout << i*j << endl;
                }
            }
        }
    }
}



int main(){
    vector<int> input;
    int n;
    while(cin >> n){
        input.push_back(n);
    }

    part1(input);
    part2(input);
}

// Defintetly not the best or fastest solution. Really slow actually. But it was the first thing that I thought of, and was only a few lines.
