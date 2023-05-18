// 0x05013EF4
static const s16 lakitu_enemy_seg5_animvalue_05013EF4[] = {
    0x0000, 0x003F, 0xFFC2, 0x3FFF, 0xFCF0, 0xFE8D, 0x8B77, 0x00DD,
    0x013F, 0x8AD2, 0x00DD, 0x013F, 0x8AD2, 0xA2CB, 0xA2CB, 0x00AF,
    0x00AC, 0x00A1, 0x0090, 0x0079, 0x005C, 0x003B, 0x0016, 0xFFEE,
    0xFFC1, 0xFF93, 0xFF62, 0xFF30, 0xFEFD, 0xFECA, 0xFE97, 0xFE65,
    0xFE34, 0xFE06, 0xFDDA, 0xFDB1, 0xFD8B, 0xFD6A, 0xFD4E, 0xFD36,
    0xFD25, 0xFD1B, 0xFD17, 0xFD19, 0xFD21, 0xFD2C, 0xFD3C, 0xFD50,
    0xFD67, 0xFD82, 0xFD9F, 0xFDBF, 0xFDE1, 0xFE06, 0xFE2C, 0xFE53,
    0xFE7C, 0xFEA5, 0xFECF, 0xFEF9, 0xFF22, 0xFF4B, 0xFF74, 0xFF9B,
    0xFFC1, 0xFFE6, 0x0007, 0x0027, 0x0045, 0x005F, 0x0076, 0x008A,
    0x009A, 0x00A6, 0x00AD, 0x046D, 0x0458, 0x041C, 0x03BB, 0x0338,
    0x0298, 0x01DC, 0x0109, 0x0021, 0xFF29, 0xFE21, 0xFD0E, 0xFBF3,
    0xFAD4, 0xF9B3, 0xF893, 0xF778, 0xF666, 0xF55E, 0xF464, 0xF37D,
    0xF2A9, 0xF1EE, 0xF14D, 0xF0CB, 0xF06A, 0xF02D, 0xF018, 0xF026,
    0xF04F, 0xF091, 0xF0EB, 0xF15B, 0xF1DE, 0xF274, 0xF31A, 0xF3CF,
    0xF491, 0xF55E, 0xF635, 0xF713, 0xF7F8, 0xF8E1, 0xF9CD, 0xFABA,
    0xFBA5, 0xFC8E, 0xFD73, 0xFE52, 0xFF29, 0xFFF6, 0x00B7, 0x016C,
    0x0212, 0x02A8, 0x032B, 0x039A, 0x03F4, 0x0436, 0x045F, 0x29BB,
    0x29BC, 0x29C2, 0x29CB, 0x29D6, 0x29E5, 0x29F6, 0x2A08, 0x2A1D,
    0x2A34, 0x2A4B, 0x2A64, 0x2A7D, 0x2A97, 0x2AB1, 0x2ACB, 0x2AE4,
    0x2AFD, 0x2B14, 0x2B2B, 0x2B40, 0x2B52, 0x2B63, 0x2B72, 0x2B7D,
    0x2B86, 0x2B8C, 0x2B8D, 0x2B8C, 0x2B88, 0x2B83, 0x2B7A, 0x2B70,
    0x2B65, 0x2B57, 0x2B48, 0x2B38, 0x2B27, 0x2B14, 0x2B01, 0x2AED,
    0x2AD9, 0x2AC4, 0x2AAF, 0x2A99, 0x2A84, 0x2A6F, 0x2A5B, 0x2A47,
    0x2A34, 0x2A21, 0x2A10, 0x2A00, 0x29F1, 0x29E3, 0x29D8, 0x29CE,
    0x29C5, 0x29C0, 0x29BC, 0x5C65,
};

// 0x0501407C
static const u16 lakitu_enemy_seg5_animindex_0501407C[] = {
    0x0001, 0x0000, 0x0001, 0x0001, 0x0001, 0x0002, 0x0001, 0x0000, 0x0001, 0x0003, 0x0001, 0x0000,
    0x0001, 0x0000, 0x0001, 0x0000, 0x0001, 0x00C3,
    0x003C, 0x000F, 0x003C, 0x004B, 0x003C, 0x0087,
    0x0001, 0x0000, 0x0001, 0x0000, 0x0001, 0x000E,
    0x0001, 0x0004, 0x0001, 0x0005, 0x0001, 0x0006,
    0x0001, 0x0000, 0x0001, 0x0000, 0x0001, 0x000D,
    0x0001, 0x000A, 0x0001, 0x000B, 0x0001, 0x000C,
    0x0001, 0x0007, 0x0001, 0x0008, 0x0001, 0x0009,
};

// 0x050140E8
static const struct Animation lakitu_enemy_seg5_anim_050140E8 = {
    0,
    0,
    0,
    0,
    0x3C,
    ANIMINDEX_NUMPARTS(lakitu_enemy_seg5_animindex_0501407C),
    lakitu_enemy_seg5_animvalue_05013EF4,
    lakitu_enemy_seg5_animindex_0501407C,
    0,
    ANIM_FIELD_LENGTH(lakitu_enemy_seg5_animvalue_05013EF4),
    ANIM_FIELD_LENGTH(lakitu_enemy_seg5_animindex_0501407C),
};
