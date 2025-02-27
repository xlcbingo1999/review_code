#include "file.h"
#include <iostream>

int main() {
    {
        // TODO: 简单写一下测试代码
        RAII::File file("src/a.txt");
        std::ifstream& handle = file.getHandle();
    }
    return 0;
}