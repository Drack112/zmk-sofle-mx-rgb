/*
 * keys_pt_BR.h — ZMK locale header for Portuguese (Brazil) ABNT2 layout
 *
 * Place this file alongside your .keymap in config/ and add:
 *   #include "keys_pt_BR.h"
 *
 * How this works:
 *   ZMK sends raw HID scancodes. The OS (set to ABNT2 / pt-BR) interprets
 *   them. Each define below is the ZMK scancode that produces the given
 *   character when the OS layout is ABNT2.
 *
 * ABNT2 → US HID scancode mapping (what physically differs from US QWERTY):
 *
 *  ABNT2 key           | HID name in ZMK | unshifted | shifted
 *  ──────────────────────────────────────────────────────────
 *  ' (apostrophe row)  | GRAVE           | '         | "
 *  ´ ` (dead acute)    | LBKT            | ´ (dead)  | ` (dead)
 *  [ {                 | RBKT            | [         | {
 *  Ç ç                 | SEMI            | ç         | Ç
 *  ~ ^ (dead)          | SQT             | ~ (dead)  | ^ (dead)
 *  } ]  (right side)   | BSLH            | }         | ]   (NonUS bslash)
 *  /  ? (ABNT2 extra)  | INT1            | /         | ?
 *  . (numpad)          | KP_DOT → INT2   | .         |
 *  \ | (NonUS)         | NUHS            | \         | |
 *
 * NOTE: Many accented characters (á, ã, â, é, ê, ó, ô, ú, ü, à) are
 * produced by pressing a dead key first, then the base vowel. The dead
 * keys themselves are defined here — use them in combos or macros for
 * direct accented output, or assign them individually as dead keys on a layer.
 */

#pragma once

/* ─── ABNT2 Row 0 (Number row) ─────────────────────────────────────────── */
/* ' and " — top-left key (above Tab) */
#define PT_QUOT    GRAVE           /* '  (unshifted) */
#define PT_DQUO    LS(GRAVE)       /* "  (shifted)   */

/* º and ª (ordinal indicators) — on some layouts at same position */
/* These require AltGr on standard ABNT2; omitted here for brevity   */

/* ─── ABNT2 Row 1 (QWERTY row) ─────────────────────────────────────────── */
/* ´ ` dead keys — in place of [ key */
#define PT_ACUT    LBKT            /* ´  dead acute (tap then vowel)  */
#define PT_DGRV    LS(LBKT)        /* `  dead grave (tap then vowel)  */

/* [ { — in place of ] key */
#define PT_LBRC    RBKT            /* [  */
#define PT_LCBR    LS(RBKT)        /* {  */

/* ─── ABNT2 Row 2 (Home row) ────────────────────────────────────────────── */
/* ç Ç — in place of ; key */
#define PT_CCED    SEMI            /* ç  */
#define PT_CCAP    LS(SEMI)        /* Ç  */

/* ~ ^ dead keys — in place of ' key */
#define PT_TILD    SQT             /* ~  dead tilde   (tap then a/o for ã/õ) */
#define PT_CIRC    LS(SQT)         /* ^  dead circumflex (tap then a/e/o)    */

/* ─── ABNT2 Row 3 (Bottom row) ──────────────────────────────────────────── */
/* } ] — NonUS backslash position */
#define PT_RCBR    NUHS            /* }  */
#define PT_RBRC    LS(NUHS)        /* ]  (shifted NonUS)                     */

/* / ? — ABNT2 extra key (INT1, left of right Shift) */
#define PT_SLSH    INT1            /* /  */
#define PT_QUES    LS(INT1)        /* ?  */

/* \ | — standard backslash position */
#define PT_BSLS    BSLH            /* \  */
#define PT_PIPE    LS(BSLH)        /* |  */

/* ─── Convenience aliases ───────────────────────────────────────────────── */
/* Semicolon and colon — these are displaced by ç on ABNT2.            */
/* On ABNT2 there is no dedicated ; key. Use a layer or combo for them. */

/* Dead key helpers — use in a macro or combo to type accented chars:
 *
 *   ã  →  PT_TILD then A
 *   õ  →  PT_TILD then O
 *   â  →  PT_CIRC then A
 *   ê  →  PT_CIRC then E
 *   ô  →  PT_CIRC then O
 *   á  →  PT_ACUT then A
 *   é  →  PT_ACUT then E
 *   í  →  PT_ACUT then I
 *   ó  →  PT_ACUT then O
 *   ú  →  PT_ACUT then U
 *   à  →  PT_DGRV then A
 */
