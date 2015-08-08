static uint8_t ex_amr[] = {
	0xf0, 0x3c, 0x20, 0xb9, 0x68, 0x88, 0x68, 0x11,
	0x87, 0x88, 0x02, 0x43, 0xaf, 0xe2, 0x45, 0x21,
	0x00, 0x80, 0x00, 0x00, 0x28, 0x32, 0xd0, 0x7c,
	0x0c, 0x00, 0x05, 0x69, 0xe4, 0xdf, 0xf9, 0x1a,
};

static struct ast_frame *amr_sample(void)
{
	static struct ast_frame f = {
		.frametype = AST_FRAME_VOICE,
		.datalen = sizeof(ex_amr),
		.samples = 160,
		.mallocd = 0,
		.offset = 0,
		.src = __PRETTY_FUNCTION__,
		.data.ptr = ex_amr,
	};

	f.subclass.format = ast_format_amr;

	return &f;
}

static uint8_t ex_amrwb[] = {
	0xf0, 0x14, 0x11, 0x06, 0x30, 0x71, 0x96, 0xc6,
	0x12, 0xd1, 0xe3, 0x19, 0xe4, 0xc0, 0x96, 0xe0,
	0x63, 0x02, 0x3b, 0x6a, 0x22, 0x62, 0x73, 0x66,
	0xcb, 0x6a, 0xee, 0x66, 0x62, 0xe8, 0xf4, 0xaa,
	0x7b, 0xe8,
};

static struct ast_frame *amrwb_sample(void)
{
	static struct ast_frame f = {
		.frametype = AST_FRAME_VOICE,
		.datalen = sizeof(ex_amrwb),
		.samples = 320,
		.mallocd = 0,
		.offset = 0,
		.src = __PRETTY_FUNCTION__,
		.data.ptr = ex_amrwb,
	};

	f.subclass.format = ast_format_amrwb;

	return &f;
}
