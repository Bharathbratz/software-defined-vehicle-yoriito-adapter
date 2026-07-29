#pragma once

#include <memory>

class SemanticPublisher;

class AdapterService
{
public:
    void start();

private:
    std::shared_ptr<SemanticPublisher> publisher_;
};