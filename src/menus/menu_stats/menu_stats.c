#include <pspkernel.h>
#include <pspdebug.h>
#include <pspctrl.h>
#include "../../common/callback.h"
#include "../mainmenu/mainmenu.h"

#define printf pspDebugScreenPrintf

void menu_stats() {
    pspDebugScreenClear();

    printf("---\n");
    printf("No stats :(\n");
    printf("---\n");
    printf("CROSS -  Exit to main menu!\n");

    sceCtrlSetSamplingCycle(0);
    sceCtrlSetSamplingMode(PSP_CTRL_MODE_ANALOG);

    SceCtrlData ctrlData;

    while(isRunning()){
        sceCtrlReadBufferPositive(&ctrlData, 1);
        if(ctrlData.Buttons & PSP_CTRL_CROSS) {
            mainmenu();
        }
    }
}