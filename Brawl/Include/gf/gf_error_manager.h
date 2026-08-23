#pragma once

#include <StaticAssert.h>
#include <types.h>

class gfErrorManager {
public:
    bool unk0_b7 : 1;
    bool unk0_b6 : 1;
    bool unk0_b5 : 1;
    bool unk0_b4 : 1;
    bool unk0_b3 : 1;
    char _1[0x1b];

    gfErrorManager();
    void notifyError(u32 p1, u32 p2);
    void notifyErrorRecovery(bool p1);
    static gfErrorManager* getInstance();

    static gfErrorManager* s_instance;
};
static_assert(sizeof(gfErrorManager) == 0x1c, "Class is wrong size!");
