// Copyright 2021 Manna Harbour
// https://github.com/manna-harbour/miryoku

// Base QWERTY Layer
// ┌─────────┬─────────┬─────────┬─────────┬─────────┐   ┌─────────┬─────────┬─────────┬─────────┬─────────┐
// │    Q    │    W    │    E    │    R    │    T    │   │    Y    │    U    │    I    │    O    │    P    │
// ├─────────┼─────────┼─────────┼─────────┼─────────┤   ├─────────┼─────────┼─────────┼─────────┼─────────┤
// │ A/LGUI  │ S/LALT  │ D/LCTRL │ F/LSHFT │    G    │   │    H    │ J/LSHFT │ K/LCTRL │ L/LALT  │ '/LGUI  │
// ├─────────┼─────────┼─────────┼─────────┼─────────┤   ├─────────┼─────────┼─────────┼─────────┼─────────┤
// │Z/BUTTON │ X/RALT  │    C    │    V    │    B    │   │    N    │    M    │    ,    │ ./RALT  │ //BUTTON│
// ├─────────┼─────────┼─────────┼─────────┼─────────┤   ├─────────┼─────────┼─────────┼─────────┼─────────┤
// │         │         │ESC/MEDIA│SPC/SYM  │TAB/MOUSE│   │RET/NAV  │BSPC/NUM │DEL/FUN  │         │         │
// └─────────┴─────────┴─────────┴─────────┴─────────┘   └─────────┴─────────┴─────────┴─────────┴─────────┘
#define MIRYOKU_BASE_QWERTY \
&kp Q,             &kp W,             &kp E,             &kp R,             &kp T,             &kp Y,             &kp U,             &kp I,             &kp O,             &kp P,             \
U_MT(LGUI, A),     U_MT(LALT, S),     U_MT(LCTRL, D),    U_MT(LSHFT, F),    &kp G,             &kp H,             U_MT(LSHFT, J),    U_MT(LCTRL, K),    U_MT(LALT, L),     U_MT(LGUI, SQT),   \
U_LT(U_BUTTON, Z), U_MT(RALT, X),     &kp C,             &kp V,             &kp B,             &kp N,             &kp M,             &kp COMMA,         U_MT(RALT, DOT),   U_LT(U_BUTTON, SLASH),\
U_NP,              U_NP,              U_LT(U_MEDIA, ESC),U_LT(U_SYM, SPACE),U_LT(U_MOUSE, TAB),U_LT(U_NAV, RET),  U_LT(U_NUM, BSPC), U_LT(U_FUN, DEL),  U_NP,              U_NP

// Number Layer
// ┌─────────┬─────────┬─────────┬─────────┬─────────┐   ┌─────────┬─────────┬─────────┬─────────┬─────────┐
// │    1    │    2    │    3    │    4    │    5    │   │    6    │    7    │    8    │    9    │    0    │
// ├─────────┼─────────┼─────────┼─────────┼─────────┤   ├─────────┼─────────┼─────────┼─────────┼─────────┤
// │  LGUI   │  LALT   │  LCTRL  │  LSHFT  │         │   │         │  LSHFT  │  LCTRL  │  LALT   │  LGUI   │
// ├─────────┼─────────┼─────────┼─────────┼─────────┤   ├─────────┼─────────┼─────────┼─────────┼─────────┤
// │         │  RALT   │ TO_NUM  │ TO_NAV  │         │   │         │         │         │  RALT   │         │
// ├─────────┼─────────┼─────────┼─────────┼─────────┤   ├─────────┼─────────┼─────────┼─────────┼─────────┤
// │         │         │         │         │         │   │    .    │    0    │    -    │         │         │
// └─────────┴─────────┴─────────┴─────────┴─────────┘   └─────────┴─────────┴─────────┴─────────┴─────────┘
#define MIRYOKU_NUM \
&kp N1,            &kp N2,            &kp N3,            &kp N4,            &kp N5,            &kp N6,            &kp N7,            &kp N8,            &kp N9,            &kp N0,            \
&kp LGUI,          &kp LALT,          &kp LCTRL,         &kp LSHFT,         U_NA,              U_NA,              &kp LSHFT,         &kp LCTRL,         &kp LALT,          &kp LGUI,          \
U_NA,              &kp RALT,          &u_to_U_NUM,       &u_to_U_NAV,       U_NA,              U_NA,              U_NA,              U_NA,              &kp RALT,          U_NA,              \
U_NP,              U_NP,              U_NA,              U_NA,              U_NA,              &kp DOT,           &kp N0,            &kp MINUS,         U_NP,              U_NP

// Symbol Layer
// ┌─────────┬─────────┬─────────┬─────────┬─────────┐   ┌─────────┬─────────┬─────────┬─────────┬─────────┐
// │    !    │    @    │    #    │    $    │    %    │   │    ^    │    &    │    *    │    (    │    )    │
// ├─────────┼─────────┼─────────┼─────────┼─────────┤   ├─────────┼─────────┼─────────┼─────────┼─────────┤
// │  LGUI   │  LALT   │  LCTRL  │  LSHFT  │         │   │    -    │    =    │    [    │    ]    │    \    │
// ├─────────┼─────────┼─────────┼─────────┼─────────┤   ├─────────┼─────────┼─────────┼─────────┼─────────┤
// │         │  RALT   │ TO_SYM  │TO_MOUSE │         │   │    _    │    +    │    {    │    }    │    |    │
// ├─────────┼─────────┼─────────┼─────────┼─────────┤   ├─────────┼─────────┼─────────┼─────────┼─────────┤
// │         │         │         │         │         │   │    :    │    ;    │    `    │         │         │
// └─────────┴─────────┴─────────┴─────────┴─────────┘   └─────────┴─────────┴─────────┴─────────┴─────────┘
#define MIRYOKU_SYM \
&kp EXCL,          &kp AT,            &kp HASH,          &kp DLLR,          &kp PRCNT,         &kp CARET,         &kp AMPS,          &kp ASTRK,         &kp LPAR,          &kp RPAR,          \
&kp LGUI,          &kp LALT,          &kp LCTRL,         &kp LSHFT,         U_NA,              &kp MINUS,         &kp EQUAL,         &kp LBKT,          &kp RBKT,          &kp BSLH,          \
U_NA,              &kp RALT,          &u_to_U_SYM,       &u_to_U_MOUSE,     U_NA,              &kp UNDER,         &kp PLUS,          &kp LBRC,          &kp RBRC,          &kp PIPE,          \
U_NP,              U_NP,              U_NA,              U_NA,              U_NA,              &kp COLON,         &kp SEMI,          &kp GRAVE,         U_NP,              U_NP

// Function Layer
// ┌─────────┬─────────┬─────────┬─────────┬─────────┐   ┌─────────┬─────────┬─────────┬─────────┬─────────┐
// │   F1    │   F2    │   F3    │   F4    │   F5    │   │   F6    │   F7    │   F8    │   F9    │   F10   │
// ├─────────┼─────────┼─────────┼─────────┼─────────┤   ├─────────┼─────────┼─────────┼─────────┼─────────┤
// │  LGUI   │  LALT   │  LCTRL  │  LSHFT  │         │   │         │  LSHFT  │  LCTRL  │  LALT   │  LGUI   │
// ├─────────┼─────────┼─────────┼─────────┼─────────┤   ├─────────┼─────────┼─────────┼─────────┼─────────┤
// │         │  RALT   │ TO_FUN  │TO_MEDIA │         │   │         │         │         │  RALT   │         │
// ├─────────┼─────────┼─────────┼─────────┼─────────┤   ├─────────┼─────────┼─────────┼─────────┼─────────┤
// │         │         │         │         │         │   │   F11   │   F12   │  PAUSE  │         │         │
// └─────────┴─────────┴─────────┴─────────┴─────────┘   └─────────┴─────────┴─────────┴─────────┴─────────┘
#define MIRYOKU_FUN \
&kp F1,            &kp F2,            &kp F3,            &kp F4,            &kp F5,            &kp F6,            &kp F7,            &kp F8,            &kp F9,            &kp F10,           \
&kp LGUI,          &kp LALT,          &kp LCTRL,         &kp LSHFT,         U_NA,              U_NA,              &kp LSHFT,         &kp LCTRL,         &kp LALT,          &kp LGUI,          \
U_NA,              &kp RALT,          &u_to_U_FUN,       &u_to_U_MEDIA,     U_NA,              U_NA,              U_NA,              U_NA,              &kp RALT,          U_NA,              \
U_NP,              U_NP,              U_NA,              U_NA,              U_NA,              &kp F11,           &kp F12,           &kp PAUSE_BREAK,   U_NP,              U_NP
