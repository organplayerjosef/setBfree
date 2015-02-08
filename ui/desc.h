// generated by lv2ttl2c from
// http://gareus.org/oss/lv2/b_synth

extern const LV2_Descriptor* lv2_descriptor(uint32_t index);
extern const LV2UI_Descriptor* lv2ui_descriptor(uint32_t index);

static const RtkLv2Description _plugin = {
	&lv2_descriptor,
	&lv2ui_descriptor
	, 0 // uint32_t dsp_descriptor_id
	, 0 // uint32_t gui_descriptor_id
	, "setBfree DSP Tonewheel Organ" // const char *plugin_human_id
	, (const struct LV2Port[4])
	{
		{ "control", MIDI_IN, nan},
		{ "notify", MIDI_OUT, nan},
		{ "outL", AUDIO_OUT, nan},
		{ "outR", AUDIO_OUT, nan},
	}
	, 4 // uint32_t nports_total
	, 0 // uint32_t nports_audio_in
	, 2 // uint32_t nports_audio_out
	, 1 // uint32_t nports_midi_in
	, 1 // uint32_t nports_midi_out
	, 0 // uint32_t nports_atom_in
	, 0 // uint32_t nports_atom_out
	, 0 // uint32_t nports_ctrl
	, 0 // uint32_t nports_ctrl_in
	, 0 // uint32_t nports_ctrl_out
	, 65536 // uint32_t min_atom_bufsiz
	, false // bool send_time_info
};
