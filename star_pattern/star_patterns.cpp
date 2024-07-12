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
void pattern6(int n){
    for(int i = 0; i < n; i ++){
        for(int j =  n - i - 1; j != 0; j-- ){
            cout << " ";
        }
        for(int j = 0; j < i*2 +1; j++){
            cout << "*";
        }
        for(int j =  n - i - 1; j != 0; j-- ){
            cout << " ";
        }
        cout << "\n";
        
}
}
void pattern7(int n){
    for(int  i = 0; i < n; i ++){
        for(int j = i ; j >= 0 ; j-- ){
            cout << " ";
        }
        for(int j = 2* i ; j < (2*n-1) ; j++){
            cout << "*";
        }
       for(int j = i ; j >= 0 ; j-- ){
            cout << " ";
        }
        cout << endl;
        
}
}



int main(){
    // call any pattern function

}