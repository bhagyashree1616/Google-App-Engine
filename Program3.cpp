#include <iostream>
#include <thread>

using namespace std;

void systemInfo() {
    cout << "\nSystem Information" << endl;
    cout << "Operating System: Simulation Mode" << endl;
    cout << "System Architecture: 64-bit (example)" << endl;
}

void cpuInfo() {
    cout << "\nCPU Information" << endl;
    cout << "Number of CPU cores available: " 
         << thread::hardware_concurrency() << endl;
}

void memoryInfo() {
    cout << "\nMemory Information" << endl;
    cout << "Memory monitoring simulated for cloud dashboard." << endl;
}

int main() {
    int choice;

    while (true) {
        cout << "\n--- Cloud Resource Monitor ---" << endl;
        cout << "1. System Information" << endl;
        cout << "2. CPU Information" << endl;
        cout << "3. Memory Information" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 1)
            systemInfo();
        else if (choice == 2)
            cpuInfo();
        else if (choice == 3)
            memoryInfo();
        else if (choice == 4) {
            cout << "Exiting program..." << endl;
            break;
        }
        else
            cout << "Invalid choice! Try again." << endl;
    }

    return 0;
}
