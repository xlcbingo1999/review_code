#include "file.h"
#include <fstream>
#include <iostream>

namespace RAII {
    File::File(const char* filename) {
        this->m_handle = std::ifstream(filename);
    }

    File::~File() {
        // TODO: 简单写一下测试代码
        // 提示: 判断handle是否打开: bool std::ifstream::is_open()
        // 提示: 关闭handle: void std::ifstream::close()
        if (this->m_handle.is_open()) {
            this->m_handle.close();
            std::cout << "File closed successfully." << std::endl;
        } else {
            std::cout << "The file has not been opened." << std::endl;
        }
    }

    std::ifstream& File::getHandle() {
        return this->m_handle;
    }
};