#include "file.h"
#include <iostream>

int main() {
    {
        // TODO: 简单写一下测试代码
        RAIIztyf::File file("/home/ubuntu/data/review_code/RAII-ztyf/resource/a.txt");
        std::ifstream& handle = file.getHandle();
        std::string line;
        while (std::getline(handle, line)) {
            std::cout << line << std::endl;
        }
    }
}