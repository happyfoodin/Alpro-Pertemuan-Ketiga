#include <iostream>
using namespace std;

int main(){
    system ("cls");
    // int x;

    // cout << "Masukkan nilai : " ;
    // cin >> x;
    
    // // if statement
    // if (x > 75)
    // {
    //     cout << "anda lulus" << endl;
    // }

    // if else statement
    // if (x > 75) {
    //     cout << "anda lulus" << endl;
    // } else {
    //     cout << "anda kurang ajar" << endl;
    // }

    // if else if statement 
    string lampu;
    cout << "kondisi : ";
    getline(cin, lampu);

    if ( lampu == "hijau","Hijau") {
        cout << "silahkan jalan"<< endl;
    } else if (lampu == "kuning") {
        cout << "Berhati - hati "<< endl;
    } else {
        cout << "Berhenti" << endl;
    } 
    
}
