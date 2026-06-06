/*
 * keys_pt_abnt2.h — ZMK locale header for Portuguese (Brazil) ABNT2
 *
 * Place this file in config/ alongside your .keymap and add:
 *   #include "keys_pt_abnt2.h"
 *
 * ┌─────────────────────────────────────────────────────────────────┐
 * │  ABNT2 physical key  →  HID scancode (ZMK name)  →  output     │
 * ├──────────────────────┬──────────────────────────┬──────────────┤
 * │  ' "    (top-left)   │  GRAVE                   │  ' / "       │
 * │  ´ `    (dead keys)  │  LBKT    (OEM_4)         │  dead acute / grave │
 * │  [ {                 │  RBKT    (OEM_6)         │  [ / {       │
 * │  Ç ç                 │  SEMI    (OEM_1)         │  ç / Ç       │
 * │  ~ ^    (dead keys)  │  SQT     (OEM_7)         │  dead tilde / circumflex │
 * │  ] }                 │  BSLH    (OEM_5)         │  ] unshifted / } shifted │
 * │  | \    (non-US)     │  NUBS    (OEM_102)       │  | / \       │
 * │  , <                 │  COMMA                   │  , / <       │
 * │  . >                 │  DOT                     │  . / >       │
 * │  ; :    (OEM_2)      │  FSLH                    │  ; / :       │
 * │  / ?    (ABNT_C1)    │  INT1                    │  / / ?       │
 * └──────────────────────┴──────────────────────────┴──────────────┘
 */

#pragma once

/* ── Single-press keys ──────────────────────────────────────────────── */
#define PT_QUOT         GRAVE           /* '  unshifted                 */
#define PT_DQUOT        LS(GRAVE)       /* "  shifted                   */

#define PT_C_CEDILLA    SEMI            /* ç  unshifted (Ç with shift)  */
#define PT_CEDILLA      LS(SEMI)        /* Ç  shifted                   */

#define PT_LBKT         RBKT            /* [  unshifted                 */
#define PT_LBRC         LS(RBKT)        /* {  shifted                   */

/* BSLH (OEM_5) = ] unshifted, } shifted on ABNT2 */
#define PT_RBKT         BSLH            /* ]  unshifted  (OEM_5)        */
#define PT_RBRC         LS(BSLH)        /* }  shifted    (OEM_5)        */

#define PT_PIPE         NON_US_BSLH     /* |  unshifted  (OEM_102)      */
#define PT_BACKSLASH    LS(NON_US_BSLH) /* \  shifted    (OEM_102)      */

#define PT_SLASH        INT1            /* /  unshifted  (ABNT_C1)      */
#define PT_QMARK        LS(INT1)        /* ?  shifted                   */

#define PT_SEMI         FSLH            /* ;  unshifted  (OEM_2)        */
#define PT_COLON        LS(FSLH)        /* :  shifted                   */

#define PT_COMMA        COMMA           /* ,  unshifted                 */
#define PT_LT           LS(COMMA)       /* <  shifted                   */

#define PT_DOT          DOT             /* .  unshifted                 */
#define PT_GT           LS(DOT)         /* >  shifted                   */

#define PT_MINUS        MINUS           /* -  unshifted                 */
#define PT_UNDER        LS(MINUS)       /* _  shifted                   */

#define PT_EQUAL        EQUAL           /* =  unshifted                 */
#define PT_PLUS         LS(EQUAL)       /* +  shifted                   */

/* ── Dead keys ──────────────────────────────────────────────────────── */
#define PT_ACUTE        LBKT            /* ´  dead acute   (OEM_4)      */
#define PT_GRAVE        LS(LBKT)        /* `  dead grave   (shift OEM_4)*/
#define PT_TILDE        SQT             /* ~  dead tilde   (OEM_7)      */
#define PT_CIRC         LS(SQT)         /* ^  dead circ    (shift OEM_7)*/

/* ── Symbols reachable via standard shifted keys ────────────────────── */
#define PT_EXCL         LS(N1)          /* !                            */
#define PT_AT           LS(N2)          /* @                            */
#define PT_HASH         LS(N3)          /* #                            */
#define PT_DOLLAR       LS(N4)          /* $                            */
#define PT_PERCENT      LS(N5)          /* %                            */
#define PT_DIAERESIS    LS(N6)          /* ¨  diaeresis                 */
#define PT_CARET        LS(SQT)         /* ^  caret = dead circ shifted */
#define PT_AMPERSAND    LS(N7)          /* &                            */
#define PT_ASTERISK     LS(N8)          /* *                            */
#define PT_LPAR         LS(N9)          /* (                            */
#define PT_RPAR         LS(N0)          /* )                            */

#define PT_SQT          GRAVE           /* alias — single quote         */
#define PT_DQT          LS(GRAVE)       /* alias — double quote         */
