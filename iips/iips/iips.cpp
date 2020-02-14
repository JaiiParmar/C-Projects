 // iips.cpp : This file contains the 'main' function. Program execution begins and ends there.
//


#include <iostream>
#include "Box.h"

void printVolumeCopy(const Box b) {
    std::cout << "PrintVolume :: " << b.volume() << std::endl;
}

void printVolumeRef(const Box& b) {
    std::cout << "PrintVolume :: " << b.volume() << std::endl;
}

int main()
{

    Box myBox{ 2.0, 3.0, 4.0 };

    Box myBox2{ 2 };

    Box myBox3{ myBox };

    Box myBox4;

    myBox4 = myBox2;

    Box myBox5 = 5.0;

    std::cout << "Volume :: " << myBox.volume()<< std::endl;

    std::cout << "Volume :: " << myBox2.volume() << std::endl;
    
    std::cout << "Volume :: " << myBox3.volume() << std::endl;
    
    std::cout << "Volume :: " << myBox4.volume() << std::endl;
    
    printVolumeRef(myBox); // No constructor call.
    
    printVolumeCopy(myBox); // constructor call.

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
