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
        if(this->m_handle.is_open()) {
            std::cout<<"Closing file\n"<<std::endl;
            this->m_handle.close();
            std::cout<<"Successfully closed file\n"<<std::endl;
        }else{
            std::cout<<"File is already closed\n"<<std::endl;
        }
    }

    std::ifstream& File::getHandle() {
        return this->m_handle;
    }
};