#include "adapter/ConsolePublisher.hpp"

#include <iostream>

bool ConsolePublisher::publish(
    const SemanticUpdate& update)
{
    std::cout
        << "[Semantic] "
        << update.path
        << " = "
        << update.value
        << std::endl;

    return true;
}