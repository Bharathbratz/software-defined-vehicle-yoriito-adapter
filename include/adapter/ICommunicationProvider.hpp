#pragma once

#include <functional>
#include <string>

class ICommunicationProvider
{
public:

    using Callback =
        std::function<void(
            const std::string&,
            const std::string&,
            const std::string&)>;

    virtual ~ICommunicationProvider() = default;

    virtual void start() = 0;

    virtual void registerCallback(
        Callback callback) = 0;
};