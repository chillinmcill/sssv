#include <ultra64.h>

#include "common.h"


void func_80125950(s32 arg0) {
    osInitialize();
    func_80129AD0();
    func_801355D0();
}

#pragma GLOBAL_ASM("asm/nonmatchings/main_1050/func_80125980.s")
#pragma GLOBAL_ASM("asm/nonmatchings/main_1050/func_80125FE0.s")

void func_8012635C(s32 arg0, s32 arg1, struct005 *arg2) {
    arg2->unk0 = (arg0 & 0xFFFF0000) | ((arg1 >> 16) & 0xFFFF);
    arg2->unk20 = (arg0 << 16) | (arg1 & 0xFFFF);
}

#pragma GLOBAL_ASM("asm/nonmatchings/main_1050/func_80126388.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main_1050/func_80126CC4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main_1050/func_80126FD4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main_1050/func_80127640.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main_1050/func_80127994.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main_1050/func_80127D30.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main_1050/func_80127ED4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main_1050/func_80128078.s")
