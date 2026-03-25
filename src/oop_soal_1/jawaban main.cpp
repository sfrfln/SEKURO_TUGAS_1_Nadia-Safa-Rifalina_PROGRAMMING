#include "core_mcu.hpp"

int main(){
    Core_MCU *device1 = new Core_MCU(1.4,512,"ubuntu 22.04","Raspberry Pi",5);
    Core_MCU *device2 = new Core_MCU(4.6,16512,"windows_11","intel_nuc",5);
    cout << "Ambil OS [nama OS] : "<< device1->get_os() << endl;
    device1->nambah_volt(2);
    device2->ganti_os("ubuntu 24.04");
    device1->showSpek();
    device2->showSpek();
    device1->~Core_MCU();
    device2->~Core_MCU();
    return 0;
}
