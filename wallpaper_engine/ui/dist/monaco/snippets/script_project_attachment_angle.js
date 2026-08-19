'use strict';

export function update() {
	var mat = thisLayer.transformAttachmentToTexture(thisScene.getLayerByID('{{ID}}'), '{{NAME}}');
	thisObject['{{ANGLE}}'] = mat.angle();
	return mat.translation();
}
