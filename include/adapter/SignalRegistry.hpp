#pragma once

#include <string>
#include <unordered_map>

struct SignalDefinition
{
    std::string service;
    std::string event;
    std::string semanticPath;
    std::string datatype;
};

class SignalRegistry
{
public:

    bool load(const std::string& fileName);

    SignalDefinition getMapping(
        const std::string& service,
        const std::string& event
    ) const;

private:

    std::unordered_map<
        std::string,
        SignalDefinition
    > mappings_;
};