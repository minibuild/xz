include_dir_list = [
    '../../include',
    '../../vendor/src/common',
    '../../vendor/src/liblzma/common',
    '../../vendor/src/liblzma/lzma',
    '../../vendor/src/liblzma/lz',
    '../../vendor/src/liblzma/check',
    '../../vendor/src/liblzma/delta',
    '../../vendor/src/liblzma/simple',
    '../../vendor/src/liblzma/rangecoder',
]

src_search_dir_list = [
    '../../vendor/src/liblzma/check',
    '../../vendor/src/liblzma/common',
    '../../vendor/src/liblzma/lzma',
    '../../vendor/src/liblzma/lz',
    '../../vendor/src/liblzma/rangecoder',
    '../../vendor/src/liblzma/delta',
    '../../vendor/src/liblzma/simple',
    '../../vendor/src/common',
]

build_list = [
    'alone_decoder.c',
    'alone_encoder.c',
    'arm.c',
    'armthumb.c',
    'auto_decoder.c',
    'block_buffer_decoder.c',
    'block_buffer_encoder.c',
    'block_decoder.c',
    'block_encoder.c',
    'block_header_decoder.c',
    'block_header_encoder.c',
    'block_util.c',
    'check.c',
    'common.c',
    'crc32_fast.c',
    'crc32_table.c',
    'crc64_fast.c',
    'crc64_table.c',
    'delta_common.c',
    'delta_decoder.c',
    'delta_encoder.c',
    'easy_buffer_encoder.c',
    'easy_decoder_memusage.c',
    'easy_encoder.c',
    'easy_encoder_memusage.c',
    'easy_preset.c',
    'fastpos_table.c',
    'filter_buffer_decoder.c',
    'filter_buffer_encoder.c',
    'filter_common.c',
    'filter_decoder.c',
    'filter_encoder.c',
    'filter_flags_decoder.c',
    'filter_flags_encoder.c',
    'hardware_cputhreads.c',
    'hardware_physmem.c',
    'ia64.c',
    'index.c',
    'index_decoder.c',
    'index_encoder.c',
    'index_hash.c',
    'lz_decoder.c',
    'lz_encoder.c',
    'lz_encoder_mf.c',
    'lzma2_decoder.c',
    'lzma2_encoder.c',
    'lzma_decoder.c',
    'lzma_encoder.c',
    'lzma_encoder_optimum_fast.c',
    'lzma_encoder_optimum_normal.c',
    'lzma_encoder_presets.c',
    'outqueue.c',
    'powerpc.c',
    'price_table.c',
    'sha256.c',
    'simple_coder.c',
    'simple_decoder.c',
    'simple_encoder.c',
    'sparc.c',
    'stream_buffer_decoder.c',
    'stream_buffer_encoder.c',
    'stream_decoder.c',
    'stream_encoder.c',
    'stream_encoder_mt.c',
    'stream_flags_common.c',
    'stream_flags_decoder.c',
    'stream_flags_encoder.c',
    'tuklib_cpucores.c',
    'tuklib_physmem.c',
    'vli_decoder.c',
    'vli_encoder.c',
    'vli_size.c',
    'x86.c',
]