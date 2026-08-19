'use strict';

export function update() {
	return thisLayer.transformAttachmentToTexture(thisScene.getLayerByID('{{ID}}'), '{{NAME}}').translation();
}
