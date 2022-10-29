#pragma once

#include "al/Placement/PlacementInfo.h"
#include "al/Rail/Rail.h"
#include "al/Rail/RailRider.h"

namespace al {

class RailKeeper {
    Rail* mRail;
    RailRider* mRailRider;

public:
    RailKeeper(const PlacementInfo& info);
    Rail* getRail() { return mRail; }
    RailRider* getRailRider() { return mRailRider; }
};

RailKeeper* tryCreateRailKeeper(const PlacementInfo& info);

} // namespace al
