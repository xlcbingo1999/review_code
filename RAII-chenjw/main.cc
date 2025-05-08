#include "file.h"
#include <iostream>

int main() {
    {
        // RAII::File f("resource/a.txt"); // 使用 resource 目录下的 a.txt 文件
        RAII::File f("/home/ubuntu/data/review_code/RAII-chenjw/resource/a.txt"); // 使用 resource 目录下的 a.txt 文件
        std::ifstream& handle = f.getHandle();
        std::string line;
        while (std::getline(handle, line)) {
            std::cout << line << std::endl;
        }
        // RAII 的好处是，当 f 离开作用域时，析构函数会自动调用，关闭文件句柄
        // 不需要手动调用 close() 函数
    }

    return 0;
}