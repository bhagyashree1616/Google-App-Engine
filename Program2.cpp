#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void uploadFile() {
    string filename;
    cout << "Enter file name to upload: ";
    cin >> filename;

    ofstream file("cloud_storage.txt", ios::app);
    file << filename << endl;
    file.close();

    cout << "File uploaded successfully!" << endl;
}

void viewFiles() {
    ifstream file("cloud_storage.txt");
    string line;

    cout << "\nStored Files:" << endl;

    if (!file) {
        cout << "No files uploaded yet." << endl;
        return;
    }

    while (getline(file, line)) {
        cout << "- " << line << endl;
    }

    file.close();
}

int main() {
    int choice;

    while (true) {
        cout << "\n--- Cloud Storage Menu ---" << endl;
        cout << "1. Upload File" << endl;
        cout << "2. View Stored Files" << endl;
        cout << "3. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 1) {
            uploadFile();
        }
        else if (choice == 2) {
            viewFiles();
        }
        else if (choice == 3) {
            cout << "Exiting program..." << endl;
            break;
        }
        else {
            cout << "Invalid choice! Please try again." << endl;
        }
    }

    return 0;
}
