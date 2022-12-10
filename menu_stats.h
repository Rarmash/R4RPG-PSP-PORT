#pragma once
#include <pspkernel.h>
#include <pspdebug.h>
#include <pspctrl.h>
#include "mainmenu.h"

int menu_stats() {
    pspDebugScreenClear();

    pspDebugScreenPrintf("---\n");
    pspDebugScreenPrintf("No stats :(\n");
    pspDebugScreenPrintf("---\n");
    pspDebugScreenPrintf("CROSS -  Exit to main menu!\n");

    sceCtrlSetSamplingCycle(0);
    sceCtrlSetSamplingMode(PSP_CTRL_MODE_ANALOG);

    SceCtrlData ctrlData;

    while(true){
        sceCtrlReadBufferPositive(&ctrlData, 1);
        if(ctrlData.Buttons & PSP_CTRL_CROSS) {
            return false;
        }
    }
}