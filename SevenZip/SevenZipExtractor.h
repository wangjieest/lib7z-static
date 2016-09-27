#pragma once
#include "SevenZipArchive.h"
#include "CompressionFormat.h"
#include "ProgressCallback.h"


namespace SevenZip
{
    class SevenZipExtractor : public SevenZipArchive
    {
    public:

        SevenZipExtractor();
        virtual ~SevenZipExtractor();

        virtual HRESULT ExtractArchive(const TString& directory, ProgressCallback* callback);
        const TString& GetErrorString();

        void SetOverwriteMode(const OverwriteModeEnum& mode);
        OverwriteModeEnum GetOverwriteMode();
    private:

        HRESULT ExtractArchive(const CMyComPtr< IStream >& archiveStream, const TString& directory, ProgressCallback* callback);

        OverwriteModeEnum m_overwriteMode;
        TString m_message;
    };
}
