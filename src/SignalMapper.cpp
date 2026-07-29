#include "adapter/SignalMapper.hpp"

SemanticUpdate SignalMapper::map(
    const std::string& service,
    const std::string& event,
    const std::string& payload)
{
    SemanticUpdate update;

    if (service == "WindowService" &&
        event == "PositionUpdate")
    {
        update.path =
            "Vehicle.Cabin.Door.Row1.DriverSide.Window.Position";

        update.value = payload;
    }

    return update;
}