#include <iostream>
#include <fstream>

using namespace std;

int main() {
    ofstream ofile;

    // Writing to "xyx.txt"
    ofile.open("xyx.txt");
    ofile << "HELLO" << endl;
    ofile.close();

    // Appending to "xyx.txt"
    ofile.open("xyx.txt", ios::app);
    ofile << "HELLO2" << endl;
    ofile.close();

    ifstream ifile;
    string line;

    // Reading from "xyx.txt"
    ifile.open("xyx.txt");
    while (ifile >> line) {
        cout << line << endl;
    }
    ifile.close();

    return 0;
}
