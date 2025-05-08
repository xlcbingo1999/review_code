#include <fstream>

namespace RAII {
    class File {
    public:
        File(const char* filename);
        virtual ~File(); // 析构函数类似defer
        std::ifstream& getHandle();
    private:
        std::ifstream m_handle;
    };
};