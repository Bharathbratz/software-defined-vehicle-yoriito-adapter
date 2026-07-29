#pragma once

#include "adapter/SemanticPublisher.hpp"

class ConsolePublisher : public SemanticPublisher
{
public:

    bool publish(
        const SemanticUpdate& update) override;
};