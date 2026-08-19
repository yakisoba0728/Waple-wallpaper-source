
uniform sampler2D g_Texture0; // {"material":"framebuffer","label":"ui_editor_properties_framebuffer","hidden":true}
uniform sampler2D g_Texture1; // {"label":"ui_editor_properties_opacity_mask","mode":"opacitymask","combo":"MASK","paintdefaultcolor":"0 0 0 1"}

varying vec4 v_TexCoord;

void main() {
	vec4 albedo = texSample2D(g_Texture0, v_TexCoord.xy);
	float mask = 1.0;

#if MASK
	mask *= texSample2D(g_Texture1, v_TexCoord.zw).r;
#endif

	// This variable contains the results of your effect.
	vec3 effectAlbedo = albedo.rgb * vec3(1, 0, 0);

	albedo.rgb = mix(albedo.rgb, effectAlbedo, mask);

	gl_FragColor = albedo;
}
