#include <pspkernel.h>
#include <pspdebug.h>
#include <pspdisplay.h>
#include "./common/callback.h"
#include "./menus/mainmenu/mainmenu.h"

#define printf pspDebugScreenPrintf

PSP_MODULE_INFO("R4RPG", PSP_MODULE_USER, 1, 0);
PSP_MAIN_THREAD_ATTR(PSP_THREAD_ATTR_USER); 
PSP_HEAP_SIZE_MAX();

int main() {       
	pspDebugScreenInit();
	setupExitCallback();

	while (isRunning()) {
		pspDebugScreenSetXY(0, 0);
		mainmenu();
		sceDisplayWaitVblankStart();
	}

	sceKernelExitGame();	
	return 0;
} 