#pragma once

#include "mcu.hpp"

class mcu_cam_controller:public MCU{
private:
    string obj_detected;
public:
    static int count_detected_obj;
    mcu_cam_controller(float cpu_speed,int memory,string os,string nama,int volt,string obj_detected);
    void detect_other_object(string other, bool moving) ;
    void showSpek();
    void nambah_volt(int penambahan_voltase);
    void ganti_os(string new_os);
    ~mcu_cam_controller();
};