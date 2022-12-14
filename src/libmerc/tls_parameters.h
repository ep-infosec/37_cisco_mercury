
namespace tls {
    enum cipher_suite : uint16_t {
        TLS_NULL_WITH_NULL_NULL = 0x0000,
        TLS_RSA_WITH_NULL_MD5 = 0x0001,
        TLS_RSA_WITH_NULL_SHA = 0x0002,
        TLS_RSA_EXPORT_WITH_RC4_40_MD5 = 0x0003,
        TLS_RSA_WITH_RC4_128_MD5 = 0x0004,
        TLS_RSA_WITH_RC4_128_SHA = 0x0005,
        TLS_RSA_EXPORT_WITH_RC2_CBC_40_MD5 = 0x0006,
        TLS_RSA_WITH_IDEA_CBC_SHA = 0x0007,
        TLS_RSA_EXPORT_WITH_DES40_CBC_SHA = 0x0008,
        TLS_RSA_WITH_DES_CBC_SHA = 0x0009,
        TLS_RSA_WITH_3DES_EDE_CBC_SHA = 0x000a,
        TLS_DH_DSS_EXPORT_WITH_DES40_CBC_SHA = 0x000b,
        TLS_DH_DSS_WITH_DES_CBC_SHA = 0x000c,
        TLS_DH_DSS_WITH_3DES_EDE_CBC_SHA = 0x000d,
        TLS_DH_RSA_EXPORT_WITH_DES40_CBC_SHA = 0x000e,
        TLS_DH_RSA_WITH_DES_CBC_SHA = 0x000f,
        TLS_DH_RSA_WITH_3DES_EDE_CBC_SHA = 0x0010,
        TLS_DHE_DSS_EXPORT_WITH_DES40_CBC_SHA = 0x0011,
        TLS_DHE_DSS_WITH_DES_CBC_SHA = 0x0012,
        TLS_DHE_DSS_WITH_3DES_EDE_CBC_SHA = 0x0013,
        TLS_DHE_RSA_EXPORT_WITH_DES40_CBC_SHA = 0x0014,
        TLS_DHE_RSA_WITH_DES_CBC_SHA = 0x0015,
        TLS_DHE_RSA_WITH_3DES_EDE_CBC_SHA = 0x0016,
        TLS_DH_anon_EXPORT_WITH_RC4_40_MD5 = 0x0017,
        TLS_DH_anon_WITH_RC4_128_MD5 = 0x0018,
        TLS_DH_anon_EXPORT_WITH_DES40_CBC_SHA = 0x0019,
        TLS_DH_anon_WITH_DES_CBC_SHA = 0x001a,
        TLS_DH_anon_WITH_3DES_EDE_CBC_SHA = 0x001b,
        TLS_KRB5_WITH_DES_CBC_SHA = 0x001e,
        TLS_KRB5_WITH_3DES_EDE_CBC_SHA = 0x001f,
        TLS_KRB5_WITH_RC4_128_SHA = 0x0020,
        TLS_KRB5_WITH_IDEA_CBC_SHA = 0x0021,
        TLS_KRB5_WITH_DES_CBC_MD5 = 0x0022,
        TLS_KRB5_WITH_3DES_EDE_CBC_MD5 = 0x0023,
        TLS_KRB5_WITH_RC4_128_MD5 = 0x0024,
        TLS_KRB5_WITH_IDEA_CBC_MD5 = 0x0025,
        TLS_KRB5_EXPORT_WITH_DES_CBC_40_SHA = 0x0026,
        TLS_KRB5_EXPORT_WITH_RC2_CBC_40_SHA = 0x0027,
        TLS_KRB5_EXPORT_WITH_RC4_40_SHA = 0x0028,
        TLS_KRB5_EXPORT_WITH_DES_CBC_40_MD5 = 0x0029,
        TLS_KRB5_EXPORT_WITH_RC2_CBC_40_MD5 = 0x002a,
        TLS_KRB5_EXPORT_WITH_RC4_40_MD5 = 0x002b,
        TLS_PSK_WITH_NULL_SHA = 0x002c,
        TLS_DHE_PSK_WITH_NULL_SHA = 0x002d,
        TLS_RSA_PSK_WITH_NULL_SHA = 0x002e,
        TLS_RSA_WITH_AES_128_CBC_SHA = 0x002f,
        TLS_DH_DSS_WITH_AES_128_CBC_SHA = 0x0030,
        TLS_DH_RSA_WITH_AES_128_CBC_SHA = 0x0031,
        TLS_DHE_DSS_WITH_AES_128_CBC_SHA = 0x0032,
        TLS_DHE_RSA_WITH_AES_128_CBC_SHA = 0x0033,
        TLS_DH_anon_WITH_AES_128_CBC_SHA = 0x0034,
        TLS_RSA_WITH_AES_256_CBC_SHA = 0x0035,
        TLS_DH_DSS_WITH_AES_256_CBC_SHA = 0x0036,
        TLS_DH_RSA_WITH_AES_256_CBC_SHA = 0x0037,
        TLS_DHE_DSS_WITH_AES_256_CBC_SHA = 0x0038,
        TLS_DHE_RSA_WITH_AES_256_CBC_SHA = 0x0039,
        TLS_DH_anon_WITH_AES_256_CBC_SHA = 0x003a,
        TLS_RSA_WITH_NULL_SHA256 = 0x003b,
        TLS_RSA_WITH_AES_128_CBC_SHA256 = 0x003c,
        TLS_RSA_WITH_AES_256_CBC_SHA256 = 0x003d,
        TLS_DH_DSS_WITH_AES_128_CBC_SHA256 = 0x003e,
        TLS_DH_RSA_WITH_AES_128_CBC_SHA256 = 0x003f,
        TLS_DHE_DSS_WITH_AES_128_CBC_SHA256 = 0x0040,
        TLS_RSA_WITH_CAMELLIA_128_CBC_SHA = 0x0041,
        TLS_DH_DSS_WITH_CAMELLIA_128_CBC_SHA = 0x0042,
        TLS_DH_RSA_WITH_CAMELLIA_128_CBC_SHA = 0x0043,
        TLS_DHE_DSS_WITH_CAMELLIA_128_CBC_SHA = 0x0044,
        TLS_DHE_RSA_WITH_CAMELLIA_128_CBC_SHA = 0x0045,
        TLS_DH_anon_WITH_CAMELLIA_128_CBC_SHA = 0x0046,
        TLS_DHE_RSA_WITH_AES_128_CBC_SHA256 = 0x0067,
        TLS_DH_DSS_WITH_AES_256_CBC_SHA256 = 0x0068,
        TLS_DH_RSA_WITH_AES_256_CBC_SHA256 = 0x0069,
        TLS_DHE_DSS_WITH_AES_256_CBC_SHA256 = 0x006a,
        TLS_DHE_RSA_WITH_AES_256_CBC_SHA256 = 0x006b,
        TLS_DH_anon_WITH_AES_128_CBC_SHA256 = 0x006c,
        TLS_DH_anon_WITH_AES_256_CBC_SHA256 = 0x006d,
        TLS_RSA_WITH_CAMELLIA_256_CBC_SHA = 0x0084,
        TLS_DH_DSS_WITH_CAMELLIA_256_CBC_SHA = 0x0085,
        TLS_DH_RSA_WITH_CAMELLIA_256_CBC_SHA = 0x0086,
        TLS_DHE_DSS_WITH_CAMELLIA_256_CBC_SHA = 0x0087,
        TLS_DHE_RSA_WITH_CAMELLIA_256_CBC_SHA = 0x0088,
        TLS_DH_anon_WITH_CAMELLIA_256_CBC_SHA = 0x0089,
        TLS_PSK_WITH_RC4_128_SHA = 0x008a,
        TLS_PSK_WITH_3DES_EDE_CBC_SHA = 0x008b,
        TLS_PSK_WITH_AES_128_CBC_SHA = 0x008c,
        TLS_PSK_WITH_AES_256_CBC_SHA = 0x008d,
        TLS_DHE_PSK_WITH_RC4_128_SHA = 0x008e,
        TLS_DHE_PSK_WITH_3DES_EDE_CBC_SHA = 0x008f,
        TLS_DHE_PSK_WITH_AES_128_CBC_SHA = 0x0090,
        TLS_DHE_PSK_WITH_AES_256_CBC_SHA = 0x0091,
        TLS_RSA_PSK_WITH_RC4_128_SHA = 0x0092,
        TLS_RSA_PSK_WITH_3DES_EDE_CBC_SHA = 0x0093,
        TLS_RSA_PSK_WITH_AES_128_CBC_SHA = 0x0094,
        TLS_RSA_PSK_WITH_AES_256_CBC_SHA = 0x0095,
        TLS_RSA_WITH_SEED_CBC_SHA = 0x0096,
        TLS_DH_DSS_WITH_SEED_CBC_SHA = 0x0097,
        TLS_DH_RSA_WITH_SEED_CBC_SHA = 0x0098,
        TLS_DHE_DSS_WITH_SEED_CBC_SHA = 0x0099,
        TLS_DHE_RSA_WITH_SEED_CBC_SHA = 0x009a,
        TLS_DH_anon_WITH_SEED_CBC_SHA = 0x009b,
        TLS_RSA_WITH_AES_128_GCM_SHA256 = 0x009c,
        TLS_RSA_WITH_AES_256_GCM_SHA384 = 0x009d,
        TLS_DHE_RSA_WITH_AES_128_GCM_SHA256 = 0x009e,
        TLS_DHE_RSA_WITH_AES_256_GCM_SHA384 = 0x009f,
        TLS_DH_RSA_WITH_AES_128_GCM_SHA256 = 0x00a0,
        TLS_DH_RSA_WITH_AES_256_GCM_SHA384 = 0x00a1,
        TLS_DHE_DSS_WITH_AES_128_GCM_SHA256 = 0x00a2,
        TLS_DHE_DSS_WITH_AES_256_GCM_SHA384 = 0x00a3,
        TLS_DH_DSS_WITH_AES_128_GCM_SHA256 = 0x00a4,
        TLS_DH_DSS_WITH_AES_256_GCM_SHA384 = 0x00a5,
        TLS_DH_anon_WITH_AES_128_GCM_SHA256 = 0x00a6,
        TLS_DH_anon_WITH_AES_256_GCM_SHA384 = 0x00a7,
        TLS_PSK_WITH_AES_128_GCM_SHA256 = 0x00a8,
        TLS_PSK_WITH_AES_256_GCM_SHA384 = 0x00a9,
        TLS_DHE_PSK_WITH_AES_128_GCM_SHA256 = 0x00aa,
        TLS_DHE_PSK_WITH_AES_256_GCM_SHA384 = 0x00ab,
        TLS_RSA_PSK_WITH_AES_128_GCM_SHA256 = 0x00ac,
        TLS_RSA_PSK_WITH_AES_256_GCM_SHA384 = 0x00ad,
        TLS_PSK_WITH_AES_128_CBC_SHA256 = 0x00ae,
        TLS_PSK_WITH_AES_256_CBC_SHA384 = 0x00af,
        TLS_PSK_WITH_NULL_SHA256 = 0x00b0,
        TLS_PSK_WITH_NULL_SHA384 = 0x00b1,
        TLS_DHE_PSK_WITH_AES_128_CBC_SHA256 = 0x00b2,
        TLS_DHE_PSK_WITH_AES_256_CBC_SHA384 = 0x00b3,
        TLS_DHE_PSK_WITH_NULL_SHA256 = 0x00b4,
        TLS_DHE_PSK_WITH_NULL_SHA384 = 0x00b5,
        TLS_RSA_PSK_WITH_AES_128_CBC_SHA256 = 0x00b6,
        TLS_RSA_PSK_WITH_AES_256_CBC_SHA384 = 0x00b7,
        TLS_RSA_PSK_WITH_NULL_SHA256 = 0x00b8,
        TLS_RSA_PSK_WITH_NULL_SHA384 = 0x00b9,
        TLS_RSA_WITH_CAMELLIA_128_CBC_SHA256 = 0x00ba,
        TLS_DH_DSS_WITH_CAMELLIA_128_CBC_SHA256 = 0x00bb,
        TLS_DH_RSA_WITH_CAMELLIA_128_CBC_SHA256 = 0x00bc,
        TLS_DHE_DSS_WITH_CAMELLIA_128_CBC_SHA256 = 0x00bd,
        TLS_DHE_RSA_WITH_CAMELLIA_128_CBC_SHA256 = 0x00be,
        TLS_DH_anon_WITH_CAMELLIA_128_CBC_SHA256 = 0x00bf,
        TLS_RSA_WITH_CAMELLIA_256_CBC_SHA256 = 0x00c0,
        TLS_DH_DSS_WITH_CAMELLIA_256_CBC_SHA256 = 0x00c1,
        TLS_DH_RSA_WITH_CAMELLIA_256_CBC_SHA256 = 0x00c2,
        TLS_DHE_DSS_WITH_CAMELLIA_256_CBC_SHA256 = 0x00c3,
        TLS_DHE_RSA_WITH_CAMELLIA_256_CBC_SHA256 = 0x00c4,
        TLS_DH_anon_WITH_CAMELLIA_256_CBC_SHA256 = 0x00c5,
        TLS_SM4_GCM_SM3 = 0x00c6,
        TLS_SM4_CCM_SM3 = 0x00c7,
        TLS_EMPTY_RENEGOTIATION_INFO_SCSV = 0x00ff,
        TLS_AES_128_GCM_SHA256 = 0x1301,
        TLS_AES_256_GCM_SHA384 = 0x1302,
        TLS_CHACHA20_POLY1305_SHA256 = 0x1303,
        TLS_AES_128_CCM_SHA256 = 0x1304,
        TLS_AES_128_CCM_8_SHA256 = 0x1305,
        TLS_CECPQ1_RSA_WITH_CHACHA20_POLY1305_SHA256 = 0x16B7,   // experimental
        TLS_CECPQ1_ECDSA_WITH_CHACHA20_POLY1305_SHA256 = 0x16B8, // experimental
        TLS_CECPQ1_RSA_WITH_AES_256_GCM_SHA384 = 0x16B9,         // experimental
        TLS_CECPQ1_ECDSA_WITH_AES_256_GCM_SHA384 = 0x16BA,       // experimental
        TLS_FALLBACK_SCSV = 0x5600,
        TLS_ECDH_ECDSA_WITH_NULL_SHA = 0xc001,
        TLS_ECDH_ECDSA_WITH_RC4_128_SHA = 0xc002,
        TLS_ECDH_ECDSA_WITH_3DES_EDE_CBC_SHA = 0xc003,
        TLS_ECDH_ECDSA_WITH_AES_128_CBC_SHA = 0xc004,
        TLS_ECDH_ECDSA_WITH_AES_256_CBC_SHA = 0xc005,
        TLS_ECDHE_ECDSA_WITH_NULL_SHA = 0xc006,
        TLS_ECDHE_ECDSA_WITH_RC4_128_SHA = 0xc007,
        TLS_ECDHE_ECDSA_WITH_3DES_EDE_CBC_SHA = 0xc008,
        TLS_ECDHE_ECDSA_WITH_AES_128_CBC_SHA = 0xc009,
        TLS_ECDHE_ECDSA_WITH_AES_256_CBC_SHA = 0xc00a,
        TLS_ECDH_RSA_WITH_NULL_SHA = 0xc00b,
        TLS_ECDH_RSA_WITH_RC4_128_SHA = 0xc00c,
        TLS_ECDH_RSA_WITH_3DES_EDE_CBC_SHA = 0xc00d,
        TLS_ECDH_RSA_WITH_AES_128_CBC_SHA = 0xc00e,
        TLS_ECDH_RSA_WITH_AES_256_CBC_SHA = 0xc00f,
        TLS_ECDHE_RSA_WITH_NULL_SHA = 0xc010,
        TLS_ECDHE_RSA_WITH_RC4_128_SHA = 0xc011,
        TLS_ECDHE_RSA_WITH_3DES_EDE_CBC_SHA = 0xc012,
        TLS_ECDHE_RSA_WITH_AES_128_CBC_SHA = 0xc013,
        TLS_ECDHE_RSA_WITH_AES_256_CBC_SHA = 0xc014,
        TLS_ECDH_anon_WITH_NULL_SHA = 0xc015,
        TLS_ECDH_anon_WITH_RC4_128_SHA = 0xc016,
        TLS_ECDH_anon_WITH_3DES_EDE_CBC_SHA = 0xc017,
        TLS_ECDH_anon_WITH_AES_128_CBC_SHA = 0xc018,
        TLS_ECDH_anon_WITH_AES_256_CBC_SHA = 0xc019,
        TLS_SRP_SHA_WITH_3DES_EDE_CBC_SHA = 0xc01a,
        TLS_SRP_SHA_RSA_WITH_3DES_EDE_CBC_SHA = 0xc01b,
        TLS_SRP_SHA_DSS_WITH_3DES_EDE_CBC_SHA = 0xc01c,
        TLS_SRP_SHA_WITH_AES_128_CBC_SHA = 0xc01d,
        TLS_SRP_SHA_RSA_WITH_AES_128_CBC_SHA = 0xc01e,
        TLS_SRP_SHA_DSS_WITH_AES_128_CBC_SHA = 0xc01f,
        TLS_SRP_SHA_WITH_AES_256_CBC_SHA = 0xc020,
        TLS_SRP_SHA_RSA_WITH_AES_256_CBC_SHA = 0xc021,
        TLS_SRP_SHA_DSS_WITH_AES_256_CBC_SHA = 0xc022,
        TLS_ECDHE_ECDSA_WITH_AES_128_CBC_SHA256 = 0xc023,
        TLS_ECDHE_ECDSA_WITH_AES_256_CBC_SHA384 = 0xc024,
        TLS_ECDH_ECDSA_WITH_AES_128_CBC_SHA256 = 0xc025,
        TLS_ECDH_ECDSA_WITH_AES_256_CBC_SHA384 = 0xc026,
        TLS_ECDHE_RSA_WITH_AES_128_CBC_SHA256 = 0xc027,
        TLS_ECDHE_RSA_WITH_AES_256_CBC_SHA384 = 0xc028,
        TLS_ECDH_RSA_WITH_AES_128_CBC_SHA256 = 0xc029,
        TLS_ECDH_RSA_WITH_AES_256_CBC_SHA384 = 0xc02a,
        TLS_ECDHE_ECDSA_WITH_AES_128_GCM_SHA256 = 0xc02b,
        TLS_ECDHE_ECDSA_WITH_AES_256_GCM_SHA384 = 0xc02c,
        TLS_ECDH_ECDSA_WITH_AES_128_GCM_SHA256 = 0xc02d,
        TLS_ECDH_ECDSA_WITH_AES_256_GCM_SHA384 = 0xc02e,
        TLS_ECDHE_RSA_WITH_AES_128_GCM_SHA256 = 0xc02f,
        TLS_ECDHE_RSA_WITH_AES_256_GCM_SHA384 = 0xc030,
        TLS_ECDH_RSA_WITH_AES_128_GCM_SHA256 = 0xc031,
        TLS_ECDH_RSA_WITH_AES_256_GCM_SHA384 = 0xc032,
        TLS_ECDHE_PSK_WITH_RC4_128_SHA = 0xc033,
        TLS_ECDHE_PSK_WITH_3DES_EDE_CBC_SHA = 0xc034,
        TLS_ECDHE_PSK_WITH_AES_128_CBC_SHA = 0xc035,
        TLS_ECDHE_PSK_WITH_AES_256_CBC_SHA = 0xc036,
        TLS_ECDHE_PSK_WITH_AES_128_CBC_SHA256 = 0xc037,
        TLS_ECDHE_PSK_WITH_AES_256_CBC_SHA384 = 0xc038,
        TLS_ECDHE_PSK_WITH_NULL_SHA = 0xc039,
        TLS_ECDHE_PSK_WITH_NULL_SHA256 = 0xc03a,
        TLS_ECDHE_PSK_WITH_NULL_SHA384 = 0xc03b,
        TLS_RSA_WITH_ARIA_128_CBC_SHA256 = 0xc03c,
        TLS_RSA_WITH_ARIA_256_CBC_SHA384 = 0xc03d,
        TLS_DH_DSS_WITH_ARIA_128_CBC_SHA256 = 0xc03e,
        TLS_DH_DSS_WITH_ARIA_256_CBC_SHA384 = 0xc03f,
        TLS_DH_RSA_WITH_ARIA_128_CBC_SHA256 = 0xc040,
        TLS_DH_RSA_WITH_ARIA_256_CBC_SHA384 = 0xc041,
        TLS_DHE_DSS_WITH_ARIA_128_CBC_SHA256 = 0xc042,
        TLS_DHE_DSS_WITH_ARIA_256_CBC_SHA384 = 0xc043,
        TLS_DHE_RSA_WITH_ARIA_128_CBC_SHA256 = 0xc044,
        TLS_DHE_RSA_WITH_ARIA_256_CBC_SHA384 = 0xc045,
        TLS_DH_anon_WITH_ARIA_128_CBC_SHA256 = 0xc046,
        TLS_DH_anon_WITH_ARIA_256_CBC_SHA384 = 0xc047,
        TLS_ECDHE_ECDSA_WITH_ARIA_128_CBC_SHA256 = 0xc048,
        TLS_ECDHE_ECDSA_WITH_ARIA_256_CBC_SHA384 = 0xc049,
        TLS_ECDH_ECDSA_WITH_ARIA_128_CBC_SHA256 = 0xc04a,
        TLS_ECDH_ECDSA_WITH_ARIA_256_CBC_SHA384 = 0xc04b,
        TLS_ECDHE_RSA_WITH_ARIA_128_CBC_SHA256 = 0xc04c,
        TLS_ECDHE_RSA_WITH_ARIA_256_CBC_SHA384 = 0xc04d,
        TLS_ECDH_RSA_WITH_ARIA_128_CBC_SHA256 = 0xc04e,
        TLS_ECDH_RSA_WITH_ARIA_256_CBC_SHA384 = 0xc04f,
        TLS_RSA_WITH_ARIA_128_GCM_SHA256 = 0xc050,
        TLS_RSA_WITH_ARIA_256_GCM_SHA384 = 0xc051,
        TLS_DHE_RSA_WITH_ARIA_128_GCM_SHA256 = 0xc052,
        TLS_DHE_RSA_WITH_ARIA_256_GCM_SHA384 = 0xc053,
        TLS_DH_RSA_WITH_ARIA_128_GCM_SHA256 = 0xc054,
        TLS_DH_RSA_WITH_ARIA_256_GCM_SHA384 = 0xc055,
        TLS_DHE_DSS_WITH_ARIA_128_GCM_SHA256 = 0xc056,
        TLS_DHE_DSS_WITH_ARIA_256_GCM_SHA384 = 0xc057,
        TLS_DH_DSS_WITH_ARIA_128_GCM_SHA256 = 0xc058,
        TLS_DH_DSS_WITH_ARIA_256_GCM_SHA384 = 0xc059,
        TLS_DH_anon_WITH_ARIA_128_GCM_SHA256 = 0xc05a,
        TLS_DH_anon_WITH_ARIA_256_GCM_SHA384 = 0xc05b,
        TLS_ECDHE_ECDSA_WITH_ARIA_128_GCM_SHA256 = 0xc05c,
        TLS_ECDHE_ECDSA_WITH_ARIA_256_GCM_SHA384 = 0xc05d,
        TLS_ECDH_ECDSA_WITH_ARIA_128_GCM_SHA256 = 0xc05e,
        TLS_ECDH_ECDSA_WITH_ARIA_256_GCM_SHA384 = 0xc05f,
        TLS_ECDHE_RSA_WITH_ARIA_128_GCM_SHA256 = 0xc060,
        TLS_ECDHE_RSA_WITH_ARIA_256_GCM_SHA384 = 0xc061,
        TLS_ECDH_RSA_WITH_ARIA_128_GCM_SHA256 = 0xc062,
        TLS_ECDH_RSA_WITH_ARIA_256_GCM_SHA384 = 0xc063,
        TLS_PSK_WITH_ARIA_128_CBC_SHA256 = 0xc064,
        TLS_PSK_WITH_ARIA_256_CBC_SHA384 = 0xc065,
        TLS_DHE_PSK_WITH_ARIA_128_CBC_SHA256 = 0xc066,
        TLS_DHE_PSK_WITH_ARIA_256_CBC_SHA384 = 0xc067,
        TLS_RSA_PSK_WITH_ARIA_128_CBC_SHA256 = 0xc068,
        TLS_RSA_PSK_WITH_ARIA_256_CBC_SHA384 = 0xc069,
        TLS_PSK_WITH_ARIA_128_GCM_SHA256 = 0xc06a,
        TLS_PSK_WITH_ARIA_256_GCM_SHA384 = 0xc06b,
        TLS_DHE_PSK_WITH_ARIA_128_GCM_SHA256 = 0xc06c,
        TLS_DHE_PSK_WITH_ARIA_256_GCM_SHA384 = 0xc06d,
        TLS_RSA_PSK_WITH_ARIA_128_GCM_SHA256 = 0xc06e,
        TLS_RSA_PSK_WITH_ARIA_256_GCM_SHA384 = 0xc06f,
        TLS_ECDHE_PSK_WITH_ARIA_128_CBC_SHA256 = 0xc070,
        TLS_ECDHE_PSK_WITH_ARIA_256_CBC_SHA384 = 0xc071,
        TLS_ECDHE_ECDSA_WITH_CAMELLIA_128_CBC_SHA256 = 0xc072,
        TLS_ECDHE_ECDSA_WITH_CAMELLIA_256_CBC_SHA384 = 0xc073,
        TLS_ECDH_ECDSA_WITH_CAMELLIA_128_CBC_SHA256 = 0xc074,
        TLS_ECDH_ECDSA_WITH_CAMELLIA_256_CBC_SHA384 = 0xc075,
        TLS_ECDHE_RSA_WITH_CAMELLIA_128_CBC_SHA256 = 0xc076,
        TLS_ECDHE_RSA_WITH_CAMELLIA_256_CBC_SHA384 = 0xc077,
        TLS_ECDH_RSA_WITH_CAMELLIA_128_CBC_SHA256 = 0xc078,
        TLS_ECDH_RSA_WITH_CAMELLIA_256_CBC_SHA384 = 0xc079,
        TLS_RSA_WITH_CAMELLIA_128_GCM_SHA256 = 0xc07a,
        TLS_RSA_WITH_CAMELLIA_256_GCM_SHA384 = 0xc07b,
        TLS_DHE_RSA_WITH_CAMELLIA_128_GCM_SHA256 = 0xc07c,
        TLS_DHE_RSA_WITH_CAMELLIA_256_GCM_SHA384 = 0xc07d,
        TLS_DH_RSA_WITH_CAMELLIA_128_GCM_SHA256 = 0xc07e,
        TLS_DH_RSA_WITH_CAMELLIA_256_GCM_SHA384 = 0xc07f,
        TLS_DHE_DSS_WITH_CAMELLIA_128_GCM_SHA256 = 0xc080,
        TLS_DHE_DSS_WITH_CAMELLIA_256_GCM_SHA384 = 0xc081,
        TLS_DH_DSS_WITH_CAMELLIA_128_GCM_SHA256 = 0xc082,
        TLS_DH_DSS_WITH_CAMELLIA_256_GCM_SHA384 = 0xc083,
        TLS_DH_anon_WITH_CAMELLIA_128_GCM_SHA256 = 0xc084,
        TLS_DH_anon_WITH_CAMELLIA_256_GCM_SHA384 = 0xc085,
        TLS_ECDHE_ECDSA_WITH_CAMELLIA_128_GCM_SHA256 = 0xc086,
        TLS_ECDHE_ECDSA_WITH_CAMELLIA_256_GCM_SHA384 = 0xc087,
        TLS_ECDH_ECDSA_WITH_CAMELLIA_128_GCM_SHA256 = 0xc088,
        TLS_ECDH_ECDSA_WITH_CAMELLIA_256_GCM_SHA384 = 0xc089,
        TLS_ECDHE_RSA_WITH_CAMELLIA_128_GCM_SHA256 = 0xc08a,
        TLS_ECDHE_RSA_WITH_CAMELLIA_256_GCM_SHA384 = 0xc08b,
        TLS_ECDH_RSA_WITH_CAMELLIA_128_GCM_SHA256 = 0xc08c,
        TLS_ECDH_RSA_WITH_CAMELLIA_256_GCM_SHA384 = 0xc08d,
        TLS_PSK_WITH_CAMELLIA_128_GCM_SHA256 = 0xc08e,
        TLS_PSK_WITH_CAMELLIA_256_GCM_SHA384 = 0xc08f,
        TLS_DHE_PSK_WITH_CAMELLIA_128_GCM_SHA256 = 0xc090,
        TLS_DHE_PSK_WITH_CAMELLIA_256_GCM_SHA384 = 0xc091,
        TLS_RSA_PSK_WITH_CAMELLIA_128_GCM_SHA256 = 0xc092,
        TLS_RSA_PSK_WITH_CAMELLIA_256_GCM_SHA384 = 0xc093,
        TLS_PSK_WITH_CAMELLIA_128_CBC_SHA256 = 0xc094,
        TLS_PSK_WITH_CAMELLIA_256_CBC_SHA384 = 0xc095,
        TLS_DHE_PSK_WITH_CAMELLIA_128_CBC_SHA256 = 0xc096,
        TLS_DHE_PSK_WITH_CAMELLIA_256_CBC_SHA384 = 0xc097,
        TLS_RSA_PSK_WITH_CAMELLIA_128_CBC_SHA256 = 0xc098,
        TLS_RSA_PSK_WITH_CAMELLIA_256_CBC_SHA384 = 0xc099,
        TLS_ECDHE_PSK_WITH_CAMELLIA_128_CBC_SHA256 = 0xc09a,
        TLS_ECDHE_PSK_WITH_CAMELLIA_256_CBC_SHA384 = 0xc09b,
        TLS_RSA_WITH_AES_128_CCM = 0xc09c,
        TLS_RSA_WITH_AES_256_CCM = 0xc09d,
        TLS_DHE_RSA_WITH_AES_128_CCM = 0xc09e,
        TLS_DHE_RSA_WITH_AES_256_CCM = 0xc09f,
        TLS_RSA_WITH_AES_128_CCM_8 = 0xc0a0,
        TLS_RSA_WITH_AES_256_CCM_8 = 0xc0a1,
        TLS_DHE_RSA_WITH_AES_128_CCM_8 = 0xc0a2,
        TLS_DHE_RSA_WITH_AES_256_CCM_8 = 0xc0a3,
        TLS_PSK_WITH_AES_128_CCM = 0xc0a4,
        TLS_PSK_WITH_AES_256_CCM = 0xc0a5,
        TLS_DHE_PSK_WITH_AES_128_CCM = 0xc0a6,
        TLS_DHE_PSK_WITH_AES_256_CCM = 0xc0a7,
        TLS_PSK_WITH_AES_128_CCM_8 = 0xc0a8,
        TLS_PSK_WITH_AES_256_CCM_8 = 0xc0a9,
        TLS_PSK_DHE_WITH_AES_128_CCM_8 = 0xc0aa,
        TLS_PSK_DHE_WITH_AES_256_CCM_8 = 0xc0ab,
        TLS_ECDHE_ECDSA_WITH_AES_128_CCM = 0xc0ac,
        TLS_ECDHE_ECDSA_WITH_AES_256_CCM = 0xc0ad,
        TLS_ECDHE_ECDSA_WITH_AES_128_CCM_8 = 0xc0ae,
        TLS_ECDHE_ECDSA_WITH_AES_256_CCM_8 = 0xc0af,
        TLS_ECCPWD_WITH_AES_128_GCM_SHA256 = 0xc0b0,
        TLS_ECCPWD_WITH_AES_256_GCM_SHA384 = 0xc0b1,
        TLS_ECCPWD_WITH_AES_128_CCM_SHA256 = 0xc0b2,
        TLS_ECCPWD_WITH_AES_256_CCM_SHA384 = 0xc0b3,
        TLS_SHA256_SHA256 = 0xc0b4,
        TLS_SHA384_SHA384 = 0xc0b5,
        TLS_GOSTR341112_256_WITH_KUZNYECHIK_CTR_OMAC = 0xc100,
        TLS_GOSTR341112_256_WITH_MAGMA_CTR_OMAC = 0xc101,
        TLS_GOSTR341112_256_WITH_28147_CNT_IMIT = 0xc102,
        TLS_GOSTR341112_256_WITH_KUZNYECHIK_MGM_L = 0xc103,
        TLS_GOSTR341112_256_WITH_MAGMA_MGM_L = 0xc104,
        TLS_GOSTR341112_256_WITH_KUZNYECHIK_MGM_S = 0xc105,
        TLS_GOSTR341112_256_WITH_MAGMA_MGM_S = 0xc106,
        TLS_ECDHE_RSA_WITH_CHACHA20_POLY1305_SHA256 = 0xcca8,
        TLS_ECDHE_ECDSA_WITH_CHACHA20_POLY1305_SHA256 = 0xcca9,
        TLS_DHE_RSA_WITH_CHACHA20_POLY1305_SHA256 = 0xccaa,
        TLS_PSK_WITH_CHACHA20_POLY1305_SHA256 = 0xccab,
        TLS_ECDHE_PSK_WITH_CHACHA20_POLY1305_SHA256 = 0xccac,
        TLS_DHE_PSK_WITH_CHACHA20_POLY1305_SHA256 = 0xccad,
        TLS_RSA_PSK_WITH_CHACHA20_POLY1305_SHA256 = 0xccae,
        TLS_ECDHE_PSK_WITH_AES_128_GCM_SHA256 = 0xd001,
        TLS_ECDHE_PSK_WITH_AES_256_GCM_SHA384 = 0xd002,
        TLS_ECDHE_PSK_WITH_AES_128_CCM_8_SHA256 = 0xd003,
        TLS_ECDHE_PSK_WITH_AES_128_CCM_SHA256 = 0xd005
    };

    enum supported_groups : uint16_t {
        sect163k1 = 0x0001,
        sect163r1 = 0x0002,
        sect163r2 = 0x0003,
        sect193r1 = 0x0004,
        sect193r2 = 0x0005,
        sect233k1 = 0x0006,
        sect233r1 = 0x0007,
        sect239k1 = 0x0008,
        sect283k1 = 0x0009,
        sect283r1 = 0x000a,
        sect409k1 = 0x000b,
        sect409r1 = 0x000c,
        sect571k1 = 0x000d,
        sect571r1 = 0x000e,
        secp160k1 = 0x000f,
        secp160r1 = 0x0010,
        secp160r2 = 0x0011,
        secp192k1 = 0x0012,
        secp192r1 = 0x0013,
        secp224k1 = 0x0014,
        secp224r1 = 0x0015,
        secp256k1 = 0x0016,
        secp256r1 = 0x0017,
        secp384r1 = 0x0018,
        secp521r1 = 0x0019,
        brainpoolP256r1 = 0x001a,
        brainpoolP384r1 = 0x001b,
        brainpoolP512r1 = 0x001c,
        x25519 = 0x001d,
        x448 = 0x001e,
        brainpoolP256r1tls13 = 0x001f,
        brainpoolP384r1tls13 = 0x0020,
        brainpoolP512r1tls13 = 0x0021,
        GC256A = 0x0022,
        GC256B = 0x0023,
        GC256C = 0x0024,
        GC256D = 0x0025,
        GC512A = 0x0026,
        GC512B = 0x0027,
        GC512C = 0x0028,
        curveSM2 = 0x0029,
        ffdhe2048 = 0x0100,
        ffdhe3072 = 0x0101,
        ffdhe4096 = 0x0102,
        ffdhe6144 = 0x0103,
        ffdhe8192 = 0x0104,

        // PQC
        kyber90s512 = 0x2F3E,
        kyber90s768 = 0x2F3F,
        kyber90s1024 = 0x2F40,

        // Hybrid PQC
        p256_frodo640aes = 0x2F00,
        p256_frodo640shake = 0x2F01,
        p384_frodo976aes = 0x2F02,
        p384_frodo976shake = 0x2F03,
        p521_frodo1344aes = 0x2F04,
        p521_frodo1344shake = 0x2F05,
        p256_kyber512 = 0x2F3A,
        p384_kyber768 = 0x2F3C,
        p521_kyber1024 = 0x2F3D,
        p256_ntru_hps2048509 = 0x2F14,
        p384_ntru_hps2048677 = 0x2F15,
        p521_ntru_hps4096821 = 0x2F16,
        p521_ntru_hps40961229 = 0x2F45,
        p384_ntru_hrss701 = 0x2F17,
        p521_ntru_hrss1373 = 0x2F46,
        p256_lightsaber = 0x2F18,
        p384_saber = 0x2F19,
        p521_firesaber = 0x2F1A,
        p256_sidhp434 = 0x2F1B,
        p256_sidhp503 = 0x2F1C,
        p384_sidhp610 = 0x2F1D,
        p521_sidhp751 = 0x2F1E,
        p256_sikep434 = 0x2F1F,
        p256_sikep503 = 0x2F20,
        p384_sikep610 = 0x2F21,
        p521_sikep751 = 0x2F22,
        p256_bikel1 = 0x2F38,
        p384_bikel3 = 0x2F3B,
        p256_kyber90s512 = 0x2F3E,
        p384_kyber90s768 = 0x2F3F,
        p521_kyber90s1024 = 0x2F40,
        p256_hqc128 = 0x2F2C,
        p384_hqc192 = 0x2F2D,
        p521_hqc256 = 0x2F2E,
        p256_ntrulpr653 = 0x2F2F,
        p256_ntrulpr761 = 0x2F43,
        p384_ntrulpr857 = 0x2F31,
        p521_ntrulpr1277 = 0x2F41,
        p256_sntrup653 = 0x2F32,
        p256_sntrup761 = 0x2F44,
        p384_sntrup857 = 0x2F34,
        p521_sntrup1277 = 0x2F42,

        arbitrary_explicit_prime_curves = 0xff01,
        arbitrary_explicit_char2_curves = 0xff02,
    };

    enum extensions : uint16_t {
        server_name = 0x0000,
        max_fragment_length = 0x0001,
        client_certificate_url = 0x0002,
        trusted_ca_keys = 0x0003,
        truncated_hmac = 0x0004,
        status_request = 0x0005,
        user_mapping = 0x0006,
        client_authz = 0x0007,
        server_authz = 0x0008,
        cert_type = 0x0009,
        supported_groups = 0x000a,
        ec_point_formats = 0x000b,
        srp = 0x000c,
        signature_algorithms = 0x000d,
        use_srtp = 0x000e,
        heartbeat = 0x000f,
        application_layer_protocol_negotiation = 0x0010,
        status_request_v2 = 0x0011,
        signed_certificate_timestamp = 0x0012,
        client_certificate_type = 0x0013,
        server_certificate_type = 0x0014,
        padding = 0x0015,
        encrypt_then_mac = 0x0016,
        extended_master_secret = 0x0017,
        token_binding = 0x0018,
        cached_info = 0x0019,
        tls_lts = 0x001a,
        compress_certificate = 0x001b,
        record_size_limit = 0x001c,
        pwd_protect = 0x001d,
        pwd_clear = 0x001e,
        password_salt = 0x001f,
        ticket_pinning = 0x0020,
        tls_cert_with_extern_psk = 0x0021,
        delegated_credentials = 0x0022,
        session_ticket_renamed_from_SessionTicket_TLS_ = 0x0023,
        TLMSP = 0x0024,
        TLMSP_proxying = 0x0025,
        TLMSP_delegate = 0x0026,
        supported_ekt_ciphers = 0x0027,
        pre_shared_key = 0x0029,
        early_data = 0x002a,
        supported_versions = 0x002b,
        cookie = 0x002c,
        psk_key_exchange_modes = 0x002d,
        certificate_authorities = 0x002f,
        oid_filters = 0x0030,
        post_handshake_auth = 0x0031,
        signature_algorithms_cert = 0x0032,
        key_share = 0x0033,
        transparency_info = 0x0034,
        connection_id_deprecated_ = 0x0035,
        connection_id = 0x0036,
        external_id_hash = 0x0037,
        external_session_id = 0x0038,
        quic_transport_parameters = 0x0039,
        ticket_request = 0x003a,
        dnssec_chain = 0x003b,
        renegotiation_info = 0xff01,
    };
}
