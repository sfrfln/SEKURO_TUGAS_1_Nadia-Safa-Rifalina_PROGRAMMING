#pragma once
#include "bits/stdc++.h"
using namespace std;

/*[TODO]: Implementasikanlah class berikut didalam file robot.cpp agar main.cpp dapat dijalankan */
class Core_MCU{
private:
    //[TODO]:Buatlah atribute atribute dalam class ini
public:
    Core_MCU(float cpu_speed,int memory,string os,string nama,int volt);
    void showSpek();
    ~Core_MCU();
    void nambah_volt(int penambahan_voltase);
    void ganti_os(string new_os);
    string get_os();
};

