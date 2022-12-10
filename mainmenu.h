#pragma once
#include <pspkernel.h>
#include <pspdebug.h>
#include <pspctrl.h>
#include "menu_stats.h"

void mainmenu() {
    pspDebugScreenClear();
    pspDebugScreenPrintf("---\n");
    pspDebugScreenPrintf("Choose what to do!\n");
    pspDebugScreenPrintf("---\n");
    pspDebugScreenPrintf("CROSS -  Go fight!\n");
    pspDebugScreenPrintf("TRIANGLE - Check your stats!\n");
    pspDebugScreenPrintf("CIRCLE - Upgrade your character!\n");
    pspDebugScreenPrintf("SQUARE - Open shop!\n");
    pspDebugScreenPrintf("HOME - Close the game\n");

    sceCtrlSetSamplingCycle(0);
    sceCtrlSetSamplingMode(PSP_CTRL_MODE_ANALOG);

    SceCtrlData ctrlData;

    while(true){
        sceCtrlReadBufferPositive(&ctrlData, 1);
        //if(ctrlData.Buttons & PSP_CTRL_CROSS) {
        //    menu_fight();
        //}
        if(ctrlData.Buttons & PSP_CTRL_TRIANGLE) {
            menu_stats();
        }
        /*if(ctrlData.Buttons & PSP_CTRL_CIRCLE) {
            menu_upgrade();
        }
        if(ctrlData.Buttons & PSP_CTRL_SQUARE) {
            menu_shop();
        }*/    
    }
}