#include <iostream>
#include <unistd.h>

int main() {
    // 不加作用域块会导致链接错误
    {
        char cwd[1024];
        if (getcwd(cwd, sizeof(cwd)) != nullptr) {
            std::cout << "Current working directory: " << cwd << std::endl;
        } else {
            perror("getcwd() error");
        }
    }
    return 0;
}