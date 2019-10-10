#ifndef __MENU_PICO_H__
#define __MENU_PICO_H__

#include "../libpicofe/menu.h"

typedef enum
{
	MA_NONE = 1,
	MA_MAIN_RESUME_GAME,
	MA_MAIN_SAVE_STATE,
	MA_MAIN_LOAD_STATE,
	MA_MAIN_RESET_GAME,
	MA_MAIN_LOAD_ROM,
	MA_MAIN_CHANGE_CD,
	MA_MAIN_CONTROLS,
	MA_MAIN_CREDITS,
	MA_MAIN_PATCHES,
	MA_MAIN_EXIT,
	MA_OPT_RENDERER,
	MA_OPT_SCALING,
	MA_OPT_VSCALING,
	MA_OPT_ACC_SPRITES,
	MA_OPT_SHOW_FPS,
	MA_OPT_FRAMESKIP,
	MA_OPT_ENABLE_SOUND,
	MA_OPT_SOUND_QUALITY,
	MA_OPT_ARM940_SOUND,
	MA_OPT_INPUT_DEV0,
	MA_OPT_INPUT_DEV1,
	MA_OPT_REGION,
	MA_OPT_SRAM_STATES,
	MA_OPT_CONFIRM_STATES,
	MA_OPT_SAVE_SLOT,
	MA_OPT_CPU_CLOCKS,
	MA_OPT_SCD_OPTS,
	MA_OPT_ADV_OPTS,
	MA_OPT_DISP_OPTS,	/* psp */
	MA_OPT_SAVECFG,
	MA_OPT_SAVECFG_GAME,
	MA_OPT_LOADCFG,
	MA_OPT_INTERLACED,	/* giz */
	MA_OPT_TEARING_FIX,	/* wiz */
	MA_OPT_VOUT_MODE,
	MA_OPT_AUTOLOAD_SAVE,
	MA_OPT2_GAMMA,
	MA_OPT2_A_SN_GAMMA,
	MA_OPT2_DBLBUFF,	/* giz */
	MA_OPT2_VSYNC,
	MA_OPT2_ENABLE_Z80,
	MA_OPT2_ENABLE_YM2612,
	MA_OPT2_ENABLE_SN76496,
	MA_OPT2_GZIP_STATES,
	MA_OPT2_NO_LAST_ROM,
	MA_OPT2_RAMTIMINGS,	/* gp2x */
	MA_OPT2_STATUS_LINE,	/* psp */
	MA_OPT2_NO_FRAME_LIMIT,	/* psp */
	MA_OPT2_DYNARECS,
	MA_OPT2_NO_SPRITE_LIM,
	MA_OPT2_NO_IDLE_LOOPS,
	MA_OPT2_OVERCLOCK_M68K,
	MA_OPT2_PWM_IRQ_OPT,
	MA_OPT2_DONE,
	MA_OPT3_SCALE,		/* psp (all OPT3) */
	MA_OPT3_HSCALE32,
	MA_OPT3_HSCALE40,
	MA_OPT3_PRES_NOSCALE,
	MA_OPT3_PRES_SCALE43,
	MA_OPT3_PRES_FULLSCR,
	MA_OPT3_FILTERING,
	MA_OPT3_VSYNC,
	MA_OPT3_BLACKLVL,
	MA_OPT3_LAYER_X,
	MA_OPT3_LAYER_Y,
	MA_OPT3_LAYER_W,
	MA_OPT3_LAYER_H,
	MA_OPT3_DONE,
	MA_CDOPT_TESTBIOS_USA,
	MA_CDOPT_TESTBIOS_EUR,
	MA_CDOPT_TESTBIOS_JAP,
	MA_CDOPT_LEDS,
	MA_CDOPT_CDDA,
	MA_CDOPT_PCM,
	MA_CDOPT_READAHEAD,
	MA_CDOPT_SAVERAM,
	MA_CDOPT_SCALEROT_CHIP,
	MA_CDOPT_DONE,
	MA_32XOPT_ENABLE_32X,
	MA_32XOPT_RENDERER,
	MA_32XOPT_PWM,
	MA_32XOPT_MSH2_CYCLES,
	MA_32XOPT_SSH2_CYCLES,
	MA_CTRL_PLAYER1,
	MA_CTRL_PLAYER2,
	MA_CTRL_EMU,
	MA_CTRL_TURBO_RATE,
	MA_CTRL_DEADZONE,
	MA_CTRL_DEV_FIRST,
	MA_CTRL_DEV_NEXT,
	MA_CTRL_DONE,
} menu_id;

void menu_init(void);
void menu_loop(void);
int menu_loop_tray(void);
void menu_romload_prepare(const char *rom_name);
void menu_romload_end(void);

#endif // __MENU_PICO_H__
