'use strict';
/** This script plays a sound from a specified layer when the current object is clicked. */

/**
 * Replace "PLACEHOLDER" with the name of your sound layer.
 * Please note: Your sound layer must use sound mode 'single' and 'start silent' must be enabled.
 */
const SOUND_LAYER_NAME = 'PLACEHOLDER';

/**
 * @param {CursorEvent} event
 */
export function cursorClick(event) {
	thisScene.getLayer(SOUND_LAYER_NAME).play();
}
