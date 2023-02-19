/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
 *                           DO NOT EDIT THIS SCRIPT.                            *
 * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

#ifndef CANDY_TUI_ENUM_COLORS_H
#define CANDY_TUI_ENUM_COLORS_H

enum class Colors : int {
    CLEAR   = 0,
    RED     = 196,
    BLUE    = 33,
    WHITE   = 231,
    BLACK   = 16,

    /*** MIRROR COLOURS ***/
    MIRROR_LIGHT     = 231,
    MIRROR_MID       = 51,
    MIRROR_DARK      = 45,

    /*** FRAME COLOURS ***/
    FRAME_OFF       = 236,
    FRAME_V_LIGHT   = 231,
    FRAME_LIGHT     = 248,
    FRAME_MID       = 243,
    FRAME_DARK      = 239,

    FRAME_GOLD_LIGHT    = 220, 
    FRAME_GOLD_DARK     = 136,
    
    FRAME_SILVER_LIGHT    = 254, 
    FRAME_SILVER_DARK     = 244,

    FRAME_RED_LIGHT = 196,
    FRAME_RED_DARK  = 124,

    FRAME_MAGENTA_LIGHT = 198,
    FRAME_MAGENTA_DARK  = 125,

    FRAME_BLUE_LIGHT = 45,
    FRAME_BLUE_DARK  = 32,

    FRAME_ORANGE_LIGHT = 214,
    FRAME_ORANGE_DARK  = 202,

    FRAME_YELLOW_LIGHT = 227,
    FRAME_YELLOW_DARK  = 220,

    FRAME_PURPLE_LIGHT = 141,
    FRAME_PURPLE_DARK  = 129,

    FRAME_GREEN_LIGHT = 46,
    FRAME_GREEN_DARK  = 40,

    /*** SINK COLOURS ***/
    SINK_V_LIGHT   = 252,
    SINK_LIGHT     = 250,
    SINK_MID       = 247,
    SINK_DARK      = 243,
    SINK_V_DARK    = 240,

    /*** CHAIR COLOURS ***/
    CHAIR_V_LIGHT   = 252,
    CHAIR_LIGHT     = 250,
    CHAIR_MID       = 247,
    CHAIR_DARK      = 243,
    CHAIR_V_DARK    = 240,

    CHAIR_BROWN_LIGHT   = 166,
    CHAIR_BROWN_DARK    = 94,
    CHAIR_FOAM_LIGHT    = WHITE,
    CHAIR_FOAM_DARK     = 251,
    
    /*** DRESSER COLOURS ***/
    DRESSER_V_LIGHT   = CHAIR_V_LIGHT,
    DRESSER_LIGHT     = 239, /// CHAIR_LIGHT,
    DRESSER_MID       = 250,
    DRESSER_DARK      = CHAIR_DARK,
    DRESSER_V_DARK    = CHAIR_V_DARK,

    DRESSER_BROWN_LIGHT   = CHAIR_BROWN_LIGHT,
    DRESSER_BROWN_DARK    = CHAIR_BROWN_DARK,
    DRESSER_KNOB_LIGHT    = 220,

    /*** BED COLOURS ***/
    BED_V_LIGHT   = CHAIR_V_LIGHT,
    BED_LIGHT     = CHAIR_LIGHT,
    BED_MID       = CHAIR_MID,
    BED_DARK      = CHAIR_DARK,
    BED_V_DARK    = CHAIR_V_DARK,

    BED_BROWN_LIGHT   = CHAIR_BROWN_LIGHT,
    BED_BROWN_DARK    = CHAIR_BROWN_DARK,
    BED_FOAM_LIGHT    = CHAIR_FOAM_LIGHT,
    BED_FOAM_DARK     = CHAIR_FOAM_DARK,

    /*** SHELF COLOURS ***/
    SHELF_V_LIGHT   = CHAIR_V_LIGHT,
    SHELF_LIGHT     = 239,
    SHELF_MID       = 250,
    SHELF_DARK      = CHAIR_DARK,
    SHELF_V_DARK    = CHAIR_V_DARK,
    
    SHELF_BROWN_LIGHT   = CHAIR_BROWN_LIGHT,
    SHELF_BOOK_1   = 83,
    SHELF_BOOK_2   = 221,
    SHELF_BOOK_3   = 198,
    SHELF_BOOK_4   = 214,
    SHELF_BOOK_5   = 45,
    SHELF_BOOK_6   = 201,
    SHELF_BOOK_7   = 56,
    SHELF_BROWN_DARK    = CHAIR_BROWN_DARK,

    /*** WINDOW COLOURS ***/
    WINDOW_GLASS_LIGHT    = 37,
    WINDOW_GLASS_DARK     = 24,
    WINDOW_FRAME_LIGHT    = WHITE,

    /*** LIGHT + SWITCH COLOURS ***/
    LIGHT_ON_LIGHT  = 46,
    LIGHT_ON_DARK   = 34,
    LIGHT_OFF_LIGHT = 196,
    LIGHT_OFF_DARK  = 124,

    /*** ROOM COLOURS ***/
    CARPET      = 230,
    OFF_CARPET  = 249,

    OFF_V_LIGHT = WHITE,
    OFF_LIGHT   = OFF_CARPET,
    OFF_MID     = 244,
    OFF_DARK    = 238,

    VAN_V_LIGHT   = 213,
    VAN_LIGHT     = 205,
    VAN_MID       = 198,
    VAN_DARK      = 125,

    FOYER_V_LIGHT   = 215,
    FOYER_LIGHT     = 214,
    FOYER_MID       = 172,
    FOYER_DARK      = 130,

    HALLWAY_V_LIGHT   = 51,
    HALLWAY_LIGHT     = 45,
    HALLWAY_MID       = 39,
    HALLWAY_DARK      = 18,

    // HALLWAY_V_LIGHT   = 81,
    // HALLWAY_LIGHT     = 45,
    // HALLWAY_MID       = 33,
    // HALLWAY_DARK      = 20,

    BATHROOM_V_LIGHT   = 123,
    BATHROOM_LIGHT     = 49,
    BATHROOM_MID       = 42,
    BATHROOM_DARK      = 29,

    KIDS_BED_V_LIGHT   = 69,
    KIDS_BED_LIGHT     = 63,
    KIDS_BED_MID       = 57,
    KIDS_BED_DARK      = 19,
    
    MASTERS_BED_V_LIGHT   = 205,
    MASTERS_BED_LIGHT     = 196,
    MASTERS_BED_MID       = 124,
    MASTERS_BED_DARK      = 52,

    LIVING_ROOM_V_LIGHT   = 135,
    LIVING_ROOM_LIGHT     = 129,
    LIVING_ROOM_MID       = 92,
    LIVING_ROOM_DARK      = 54,

    BASEMENT_V_LIGHT   = 37,
    BASEMENT_LIGHT     = 30,
    BASEMENT_MID       = 24,
    BASEMENT_DARK      = 18,
    
    DINING_V_LIGHT   = 121,
    DINING_LIGHT     = 48,
    DINING_MID       = 42,
    DINING_DARK      = 28,

    KITCHEN_V_LIGHT   = 156,
    KITCHEN_LIGHT     = 119,
    KITCHEN_MID       = 76,
    KITCHEN_DARK      = 22,
    
    UTILITY_V_LIGHT   = 228,
    UTILITY_LIGHT     = 220,
    UTILITY_MID       = 178,
    UTILITY_DARK      = 172,

    /*** DOOR KNOB COLOURS ***/
    KNOB_ON_V_LIGHT = WHITE,
    KNOB_ON_LIGHT   = 220,
    KNOB_ON_DARK    = 178,
    
    KNOB_OFF_V_LIGHT    = WHITE,
    KNOB_OFF_LIGHT      = OFF_CARPET,
    KNOB_OFF_DARK       = OFF_MID,

    OPEN_DOOR_LIGHT = 240,
    OPEN_DOOR_MID   = 237,
    OPEN_DOOR_DARK  = 234,
};

#endif