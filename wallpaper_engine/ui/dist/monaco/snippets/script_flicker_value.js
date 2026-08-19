'use strict';
/** Bind this script to a slider value to make it flicker. */

export var scriptProperties = createScriptProperties()
	.addSlider({
		name: 'speed',
		label: 'Flicker speed',
		value: 1,
		min: 0,
		max: 2,
		integer: false
	})
	.addSlider({
		name: 'min',
		label: 'Minimum flicker',
		value: 0,
		min: 0,
		max: 1,
		integer: false
	})
	.addSlider({
		name: 'max',
		label: 'Maximum flicker',
		value: 1,
		min: 0,
		max: 1,
		integer: false
	})
	.addSlider({
		name: 'smooth',
		label: 'Flicker smoothness',
		value: 0.5,
		min: 0,
		max: 1,
		integer: false
	})
	.finish();

var initialValue;
var flickerBase = 0;
var flickerUpdateTimer = 0.0;
var lastFlickerValue = 0.0;
var nextFlickerValue = 0.0;

const referenceDelay = 0.1;

/**
 * @param {Number} value - for property 'intensity'
 * @return {Number} - update current property value
 */
export function update() {
	flickerUpdateTimer -= engine.frametime * scriptProperties.speed;
	if (flickerUpdateTimer <= 0.0) {
		++flickerBase;
		lastFlickerValue = nextFlickerValue;
		var dotProduct = flickerBase * 12.9898 + flickerBase * 78.233;
		nextFlickerValue = (Math.sin(dotProduct) * 43758.5453123) % 1.0;
		flickerUpdateTimer = referenceDelay;
	}

	var flickerTime = Math.pow(flickerUpdateTimer / referenceDelay, scriptProperties.smooth);
	var flickerValue = (nextFlickerValue + (lastFlickerValue - nextFlickerValue) * flickerTime);
	return initialValue +
		(scriptProperties.min + flickerValue * (scriptProperties.max - scriptProperties.min));
}

/**
 * @param {Number} value - for property 'intensity'
 * @return {Number} - update current property value
 */
export function init(value) {
	initialValue = value;
}
