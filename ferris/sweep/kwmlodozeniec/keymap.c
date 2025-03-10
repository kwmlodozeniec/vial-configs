#include QMK_KEYBOARD_H
#include "i18n.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT_split_3x5_2(KC_Q, KC_W, KC_F, KC_P, KC_B, KC_J, KC_L, KC_U, KC_Y, KC_SCLN, MT(MOD_LGUI, KC_A),MT(MOD_LALT, KC_R),MT(MOD_LCTL, KC_S),MT(MOD_LSFT, KC_T),ALL_T(KC_G),ALL_T(KC_M),MT(MOD_LSFT, KC_N),MT(MOD_LCTL, KC_E),MT(MOD_LALT, KC_I),MT(MOD_LGUI, KC_O), KC_Z, KC_X, KC_C, KC_D, KC_V, KC_K, KC_H, KC_COMMA, KC_DOT, KC_SLASH, LT(3,KC_BSPC),LT(5,KC_TAB), LT(6,KC_ENTER), LT(4,KC_SPACE)),
    [1] = LAYOUT_split_3x5_2(KC_B, KC_L, KC_D, KC_W, KC_Z, KC_COMMA, KC_F, KC_O, KC_U, KC_J, MT(MOD_LGUI, KC_N), MT(MOD_LALT, KC_R), MT(MOD_LCTL, KC_T), MT(MOD_LSFT, KC_S),ALL_T(KC_G), ALL_T(KC_Y), MT(MOD_LSFT, KC_H),MT(MOD_LCTL, KC_A),MT(MOD_LALT, KC_E),MT(MOD_LGUI, KC_I), KC_Q, KC_X, KC_M, KC_C, KC_V, KC_K, KC_P, KC_DOT, KC_MINUS, KC_SLASH, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT),
    [2] = LAYOUT_split_3x5_2(KC_Q, KC_W, KC_F, KC_P, KC_B, KC_J, KC_L, KC_U, KC_Y, KC_SCLN, KC_A, KC_R, KC_S, KC_T, KC_G, KC_M, KC_N, KC_E, KC_I, KC_O, KC_Z, KC_X, KC_C, KC_D, KC_V, KC_K, KC_H, KC_COMMA, KC_DOT, KC_SLASH, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT),
    [3] = LAYOUT_split_3x5_2(KC_ESCAPE, KC_NO, LCTL(KC_PAGE_UP),LCTL(KC_PGDN), KC_NO, KC_PAGE_UP, KC_HOME, KC_UP, KC_END, KC_ESCAPE, KC_LEFT_GUI, KC_LEFT_ALT, KC_LEFT_CTRL, KC_LEFT_SHIFT, OSM(MOD_HYPR), KC_PGDN, KC_LEFT, KC_DOWN, KC_RIGHT, KC_DELETE, OSM(MOD_LGUI), OSM(MOD_RALT), OSM(MOD_LCTL), OSM(MOD_LSFT), KC_NO, KC_MAC_UNDO, KC_MAC_COPY, KC_MAC_PASTE, KC_MAC_CUT, LGUI(LSFT(KC_Z)), KC_TRANSPARENT, KC_NO, TD(0), CW_TOGG),
    [4] = LAYOUT_split_3x5_2(KC_GRAVE, KC_SLASH, KC_ASTR, KC_AMPR, KC_MINUS, KC_COLN, KC_LBRC, KC_RBRC, KC_NO, KC_ESCAPE, KC_QUOTE, KC_CIRC, KC_PERC, KC_DLR, KC_EQUAL, OSM(MOD_HYPR), KC_LEFT_SHIFT, KC_LEFT_CTRL, KC_LEFT_ALT, KC_LEFT_GUI, KC_TILD, KC_HASH, KC_AT, KC_EXLM, KC_BSLS, KC_SCLN, KC_LCBR, KC_RCBR, KC_NO, KC_NO, KC_LPRN, KC_RPRN, KC_NO, KC_TRANSPARENT),
    [5] = LAYOUT_split_3x5_2(KC_ESCAPE, KC_F9, KC_F8, KC_F7, KC_F12, KC_PLUS, KC_7, KC_8, KC_9, KC_ASTR, OSM(MOD_HYPR), KC_F6, KC_F5, KC_F4, KC_F11, KC_MINUS, KC_4, KC_5, KC_6, KC_SLASH, OSM(MOD_LCTL), KC_F3, KC_F2, KC_F1, KC_F10, KC_0, KC_1, KC_2, KC_3, OSM(MOD_LALT), KC_NO, KC_TRANSPARENT, KC_ENTER, KC_DOT),
    [6] = LAYOUT_split_3x5_2(KC_NO, KC_MS_BTN1, KC_MS_UP, KC_MS_BTN2, KC_MS_BTN3, OSM(MOD_LCTL), KC_MEDIA_PREV_TRACK,KC_MEDIA_PLAY_PAUSE,KC_MEDIA_NEXT_TRACK,QK_BOOT, KC_NO,KC_MS_LEFT, KC_MS_DOWN, KC_MS_RIGHT, KC_MS_WH_UP, OSM(MOD_LSFT), KC_AUDIO_VOL_DOWN,KC_AUDIO_MUTE, KC_AUDIO_VOL_UP,KC_NO, KC_NO, KC_NO, KC_MS_BTN4, KC_MS_BTN5, KC_MS_WH_DOWN, OSM(MOD_LALT), KC_NO, KC_NO, KC_NO, KC_NO, KC_PSCR, LGUI(KC_ESCAPE), KC_TRANSPARENT, KC_NO)
};
