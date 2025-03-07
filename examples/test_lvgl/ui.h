/************************************************************************
 * FilePath     : ui_base.h
 * Author       : GX.Duan
 * LastEditors  : ShallowGreen123 2608653986@qq.com
 * Copyright (c): 2022 by GX.Duan, All Rights Reserved.
 * Github       : https://github.com/ShallowGreen123/lvgl_examples.git
 ************************************************************************/
#ifndef __UI_DECKPRO_H__
#define __UI_DECKPRO_H__

#ifdef __cplusplus
extern "C" {
#endif
/*********************************************************************************
 *                                  INCLUDES
 * *******************************************************************************/
#include "lvgl.h"

/*********************************************************************************
 *                                   DEFINES
 * *******************************************************************************/

/*********************************************************************************
 *                                   MACROS
 * *******************************************************************************/
#define DECKPRO_COLOR_BG lv_color_white()
#define DECKPRO_COLOR_FG lv_color_black()

/*********************************************************************************
 *                                  TYPEDEFS
 * *******************************************************************************/

typedef void (*ui_indev_read_cb)(int);
struct menu_btn {
    uint16_t idx;
    const void *icon;
    const char *name;
    lv_coord_t pos_x;
    lv_coord_t pos_y; 
};

/*********************************************************************************
 *                              GLOBAL PROTOTYPES
 * *******************************************************************************/
void ui_deckpro_entry(void);

#ifdef __cplusplus
} /*extern "C"*/
#endif
#endif /* __UI_EPD47H__ */
