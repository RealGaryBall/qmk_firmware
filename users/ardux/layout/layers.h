// Copyright (c) 2021 Mike "KemoNine" Crosson
// SPDX-License-Identifier: Apache-2.0
#pragma once

// /////////
// Shared defines (combo definitions need these too)
#include "shared_defines.h"

// /////////
// User remixes / tweaks -- these take precidence above all standard definitions
#if __has_include("remixes/remix_shared_defines.h")
#include "remixes/remix_shared_defines.h"
#endif
#if __has_include("remixes/remix_layers.h")
#include "remixes/remix_layers.h"
#endif

#ifndef ARDUX_STD_LAYER_BASE_LEFT
#define ARDUX_STD_LAYER_BASE_LEFT \
STD_LEADING_NONES \
KEY_T4,           KEY_T3,           KEY_T2,           KEY_T1,           \
STD_BETWEEN_ROW_ONE_TWO_NONES \
KEY_B4,           KEY_B3,           KEY_B2,           KEY_B1            \
STD_TRAILING_NONES
#endif

#ifndef ARDUX_STD_LAYER_PAR_LEFT
#define ARDUX_STD_LAYER_PAR_LEFT \
STD_LEADING_NONES \
KC_RCBR,          KC_LPRN,          KC_RPRN,          KC_TRNS,          \
STD_BETWEEN_ROW_ONE_TWO_NONES \
KC_LCBR,          KC_LBRC,          KC_RBRC,          KC_NO             \
STD_TRAILING_NONES
#endif

#ifndef ARDUX_STD_LAYER_NUM_LEFT
#define ARDUX_STD_LAYER_NUM_LEFT \
STD_LEADING_NONES \
KNUM_T4,          KNUM_T3,          KNUM_T2,          KNUM_T1,          \
STD_BETWEEN_ROW_ONE_TWO_NONES \
KNUM_B4,          KNUM_B3,          KNUM_B2,          KNUM_B1           \
STD_TRAILING_NONES
#endif

#ifndef ARDUX_STD_LAYER_NAV_LEFT
#define ARDUX_STD_LAYER_NAV_LEFT \
STD_LEADING_NONES \
KNAV_T4,          KNAV_T3,          KNAV_T2,          KNAV_T1,          \
STD_BETWEEN_ROW_ONE_TWO_NONES \
KNAV_B4,          KNAV_B3,          KNAV_B2,          KNAV_B1           \
STD_TRAILING_NONES
#endif

#ifndef ARDUX_STD_LAYER_SYM_LEFT
#define ARDUX_STD_LAYER_SYM_LEFT \
STD_LEADING_NONES \
KC_GRV,           KC_SCLN,          KC_BSLS,          KC_EXLM,          \
STD_BETWEEN_ROW_ONE_TWO_NONES \
KC_EQL,           KC_MINS,          KC_QUES,          KC_TRNS           \
STD_TRAILING_NONES
#endif

#ifndef ARDUX_STD_LAYER_CUS_LEFT
#define ARDUX_STD_LAYER_CUS_LEFT \
STD_LEADING_NONES \
KC_NO,            KC_VOLU,          KC_INS,           KC_MUTE,          \
STD_BETWEEN_ROW_ONE_TWO_NONES \
KC_TRNS,          KC_VOLD,          KC_PSCR,          KC_RSFT           \
STD_TRAILING_NONES
#endif

#ifndef ARDUX_STD_LAYER_MSE_LEFT
#define ARDUX_STD_LAYER_MSE_LEFT \
STD_LEADING_NONES \
KMSE_T4,          KMSE_T3,          KMSE_T2,          KMSE_T1,          \
STD_BETWEEN_ROW_ONE_TWO_NONES \
KMSE_B4,          KMSE_B3,          KMSE_B2,          KMSE_B1           \
STD_TRAILING_NONES
#endif

#ifndef ARDUX_STD_LAYER_BASE_RIGHT
#define ARDUX_STD_LAYER_BASE_RIGHT \
STD_LEADING_NONES \
KEY_T1,           KEY_T2,           KEY_T3,           KEY_T4,           \
STD_BETWEEN_ROW_ONE_TWO_NONES \
KEY_B1,           KEY_B2,           KEY_B3,           KEY_B4            \
STD_TRAILING_NONES
#endif

#ifndef ARDUX_STD_LAYER_PAR_RIGHT
#define ARDUX_STD_LAYER_PAR_RIGHT \
STD_LEADING_NONES \
KC_TRNS,          KC_LPRN,          KC_RPRN,          KC_LCBR,          \
STD_BETWEEN_ROW_ONE_TWO_NONES \
KC_NO,            KC_LBRC,          KC_RBRC,          KC_RCBR           \
STD_TRAILING_NONES
#endif

#ifndef ARDUX_STD_LAYER_NUM_RIGHT
#define ARDUX_STD_LAYER_NUM_RIGHT \
STD_LEADING_NONES \
KNUM_T1,          KNUM_T2,          KNUM_T3,          KNUM_T4,          \
STD_BETWEEN_ROW_ONE_TWO_NONES \
KNUM_B1,          KNUM_B2,          KNUM_B3,          KNUM_B4           \
STD_TRAILING_NONES
#endif

#ifndef ARDUX_STD_LAYER_NAV_RIGHT
#define ARDUX_STD_LAYER_NAV_RIGHT \
STD_LEADING_NONES \
KNAV_T1,          KNAV_T2,          KNAV_T3,          KNAV_T4,          \
STD_BETWEEN_ROW_ONE_TWO_NONES \
KNAV_B1,          KNAV_B2,          KNAV_B3,          KNAV_B4           \
STD_TRAILING_NONES
#endif

#ifndef ARDUX_STD_LAYER_SYM_RIGHT
#define ARDUX_STD_LAYER_SYM_RIGHT \
STD_LEADING_NONES \
KC_EXLM,          KC_BSLS,          KC_SCLN,          KC_GRV,           \
STD_BETWEEN_ROW_ONE_TWO_NONES \
KC_TRNS,          KC_QUES,          KC_MINS,          KC_EQL            \
STD_TRAILING_NONES
#endif

#ifndef ARDUX_STD_LAYER_CUS_RIGHT
#define ARDUX_STD_LAYER_CUS_RIGHT \
STD_LEADING_NONES \
KC_MUTE,          KC_INS,           KC_VOLU,          KC_NO,            \
STD_BETWEEN_ROW_ONE_TWO_NONES \
KC_RSFT,          KC_PSCR,          KC_VOLD,          KC_TRNS           \
STD_TRAILING_NONES
#endif

#ifndef ARDUX_STD_LAYER_MSE_RIGHT
#define ARDUX_STD_LAYER_MSE_RIGHT \
STD_LEADING_NONES \
KMSE_T1,          KMSE_T2,          KMSE_T3,          KMSE_T4,          \
STD_BETWEEN_ROW_ONE_TWO_NONES \
KMSE_B1,          KMSE_B2,          KMSE_B3,          KMSE_B4           \
STD_TRAILING_NONES
#endif

#ifndef ARDUX_BIG_LAYER_BASE_LEFT
#ifdef ARDUX_SIZE_40P
#define ARDUX_MINUS TD(TD_40P)
#else
#define ARDUX_MINUS KC_MINS
#endif

#ifdef ARDUX_TWO_THUMB
#define ARDUX_BIG_LAYER_BASE_LEFT_THUMBS MO(LAYER_ID_BIG_SYM), KC_SPC
#endif
#ifndef ARDUX_TWO_THUMB
#define ARDUX_BIG_LAYER_BASE_LEFT_THUMBS MO(LAYER_ID_BIG_SYM), KC_SPC, KC_ENT
#endif
#define ARDUX_BIG_LAYER_BASE_LEFT \
BIG_LEADING_NONES \
KEY_T4,           KEY_T3,           KEY_T2,           KEY_T1,           ARDUX_MINUS,     \
BIG_BETWEEN_ROW_ONE_TWO_NONES \
KEY_B4,           KEY_B3,           KEY_B2,           KEY_B1,           OSM_SHIFT,        \
BIG_BETWEEN_ROW_TWO_THREE_NONES \
LALT_T(OSM_CTRL), KC_AT,            KC_DEL,           KC_EQL,           KC_TAB,           \
BIG_BETWEEN_ROW_THREE_THUMBS_NONES \
ARDUX_BIG_LAYER_BASE_LEFT_THUMBS \
BIG_TRAILING_NONES
#endif

#ifndef ARDUX_BIG_LAYER_NAV_LEFT
#ifdef ARDUX_TWO_THUMB
#define ARDUX_BIG_LAYER_NAV_LEFT_THUMBS KC_NO, KC_NO
#endif
#ifndef ARDUX_TWO_THUMB
#define ARDUX_BIG_LAYER_NAV_LEFT_THUMBS KC_NO, KC_NO, KC_NO
#endif

#define ARDUX_BIG_LAYER_NAV_LEFT \
BIG_LEADING_NONES \
KNAV_T4,          KNAV_T3,          KNAV_T2,          KNAV_T1,          KC_NO,            \
BIG_BETWEEN_ROW_ONE_TWO_NONES \
KNAV_B4,          KNAV_B3,          KNAV_B2,          KNAV_B1,          KC_NO,            \
BIG_BETWEEN_ROW_TWO_THREE_NONES \
KC_NO,            KC_NO,            KC_NO,            KC_NO,            KC_NO,            \
BIG_BETWEEN_ROW_THREE_THUMBS_NONES \
ARDUX_BIG_LAYER_NAV_LEFT_THUMBS \
BIG_TRAILING_NONES
#endif

#ifndef ARDUX_BIG_LAYER_NUM_LEFT
#ifdef ARDUX_TWO_THUMB
#define ARDUX_BIG_LAYER_NUM_LEFT_THUMBS KC_NO, KC_NO
#endif
#ifndef ARDUX_TWO_THUMB
#define ARDUX_BIG_LAYER_NUM_LEFT_THUMBS KC_NO, KC_NO, KC_NO
#endif

#define ARDUX_BIG_LAYER_NUM_LEFT \
BIG_LEADING_NONES \
KNUM_T4,          KNUM_T3,          KNUM_T2,          KNUM_T1,          KC_NO,            \
BIG_BETWEEN_ROW_ONE_TWO_NONES \
KNUM_B4,          KNUM_B3,          KNUM_B2,          KNUM_B1,          KC_NO,            \
BIG_BETWEEN_ROW_TWO_THREE_NONES \
KC_NO,            KC_NO,            KC_NO,            KC_NO,            KC_NO,            \
BIG_BETWEEN_ROW_THREE_THUMBS_NONES \
ARDUX_BIG_LAYER_NUM_LEFT_THUMBS \
BIG_TRAILING_NONES
#endif

#ifndef ARDUX_BIG_LAYER_SYM_LEFT
#ifdef ARDUX_TWO_THUMB
#define ARDUX_BIG_LAYER_SYM_LEFT_THUMBS KC_NO, KC_NO
#endif
#ifndef ARDUX_TWO_THUMB
#define ARDUX_BIG_LAYER_SYM_LEFT_THUMBS KC_NO, KC_NO, KC_NO
#endif

#define ARDUX_BIG_LAYER_SYM_LEFT \
BIG_LEADING_NONES \
KC_GRV,           KC_SCLN,          KC_BSLS,          KC_EXLM,          KC_NO,            \
BIG_BETWEEN_ROW_ONE_TWO_NONES \
KC_EQL,           KC_MINS,          KC_QUES,          KC_TRNS,          KC_NO,            \
BIG_BETWEEN_ROW_TWO_THREE_NONES \
KC_NO,            KC_NO,            KC_NO,            KC_NO,            KC_NO,            \
BIG_BETWEEN_ROW_THREE_THUMBS_NONES \
ARDUX_BIG_LAYER_SYM_LEFT_THUMBS \
BIG_TRAILING_NONES
#endif

#ifndef ARDUX_BIG_LAYER_PAR_LEFT
#ifdef ARDUX_TWO_THUMB
#define ARDUX_BIG_LAYER_PAR_LEFT_LEFT KC_NO, KC_NO
#endif
#ifndef ARDUX_TWO_THUMB
#define ARDUX_BIG_LAYER_PAR_LEFT_LEFT KC_NO, KC_NO, KC_NO
#endif

#define ARDUX_BIG_LAYER_PAR_LEFT \
BIG_LEADING_NONES \
KC_RCBR,          KC_LPRN,          KC_RPRN,          KC_TRNS,          KC_NO,            \
BIG_BETWEEN_ROW_ONE_TWO_NONES \
KC_LCBR,          KC_LBRC,          KC_RBRC,          KC_NO,            KC_NO,            \
BIG_BETWEEN_ROW_TWO_THREE_NONES \
KC_NO,            KC_NO,            KC_NO,            KC_NO,            KC_NO,            \
BIG_BETWEEN_ROW_THREE_THUMBS_NONES \
ARDUX_BIG_LAYER_PAR_LEFT_LEFT \
BIG_TRAILING_NONES
#endif

#ifndef ARDUX_BIG_LAYER_CUS_LEFT
#ifdef ARDUX_TWO_THUMB
#define ARDUX_BIG_LAYER_CUS_LEFT_THUMBS KC_NO, KC_NO
#endif
#ifndef ARDUX_TWO_THUMB
#define ARDUX_BIG_LAYER_CUS_LEFT_THUMBS KC_NO, KC_NO, KC_NO
#endif

#define ARDUX_BIG_LAYER_CUS_LEFT \
BIG_LEADING_NONES \
KC_NO,            KC_VOLU,          KC_INS,           KC_MUTE,          KC_NO,            \
BIG_BETWEEN_ROW_ONE_TWO_NONES \
KC_TRNS,          KC_VOLD,          KC_PSCR,          KC_RSFT,          KC_NO,            \
BIG_BETWEEN_ROW_TWO_THREE_NONES \
KC_NO,            KC_NO,            KC_NO,            KC_NO,            KC_NO,            \
BIG_BETWEEN_ROW_THREE_THUMBS_NONES \
ARDUX_BIG_LAYER_CUS_LEFT_THUMBS \
BIG_TRAILING_NONES
#endif

#ifndef ARDUX_BIG_LAYER_MSE_LEFT
#ifdef ARDUX_TWO_THUMB
#define ARDUX_BIG_LAYER_MSE_LEFT_THUMBS KC_NO, KC_NO
#endif
#ifndef ARDUX_TWO_THUMB
#define ARDUX_BIG_LAYER_MSE_LEFT_THUMBS KC_NO, KC_NO, KC_NO
#endif

#define ARDUX_BIG_LAYER_MSE_LEFT \
BIG_LEADING_NONES \
KMSE_T4,          KMSE_T3,          KMSE_T2,          KMSE_T1,          KC_NO,            \
BIG_BETWEEN_ROW_ONE_TWO_NONES \
KMSE_B4,          KMSE_B3,          KMSE_B2,          KMSE_B1,          KC_NO,            \
BIG_BETWEEN_ROW_TWO_THREE_NONES \
KC_NO,            KC_NO,            KC_NO,            KC_NO,            KC_NO,            \
BIG_BETWEEN_ROW_THREE_THUMBS_NONES \
ARDUX_BIG_LAYER_MSE_LEFT_THUMBS \
BIG_TRAILING_NONES
#endif

#ifndef ARDUX_BIG_LAYER_BIG_SYM_LEFT
#ifdef ARDUX_TWO_THUMB
#define ARDUX_BIG_LAYER_BIG_SYM_LEFT_THUMBS KC_TRNS, KC_SCLN
#endif
#ifndef ARDUX_TWO_THUMB
#define ARDUX_BIG_LAYER_BIG_SYM_LEFT_THUMBS KC_TRNS, KC_SCLN, KC_NO
#endif

#define ARDUX_BIG_LAYER_BIG_SYM_LEFT \
BIG_LEADING_NONES \
KC_CIRC,          KC_LCBR,          KC_RCBR,          KC_HASH,          KC_GRV,           \
BIG_BETWEEN_ROW_ONE_TWO_NONES \
KC_AMPR,          KC_LPRN,          KC_RPRN,          KC_DLR,           KC_BSLS,          \
BIG_BETWEEN_ROW_TWO_THREE_NONES \
KC_ASTR,          KC_LBRC,          KC_RBRC,          KC_PERC,          KC_PIPE,          \
BIG_BETWEEN_ROW_THREE_THUMBS_NONES \
ARDUX_BIG_LAYER_BIG_SYM_LEFT_THUMBS \
BIG_TRAILING_NONES
#endif

#ifndef ARDUX_BIG_LAYER_BIG_FUN_LEFT
#ifdef ARDUX_TWO_THUMB
#define ARDUX_BIG_LAYER_BIG_FUN_LEFT_THUMBS KC_NO, KC_NO
#endif
#ifndef ARDUX_TWO_THUMB
#define ARDUX_BIG_LAYER_BIG_FUN_LEFT_THUMBS KC_NO, KC_NO, KC_NO
#endif

#define ARDUX_BIG_LAYER_BIG_FUN_LEFT \
BIG_LEADING_NONES \
KC_F4,            KC_F3,            KC_F2,            KC_F1,            KC_NO,          \
BIG_BETWEEN_ROW_ONE_TWO_NONES \
KC_F8,            KC_F7,            KC_F6,            KC_F5,            FUN_1,          \
BIG_BETWEEN_ROW_TWO_THREE_NONES \
KC_F12,           KC_F11,           KC_F10,           KC_F9,            FUN_2,          \
BIG_BETWEEN_ROW_THREE_THUMBS_NONES \
ARDUX_BIG_LAYER_BIG_FUN_LEFT_THUMBS \
BIG_TRAILING_NONES
#endif

#ifndef ARDUX_BIG_LAYER_BASE_RIGHT
#ifdef ARDUX_SIZE_40P
#define ARDUX_MINUS TD(TD_40P)
#else
#define ARDUX_MINUS KC_MINS
#endif

#ifdef ARDUX_TWO_THUMB
#define ARDUX_BIG_LAYER_BASE_RIGHT_THUMBS KC_SPC, MO(LAYER_ID_BIG_SYM)
#endif
#ifndef ARDUX_TWO_THUMB
#define ARDUX_BIG_LAYER_BASE_RIGHT_THUMBS KC_ENT, KC_SPC, MO(LAYER_ID_BIG_SYM)
#endif

#define ARDUX_BIG_LAYER_BASE_RIGHT \
BIG_LEADING_NONES \
ARDUX_MINUS,     KEY_T1,           KEY_T2,           KEY_T3,           KEY_T4,           \
BIG_BETWEEN_ROW_ONE_TWO_NONES \
OSM_SHIFT,        KEY_B1,           KEY_B2,           KEY_B3,           KEY_B4,           \
BIG_BETWEEN_ROW_TWO_THREE_NONES \
KC_TAB,           KC_EQL,           KC_DEL,           KC_AT,            OSM_CTRL,         \
BIG_BETWEEN_ROW_THREE_THUMBS_NONES \
ARDUX_BIG_LAYER_BASE_RIGHT_THUMBS \
BIG_TRAILING_NONES
#endif

#ifndef ARDUX_BIG_LAYER_NAV_RIGHT
#ifdef ARDUX_TWO_THUMB
#define ARDUX_BIG_LAYER_NAV_RIGHT_THUMBS KC_NO, KC_NO
#endif
#ifndef ARDUX_TWO_THUMB
#define ARDUX_BIG_LAYER_NAV_RIGHT_THUMBS KC_NO, KC_NO, KC_NO
#endif

#define ARDUX_BIG_LAYER_NAV_RIGHT \
BIG_LEADING_NONES \
KC_NO,           KNAV_T1,          KNAV_T2,          KNAV_T3,          KNAV_T4,           \
BIG_BETWEEN_ROW_ONE_TWO_NONES \
KC_NO,            KNAV_B1,          KNAV_B2,          KNAV_B3,          KNAV_B4,                      \
BIG_BETWEEN_ROW_TWO_THREE_NONES \
KC_NO,            KC_NO,            KC_NO,            KC_NO,            KC_NO,            \
BIG_BETWEEN_ROW_THREE_THUMBS_NONES \
ARDUX_BIG_LAYER_NAV_RIGHT_THUMBS \
BIG_TRAILING_NONES
#endif

#ifndef ARDUX_BIG_LAYER_NUM_RIGHT
#ifdef ARDUX_TWO_THUMB
#define ARDUX_BIG_LAYER_NUM_RIGHT_THUMBS KC_NO, KC_NO
#endif
#ifndef ARDUX_TWO_THUMB
#define ARDUX_BIG_LAYER_NUM_RIGHT_THUMBS KC_NO, KC_NO, KC_NO
#endif
#define ARDUX_BIG_LAYER_NUM_RIGHT \
BIG_LEADING_NONES \
KC_NO,            KNUM_T1,          KNUM_T2,          KNUM_T3,          KNUM_T4,          \
BIG_BETWEEN_ROW_ONE_TWO_NONES \
KC_NO,            KNUM_B1,          KNUM_B2,          KNUM_B3,          KNUM_B4,          \
BIG_BETWEEN_ROW_TWO_THREE_NONES \
KC_NO,            KC_NO,            KC_NO,            KC_NO,            KC_NO,            \
BIG_BETWEEN_ROW_THREE_THUMBS_NONES \
ARDUX_BIG_LAYER_NUM_RIGHT_THUMBS \
BIG_TRAILING_NONES
#endif

#ifndef ARDUX_BIG_LAYER_SYM_RIGHT
#ifdef ARDUX_TWO_THUMB
#define ARDUX_BIG_LAYER_SYM_RIGHT_THUMBS KC_NO, KC_NO
#endif
#ifndef ARDUX_TWO_THUMB
#define ARDUX_BIG_LAYER_SYM_RIGHT_THUMBS KC_NO, KC_NO, KC_NO
#endif

#define ARDUX_BIG_LAYER_SYM_RIGHT \
BIG_LEADING_NONES \
KC_NO,            KC_EXLM,          KC_BSLS,          KC_SCLN,          KC_GRV,           \
BIG_BETWEEN_ROW_ONE_TWO_NONES \
KC_NO,            KC_TRNS,          KC_QUES,          KC_MINS,          KC_EQL,           \
BIG_BETWEEN_ROW_TWO_THREE_NONES \
KC_NO,            KC_NO,            KC_NO,            KC_NO,            KC_NO,            \
BIG_BETWEEN_ROW_THREE_THUMBS_NONES \
ARDUX_BIG_LAYER_SYM_RIGHT_THUMBS  \
BIG_TRAILING_NONES
#endif

#ifndef ARDUX_BIG_LAYER_PAR_RIGHT
#ifdef ARDUX_TWO_THUMB
#define ARDUX_BIG_LAYER_PAR_RIGHT_THUMBS KC_NO, KC_NO
#endif
#ifndef ARDUX_TWO_THUMB
#define ARDUX_BIG_LAYER_PAR_RIGHT_THUMBS KC_NO, KC_NO, KC_NO
#endif

#define ARDUX_BIG_LAYER_PAR_RIGHT \
BIG_LEADING_NONES \
KC_NO,            KC_TRNS,          KC_LPRN,          KC_RPRN,          KC_LCBR,                      \
BIG_BETWEEN_ROW_ONE_TWO_NONES \
KC_NO,            KC_NO,            KC_LBRC,          KC_RBRC,          KC_RCBR,                      \
BIG_BETWEEN_ROW_TWO_THREE_NONES \
KC_NO,            KC_NO,            KC_NO,            KC_NO,            KC_NO,            \
BIG_BETWEEN_ROW_THREE_THUMBS_NONES \
ARDUX_BIG_LAYER_PAR_RIGHT_THUMBS \
BIG_TRAILING_NONES
#endif

#ifndef ARDUX_BIG_LAYER_CUS_RIGHT
#ifdef ARDUX_TWO_THUMB
#define ARDUX_BIG_LAYER_CUS_RIGHT_THUMBS KC_NO, KC_NO
#endif
#ifndef ARDUX_TWO_THUMB
#define ARDUX_BIG_LAYER_CUS_RIGHT_THUMBS KC_NO, KC_NO, KC_NO
#endif

#define ARDUX_BIG_LAYER_CUS_RIGHT \
BIG_LEADING_NONES \
KC_NO,            KC_MUTE,          KC_INS,           KC_VOLU,          KC_NO,            \
BIG_BETWEEN_ROW_ONE_TWO_NONES \
KC_NO,            KC_RSFT,          KC_PSCR,          KC_VOLD,          KC_TRNS,          \
BIG_BETWEEN_ROW_TWO_THREE_NONES \
KC_NO,            KC_NO,            KC_NO,            KC_NO,            KC_NO,            \
BIG_BETWEEN_ROW_THREE_THUMBS_NONES \
ARDUX_BIG_LAYER_CUS_RIGHT_THUMBS  \
BIG_TRAILING_NONES
#endif

#ifndef ARDUX_BIG_LAYER_MSE_RIGHT
#ifdef ARDUX_TWO_THUMB
#define ARDUX_BIG_LAYER_MSE_RIGHT_THUMBS KC_NO, KC_NO
#endif
#ifndef ARDUX_TWO_THUMB
#define ARDUX_BIG_LAYER_MSE_RIGHT_THUMBS KC_NO, KC_NO, KC_NO
#endif

#define ARDUX_BIG_LAYER_MSE_RIGHT \
BIG_LEADING_NONES \
KC_NO,           KMSE_T1,          KMSE_T2,          KMSE_T3,          KMSE_T4,           \
BIG_BETWEEN_ROW_ONE_TWO_NONES \
KC_NO,           KMSE_B1,          KMSE_B2,          KMSE_B3,          KMSE_B4,           \
BIG_BETWEEN_ROW_TWO_THREE_NONES \
KC_NO,            KC_NO,            KC_NO,            KC_NO,            KC_NO,            \
BIG_BETWEEN_ROW_THREE_THUMBS_NONES \
ARDUX_BIG_LAYER_MSE_RIGHT_THUMBS  \
BIG_TRAILING_NONES
#endif

#ifndef ARDUX_BIG_LAYER_BIG_SYM_RIGHT
#ifdef ARDUX_TWO_THUMB
#define ARDUX_BIG_LAYER_BIG_SYM_RIGHT_THUMBS KC_SCLN, KC_TRNS
#endif
#ifndef ARDUX_TWO_THUMB
#define ARDUX_BIG_LAYER_BIG_SYM_RIGHT_THUMBS KC_NO, KC_SCLN, KC_TRNS
#endif

#define ARDUX_BIG_LAYER_BIG_SYM_RIGHT \
BIG_LEADING_NONES \
KC_GRV,           KC_HASH,          KC_LCBR,          KC_RCBR,          KC_CIRC,          \
BIG_BETWEEN_ROW_ONE_TWO_NONES \
KC_BSLS,          KC_DLR,           KC_LPRN,          KC_RPRN,          KC_AMPR,          \
BIG_BETWEEN_ROW_TWO_THREE_NONES \
KC_PIPE,          KC_PERC,          KC_LBRC,          KC_RBRC,          KC_ASTR,          \
BIG_BETWEEN_ROW_THREE_THUMBS_NONES \
ARDUX_BIG_LAYER_BIG_SYM_RIGHT_THUMBS \
BIG_TRAILING_NONES
#endif

#ifndef ARDUX_BIG_LAYER_BIG_FUN_RIGHT
#ifdef ARDUX_TWO_THUMB
#define ARDUX_BIG_LAYER_BIG_FUN_RIGHT_THUMBS KC_NO, KC_NO
#endif
#ifndef ARDUX_TWO_THUMB
#define ARDUX_BIG_LAYER_BIG_FUN_RIGHT_THUMBS KC_NO, KC_NO, KC_NO
#endif

#define ARDUX_BIG_LAYER_BIG_FUN_RIGHT \
BIG_LEADING_NONES \
KC_TRNS,          KC_F1,            KC_F2,            KC_F3,            KC_F4,            \
BIG_BETWEEN_ROW_ONE_TWO_NONES \
KC_TRNS,          KC_F5,            KC_F6,            KC_F7,            KC_F8,            \
BIG_BETWEEN_ROW_TWO_THREE_NONES \
KC_NO,            KC_F9,            KC_F10,           KC_F11,           KC_F12,           \
BIG_BETWEEN_ROW_THREE_THUMBS_NONES \
ARDUX_BIG_LAYER_BIG_FUN_RIGHT_THUMBS     \
BIG_TRAILING_NONES
#endif

#ifdef ARDUX_SIZE_40P // 40% ARDUX (off by default)
// Main 40% ANSI layer setup
// Uses shared defines
#ifndef ARDUX_40P_LAYER_ANSI
#define ARDUX_40P_LAYER_ANSI \
F0P_LEADING_NONES \
LEFT_ANSI_SIX_ONE LEFT_NUMBERS, KC_W, KC_E, LEFT_PARENTHETICALS, TD(TD_ARDUX_LEFT),    F0P_ROW_ONE_MID_NONES     TD(TD_ARDUX_RIGHT), RIGHT_PARENTHETICALS, KC_I, KC_O, RIGHT_NUMBERS, RIGHT_ANSI_SIX_ONE \
F0P_BETWEEN_ROW_ONE_TWO_NONES \
LEFT_ANSI_SIX_TWO LEFT_CUSTOM, KC_S, KC_D, LEFT_SYMBOLS, KC_G,    F0P_ROW_TWO_MID_NONES    KC_H, RIGHT_SYMBOLS, KC_K, KC_L, RIGHT_CUSTOM, RIGHT_ANSI_SIX_TWO \
F0P_BETWEEN_ROW_TWO_THREE_NONES \
LEFT_ANSI_SIX_THREE KC_Z, KC_X, KC_C,  KC_V, KC_B,    F0P_ROW_THREE_MID_NONES    KC_N, KC_M, KC_COMMA, KC_DOT, TD(TD_SLSH_BK_FW), RIGHT_ANSI_SIX_THREE \
F0P_BETWEEN_ROW_THREE_THUMBS_NONES \
BOTTOM_ROW_40P_ANSI \
F0P_TRAILING_NONES
#endif

#ifndef ARDUX_40P_LAYER_FUNCTION
// FUNCTION Five column support
#ifdef ARDUX_FIVE_COLUMN
#define LEFT_FUNCTION_SIX_ONE
#define LEFT_FUNCTION_SIX_TWO
#define LEFT_FUNCTION_SIX_THREE
#define RIGHT_FUNCTION_SIX_ONE
#define RIGHT_FUNCTION_SIX_TWO
#define RIGHT_FUNCTION_SIX_THREE
#else
#define LEFT_FUNCTION_SIX_ONE KC_GRAVE,
#define LEFT_FUNCTION_SIX_TWO KC_TRNS,
#define LEFT_FUNCTION_SIX_THREE KC_TRNS,
#define RIGHT_FUNCTION_SIX_ONE KC_DEL,
#define RIGHT_FUNCTION_SIX_TWO KC_INSERT,
#define RIGHT_FUNCTION_SIX_THREE KC_PSCR,
#endif

// Function Thumb row (handedness changes layout)
#ifdef ARDUX_TWO_THUMB
#define BOTTOM_ROW_40P_FUN KC_LALT, KC_TRNS,    F0P_THUMB_MID_NONES    KC_TRNS, KC_LALT
#else
#define BOTTOM_ROW_40P_FUN KC_LALT, KC_TRNS, KC_TRNS,    F0P_THUMB_MID_NONES    KC_TRNS, KC_TRNS, KC_LALT
#endif

#define ARDUX_40P_LAYER_FUNCTION \
F0P_LEADING_NONES \
LEFT_FUNCTION_SIX_ONE KC_F1, KC_F2, KC_F3, KC_F4, KC_F5,    F0P_ROW_ONE_MID_NONES    KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, RIGHT_FUNCTION_SIX_ONE \
F0P_BETWEEN_ROW_ONE_TWO_NONES \
LEFT_FUNCTION_SIX_TWO KC_1, KC_2, KC_3, KC_4, KC_5,    F0P_ROW_TWO_MID_NONES    KC_6, KC_7, KC_8, KC_9, KC_0, RIGHT_FUNCTION_SIX_TWO \
F0P_BETWEEN_ROW_TWO_THREE_NONES \
LEFT_FUNCTION_SIX_THREE KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_F11,    F0P_ROW_THREE_MID_NONES    KC_F12, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, RIGHT_FUNCTION_SIX_THREE \
F0P_BETWEEN_ROW_THREE_THUMBS_NONES \
BOTTOM_ROW_40P_FUN \
F0P_TRAILING_NONES
#endif

#ifndef ARDUX_40P_LAYER_NAVIGATION
// Navigation Five column support
#ifdef ARDUX_FIVE_COLUMN
#define LEFT_NAV_SIX_ONE
#define LEFT_NAV_SIX_TWO
#define LEFT_NAV_SIX_THREE
#define RIGHT_NAV_SIX_ONE
#define RIGHT_NAV_SIX_TWO
#define RIGHT_NAV_SIX_THREE
#else
#define LEFT_NAV_SIX_ONE KC_TRNS,
#define LEFT_NAV_SIX_TWO KC_TAB,
#define LEFT_NAV_SIX_THREE KC_LCTRL,
#define RIGHT_NAV_SIX_ONE KC_DEL,
#define RIGHT_NAV_SIX_TWO KC_TRNS,
#define RIGHT_NAV_SIX_THREE KC_RSFT,

#endif

// Navigation Thumb row (handedness changes layout)
#ifdef ARDUX_TWO_THUMB
#define BOTTOM_ROW_40P_NAV KC_LGUI, KC_TRNS,    F0P_THUMB_MID_NONES    KC_TRNS, KC_LGUI
#else
#define BOTTOM_ROW_40P_NAV KC_LGUI, KC_TRNS, KC_TRNS,    F0P_THUMB_MID_NONES    KC_TRNS, KC_TRNS, KC_LGUI
#endif

#define ARDUX_40P_LAYER_NAVIGATION \
F0P_LEADING_NONES \
LEFT_NAV_SIX_ONE KC_PGUP, KC_HOME, KC_UP, KC_END, KC_TRNS,    F0P_ROW_ONE_MID_NONES    KC_TRNS, KC_HOME, KC_UP, KC_END, KC_PGUP, RIGHT_NAV_SIX_ONE \
F0P_BETWEEN_ROW_ONE_TWO_NONES \
LEFT_NAV_SIX_TWO KC_PGDN, KC_LEFT, KC_DOWN, KC_RIGHT, KC_TRNS,    F0P_ROW_TWO_MID_NONES    KC_TRNS, KC_LEFT, KC_DOWN, KC_RIGHT, KC_PGDN, RIGHT_NAV_SIX_TWO \
F0P_BETWEEN_ROW_TWO_THREE_NONES \
LEFT_NAV_SIX_THREE KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,    F0P_ROW_THREE_MID_NONES    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, RIGHT_NAV_SIX_THREE \
F0P_BETWEEN_ROW_THREE_THUMBS_NONES \
BOTTOM_ROW_40P_NAV \
F0P_TRAILING_NONES
#endif


#endif // 40% ardux ifdef
