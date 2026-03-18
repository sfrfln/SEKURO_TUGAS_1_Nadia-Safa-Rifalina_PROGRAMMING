#include "mcu.hpp"
#include "mcu_cam_controller.hpp"
#include "mcu_walker.hpp"
#include "mcu.hpp"

int main() {
    cout << "--- Inisialisasi Sistem MCU ---" << endl;
    mcu_cam_controller* cam1 = new mcu_cam_controller(2.4, 1024, "Linux Embedded", "Cam-X1", 5, "Person");
    mcu_walker* walk1 = new mcu_walker(1.8, 512, "FreeRTOS", "Walker-A1", 12, 100, 90);

    cout << "\n--- Testing Fitur Kamera ---" << endl;
    cam1->showSpek();
    cam1->detect_other_object("OrangUtan",true);
    cam1->detect_other_object("Kelapa",false);
    cam1->nambah_volt(1);

    cout << "\n--- Testing Fitur Walker ---" << endl;
    walk1->showSpek();
    walk1->rotate(180);
    walk1->increase_speed(50);
    walk1->ganti_os("Ubuntu IoT");
    vector<MCU*> daftar_mcu;
    daftar_mcu.push_back(cam1);
    daftar_mcu.push_back(walk1);

    for (MCU* m : daftar_mcu) {
        cout << "Memanggil showSpek() dari pointer MCU..." << endl;
        m->showSpek();
    }

    cout << "\n--- Membersihkan Memori (Trigger Destruktor) ---" << endl;
    for (MCU* m : daftar_mcu) {
        delete m; 
        cout << "-----------------------" << endl;
    }

    return 0;
}