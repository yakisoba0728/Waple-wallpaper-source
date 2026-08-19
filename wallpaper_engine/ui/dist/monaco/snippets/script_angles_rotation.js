'use strict';
/** Bind this script to the "Angles" property of a layer for a simple 2D rotation. */

/*
 * Adding new properties to the editor so you can tweak these values in the editor
 */
export let scriptProperties = createScriptProperties()
	.addSlider({
		name: 'speed',
		label: 'ui_editor_properties_speed',
		value: 0.1,
		min: -1,
		max: 1,
		integer: false
	}).finish();

/**
 * @param {Vec3} value
 */
export function update(value) {
	value.z = (engine.runtime * scriptProperties.speed) % 1.0 * 360;
	return value;
}
