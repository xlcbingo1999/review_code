#include "file.h"
#include <fstream>
#include <iostream>
using namespace std;

int main() {

    {

        RAII::File file("/home/ubuntu/data/review_code/RAII-chendanwen/src/test.txt");
        if (file.getHandle().is_open()) {
            std::cout << "File is open." << std::endl;
        } 
	else {
            std::cout << "Failed to open file." << std::endl;
        }
    } 


    return 0;

}
