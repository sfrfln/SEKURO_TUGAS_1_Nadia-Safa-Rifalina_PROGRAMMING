#pragma once 
#include "mcu.hpp"



class mcu_walker:public MCU{
//[TODO]:Tambahkan atribut-atribut yang belum lengkap agar class dapat di-contruct
private:
public:
    mcu_walker(float cpu_speed,int memory,string os,string nama,int volt,int motor_speed,int rotation);
    void rotate(int rotation);
    void increase_speed(int speed);
    void showSpek();
    void nambah_volt(int penambahan_voltase);
    void ganti_os(string new_os);
    ~mcu_walker();
};
