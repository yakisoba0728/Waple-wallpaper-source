'use strict';
/** This script allows users to drag and drop the element on the screen. */

let isDragging = false;
let dragOffset;

/**
 * @param {CursorEvent} event
 */
export function cursorDown(event) {
	isDragging = true;
	dragOffset = thisLayer.origin.subtract(event.worldPosition);
}

/**
 * @param {CursorEvent} event
 */
export function cursorUp(event) {
	isDragging = false;
}

/**
 * @param {CursorEvent} event
 */
export function cursorMove(event) {
	if (isDragging) {
		thisLayer.origin = event.worldPosition.add(dragOffset);
	}
}
