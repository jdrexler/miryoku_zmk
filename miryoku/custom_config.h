// Copyright 2021 Manna Harbour
// https://github.com/manna-harbour/miryoku

// German umlauts 
ZMK_UNICODE_PAIR(   de_ae,      N0, N0,  E, N4,    N0, N0,  C, N4)
ZMK_UNICODE_PAIR(   de_oe,      N0, N0,  F, N6,    N0, N0,  D, N6)
ZMK_UNICODE_PAIR(   de_ue,      N0, N0,  F,  C,    N0, N0,  D,  C)
ZMK_UNICODE_SINGLE( de_eszett,  N0, N0,  D,  F)

/ {
    combos {
        compatible = "zmk,combos";
            ae_combo {
            timeout-ms = <50>;
            key-positions = <11 12>;
            bindings = <&kp de_ae >;
        };
    };
};

