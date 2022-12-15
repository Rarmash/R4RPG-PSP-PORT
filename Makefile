TARGET = R4RPG
OBJS = ./src/main.o ./src/common/callback.o ./src/menus/mainmenu/mainmenu.o ./src/menus/menu_stats/menu_stats.o

INCDIR =
CFLAGS = -O2 -G0 -Wall
CXXFLAGS = $(CFLAGS) -fno-exceptions -fno-rtti
ASFLAGS	= $(CFLAGS)

LIBDIR =
LIBS =
LDFLAGS	=

EXTRA_TARGETS = EBOOT.PBP
PSP_EBOOT_TITLE = R4RPG
PSP_EBOOT_ICON= ./res/ICON0.png
PSP_EBOOT_PIC1= ./res/PIC1.png
#PSP_EBOOT_SND0= ./res/SND0.at3

PSPSDK = $(shell psp-config --pspsdk-path)
include $(PSPSDK)/lib/build.mak