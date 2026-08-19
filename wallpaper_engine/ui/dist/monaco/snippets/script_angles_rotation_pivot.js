'use strict';
/** Bind this script to the "Angles" property of a layer for a 2D rotation around a pivot point. */

import * as WEMath from 'WEMath';

/*
 * Adding new properties to the editor so you can tweak these values in the editor
 */
export let scriptProperties = createScriptProperties()
	.addSlider({
		name: 'speed',
		label: 'ui_editor_properties_speed',
		value: 1,
		min: -5,
		max: 5,
		integer: false
	}).addSlider({
		name: 'pivotx',
		label: 'ui_editor_properties_pivot_offset_x',
		value: 0,
		min: -1,
		max: 1,
		integer: false
	}).addSlider({
		name: 'pivoty',
		label: 'ui_editor_properties_pivot_offset_y',
		value: -0.5,
		min: -1,
		max: 1,
		integer: false
	}).finish();

/**
 * The center of rotation.
 */
let normalizedPivot;

let originalOrigin;

/**
 * @param {Vec3} value
 */
export function update(value) {
	let imageScale = new Vec3(thisLayer.size).multiply(thisLayer.scale);
	let pivot = imageScale.multiply(normalizedPivot);
	let newAngle = (engine.runtime * scriptProperties.speed);

	let angleCos = Math.cos(newAngle);
	let angleSin = Math.sin(newAngle);

	let offset = pivot.copy();
	// Rotate the pivot based on the own desired rotation of the layer.
	offset.x -= pivot.x * angleCos - pivot.y * angleSin;
	offset.y -= pivot.x * angleSin + pivot.y * angleCos;

	thisLayer.origin = originalOrigin.add(offset);

	value.z = newAngle * WEMath.rad2deg;
	return value;
}

/**
 * @param {Vec3} value
 */
export function init() {
	normalizedPivot = new Vec3(scriptProperties.pivotx, scriptProperties.pivoty);
	originalOrigin = thisLayer.origin;
}
