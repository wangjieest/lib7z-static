// test.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "../include/7zppMT.h"

int __cdecl _tmain(int argc, _TCHAR* argv[])
{
//     SevenZip::SevenZipCompressor compress;
//     compress.SetArchivePath(LR"(C:\Patch.7z)");
// 	if (S_OK != compress.CompressFiles(LR"(C:\Patch)", L"*.*", nullptr))
//     {
//         wprintf_s(L"compress dir to 7z failed\n");
//     }

    SevenZip::SevenZipExtractor decompress;
    decompress.SetArchivePath(LR"(C:\Patch.7z)");
    if (S_OK != decompress.ExtractArchive(LR"(C:\Patch)", nullptr))
    {
        wprintf_s(L"decompress 7z to dir failed\n");
    }

    return 0;
}

