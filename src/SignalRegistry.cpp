#include "adapter/SignalRegistry.hpp"

#include <yaml-cpp/yaml.h>

bool SignalRegistry::load(
    const std::string& fileName)
{
    auto root = YAML::LoadFile(fileName);

    auto signals = root["signals"];

    for (auto sig : signals)
    {
        SignalDefinition def;

        def.service =
            sig.second["source"]["service"].as<std::string>();

        def.event =
            sig.second["source"]["event"].as<std::string>();

        def.semanticPath =
            sig.second["semantic"]["path"].as<std::string>();

        def.datatype =
            sig.second["semantic"]["datatype"].as<std::string>();

        std::string key =
            def.service + ":" + def.event;

        mappings_[key] = def;
    }

    return true;
}