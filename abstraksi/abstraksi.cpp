// abstraksi.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

class AbstraksiKlas {
private: string x, y;

public:

    /*method untuk mengisi nilai
    private member*/
    void setXY(string a, string b) {
        x = a;
        x = b;
    }
    /*menampilkan nilai*/
    void display() {
        cout << "x = " << x << endl;
        cout << "y = " << x << endl;
    }
};

int main()
{
    
}


