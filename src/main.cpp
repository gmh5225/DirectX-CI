#include <iostream>
#include <d3d9.h>

#pragma comment(lib, "d3d9.lib")

int
main()
{
    volatile auto x = Direct3DCreate9(2);

    std::cout << "Hello from cmkr!\n";
    return 0;
}