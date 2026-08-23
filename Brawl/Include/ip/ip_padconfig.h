#pragma once

#include <StaticAssert.h>
#include <types.h>

struct ipPadConfig {
    char _0[0xB4];
    u8 m_xB4;
    char _B5[0xF7];

    ipPadConfig() {
        m_xB4 = 0;
        init();
    }
    void init();
    static ipPadConfig* getInstance();
    s32 getPlayerNo(s32 p1);

    static ipPadConfig* s_instance;
};
static_assert(sizeof(ipPadConfig) == 0x1ac, "Class is wrong size!");
