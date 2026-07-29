#pragma once

#include <string>

struct SemanticUpdate
{
    std::string path;
    std::string value;
};

class SignalMapper
{
public:

    SemanticUpdate map(
        const std::string& service,
        const std::string& event,
        const std::string& payload
    );
};