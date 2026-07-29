#include "adapter/AdapterService.hpp"

#include "adapter/ConsolePublisher.hpp"
#include "adapter/SignalMapper.hpp"
#include "adapter/SomeIpClient.hpp"

#include <memory>

void AdapterService::start()
{
    publisher_ =
        std::make_shared<ConsolePublisher>();

    static SomeIpClient client;

    auto mapper =
        std::make_shared<SignalMapper>();

    client.registerCallback(
        [this, mapper]
        (
            const std::string& service,
            const std::string& event,
            const std::string& payload
        )
        {
            auto update =
                mapper->map(
                    service,
                    event,
                    payload);

            publisher_->publish(update);
        });

    client.start();
}