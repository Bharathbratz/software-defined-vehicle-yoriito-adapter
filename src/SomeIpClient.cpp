#include "adapter/SomeIpClient.hpp"

#include <chrono>
#include <thread>
#include <utility>
#include <string>
#include <sstream>
#include <iomanip>

void SomeIpClient::start()
{
    std::thread([this]()
    {
        float position = 0.0f;
        bool increasing = true;

        while (true)
        {
            if (increasing)
            {
                position += 10.0f;

                if (position >= 100.0f)
                {
                    position = 100.0f;
                    increasing = false;
                }
            }
            else
            {
                position -= 10.0f;

                if (position <= 0.0f)
                {
                    position = 0.0f;
                    increasing = true;
                }
            }

            if (callback_)
            {
                std::stringstream ss;

                ss << std::fixed
                   << std::setprecision(1)
                   << position;

                callback_(
                    "WindowService",
                    "PositionUpdate",
                    ss.str());
            }

            std::this_thread::sleep_for(
                std::chrono::seconds(1));
        }

    }).detach();
}

void SomeIpClient::registerCallback(
    Callback callback)
{
    callback_ = std::move(callback);
}