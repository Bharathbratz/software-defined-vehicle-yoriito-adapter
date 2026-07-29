#pragma once

#include "adapter/SignalMapper.hpp"

class SemanticPublisher
{
public:
    virtual ~SemanticPublisher() = default;

    virtual bool publish(
        const SemanticUpdate& update) = 0;
};