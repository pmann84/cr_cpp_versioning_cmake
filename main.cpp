#include <TestProgramConfig.h>
#include <iostream>

int main()
{
    std::cout << "Running Version " << TESTPROGRAM_VERSION_MAJOR << "." << TESTPROGRAM_VERSION_MINOR << "." << TESTPROGRAM_VERSION_PATCH << "." << TESTPROGRAM_VERSION_TWEAK << std::endl;
    return 0;
}
