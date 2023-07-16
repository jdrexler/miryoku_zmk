// Copyright 2021 Manna Harbour
// https://github.com/manna-harbour/miryoku

/* German umlauts 
ZMK_UNICODE_PAIR(   de_ae,      N0, N0,  E, N4,    N0, N0,  C, N4)
ZMK_UNICODE_PAIR(   de_oe,      N0, N0,  F, N6,    N0, N0,  D, N6)
ZMK_UNICODE_PAIR(   de_ue,      N0, N0,  F,  C,    N0, N0,  D,  C)
ZMK_UNICODE_SINGLE( de_eszett,  N0, N0,  D,  F)
*/

#define MIRYOKU_LAYER_BASE \
&kp Q,             &kp W,             &kp F,             &kp P,             &kp G,             &kp J,             &kp L,             &kp U,             &kp Y,             &kp SEMI,           \
U_MT(LGUI, A),     U_MT(LALT, R),     U_MT(LCTRL, S),    U_MT(LSHFT, T),    &kp D,             &kp H,             U_MT(LSHFT, N),    U_MT(LCTRL, E),    U_MT(LALT, I),     U_MT(LGUI, O),     \
U_LT(U_BUTTON, Z), U_MT(RALT, X),     &kp C,             &kp V,             &kp B,             &kp K,             &kp M,             &kp COMMA,         U_MT(RALT, DOT),   U_LT(U_BUTTON, SLASH),\
U_NP,              U_NP,              U_LT(U_MEDIA, ESC),U_LT(U_NAV, SPACE),U_LT(U_MOUSE, TAB),U_LT(U_SYM, RET),  U_LT(U_NUM, BSPC), U_LT(U_FUN, DEL),  U_NP,              U_NP\
{
    combos {
        compatible = "zmk,combos";
        combo_ae {
            timeout-ms = <50>;
            key-positions = <11 12>;
            bindings = <&kp U>;
        };
    };
};
