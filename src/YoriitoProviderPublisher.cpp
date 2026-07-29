#include "adapter/YoriitoProviderPublisher.hpp"

#include <iostream>

bool YoriitoProviderPublisher::publish(
    const SemanticUpdate& update)
{
    std::cout
        << "[Yoriito Provider] "
        << update.path
        << " = "
        << update.value
        << std::endl;

    return true;
}