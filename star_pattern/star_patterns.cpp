#include<iostream.h>

using namespace std;

void pattern1(int n){
    for(int i = 0; i < n ; i++){
        for(int j = 0; j <  n ; j++){
            cout << "*";
        }
        cout << "\n;"
    }

void pattern2(int n){
    for(int i = 0; i < n ; i ++){
        for(int j = 0; j <= i; j++){
            cout << "*";
        }
        cout << "\n";
    }
}
void pattern3(int n){
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j <= i; j++){
            cout << j + 1;
        }
        cout << "\n";
    }
}
void pattern4(int n){
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j <= i; j++){
            cout << i + 1;
        }
        cout << "\n";
    }
}
void pattern5(int n){
    for(int i = 0 ; i < n ; i++){
    for(int j = 0 ; j < n - i; j++){
            cout << "*";
        }
        cout << "\n";
    }
}

int main(){
    // call any pattern function

}