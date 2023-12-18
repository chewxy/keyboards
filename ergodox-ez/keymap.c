#include QMK_KEYBOARD_H
#include "version.h"
#include "keymap_german.h"
#include "keymap_nordic.h"
#include "keymap_french.h"
#include "keymap_spanish.h"
#include "keymap_hungarian.h"
#include "keymap_swedish.h"
#include "keymap_brazilian_abnt2.h"
#include "keymap_canadian_multilingual.h"
#include "keymap_japanese.h"
#include "keymap_korean.h"
#include "keymap_bepo.h"
#include "keymap_italian.h"
#include "keymap_slovenian.h"
#include "keymap_lithuanian_azerty.h"
#include "keymap_danish.h"
#include "keymap_norwegian.h"
#include "keymap_portuguese.h"
#include "keymap_contributions.h"
#include "keymap_czech.h"
#include "keymap_romanian.h"
#include "keymap_russian.h"
#include "keymap_uk.h"
#include "keymap_estonian.h"
#include "keymap_belgian.h"
#include "keymap_us_international.h"
#include "keymap_croatian.h"
#include "keymap_turkish_q.h"
#include "keymap_slovak.h"

#define KC_MAC_UNDO LGUI(KC_Z)
#define KC_MAC_CUT LGUI(KC_X)
#define KC_MAC_COPY LGUI(KC_C)
#define KC_MAC_PASTE LGUI(KC_V)
#define KC_PC_UNDO LCTL(KC_Z)
#define KC_PC_CUT LCTL(KC_X)
#define KC_PC_COPY LCTL(KC_C)
#define KC_PC_PASTE LCTL(KC_V)
#define ES_LESS_MAC KC_GRAVE
#define ES_GRTR_MAC LSFT(KC_GRAVE)
#define ES_BSLS_MAC ALGR(KC_6)
#define NO_PIPE_ALT KC_GRAVE
#define NO_BSLS_ALT KC_EQUAL
#define LSA_T(kc) MT(MOD_LSFT | MOD_LALT, kc)
#define BP_NDSH_MAC ALGR(KC_8)
#define SE_SECT_MAC ALGR(KC_6)

enum custom_keycodes {
  RGB_SLD = EZ_SAFE_RANGE,
  ST_MACRO_0,
  ST_MACRO_1,
  ST_MACRO_2,
  ST_MACRO_3,
  ST_MACRO_4,
  ST_MACRO_5,
  ST_MACRO_6,
};

enum tap_dance_codes {
  DANCE_0,
};

/*
The hexcodes and unicode_map was copied straight from the deleted user in this reddit thread
https://www.reddit.com/r/olkb/comments/dyt6fc/help_adding_apl_unicode_to_hotdox_76_qmk/

Thank you stranger for providing this useful copy and paste thing.
*/
enum apl_char_names {
  DIAMOND,
  QUAD_DIAMOND,
  DIAERESIS,
  IBEAM,
  MACRON,
  DEL_TILDE,
  LESS,
  DEL_STILE,
  LESS_EQUAL,
  DELTA_STILE,
  EQUALS,
  CIRCLE_STILE,
  GREATER_EQUAL,
  CIRCLE_BACKSLASH,
  GREATER,
  CIRCLED_MINUS,
  NOT_EQUAL,
  CIRCLE_STAR,
  OR,
  DOWN_CARET_TILDE,
  AND,
  UP_CARET_TILDE,
  MULT,
  EXCL,
  DIVISION,
  QUAD_DIVIDE,
  QUESTION_MARK,
  OMEGA,
  OMEGA_UNDERBAR,
  EPSILON,
  SMALL_ELEMENT,
  EPSILON_UNDERBAR,
  RHO,
  TILDE,
  TILDE_DIAERESIS,
  UPWARDS_ARROW,
  DOWNWARDS_ARROW,
  IOTA,
  IOTA_UNDERBAR,
  WHITE_CIRCLE,
  CIRCLE_DIAERESIS,
  STAR_OPERATOR,
  STAR_DIAERESIS,
  LEFT_ARROW,
  QUOTE_QUAD,
  RIGHT_ARROW,
  ZILDE,
  ALPHA,
  ALPHA_UNDERBAR,
  LEFT_CEILING,
  LEFT_FLOOR,
  LOW_LINE,
  NABLA,
  INCREMENT,
  DELTA_UNDERBAR,
  RING_OPERATOR,
  JOT_DIAERESIS,
  APOSTROPHE,
  QUAD_EQUAL,
  QUAD,
  SQUISH_QUAD,
  DOWN_TACK_JOT,
  IDENTICAL,
  UP_TACK_JOT,
  NOT_IDENTICAL,
  RIGHT_TACK,
  LEFT_TACK,
  SUBSET,
  SUPERSET,
  CHI,
  INTERSECTION,
  UNION,
  UP_TACK,
  DOWN_TACK,
  VERTICAL_LINE,
  UP_SHOE_JOT,
  COMMA_BAR,
  BACKSLASH_BAR,
  SLASH_BAR,
  QUAD_COLON,

  // Additions
  DELTA
};

const uint32_t PROGMEM unicode_map[] = {
  [DIAMOND]          = 0x25CA, // ◊      0
  [QUAD_DIAMOND]     = 0x233A, // ⌺
  [DIAERESIS]        = 0x00A8, // ¨
  [IBEAM]            = 0x2336, // ⌶
  [MACRON]           = 0x00AF, // ¯
  [DEL_TILDE]        = 0x236B, // ⍫      5
  [LESS]             = 0x003C, // <
  [DEL_STILE]        = 0x2352, // ⍒
  [LESS_EQUAL]       = 0x2264, // ≤
  [DELTA_STILE]      = 0x234B, // ⍋
  [EQUALS]           = 0x003D, // =     10
  [CIRCLE_STILE]     = 0x233D, // ⌽
  [GREATER_EQUAL]    = 0x2265, // ≥
  [CIRCLE_BACKSLASH] = 0x2349, // ⍉
  [GREATER]          = 0x003E, // >
  [CIRCLED_MINUS]    = 0x2296, // ⊖     15
  [NOT_EQUAL]        = 0x2260, // ≠
  [CIRCLE_STAR]      = 0x235F, // ⍟
  [OR]               = 0x2228, // ∨
  [DOWN_CARET_TILDE] = 0x2371, // ⍱
  [AND]              = 0x2227, // ∧     20
  [UP_CARET_TILDE]   = 0x2372, // ⍲
  [MULT]             = 0x00D7, // ×
  [EXCL]             = 0x0021, // !
  [DIVISION]         = 0x00F7, // ÷
  [QUAD_DIVIDE]      = 0x2339, // ⌹     25
  [QUESTION_MARK]    = 0x003F, // ?
  [OMEGA]            = 0x2375, // ⍵
  [OMEGA_UNDERBAR]   = 0x2379, // ⍹
  [EPSILON]          = 0x03B5, // ε
  [SMALL_ELEMENT]    = 0x220A, // ∊     30
  [EPSILON_UNDERBAR] = 0x2377, // ⍷
  [RHO]              = 0x2374, // ⍴
  [TILDE]            = 0x007E, // ~
  [TILDE_DIAERESIS]  = 0x2368, // ⍨
  [UPWARDS_ARROW]    = 0x2191, // ↑     35
  [DOWNWARDS_ARROW]  = 0x2193, // ↓
  [IOTA]             = 0x2373, // ⍳
  [IOTA_UNDERBAR]    = 0x2378, // ⍸
  [WHITE_CIRCLE]     = 0x25CB, // ○
  [CIRCLE_DIAERESIS] = 0x2365, // ⍥     40
  [STAR_OPERATOR]    = 0x22C6, // ⋆
  [STAR_DIAERESIS]   = 0x2363, // ⍣
  [LEFT_ARROW]       = 0x2190, // ←
  [QUOTE_QUAD]       = 0x235E, // ⍞
  [RIGHT_ARROW]      = 0x2192, // →     45
  [ZILDE]            = 0x236C, // ⍬
  [ALPHA]            = 0x237A, // ⍺
  [ALPHA_UNDERBAR]   = 0x2376, // ⍶
  [LEFT_CEILING]     = 0x2308, // ⌈
  [LEFT_FLOOR]       = 0x230A, // ⌊     50
  [LOW_LINE]         = 0x005F, // _
  [NABLA]            = 0x2207, // ∇
  [INCREMENT]        = 0x2206, // ∆
  [DELTA_UNDERBAR]   = 0x2359, // ⍙
  [RING_OPERATOR]    = 0x2218, // ∘     55
  [JOT_DIAERESIS]    = 0x2364, // ⍤
  [APOSTROPHE]       = 0x0027, // '
  [QUAD_EQUAL]       = 0x2338, // ⌸
  [QUAD]             = 0x2395, // ⎕
  [SQUISH_QUAD]      = 0x2337, // ⌷     60
  [DOWN_TACK_JOT]    = 0x234E, // ⍎
  [IDENTICAL]        = 0x2261, // ≡
  [UP_TACK_JOT]      = 0x2355, // ⍕
  [NOT_IDENTICAL]    = 0x2262, // ≢
  [RIGHT_TACK]       = 0x22A2, // ⊢     65
  [LEFT_TACK]        = 0x22A3, // ⊣
  [SUBSET]           = 0x2282, // ⊂
  [SUPERSET]         = 0x2283, // ⊃
  [CHI]              = 0x03C7, // χ
  [INTERSECTION]     = 0x2229, // ∩     70
  [UNION]            = 0x222A, // ∪
  [UP_TACK]          = 0x22A5, // ⊥
  [DOWN_TACK]        = 0x22A4, // ⊤
  [VERTICAL_LINE]    = 0x007C, // |
  [UP_SHOE_JOT]      = 0x235D, // ⍝     75
  [COMMA_BAR]        = 0x236A, // ⍪
  [BACKSLASH_BAR]    = 0x2340, // ⍀
  [SLASH_BAR]        = 0x233F, // ⌿
  [QUAD_COLON]       = 0x2360, // ⍠     79

  [DELTA] = 0x0394, // Δ

};



/*
The APL keys are laid out as such:

Note this requires a version of QMK that has UC_M_EM as an "OS".

┌────────┬────┬────┬────┬────┬────┬────┐              ┌────┬────┬────┬────┬────┬────┬────────┐
│    ⌺   │  ⌶ │  ⍫ │  ⍒ │  ⍋ │  ⌽ │    │              │    │  ⍉ │  ⊖ │  ⍟ │  ⍱ │  ⍲ │   !    │
│   ◊    │ ¨  │ ¯  │ <  │ ≤  │ =  │    │              │emacs ≥  │ >  │ ≠  │ ∨  │ ∧  │  ×     │
│        │    │    │    │    │    │    │              │    │    │    │    │    │    │        │
├────────┼────┼────┼────┼────┼────┼────┤              ├────┼────┼────┼────┼────┼────┼────────┤
│        │    │  ⍹ │  ⍷ │    │  ⍨ │    │              │    │    │    │  ⍸ │  ⍥ │  ⍣ │   ⊣    │
│ TAB    │ ?  │ ⍵  │ ε  │ ⍴  │ ~  │    │              │    │ ↑  │ ↓  │ ⍳  │ ○  │ ⋆  │  ⊢     │
│        │    │    │    │    │    │ del│              │bksp│    │    │    │    │    │        │
├────────┼────┼────┼────┼────┼────┤    │              │    ├────┼────┼────┼────┼────┼────────┤
│        │  ⍶ │    │    │    │  ⍫ │    │              │    │  ⍙ │  ⍤ │    │  ⌷ │  ≢ │        │
│ ALT    │ ⍺  │ ⌈  │ ⌊  │ _  │ ∇  ├────┤              ├────┤ ∆  │ ∘  │ '  │ ⎕  │ ⍕  │ enter  │
│        │    │    │    │    │    │    │              │    │    │    │    │    │    │        │
├────────┼────┼────┼────┼────┼────┤  ≡ │              │  ⌹ ├────┼────┼────┼────┼────┼────────┤
│        │    │    │    │    │    │ ⍎  │              │ ÷  │    │    │    │  ⍠ │  ⍪ │        │
│ SHIFT  │ ⊂  │ ⊃  │ ∩  │ ∪  │ ⊥  │    │              │    │ ⊤  │ |  │ ⍀  │ ⌿  │ ⍝  │        │
│        │    │    │    │    │    │    │              │    │    │    │    │    │    │        │
└───┬────┼────┼────┼────┼────┼────┴────┘              └────┴────┼────┼────┼────┼────┼────┬───┘
    │    │    │  ⍞ │  ⍬ │    │                                  │    │    │    │    │    │
    │    │ Δ   │ ←  │ →  │   │     ┌────┬────┐   ┌────┬────┐    │    │lin │mac │winc    │
    │    │    │    │    │    │     │    │    │   │    │    │    │    │    │    │    │    │
    └────┴────┴────┴────┴────┘     │    │    │   │    │    │    └────┴────┴────┴────┴────┘
                                   │    │    │   │    │    │
                              ┌────┼────┼────┤   ├────┼────┼────┐
                              │    │    │    │   │    │    │    │
                              │    │    │ESC │   │    │    │    │
                              │    │    │    │   │    │    │    │
                              │ spc│CTRL├────┤   ├────┤    │ spc|
                              │    │    │    │   │    │    │    │
                              │    │    │    │   │    |    │    │
                              │    │    │    │   │    │    │    │
                              └────┴────┴────┘   └────┴────┴────┘

*/

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_ergodox_pretty(
    KC_GRAVE,       KC_1,           KC_2,           KC_3,           KC_4,           KC_5,           KC_TRANSPARENT,                                 TG(5),          KC_6,           KC_7,           KC_8,           KC_9,           KC_0,           KC_MINUS,
    KC_TAB,         KC_Q,           KC_W,           KC_E,           KC_R,           KC_T,           KC_DELETE,                                      KC_BSPACE,      KC_Y,           KC_U,           KC_I,           KC_O,           KC_P,           KC_BSLASH,
    KC_LALT,        KC_A,           KC_S,           KC_D,           KC_F,           KC_G,                                                                           KC_H,           KC_J,           KC_K,           KC_L,           KC_QUOTE,       KC_ENTER,
    KC_LSHIFT,      KC_Z,           KC_X,           KC_C,           KC_V,           KC_B,           KC_SCOLON,                                      KC_EQUAL,       KC_N,           KC_M,           KC_COMMA,       KC_DOT,         KC_SLASH,       KC_RSHIFT,
    MO(1),          MO(3),          KC_TRANSPARENT, MO(4),          KC_LGUI,                                                                                        TG(2),          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_CAPSLOCK,
                                                                                                    KC_LEFT,        KC_DOWN,        KC_UP,          KC_RIGHT,
                                                                                                                    KC_ESCAPE,      KC_TRANSPARENT,
                                                                                    KC_SPACE,       KC_LCTRL,       KC_LALT,        KC_RGUI,        KC_RCTRL,       KC_SPACE
  ),

  /* Layer 1: Supplementary keys */
  [1] = LAYOUT_ergodox_pretty(
    KC_ESCAPE,      KC_F1,          KC_F2,          KC_F3,          KC_F4,          KC_F5,          KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_F6,          KC_F7,          KC_F8,          KC_F9,          KC_F10,         KC_F11,
    KC_TRANSPARENT, KC_EXLM,        KC_AT,          KC_LCBR,        KC_RCBR,        KC_PIPE,        KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_UP,          KC_7,           KC_8,           KC_9,           KC_ASTR,        KC_F12,
    KC_TRANSPARENT, KC_HASH,        KC_DLR,         KC_LPRN,        KC_RPRN,        KC_GRAVE,                                                                       KC_DOWN,        KC_4,           KC_5,           KC_6,           KC_PLUS,        KC_TRANSPARENT,
    KC_TRANSPARENT, KC_PERC,        KC_CIRC,        KC_LBRACKET,    KC_RBRACKET,    KC_TILD,        KC_HOME,                                        KC_END,         KC_AMPR,        KC_1,           KC_2,           KC_3,           KC_BSLASH,      KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  /* Layer 2: Mouse & movements */
  [2] = LAYOUT_ergodox_pretty(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_MS_BTN2,     KC_UP,          KC_MS_BTN1,     KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_MS_BTN1,     KC_MS_UP,       KC_MS_BTN2,     KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_LEFT,        KC_DOWN,        KC_RIGHT,       KC_TRANSPARENT,                                                                 KC_MS_LEFT,     KC_MS_DOWN,     KC_MS_RIGHT,    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  /* Layer 3: APL */
  [3] = LAYOUT_ergodox_pretty(
    XP(0, 1),       XP(2, 3),       XP(4, 5),       XP(6, 7),       XP(8, 9),        XP(10, 11),    KC_TRANSPARENT,                                 UC_M_EM,        XP(12, 13),     XP(14, 15),     XP(16, 17),     XP(18, 19),     XP(20, 21),     XP(22, 23),
    KC_TRANSPARENT, KC_QUES,        XP(27, 28),     XP(29, 31),     X(32),           XP(33, 34),    KC_TRANSPARENT,                                 KC_TRANSPARENT, X(35),          X(36),          XP(37, 38),     XP(39, 40),     XP(41, 42),     XP(65, 66),
    KC_TRANSPARENT, XP(47, 48),     X(49),          X(50),          KC_UNDS,         XP(52, 5),                                                                     XP(53, 54),     XP(55, 56),     KC_QUOT,        XP(59, 60),     XP(63, 64),     KC_TRANSPARENT,
    KC_TRANSPARENT, X(67),          X(68),          X(70),          X(71),           X(72),         XP(61, 62),                                     XP(24, 25),     X(73),          KC_PIPE,        X(77),          XP(78, 79),     XP(75, 76),     KC_TRANSPARENT,
    KC_TRANSPARENT, X(80),          XP(43, 44),     XP(45, 46),     KC_TRANSPARENT,                                                                                 KC_TRANSPARENT, UC_M_LN,        UC_M_OS,        UC_M_WC,        KC_TRANSPARENT,
                                                                                                             X(43), KC_TRANSPARENT, KC_TRANSPARENT, X(45),
                                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  /* Layer 4: OBS macros */
  [4] = LAYOUT_ergodox_pretty(
    KC_TRANSPARENT, ST_MACRO_0,     ST_MACRO_1,     ST_MACRO_2,     ST_MACRO_3,     KC_TRANSPARENT, ST_MACRO_4,                                     KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, ST_MACRO_5,     KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, ST_MACRO_6,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  /* Layer 5: Silly Fun Stuff */
  [5] = LAYOUT_ergodox_pretty(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                    RGB_MOD,        TOGGLE_LAYER_COLOR,RGB_TOG,        RGB_SLD,
                                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                    RGB_VAD,        RGB_VAI,        KC_TRANSPARENT, KC_TRANSPARENT, RGB_HUI,        RGB_HUD
  ),
};


extern bool g_suspend_state;
extern rgb_config_t rgb_matrix_config;

void keyboard_post_init_user(void) {
  rgb_matrix_enable();
}

const uint8_t PROGMEM ledmap[][DRIVER_LED_TOTAL][3] = {
    [0] = { {32,176,255}, {32,176,255}, {32,176,255}, {32,176,255}, {32,176,255}, {10,225,255}, {10,225,255}, {10,225,255}, {10,225,255}, {10,225,255}, {243,222,234}, {243,222,234}, {243,222,234}, {243,222,234}, {243,222,234}, {85,203,158}, {85,203,158}, {85,203,158}, {85,203,158}, {85,203,158}, {188,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {32,176,255}, {32,176,255}, {32,176,255}, {32,176,255}, {32,176,255}, {10,225,255}, {10,225,255}, {10,225,255}, {10,225,255}, {10,225,255}, {243,222,234}, {243,222,234}, {243,222,234}, {243,222,234}, {243,222,234}, {85,203,158}, {85,203,158}, {85,203,158}, {85,203,158}, {85,203,158}, {89,255,214}, {134,255,213}, {134,255,213}, {134,255,213} },

    [1] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {154,86,255}, {154,86,255}, {154,86,255}, {0,0,0}, {0,0,0}, {154,86,255}, {154,86,255}, {154,86,255}, {0,0,0}, {0,0,0}, {154,86,255}, {154,86,255}, {154,86,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {32,176,255}, {32,176,255}, {0,0,0}, {0,0,0}, {0,0,0}, {85,203,158}, {85,203,158}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {134,255,213}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

    [2] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {105,255,255}, {249,228,255}, {35,255,255}, {0,0,0}, {0,0,0}, {249,228,255}, {249,228,255}, {249,228,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {105,255,255}, {154,255,255}, {35,255,255}, {0,0,0}, {0,0,0}, {154,255,255}, {154,255,255}, {154,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

};

void set_layer_color(int layer) {
  for (int i = 0; i < DRIVER_LED_TOTAL; i++) {
    HSV hsv = {
      .h = pgm_read_byte(&ledmap[layer][i][0]),
      .s = pgm_read_byte(&ledmap[layer][i][1]),
      .v = pgm_read_byte(&ledmap[layer][i][2]),
    };
    if (!hsv.h && !hsv.s && !hsv.v) {
        rgb_matrix_set_color( i, 0, 0, 0 );
    } else {
        RGB rgb = hsv_to_rgb( hsv );
        float f = (float)rgb_matrix_config.hsv.v / UINT8_MAX;
        rgb_matrix_set_color( i, f * rgb.r, f * rgb.g, f * rgb.b );
    }
  }
}

void rgb_matrix_indicators_user(void) {
  if (keyboard_config.disable_layer_led) { return; }
  switch (biton32(layer_state)) {
    case 0:
      set_layer_color(0);
      break;
    case 1:
      set_layer_color(1);
      break;
    case 2:
      set_layer_color(2);
      break;
   default:
    if (rgb_matrix_get_flags() == LED_FLAG_NONE)
      rgb_matrix_set_color_all(0, 0, 0);
    break;
  }
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case ST_MACRO_0:
    if (record->event.pressed) {
      SEND_STRING(SS_LALT(SS_LCTL(SS_LGUI(SS_LSFT(SS_TAP(X_1))))));

    }
    break;
    case ST_MACRO_1:
    if (record->event.pressed) {
      SEND_STRING(SS_LALT(SS_LCTL(SS_LGUI(SS_LSFT(SS_TAP(X_2))))));

    }
    break;
    case ST_MACRO_2:
    if (record->event.pressed) {
      SEND_STRING(SS_LALT(SS_LCTL(SS_LGUI(SS_LSFT(SS_TAP(X_3))))));

    }
    break;
    case ST_MACRO_3:
    if (record->event.pressed) {
      SEND_STRING(SS_LALT(SS_LCTL(SS_LGUI(SS_LSFT(SS_TAP(X_4))))));

    }
    break;
    case ST_MACRO_4:
    if (record->event.pressed) {
      SEND_STRING(SS_LALT(SS_LCTL(SS_LGUI(SS_LSFT(SS_TAP(X_LBRACKET))))));

    }
    break;
    case ST_MACRO_5:
    if (record->event.pressed) {
      SEND_STRING(SS_LALT(SS_LCTL(SS_LGUI(SS_LSFT(SS_TAP(X_0))))));

    }
    break;
    case ST_MACRO_6:
    if (record->event.pressed) {
      SEND_STRING(SS_LALT(SS_LCTL(SS_LGUI(SS_LSFT(SS_TAP(X_ENTER))))));

    }
    break;
    case RGB_SLD:
      if (record->event.pressed) {
        rgblight_mode(1);
      }
      return false;
  }
  return true;
}

layer_state_t layer_state_set_user(layer_state_t state) {

  uint8_t layer = biton32(state);

  ergodox_board_led_off();
  ergodox_right_led_1_off();
  ergodox_right_led_2_off();
  ergodox_right_led_3_off();
  switch (layer) {
    case 1:
      ergodox_right_led_1_on();
      break;
    case 2:
      ergodox_right_led_2_on();
      break;
    case 3:
      ergodox_right_led_3_on();
      break;
    case 4:
      ergodox_right_led_1_on();
      ergodox_right_led_2_on();
      break;
    case 5:
      ergodox_right_led_1_on();
      ergodox_right_led_3_on();
      break;
    case 6:
      ergodox_right_led_2_on();
      ergodox_right_led_3_on();
      break;
    case 7:
      ergodox_right_led_1_on();
      ergodox_right_led_2_on();
      ergodox_right_led_3_on();
      break;
    default:
      break;
  }
  return state;
};
