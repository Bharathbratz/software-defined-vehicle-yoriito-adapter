#include "adapter/AdapterService.hpp"

#include <chrono>
#include <thread>

int main()
{
    AdapterService service;

    service.start();

    while (true)
    {
        std::this_thread::sleep_for(
            std::chrono::seconds(1));
    }

    return 0;
}