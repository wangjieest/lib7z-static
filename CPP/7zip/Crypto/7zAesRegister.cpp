// 7zAesRegister.cpp

#include "StdAfx.h"

#include "../Common/RegisterCodec.h"

#include "7zAes.h"
namespace NS7zAES{
    REGISTER_FILTER_E(7zAES,
        NCrypto::N7z::CDecoder(),
        NCrypto::N7z::CEncoder(),
        0x6F10701, "7zAES")
}