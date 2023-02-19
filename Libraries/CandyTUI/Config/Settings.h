#ifndef CANDY_TUI_SETTINGS_H
#define CANDY_TUI_SETTINGS_H

// You may edit this value to change the centering of the printed screens.
const int ROOM_SCREEN_PADDING_LEFT = 10;

/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
 *                    DO NOT EDIT THE VALUES BELOW THIS LINE.                    *
 * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

const int SCREEN_WIDTH = 51;                                        /*** DO NOT EDIT. ***/
const int SCREEN_HEIGHT = 15;                                       /*** DO NOT EDIT. ***/

const int FLOOR_SCREEN_PADDING_LEFT = ROOM_SCREEN_PADDING_LEFT + 9; /*** DO NOT EDIT. ***/

const int WALL_WIDTH = SCREEN_WIDTH - 2;                            /*** DO NOT EDIT. ***/
const int WALL_HEIGHT = SCREEN_HEIGHT - 3;                          /*** DO NOT EDIT. ***/

#endif