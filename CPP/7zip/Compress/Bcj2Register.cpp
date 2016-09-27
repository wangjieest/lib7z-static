// Bcj2Register.cpp

#include "StdAfx.h"

#include "../Common/RegisterCodec.h"

#include "Bcj2Coder.h"
namespace NSBCJ2{
    REGISTER_CODEC_CREATE_2(CreateCodec, NCompress::NBcj2::CDecoder(), ICompressCoder2)
}
#ifndef EXTRACT_ONLY
namespace NSBCJ2{
    REGISTER_CODEC_CREATE_2(CreateCodecOut, NCompress::NBcj2::CEncoder(), ICompressCoder2)
}
#else
#define CreateCodecOut NULL
#endif
namespace NSBCJ2{

    REGISTER_CODEC_VAR
    { CreateCodec, CreateCodecOut, 0x303011B, "BCJ2", 4, false };

    REGISTER_CODEC(BCJ2)
}