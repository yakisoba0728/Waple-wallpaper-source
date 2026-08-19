'use strict';
/** This script works on Color properties and cycles through all colors with a constant speed. */

/**
 * Adding new properties to the editor so you can tweak these values in the editor
 */
export let scriptProperties = createScriptProperties()
	.addSlider({
		name: 'speed',
		label: 'ui_editor_properties_speed',
		value: 0.25,
		min: 0,
		max: 1,
		integer: false
	})
	.addSlider({
		name: 'saturation',
		label: 'ui_editor_properties_saturation',
		value: 1,
		min: 0,
		max: 1,
		integer: false
	})
	.addSlider({
		name: 'brightness',
		label: 'ui_editor_properties_brightness',
		value: 1,
		min: 0,
		max: 1,
		integer: false
	}).finish();

import * as WEColor from 'WEColor';

/**
 * @param {Vec3} value
 */
export function update(value) {
	value = WEColor.hsv2rgb({
		x: engine.runtime * scriptProperties.speed,
		y: scriptProperties.saturation,
		z: scriptProperties.brightness
	});
	
	return value;
}
