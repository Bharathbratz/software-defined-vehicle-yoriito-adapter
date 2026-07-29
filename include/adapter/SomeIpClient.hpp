#pragma once

#include <functional>
#include <string>

class SomeIpClient
{
public:

    using Callback =
    std::function<void(
        const std::string&,
        const std::string&,
        const std::string&)>;

    void start();

    void registerCallback(
        Callback callback);

private:

    Callback callback_;
};