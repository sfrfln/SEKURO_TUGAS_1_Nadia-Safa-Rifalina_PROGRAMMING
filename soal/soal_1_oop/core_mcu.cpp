#include "core_mcu.hpp"
Core_MCU(float cpu_speed,int memory,string os,string nama,int volt){
cpu_speed = cpu;
memory = mem;
os = os1;
nama = nama_device;
volt = volt1;

cout << "[Core MCU] : MCU utama yang bernama" << nama << " telah dibuat" << endl;
}
void Core_MCU::showSpek(){
    cout << "[SPEK DEVICE] : [NAMA DEVICE] : " << nama << " | [CPU CLOCK] : " << cpu_speed << " | [MEMORY] : " << memory << " | [OS] : " << os << endl;
}
string Core_MCU::get_os(){
    return os;
}
void Core_MCU::nambah_volt(int penambahan_voltase){
    volt += penambahan_voltase;
    cout << "[Core MCU] : MCU utama yang bernama" << nama << " Telah ditambah voltasenya menjadi = " << volt << endl;
}
void Core_MCU::ganti_os(string new_os){
    os = new_os;
    cout << "[Core MCU] : MCU utama yang bernama" << nama << " Telah diganti OS nya menjadi = " << os << endl;
}
Core_MCU::~Core_MCU(){
    cout << "[Core MCU] : MCU utama yang bernama " << nama << " telah dihapus" << endl;
}
