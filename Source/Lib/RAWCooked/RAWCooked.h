/*  Copyright (c) MediaArea.net SARL. All Rights Reserved.
 *
 *  Use of this source code is governed by a MIT-style license that can
 *  be found in the License.html file in the root of the source tree.
 */

//---------------------------------------------------------------------------
#ifndef RawCookedH
#define RawCookedH
//---------------------------------------------------------------------------

//---------------------------------------------------------------------------
#include <cstdint>
//---------------------------------------------------------------------------

typedef void(*write_file_call)(uint8_t*, uint64_t, void*);

class rawcooked
{
public:
    rawcooked();

    uint8_t*                    Buffer;
    uint64_t                    Buffer_Size;

    void Parse();

    write_file_call             WriteFileCall;
    void*                       WriteFileCall_Opaque;

private:
    uint64_t                    Buffer_Offset;
};

//---------------------------------------------------------------------------
#endif
