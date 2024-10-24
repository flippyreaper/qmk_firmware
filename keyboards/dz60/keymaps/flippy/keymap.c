#include QMK_KEYBOARD_H
#include "keymap_czech.h"

/*
Flippys fucked up 60% layer
Cleanup layers
Unicode setup
Upload


*/



enum keyboard_layers {
  _BL = 0, // Base Layer
  _FL,     // Function Layer
  _NM     // Function Layer
};

// Custom #defined keycodes (shorter macros for readability)
#define KC_CTES CTL_T(KC_ESC)
#define KC_RSUP RSFT_T(KC_UP)
#define KC_RGLT RGUI_T(KC_LEFT)
#define KC_RADN RALT_T(KC_DOWN)
#define KC_RCRT RCTL_T(KC_RIGHT)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[_BL] = LAYOUT_60_tsangan_hhkb(
    	KC_ESC,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    CZ_MINS, CZ_ACUT,  CZ_EQL, CZ_BSLS,
		LT(_FL, KC_TAB),  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    CZ_LBRC, CZ_RBRC, KC_BSPC,
		MO(_NM), KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    CZ_SCLN, CZ_QUOT, KC_ENT,
		KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  CZ_SLSH, KC_UP, MO(_FL),
		KC_LCTL, KC_LGUI, KC_LALT,                            KC_SPC,                             KC_LEFT, KC_DOWN, KC_RIGHT
	),
	[_NM] = LAYOUT_60_tsangan_hhkb(
		_______,   CZ_1,   CZ_2,   CZ_3 ,   CZ_4,   CZ_5,   CZ_6,   CZ_7,   CZ_8,   CZ_9,   CZ_0,  CZ_EQL,  CZ_PLUS,  _______, QK_BOOT,
		_______, KC_MPRV, KC_MPLY,   KC_MNXT,  _______, _______, _______, KC_PGUP, KC_UP, KC_PGDN, _______, CZ_UACU, _______, KC_DEL,
		_______, KC_MSTP, KC_VOLD, KC_VOLU, KC_MUTE, _______, KC_HOME, KC_LEFT, KC_DOWN, KC_RIGHT, CZ_URNG, _______, _______,
		KC_LSFT, _______, _______, KC_CALC, _______, _______, KC_END, _______, _______, _______, _______, _______, _______,
		_______, _______, _______,                            _______,                            _______, _______, _______
	),
	[_FL] = LAYOUT_60_tsangan_hhkb(
		_______,   KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  _______, QK_BOOT,
		_______, _______, _______,   _______,  _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
		_______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
		KC_LSFT, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
		_______, _______, _______,                            QK_BOOT,                            _______, _______, _______
	)

};

const key_override_t delete_key_override = ko_make_basic(MOD_MASK_SHIFT, KC_BSPC, KC_DEL);
const key_override_t exlm_key_override = ko_make_basic(MOD_MASK_SHIFT, KC_1, CZ_EXLM);
const key_override_t at_key_override = ko_make_basic(MOD_MASK_SHIFT, KC_2, CZ_AT);
const key_override_t hash_key_override = ko_make_basic(MOD_MASK_SHIFT, KC_3, CZ_HASH);
const key_override_t dlr_key_override = ko_make_basic(MOD_MASK_SHIFT, KC_4, CZ_DLR);
const key_override_t perc_key_override = ko_make_basic(MOD_MASK_SHIFT, KC_5, CZ_PERC);
const key_override_t circ_key_override = ko_make_basic(MOD_MASK_SHIFT, KC_6, CZ_CIRC);
const key_override_t ampr_key_override = ko_make_basic(MOD_MASK_SHIFT, KC_7, CZ_AMPR);
const key_override_t astr_key_override = ko_make_basic(MOD_MASK_SHIFT, KC_8, CZ_ASTR);
const key_override_t lprn_key_override = ko_make_basic(MOD_MASK_SHIFT, KC_9, CZ_LPRN);
const key_override_t rprn_key_override = ko_make_basic(MOD_MASK_SHIFT, KC_0, CZ_RPRN);
const key_override_t plus_key_override = ko_make_basic(MOD_MASK_SHIFT, CZ_EQL, CZ_PLUS);
const key_override_t lcbr_key_overide = ko_make_basic(MOD_MASK_SHIFT, CZ_LBRC, CZ_LCBR);
const key_override_t rcbr_key_overide = ko_make_basic(MOD_MASK_SHIFT, CZ_RBRC, CZ_RCBR);
const key_override_t coln_key_overide = ko_make_basic(MOD_MASK_SHIFT, CZ_SCLN, CZ_COLN);
const key_override_t dquo_key_overide = ko_make_basic(MOD_MASK_SHIFT, CZ_QUOT, CZ_DQUO);
const key_override_t labk_key_overide = ko_make_basic(MOD_MASK_SHIFT, KC_COMM, CZ_LABK);
const key_override_t rabk_key_overide = ko_make_basic(MOD_MASK_SHIFT, KC_DOT, CZ_RABK);
const key_override_t ques_key_overide = ko_make_basic(MOD_MASK_SHIFT, CZ_SLSH, CZ_QUES);
const key_override_t zpet_key_overide = ko_make_basic(MOD_MASK_CTRL, KC_Z, KC_Y);
//const key_override_t tab_key_overide = ko_make_basic(MOD_MASK_SHIFT, KC_TAB, KC_TAB);

//const key_override_t f1_key_overide = ko_make_basic(MOD_MASK_TAB, KC_1, KC_F1);


// This globally defines all key overrides to be used
const key_override_t **key_overrides = (const key_override_t *[]){
	&delete_key_override,
	&exlm_key_override,
	&at_key_override,
	&hash_key_override,
	&dlr_key_override,
	&perc_key_override,
	&circ_key_override,
	&ampr_key_override,
	&astr_key_override,
	&lprn_key_override,
	&rprn_key_override,
	&plus_key_override,
	&lcbr_key_overide,
	&rcbr_key_overide,
	&coln_key_overide,
	&dquo_key_overide,
	&labk_key_overide,
	&rabk_key_overide,
	&ques_key_overide,
	&zpet_key_overide,
//	&tab_key_overide,
//	&f1_key_overide,


	NULL // Null terminate the array of overrides!
};



