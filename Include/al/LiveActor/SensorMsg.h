#pragma once

#include "al/HitSensor/HitSensor.h"

namespace al {

enum SensorMsg {
    SensorMsg_9 = 9,
    SensorMsg_12 = 12,
    SensorMsg_14 = 14,
    SensorMsg_16 = 16,
    SensorMsg_17 = 17,
    SensorMsg_18 = 18,
    SensorMsg_23 = 23,
    SensorMsg_FloorTouch = 27,
    SensorMsg_34 = 34,
    SensorMsg_37 = 37,
    SensorMsg_40 = 40,
    SensorMsg_EnemyAttack = 45,
    SensorMsg_49 = 49,
    SensorMsg_50 = 50,
    SensorMsg_51 = 51,
    SensorMsg_52 = 52,
    SensorMsg_55 = 55, // something with the KoopaLast door
    SensorMsg_58 = 58 // something with the KoopaLast door
};

#define AL_LIVEACTOR_SENSORMSG(TYPE)                    \
    bool sendMsg##TYPE(HitSensor* to, HitSensor* from); \
    bool isMsg##TYPE(u32 msg);

AL_LIVEACTOR_SENSORMSG(9)
AL_LIVEACTOR_SENSORMSG(12)
AL_LIVEACTOR_SENSORMSG(16)
AL_LIVEACTOR_SENSORMSG(FloorTouch)
AL_LIVEACTOR_SENSORMSG(40)
AL_LIVEACTOR_SENSORMSG(EnemyAttack)
AL_LIVEACTOR_SENSORMSG(50)
AL_LIVEACTOR_SENSORMSG(52)
AL_LIVEACTOR_SENSORMSG(55)

#undef AL_LIVEACTOR_SENSORMSG

} // namespace al
