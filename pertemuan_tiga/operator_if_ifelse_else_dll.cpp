#include <iostream>
using namespace std;

int main(){
    system ("cls");
    int x;

    cout << "Masukkan nilai : " ;
    cin >> x;
    
    //  // if statement
    // if (x > 75)
    // {
    //     cout << "anda lulus" << endl;
    // }

    // // if else statement
    // if (x > 75) {
    //     cout << "anda lulus" << endl;
    // } else {
    //     cout << "anda kurang ajar" << endl;
    // }

    // // if else if statement 
    // string lampu;
    // cout << "kondisi : ";
    // getline(cin, lampu);

    // if ( lampu == "hijau") {
    //     cout << "silahkan jalan"<< endl;
    // } else if (lampu == "kuning") {
    //     cout << "Berhati - hati "<< endl;
    // } else if (lampu == "merah"){
    //     cout << "Berhenti" << endl;
    // } else {
    //     cout << "Nilai invalid!" << endl;
    // }

    // // nested if statement
    // if (x > 75) {
    //     cout << "anda lulus" << endl;
    //     if (x == 100){
    //         cout << "nilai anda sempurna" << endl;
    //     }
    // } else {
    //     cout << "anda tidak lulus " << endl;
    // }

    // // switch case statement
    // switch (x) {
    //     case 1 : 
    //     cout << "senin" << endl;
    //     break;
    //     case 2 :
    //     cout << "selasa" << endl;
    //     break;
    //     case 3 :
    //     cout << "rabu" << endl;
    //     break;
    //     case 4 :
    //     cout << "kamis" << endl;
    //     break;
    //     case 5 :
    //     cout << "jumat" << endl;
    //     break;
    //     default :
    //     cout << "Libur" << endl;
    //     break;
    // }

    // //SWITCH RANGE
    // cout << "Masukkan nilai: "; cin >> x;
    // switch (x) {
    //     case 85 ... 100: cout << "A\n"; break;
    //     case 80 ... 84: cout << "B\n"; break;
    //     case 70 ... 79: cout << "C\n"; break;
    //     case 20 ... 69: cout << "D\n"; break;
    //     case 0 ... 19: cout << "E\n"; break;
    //     default: cout << "Invalid\n"; break;
    // }

    // Ternery operator
    string cek = (x % 2 == 0 ) ? "Genap" : "Ganjil";
    cout << x << " itu adalah bilangan " << cek << endl;
}
