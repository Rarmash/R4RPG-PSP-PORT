#include <pspkernel.h>
#include <pspdebug.h>
#include <pspctrl.h>
#include "../../common/callback.h"
#include "../menu_stats/menu_stats.h"

#define printf pspDebugScreenPrintf

void mainmenu() {
    pspDebugScreenClear();
    printf("---\n");
    printf("Choose what to do!\n");
    printf("---\n");
    //printf("CROSS -  Go fight! [UNDONE]\n");
    printf("TRIANGLE - Check your stats!\n");
    //printf("CIRCLE - Upgrade your character! [UNDONE]\n");
    //printf("SQUARE - Open shop! [UNDONE]\n");
    printf("HOME - Close the game\n");

    sceCtrlSetSamplingCycle(0);
    sceCtrlSetSamplingMode(PSP_CTRL_MODE_ANALOG);

    SceCtrlData ctrlData;

    while(isRunning()){
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