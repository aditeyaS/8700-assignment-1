//Aditeya Srivastava (aditeys@clemson.edu)
#include "ppm.h"
#include "pgm.h"

#include <string>
#include <iostream>
#include <fstream>
using namespace std;

int main() {
    // string file = "chips-1.ppm";
    string file = "cats_chips.ppm";
    ifstream infile(file, ifstream::binary);
    string magicNumber;
    if (!infile.is_open()) {
        cout << "Opening " << file << " failed!" << endl;
        return 0;
    }
    infile >> magicNumber;
    if (magicNumber == "P2" || magicNumber == "P5") {
        //pgm files
        Pgm* pgm = new Pgm(file);
        pgm->rotate('r', 0, "test_r0.pgm");
        pgm->rotate('l', 0, "test_l0.pgm");
        pgm->rotate('r', 90, "test_r90.pgm");
        pgm->rotate('l', 90, "test_l90.pgm");
        pgm->rotate('r', 180, "test_r180.pgm");
        pgm->rotate('l', 180, "test_l180.pgm");
        pgm->rotate('r', 270, "test_r270.pgm");
        pgm->rotate('l', 270, "test_l270.pgm");
    } else if (magicNumber == "P3" || magicNumber == "P6") {
        //ppm ascii
        cout << "P3" << endl;

        Ppm* ppm = new Ppm(file);
        ppm->rotate('r', 0, "test_r0.ppm");
        ppm->rotate('l', 0, "test_l0.ppm");
        ppm->rotate('r', 90, "test_r90.ppm");
        ppm->rotate('l', 90, "test_l90.ppm");
        ppm->rotate('r', 180, "test_r180.ppm");
        ppm->rotate('l', 180, "test_l180.ppm");
        ppm->rotate('r', 270, "test_r270.ppm");
        ppm->rotate('l', 270, "test_l270.ppm");
    } else if (magicNumber == "P10") {
        //ppm binary
        cout << "P6" << endl;

    } else {
        cout << "UnknownFileFormat: " << file << endl;
    }
    return 0;
}