#pragma once

#include <openssl/bn.h>

namespace big_number {

    typedef BN_ULONG unsigned_long_type;
    unsigned_long_type bytes = BN_BYTES;
    unsigned_long_type bits2 = BN_BITS2;
    unsigned_long_type bits  = BN_BITS;
    unsigned_long_type tbits = BN_TBIT;

    enum class flags {
        malloced = BN_FLG_MALLOCED,
        static_data = BN_FLG_STATIC_DATA,
        const_time = BN_FLG_CONSTTIME,
        secure = BN_FLG_SECURE,
        exp_consttime = BN_FLG_EXP_CONSTTIME,
        free = BN_FLG_FREE
    };

    class big_number {

        void set_flags(flags flag);
        flags get_flags();

    };

}




