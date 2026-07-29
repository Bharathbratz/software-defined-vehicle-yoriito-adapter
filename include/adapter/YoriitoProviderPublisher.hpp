#pragma once

#include "adapter/SemanticPublisher.hpp"

class YoriitoProviderPublisher
    : public SemanticPublisher
{
public:
    bool publish(
        const SemanticUpdate& update) override;
};