#include "file.h"
#include <fstream>
#include <iostream>
using namespace std;
namespace RAII {
    File::File(const char* filename) {
        this->m_handle = std::ifstream(filename);
    }

    File::~File() {
   	if (this->m_handle.is_open()) {
		std::cout << "File handle is closed in destructor." << std::endl;
		this->m_handle.close();
    	}
    }

    std::ifstream& File::getHandle() {
        return this->m_handle;
    }
};
