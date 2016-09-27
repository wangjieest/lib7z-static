// Deflate64Register.cpp

#include "StdAfx.h"

#include "../Common/RegisterCodec.h"

#include "DeflateDecoder.h"
namespace NSDeflate64{
    REGISTER_CODEC_CREATE(CreateDec, NCompress::NDeflate::NDecoder::CCOMCoder64())
}
#if !defined(EXTRACT_ONLY) && !defined(DEFLATE_EXTRACT_ONLY)
#include "DeflateEncoder.h"
namespace NSDeflate64{
    REGISTER_CODEC_CREATE(CreateEnc, NCompress::NDeflate::NEncoder::CCOMCoder64())
}
#else
#define CreateEnc NULL
#endif
namespace NSDeflate64{
    REGISTER_CODEC_2(Deflate64, CreateDec, CreateEnc, 0x40109, "Deflate64")
}