#include "mcu.hpp"
// [TODO] : Implementasikan class robot di file cpp ini
// [TIPS] : Gunakan MCU::<nama methode> untuk mendefinisikan class-nya
void MCU::showSpek() {
    cout << "[BASE MCU] : " << name << " | CPU: " << cpu_speed 
         << "GHz | RAM: " << memory << "MB | OS: " << os 
         << " | Volt: " << volt << "V" << endl;
};