#ifndef _GNU_SOURCE
#define _GNU_SOURCE
#endif
#include <stdio.h>
#include <dlfcn.h>

#ifdef __cplusplus
extern "C" {
#endif

extern void* VCS_dlsymLookup(const char *);
extern void vcsMsgReportNoSource1(const char *, const char*);

/* PLI routine: $fsdbDumpvars:call */
#ifndef __VCS_PLI_STUB_novas_call_fsdbDumpvars
#define __VCS_PLI_STUB_novas_call_fsdbDumpvars
extern void novas_call_fsdbDumpvars(int data, int reason);
#pragma weak novas_call_fsdbDumpvars
void novas_call_fsdbDumpvars(int data, int reason)
{
    static int _vcs_pli_stub_initialized_ = 0;
    static void (*_vcs_pli_fp_)(int data, int reason) = NULL;
    if (!_vcs_pli_stub_initialized_) {
        _vcs_pli_stub_initialized_ = 1;
        _vcs_pli_fp_ = (void (*)(int data, int reason)) dlsym(RTLD_NEXT, "novas_call_fsdbDumpvars");
        if (_vcs_pli_fp_ == NULL) {
            _vcs_pli_fp_ = (void (*)(int data, int reason)) VCS_dlsymLookup("novas_call_fsdbDumpvars");
        }
    }
    if (_vcs_pli_fp_) {
        _vcs_pli_fp_(data, reason);
    } else {
        vcsMsgReportNoSource1("PLI-DIFNF", "novas_call_fsdbDumpvars");
    }
}
void (*__vcs_pli_dummy_reference_novas_call_fsdbDumpvars)(int data, int reason) = novas_call_fsdbDumpvars;
#endif /* __VCS_PLI_STUB_novas_call_fsdbDumpvars */

/* PLI routine: $fsdbDumpvars:misc */
#ifndef __VCS_PLI_STUB_novas_misc
#define __VCS_PLI_STUB_novas_misc
extern void novas_misc(int data, int reason, int iparam );
#pragma weak novas_misc
void novas_misc(int data, int reason, int iparam )
{
    static int _vcs_pli_stub_initialized_ = 0;
    static void (*_vcs_pli_fp_)(int data, int reason, int iparam ) = NULL;
    if (!_vcs_pli_stub_initialized_) {
        _vcs_pli_stub_initialized_ = 1;
        _vcs_pli_fp_ = (void (*)(int data, int reason, int iparam )) dlsym(RTLD_NEXT, "novas_misc");
        if (_vcs_pli_fp_ == NULL) {
            _vcs_pli_fp_ = (void (*)(int data, int reason, int iparam )) VCS_dlsymLookup("novas_misc");
        }
    }
    if (_vcs_pli_fp_) {
        _vcs_pli_fp_(data, reason, iparam );
    }
}
void (*__vcs_pli_dummy_reference_novas_misc)(int data, int reason, int iparam ) = novas_misc;
#endif /* __VCS_PLI_STUB_novas_misc */

/* PLI routine: $fsdbDumpvarsByFile:call */
#ifndef __VCS_PLI_STUB_novas_call_fsdbDumpvarsByFile
#define __VCS_PLI_STUB_novas_call_fsdbDumpvarsByFile
extern void novas_call_fsdbDumpvarsByFile(int data, int reason);
#pragma weak novas_call_fsdbDumpvarsByFile
void novas_call_fsdbDumpvarsByFile(int data, int reason)
{
    static int _vcs_pli_stub_initialized_ = 0;
    static void (*_vcs_pli_fp_)(int data, int reason) = NULL;
    if (!_vcs_pli_stub_initialized_) {
        _vcs_pli_stub_initialized_ = 1;
        _vcs_pli_fp_ = (void (*)(int data, int reason)) dlsym(RTLD_NEXT, "novas_call_fsdbDumpvarsByFile");
        if (_vcs_pli_fp_ == NULL) {
            _vcs_pli_fp_ = (void (*)(int data, int reason)) VCS_dlsymLookup("novas_call_fsdbDumpvarsByFile");
        }
    }
    if (_vcs_pli_fp_) {
        _vcs_pli_fp_(data, reason);
    } else {
        vcsMsgReportNoSource1("PLI-DIFNF", "novas_call_fsdbDumpvarsByFile");
    }
}
void (*__vcs_pli_dummy_reference_novas_call_fsdbDumpvarsByFile)(int data, int reason) = novas_call_fsdbDumpvarsByFile;
#endif /* __VCS_PLI_STUB_novas_call_fsdbDumpvarsByFile */

/* PLI routine: $fsdbAddRuntimeSignal:call */
#ifndef __VCS_PLI_STUB_novas_call_fsdbAddRuntimeSignal
#define __VCS_PLI_STUB_novas_call_fsdbAddRuntimeSignal
extern void novas_call_fsdbAddRuntimeSignal(int data, int reason);
#pragma weak novas_call_fsdbAddRuntimeSignal
void novas_call_fsdbAddRuntimeSignal(int data, int reason)
{
    static int _vcs_pli_stub_initialized_ = 0;
    static void (*_vcs_pli_fp_)(int data, int reason) = NULL;
    if (!_vcs_pli_stub_initialized_) {
        _vcs_pli_stub_initialized_ = 1;
        _vcs_pli_fp_ = (void (*)(int data, int reason)) dlsym(RTLD_NEXT, "novas_call_fsdbAddRuntimeSignal");
        if (_vcs_pli_fp_ == NULL) {
            _vcs_pli_fp_ = (void (*)(int data, int reason)) VCS_dlsymLookup("novas_call_fsdbAddRuntimeSignal");
        }
    }
    if (_vcs_pli_fp_) {
        _vcs_pli_fp_(data, reason);
    } else {
        vcsMsgReportNoSource1("PLI-DIFNF", "novas_call_fsdbAddRuntimeSignal");
    }
}
void (*__vcs_pli_dummy_reference_novas_call_fsdbAddRuntimeSignal)(int data, int reason) = novas_call_fsdbAddRuntimeSignal;
#endif /* __VCS_PLI_STUB_novas_call_fsdbAddRuntimeSignal */

/* PLI routine: $sps_create_transaction_stream:call */
#ifndef __VCS_PLI_STUB_novas_call_sps_create_transaction_stream
#define __VCS_PLI_STUB_novas_call_sps_create_transaction_stream
extern void novas_call_sps_create_transaction_stream(int data, int reason);
#pragma weak novas_call_sps_create_transaction_stream
void novas_call_sps_create_transaction_stream(int data, int reason)
{
    static int _vcs_pli_stub_initialized_ = 0;
    static void (*_vcs_pli_fp_)(int data, int reason) = NULL;
    if (!_vcs_pli_stub_initialized_) {
        _vcs_pli_stub_initialized_ = 1;
        _vcs_pli_fp_ = (void (*)(int data, int reason)) dlsym(RTLD_NEXT, "novas_call_sps_create_transaction_stream");
        if (_vcs_pli_fp_ == NULL) {
            _vcs_pli_fp_ = (void (*)(int data, int reason)) VCS_dlsymLookup("novas_call_sps_create_transaction_stream");
        }
    }
    if (_vcs_pli_fp_) {
        _vcs_pli_fp_(data, reason);
    } else {
        vcsMsgReportNoSource1("PLI-DIFNF", "novas_call_sps_create_transaction_stream");
    }
}
void (*__vcs_pli_dummy_reference_novas_call_sps_create_transaction_stream)(int data, int reason) = novas_call_sps_create_transaction_stream;
#endif /* __VCS_PLI_STUB_novas_call_sps_create_transaction_stream */

/* PLI routine: $sps_begin_transaction:call */
#ifndef __VCS_PLI_STUB_novas_call_sps_begin_transaction
#define __VCS_PLI_STUB_novas_call_sps_begin_transaction
extern void novas_call_sps_begin_transaction(int data, int reason);
#pragma weak novas_call_sps_begin_transaction
void novas_call_sps_begin_transaction(int data, int reason)
{
    static int _vcs_pli_stub_initialized_ = 0;
    static void (*_vcs_pli_fp_)(int data, int reason) = NULL;
    if (!_vcs_pli_stub_initialized_) {
        _vcs_pli_stub_initialized_ = 1;
        _vcs_pli_fp_ = (void (*)(int data, int reason)) dlsym(RTLD_NEXT, "novas_call_sps_begin_transaction");
        if (_vcs_pli_fp_ == NULL) {
            _vcs_pli_fp_ = (void (*)(int data, int reason)) VCS_dlsymLookup("novas_call_sps_begin_transaction");
        }
    }
    if (_vcs_pli_fp_) {
        _vcs_pli_fp_(data, reason);
    } else {
        vcsMsgReportNoSource1("PLI-DIFNF", "novas_call_sps_begin_transaction");
    }
}
void (*__vcs_pli_dummy_reference_novas_call_sps_begin_transaction)(int data, int reason) = novas_call_sps_begin_transaction;
#endif /* __VCS_PLI_STUB_novas_call_sps_begin_transaction */

/* PLI routine: $sps_end_transaction:call */
#ifndef __VCS_PLI_STUB_novas_call_sps_end_transaction
#define __VCS_PLI_STUB_novas_call_sps_end_transaction
extern void novas_call_sps_end_transaction(int data, int reason);
#pragma weak novas_call_sps_end_transaction
void novas_call_sps_end_transaction(int data, int reason)
{
    static int _vcs_pli_stub_initialized_ = 0;
    static void (*_vcs_pli_fp_)(int data, int reason) = NULL;
    if (!_vcs_pli_stub_initialized_) {
        _vcs_pli_stub_initialized_ = 1;
        _vcs_pli_fp_ = (void (*)(int data, int reason)) dlsym(RTLD_NEXT, "novas_call_sps_end_transaction");
        if (_vcs_pli_fp_ == NULL) {
            _vcs_pli_fp_ = (void (*)(int data, int reason)) VCS_dlsymLookup("novas_call_sps_end_transaction");
        }
    }
    if (_vcs_pli_fp_) {
        _vcs_pli_fp_(data, reason);
    } else {
        vcsMsgReportNoSource1("PLI-DIFNF", "novas_call_sps_end_transaction");
    }
}
void (*__vcs_pli_dummy_reference_novas_call_sps_end_transaction)(int data, int reason) = novas_call_sps_end_transaction;
#endif /* __VCS_PLI_STUB_novas_call_sps_end_transaction */

/* PLI routine: $sps_free_transaction:call */
#ifndef __VCS_PLI_STUB_novas_call_sps_free_transaction
#define __VCS_PLI_STUB_novas_call_sps_free_transaction
extern void novas_call_sps_free_transaction(int data, int reason);
#pragma weak novas_call_sps_free_transaction
void novas_call_sps_free_transaction(int data, int reason)
{
    static int _vcs_pli_stub_initialized_ = 0;
    static void (*_vcs_pli_fp_)(int data, int reason) = NULL;
    if (!_vcs_pli_stub_initialized_) {
        _vcs_pli_stub_initialized_ = 1;
        _vcs_pli_fp_ = (void (*)(int data, int reason)) dlsym(RTLD_NEXT, "novas_call_sps_free_transaction");
        if (_vcs_pli_fp_ == NULL) {
            _vcs_pli_fp_ = (void (*)(int data, int reason)) VCS_dlsymLookup("novas_call_sps_free_transaction");
        }
    }
    if (_vcs_pli_fp_) {
        _vcs_pli_fp_(data, reason);
    } else {
        vcsMsgReportNoSource1("PLI-DIFNF", "novas_call_sps_free_transaction");
    }
}
void (*__vcs_pli_dummy_reference_novas_call_sps_free_transaction)(int data, int reason) = novas_call_sps_free_transaction;
#endif /* __VCS_PLI_STUB_novas_call_sps_free_transaction */

/* PLI routine: $sps_add_attribute:call */
#ifndef __VCS_PLI_STUB_novas_call_sps_add_attribute
#define __VCS_PLI_STUB_novas_call_sps_add_attribute
extern void novas_call_sps_add_attribute(int data, int reason);
#pragma weak novas_call_sps_add_attribute
void novas_call_sps_add_attribute(int data, int reason)
{
    static int _vcs_pli_stub_initialized_ = 0;
    static void (*_vcs_pli_fp_)(int data, int reason) = NULL;
    if (!_vcs_pli_stub_initialized_) {
        _vcs_pli_stub_initialized_ = 1;
        _vcs_pli_fp_ = (void (*)(int data, int reason)) dlsym(RTLD_NEXT, "novas_call_sps_add_attribute");
        if (_vcs_pli_fp_ == NULL) {
            _vcs_pli_fp_ = (void (*)(int data, int reason)) VCS_dlsymLookup("novas_call_sps_add_attribute");
        }
    }
    if (_vcs_pli_fp_) {
        _vcs_pli_fp_(data, reason);
    } else {
        vcsMsgReportNoSource1("PLI-DIFNF", "novas_call_sps_add_attribute");
    }
}
void (*__vcs_pli_dummy_reference_novas_call_sps_add_attribute)(int data, int reason) = novas_call_sps_add_attribute;
#endif /* __VCS_PLI_STUB_novas_call_sps_add_attribute */

/* PLI routine: $sps_update_label:call */
#ifndef __VCS_PLI_STUB_novas_call_sps_update_label
#define __VCS_PLI_STUB_novas_call_sps_update_label
extern void novas_call_sps_update_label(int data, int reason);
#pragma weak novas_call_sps_update_label
void novas_call_sps_update_label(int data, int reason)
{
    static int _vcs_pli_stub_initialized_ = 0;
    static void (*_vcs_pli_fp_)(int data, int reason) = NULL;
    if (!_vcs_pli_stub_initialized_) {
        _vcs_pli_stub_initialized_ = 1;
        _vcs_pli_fp_ = (void (*)(int data, int reason)) dlsym(RTLD_NEXT, "novas_call_sps_update_label");
        if (_vcs_pli_fp_ == NULL) {
            _vcs_pli_fp_ = (void (*)(int data, int reason)) VCS_dlsymLookup("novas_call_sps_update_label");
        }
    }
    if (_vcs_pli_fp_) {
        _vcs_pli_fp_(data, reason);
    } else {
        vcsMsgReportNoSource1("PLI-DIFNF", "novas_call_sps_update_label");
    }
}
void (*__vcs_pli_dummy_reference_novas_call_sps_update_label)(int data, int reason) = novas_call_sps_update_label;
#endif /* __VCS_PLI_STUB_novas_call_sps_update_label */

/* PLI routine: $sps_add_relation:call */
#ifndef __VCS_PLI_STUB_novas_call_sps_add_relation
#define __VCS_PLI_STUB_novas_call_sps_add_relation
extern void novas_call_sps_add_relation(int data, int reason);
#pragma weak novas_call_sps_add_relation
void novas_call_sps_add_relation(int data, int reason)
{
    static int _vcs_pli_stub_initialized_ = 0;
    static void (*_vcs_pli_fp_)(int data, int reason) = NULL;
    if (!_vcs_pli_stub_initialized_) {
        _vcs_pli_stub_initialized_ = 1;
        _vcs_pli_fp_ = (void (*)(int data, int reason)) dlsym(RTLD_NEXT, "novas_call_sps_add_relation");
        if (_vcs_pli_fp_ == NULL) {
            _vcs_pli_fp_ = (void (*)(int data, int reason)) VCS_dlsymLookup("novas_call_sps_add_relation");
        }
    }
    if (_vcs_pli_fp_) {
        _vcs_pli_fp_(data, reason);
    } else {
        vcsMsgReportNoSource1("PLI-DIFNF", "novas_call_sps_add_relation");
    }
}
void (*__vcs_pli_dummy_reference_novas_call_sps_add_relation)(int data, int reason) = novas_call_sps_add_relation;
#endif /* __VCS_PLI_STUB_novas_call_sps_add_relation */

/* PLI routine: $fsdbWhatif:call */
#ifndef __VCS_PLI_STUB_novas_call_fsdbWhatif
#define __VCS_PLI_STUB_novas_call_fsdbWhatif
extern void novas_call_fsdbWhatif(int data, int reason);
#pragma weak novas_call_fsdbWhatif
void novas_call_fsdbWhatif(int data, int reason)
{
    static int _vcs_pli_stub_initialized_ = 0;
    static void (*_vcs_pli_fp_)(int data, int reason) = NULL;
    if (!_vcs_pli_stub_initialized_) {
        _vcs_pli_stub_initialized_ = 1;
        _vcs_pli_fp_ = (void (*)(int data, int reason)) dlsym(RTLD_NEXT, "novas_call_fsdbWhatif");
        if (_vcs_pli_fp_ == NULL) {
            _vcs_pli_fp_ = (void (*)(int data, int reason)) VCS_dlsymLookup("novas_call_fsdbWhatif");
        }
    }
    if (_vcs_pli_fp_) {
        _vcs_pli_fp_(data, reason);
    } else {
        vcsMsgReportNoSource1("PLI-DIFNF", "novas_call_fsdbWhatif");
    }
}
void (*__vcs_pli_dummy_reference_novas_call_fsdbWhatif)(int data, int reason) = novas_call_fsdbWhatif;
#endif /* __VCS_PLI_STUB_novas_call_fsdbWhatif */

/* PLI routine: $paa_init:call */
#ifndef __VCS_PLI_STUB_novas_call_paa_init
#define __VCS_PLI_STUB_novas_call_paa_init
extern void novas_call_paa_init(int data, int reason);
#pragma weak novas_call_paa_init
void novas_call_paa_init(int data, int reason)
{
    static int _vcs_pli_stub_initialized_ = 0;
    static void (*_vcs_pli_fp_)(int data, int reason) = NULL;
    if (!_vcs_pli_stub_initialized_) {
        _vcs_pli_stub_initialized_ = 1;
        _vcs_pli_fp_ = (void (*)(int data, int reason)) dlsym(RTLD_NEXT, "novas_call_paa_init");
        if (_vcs_pli_fp_ == NULL) {
            _vcs_pli_fp_ = (void (*)(int data, int reason)) VCS_dlsymLookup("novas_call_paa_init");
        }
    }
    if (_vcs_pli_fp_) {
        _vcs_pli_fp_(data, reason);
    } else {
        vcsMsgReportNoSource1("PLI-DIFNF", "novas_call_paa_init");
    }
}
void (*__vcs_pli_dummy_reference_novas_call_paa_init)(int data, int reason) = novas_call_paa_init;
#endif /* __VCS_PLI_STUB_novas_call_paa_init */

/* PLI routine: $paa_sync:call */
#ifndef __VCS_PLI_STUB_novas_call_paa_sync
#define __VCS_PLI_STUB_novas_call_paa_sync
extern void novas_call_paa_sync(int data, int reason);
#pragma weak novas_call_paa_sync
void novas_call_paa_sync(int data, int reason)
{
    static int _vcs_pli_stub_initialized_ = 0;
    static void (*_vcs_pli_fp_)(int data, int reason) = NULL;
    if (!_vcs_pli_stub_initialized_) {
        _vcs_pli_stub_initialized_ = 1;
        _vcs_pli_fp_ = (void (*)(int data, int reason)) dlsym(RTLD_NEXT, "novas_call_paa_sync");
        if (_vcs_pli_fp_ == NULL) {
            _vcs_pli_fp_ = (void (*)(int data, int reason)) VCS_dlsymLookup("novas_call_paa_sync");
        }
    }
    if (_vcs_pli_fp_) {
        _vcs_pli_fp_(data, reason);
    } else {
        vcsMsgReportNoSource1("PLI-DIFNF", "novas_call_paa_sync");
    }
}
void (*__vcs_pli_dummy_reference_novas_call_paa_sync)(int data, int reason) = novas_call_paa_sync;
#endif /* __VCS_PLI_STUB_novas_call_paa_sync */

/* PLI routine: $fsdbDumpClassMethod:call */
#ifndef __VCS_PLI_STUB_novas_call_fsdbDumpClassMethod
#define __VCS_PLI_STUB_novas_call_fsdbDumpClassMethod
extern void novas_call_fsdbDumpClassMethod(int data, int reason);
#pragma weak novas_call_fsdbDumpClassMethod
void novas_call_fsdbDumpClassMethod(int data, int reason)
{
    static int _vcs_pli_stub_initialized_ = 0;
    static void (*_vcs_pli_fp_)(int data, int reason) = NULL;
    if (!_vcs_pli_stub_initialized_) {
        _vcs_pli_stub_initialized_ = 1;
        _vcs_pli_fp_ = (void (*)(int data, int reason)) dlsym(RTLD_NEXT, "novas_call_fsdbDumpClassMethod");
        if (_vcs_pli_fp_ == NULL) {
            _vcs_pli_fp_ = (void (*)(int data, int reason)) VCS_dlsymLookup("novas_call_fsdbDumpClassMethod");
        }
    }
    if (_vcs_pli_fp_) {
        _vcs_pli_fp_(data, reason);
    } else {
        vcsMsgReportNoSource1("PLI-DIFNF", "novas_call_fsdbDumpClassMethod");
    }
}
void (*__vcs_pli_dummy_reference_novas_call_fsdbDumpClassMethod)(int data, int reason) = novas_call_fsdbDumpClassMethod;
#endif /* __VCS_PLI_STUB_novas_call_fsdbDumpClassMethod */

/* PLI routine: $fsdbSuppressClassMethod:call */
#ifndef __VCS_PLI_STUB_novas_call_fsdbSuppressClassMethod
#define __VCS_PLI_STUB_novas_call_fsdbSuppressClassMethod
extern void novas_call_fsdbSuppressClassMethod(int data, int reason);
#pragma weak novas_call_fsdbSuppressClassMethod
void novas_call_fsdbSuppressClassMethod(int data, int reason)
{
    static int _vcs_pli_stub_initialized_ = 0;
    static void (*_vcs_pli_fp_)(int data, int reason) = NULL;
    if (!_vcs_pli_stub_initialized_) {
        _vcs_pli_stub_initialized_ = 1;
        _vcs_pli_fp_ = (void (*)(int data, int reason)) dlsym(RTLD_NEXT, "novas_call_fsdbSuppressClassMethod");
        if (_vcs_pli_fp_ == NULL) {
            _vcs_pli_fp_ = (void (*)(int data, int reason)) VCS_dlsymLookup("novas_call_fsdbSuppressClassMethod");
        }
    }
    if (_vcs_pli_fp_) {
        _vcs_pli_fp_(data, reason);
    } else {
        vcsMsgReportNoSource1("PLI-DIFNF", "novas_call_fsdbSuppressClassMethod");
    }
}
void (*__vcs_pli_dummy_reference_novas_call_fsdbSuppressClassMethod)(int data, int reason) = novas_call_fsdbSuppressClassMethod;
#endif /* __VCS_PLI_STUB_novas_call_fsdbSuppressClassMethod */

/* PLI routine: $fsdbSuppressClassProp:call */
#ifndef __VCS_PLI_STUB_novas_call_fsdbSuppressClassProp
#define __VCS_PLI_STUB_novas_call_fsdbSuppressClassProp
extern void novas_call_fsdbSuppressClassProp(int data, int reason);
#pragma weak novas_call_fsdbSuppressClassProp
void novas_call_fsdbSuppressClassProp(int data, int reason)
{
    static int _vcs_pli_stub_initialized_ = 0;
    static void (*_vcs_pli_fp_)(int data, int reason) = NULL;
    if (!_vcs_pli_stub_initialized_) {
        _vcs_pli_stub_initialized_ = 1;
        _vcs_pli_fp_ = (void (*)(int data, int reason)) dlsym(RTLD_NEXT, "novas_call_fsdbSuppressClassProp");
        if (_vcs_pli_fp_ == NULL) {
            _vcs_pli_fp_ = (void (*)(int data, int reason)) VCS_dlsymLookup("novas_call_fsdbSuppressClassProp");
        }
    }
    if (_vcs_pli_fp_) {
        _vcs_pli_fp_(data, reason);
    } else {
        vcsMsgReportNoSource1("PLI-DIFNF", "novas_call_fsdbSuppressClassProp");
    }
}
void (*__vcs_pli_dummy_reference_novas_call_fsdbSuppressClassProp)(int data, int reason) = novas_call_fsdbSuppressClassProp;
#endif /* __VCS_PLI_STUB_novas_call_fsdbSuppressClassProp */

/* PLI routine: $fsdbDumpMDAByFile:call */
#ifndef __VCS_PLI_STUB_novas_call_fsdbDumpMDAByFile
#define __VCS_PLI_STUB_novas_call_fsdbDumpMDAByFile
extern void novas_call_fsdbDumpMDAByFile(int data, int reason);
#pragma weak novas_call_fsdbDumpMDAByFile
void novas_call_fsdbDumpMDAByFile(int data, int reason)
{
    static int _vcs_pli_stub_initialized_ = 0;
    static void (*_vcs_pli_fp_)(int data, int reason) = NULL;
    if (!_vcs_pli_stub_initialized_) {
        _vcs_pli_stub_initialized_ = 1;
        _vcs_pli_fp_ = (void (*)(int data, int reason)) dlsym(RTLD_NEXT, "novas_call_fsdbDumpMDAByFile");
        if (_vcs_pli_fp_ == NULL) {
            _vcs_pli_fp_ = (void (*)(int data, int reason)) VCS_dlsymLookup("novas_call_fsdbDumpMDAByFile");
        }
    }
    if (_vcs_pli_fp_) {
        _vcs_pli_fp_(data, reason);
    } else {
        vcsMsgReportNoSource1("PLI-DIFNF", "novas_call_fsdbDumpMDAByFile");
    }
}
void (*__vcs_pli_dummy_reference_novas_call_fsdbDumpMDAByFile)(int data, int reason) = novas_call_fsdbDumpMDAByFile;
#endif /* __VCS_PLI_STUB_novas_call_fsdbDumpMDAByFile */

/* PLI routine: $fsdbTrans_create_stream_begin:call */
#ifndef __VCS_PLI_STUB_novas_call_fsdbEvent_create_stream_begin
#define __VCS_PLI_STUB_novas_call_fsdbEvent_create_stream_begin
extern void novas_call_fsdbEvent_create_stream_begin(int data, int reason);
#pragma weak novas_call_fsdbEvent_create_stream_begin
void novas_call_fsdbEvent_create_stream_begin(int data, int reason)
{
    static int _vcs_pli_stub_initialized_ = 0;
    static void (*_vcs_pli_fp_)(int data, int reason) = NULL;
    if (!_vcs_pli_stub_initialized_) {
        _vcs_pli_stub_initialized_ = 1;
        _vcs_pli_fp_ = (void (*)(int data, int reason)) dlsym(RTLD_NEXT, "novas_call_fsdbEvent_create_stream_begin");
        if (_vcs_pli_fp_ == NULL) {
            _vcs_pli_fp_ = (void (*)(int data, int reason)) VCS_dlsymLookup("novas_call_fsdbEvent_create_stream_begin");
        }
    }
    if (_vcs_pli_fp_) {
        _vcs_pli_fp_(data, reason);
    } else {
        vcsMsgReportNoSource1("PLI-DIFNF", "novas_call_fsdbEvent_create_stream_begin");
    }
}
void (*__vcs_pli_dummy_reference_novas_call_fsdbEvent_create_stream_begin)(int data, int reason) = novas_call_fsdbEvent_create_stream_begin;
#endif /* __VCS_PLI_STUB_novas_call_fsdbEvent_create_stream_begin */

/* PLI routine: $fsdbTrans_define_attribute:call */
#ifndef __VCS_PLI_STUB_novas_call_fsdbEvent_add_stream_attribute
#define __VCS_PLI_STUB_novas_call_fsdbEvent_add_stream_attribute
extern void novas_call_fsdbEvent_add_stream_attribute(int data, int reason);
#pragma weak novas_call_fsdbEvent_add_stream_attribute
void novas_call_fsdbEvent_add_stream_attribute(int data, int reason)
{
    static int _vcs_pli_stub_initialized_ = 0;
    static void (*_vcs_pli_fp_)(int data, int reason) = NULL;
    if (!_vcs_pli_stub_initialized_) {
        _vcs_pli_stub_initialized_ = 1;
        _vcs_pli_fp_ = (void (*)(int data, int reason)) dlsym(RTLD_NEXT, "novas_call_fsdbEvent_add_stream_attribute");
        if (_vcs_pli_fp_ == NULL) {
            _vcs_pli_fp_ = (void (*)(int data, int reason)) VCS_dlsymLookup("novas_call_fsdbEvent_add_stream_attribute");
        }
    }
    if (_vcs_pli_fp_) {
        _vcs_pli_fp_(data, reason);
    } else {
        vcsMsgReportNoSource1("PLI-DIFNF", "novas_call_fsdbEvent_add_stream_attribute");
    }
}
void (*__vcs_pli_dummy_reference_novas_call_fsdbEvent_add_stream_attribute)(int data, int reason) = novas_call_fsdbEvent_add_stream_attribute;
#endif /* __VCS_PLI_STUB_novas_call_fsdbEvent_add_stream_attribute */

/* PLI routine: $fsdbTrans_create_stream_end:call */
#ifndef __VCS_PLI_STUB_novas_call_fsdbEvent_create_stream_end
#define __VCS_PLI_STUB_novas_call_fsdbEvent_create_stream_end
extern void novas_call_fsdbEvent_create_stream_end(int data, int reason);
#pragma weak novas_call_fsdbEvent_create_stream_end
void novas_call_fsdbEvent_create_stream_end(int data, int reason)
{
    static int _vcs_pli_stub_initialized_ = 0;
    static void (*_vcs_pli_fp_)(int data, int reason) = NULL;
    if (!_vcs_pli_stub_initialized_) {
        _vcs_pli_stub_initialized_ = 1;
        _vcs_pli_fp_ = (void (*)(int data, int reason)) dlsym(RTLD_NEXT, "novas_call_fsdbEvent_create_stream_end");
        if (_vcs_pli_fp_ == NULL) {
            _vcs_pli_fp_ = (void (*)(int data, int reason)) VCS_dlsymLookup("novas_call_fsdbEvent_create_stream_end");
        }
    }
    if (_vcs_pli_fp_) {
        _vcs_pli_fp_(data, reason);
    } else {
        vcsMsgReportNoSource1("PLI-DIFNF", "novas_call_fsdbEvent_create_stream_end");
    }
}
void (*__vcs_pli_dummy_reference_novas_call_fsdbEvent_create_stream_end)(int data, int reason) = novas_call_fsdbEvent_create_stream_end;
#endif /* __VCS_PLI_STUB_novas_call_fsdbEvent_create_stream_end */

/* PLI routine: $fsdbTrans_begin:call */
#ifndef __VCS_PLI_STUB_novas_call_fsdbEvent_begin
#define __VCS_PLI_STUB_novas_call_fsdbEvent_begin
extern void novas_call_fsdbEvent_begin(int data, int reason);
#pragma weak novas_call_fsdbEvent_begin
void novas_call_fsdbEvent_begin(int data, int reason)
{
    static int _vcs_pli_stub_initialized_ = 0;
    static void (*_vcs_pli_fp_)(int data, int reason) = NULL;
    if (!_vcs_pli_stub_initialized_) {
        _vcs_pli_stub_initialized_ = 1;
        _vcs_pli_fp_ = (void (*)(int data, int reason)) dlsym(RTLD_NEXT, "novas_call_fsdbEvent_begin");
        if (_vcs_pli_fp_ == NULL) {
            _vcs_pli_fp_ = (void (*)(int data, int reason)) VCS_dlsymLookup("novas_call_fsdbEvent_begin");
        }
    }
    if (_vcs_pli_fp_) {
        _vcs_pli_fp_(data, reason);
    } else {
        vcsMsgReportNoSource1("PLI-DIFNF", "novas_call_fsdbEvent_begin");
    }
}
void (*__vcs_pli_dummy_reference_novas_call_fsdbEvent_begin)(int data, int reason) = novas_call_fsdbEvent_begin;
#endif /* __VCS_PLI_STUB_novas_call_fsdbEvent_begin */

/* PLI routine: $fsdbTrans_set_label:call */
#ifndef __VCS_PLI_STUB_novas_call_fsdbEvent_set_label
#define __VCS_PLI_STUB_novas_call_fsdbEvent_set_label
extern void novas_call_fsdbEvent_set_label(int data, int reason);
#pragma weak novas_call_fsdbEvent_set_label
void novas_call_fsdbEvent_set_label(int data, int reason)
{
    static int _vcs_pli_stub_initialized_ = 0;
    static void (*_vcs_pli_fp_)(int data, int reason) = NULL;
    if (!_vcs_pli_stub_initialized_) {
        _vcs_pli_stub_initialized_ = 1;
        _vcs_pli_fp_ = (void (*)(int data, int reason)) dlsym(RTLD_NEXT, "novas_call_fsdbEvent_set_label");
        if (_vcs_pli_fp_ == NULL) {
            _vcs_pli_fp_ = (void (*)(int data, int reason)) VCS_dlsymLookup("novas_call_fsdbEvent_set_label");
        }
    }
    if (_vcs_pli_fp_) {
        _vcs_pli_fp_(data, reason);
    } else {
        vcsMsgReportNoSource1("PLI-DIFNF", "novas_call_fsdbEvent_set_label");
    }
}
void (*__vcs_pli_dummy_reference_novas_call_fsdbEvent_set_label)(int data, int reason) = novas_call_fsdbEvent_set_label;
#endif /* __VCS_PLI_STUB_novas_call_fsdbEvent_set_label */

/* PLI routine: $fsdbTrans_add_attribute:call */
#ifndef __VCS_PLI_STUB_novas_call_fsdbEvent_add_attribute
#define __VCS_PLI_STUB_novas_call_fsdbEvent_add_attribute
extern void novas_call_fsdbEvent_add_attribute(int data, int reason);
#pragma weak novas_call_fsdbEvent_add_attribute
void novas_call_fsdbEvent_add_attribute(int data, int reason)
{
    static int _vcs_pli_stub_initialized_ = 0;
    static void (*_vcs_pli_fp_)(int data, int reason) = NULL;
    if (!_vcs_pli_stub_initialized_) {
        _vcs_pli_stub_initialized_ = 1;
        _vcs_pli_fp_ = (void (*)(int data, int reason)) dlsym(RTLD_NEXT, "novas_call_fsdbEvent_add_attribute");
        if (_vcs_pli_fp_ == NULL) {
            _vcs_pli_fp_ = (void (*)(int data, int reason)) VCS_dlsymLookup("novas_call_fsdbEvent_add_attribute");
        }
    }
    if (_vcs_pli_fp_) {
        _vcs_pli_fp_(data, reason);
    } else {
        vcsMsgReportNoSource1("PLI-DIFNF", "novas_call_fsdbEvent_add_attribute");
    }
}
void (*__vcs_pli_dummy_reference_novas_call_fsdbEvent_add_attribute)(int data, int reason) = novas_call_fsdbEvent_add_attribute;
#endif /* __VCS_PLI_STUB_novas_call_fsdbEvent_add_attribute */

/* PLI routine: $fsdbTrans_add_tag:call */
#ifndef __VCS_PLI_STUB_novas_call_fsdbEvent_add_tag
#define __VCS_PLI_STUB_novas_call_fsdbEvent_add_tag
extern void novas_call_fsdbEvent_add_tag(int data, int reason);
#pragma weak novas_call_fsdbEvent_add_tag
void novas_call_fsdbEvent_add_tag(int data, int reason)
{
    static int _vcs_pli_stub_initialized_ = 0;
    static void (*_vcs_pli_fp_)(int data, int reason) = NULL;
    if (!_vcs_pli_stub_initialized_) {
        _vcs_pli_stub_initialized_ = 1;
        _vcs_pli_fp_ = (void (*)(int data, int reason)) dlsym(RTLD_NEXT, "novas_call_fsdbEvent_add_tag");
        if (_vcs_pli_fp_ == NULL) {
            _vcs_pli_fp_ = (void (*)(int data, int reason)) VCS_dlsymLookup("novas_call_fsdbEvent_add_tag");
        }
    }
    if (_vcs_pli_fp_) {
        _vcs_pli_fp_(data, reason);
    } else {
        vcsMsgReportNoSource1("PLI-DIFNF", "novas_call_fsdbEvent_add_tag");
    }
}
void (*__vcs_pli_dummy_reference_novas_call_fsdbEvent_add_tag)(int data, int reason) = novas_call_fsdbEvent_add_tag;
#endif /* __VCS_PLI_STUB_novas_call_fsdbEvent_add_tag */

/* PLI routine: $fsdbTrans_end:call */
#ifndef __VCS_PLI_STUB_novas_call_fsdbEvent_end
#define __VCS_PLI_STUB_novas_call_fsdbEvent_end
extern void novas_call_fsdbEvent_end(int data, int reason);
#pragma weak novas_call_fsdbEvent_end
void novas_call_fsdbEvent_end(int data, int reason)
{
    static int _vcs_pli_stub_initialized_ = 0;
    static void (*_vcs_pli_fp_)(int data, int reason) = NULL;
    if (!_vcs_pli_stub_initialized_) {
        _vcs_pli_stub_initialized_ = 1;
        _vcs_pli_fp_ = (void (*)(int data, int reason)) dlsym(RTLD_NEXT, "novas_call_fsdbEvent_end");
        if (_vcs_pli_fp_ == NULL) {
            _vcs_pli_fp_ = (void (*)(int data, int reason)) VCS_dlsymLookup("novas_call_fsdbEvent_end");
        }
    }
    if (_vcs_pli_fp_) {
        _vcs_pli_fp_(data, reason);
    } else {
        vcsMsgReportNoSource1("PLI-DIFNF", "novas_call_fsdbEvent_end");
    }
}
void (*__vcs_pli_dummy_reference_novas_call_fsdbEvent_end)(int data, int reason) = novas_call_fsdbEvent_end;
#endif /* __VCS_PLI_STUB_novas_call_fsdbEvent_end */

/* PLI routine: $fsdbTrans_add_relation:call */
#ifndef __VCS_PLI_STUB_novas_call_fsdbEvent_add_relation
#define __VCS_PLI_STUB_novas_call_fsdbEvent_add_relation
extern void novas_call_fsdbEvent_add_relation(int data, int reason);
#pragma weak novas_call_fsdbEvent_add_relation
void novas_call_fsdbEvent_add_relation(int data, int reason)
{
    static int _vcs_pli_stub_initialized_ = 0;
    static void (*_vcs_pli_fp_)(int data, int reason) = NULL;
    if (!_vcs_pli_stub_initialized_) {
        _vcs_pli_stub_initialized_ = 1;
        _vcs_pli_fp_ = (void (*)(int data, int reason)) dlsym(RTLD_NEXT, "novas_call_fsdbEvent_add_relation");
        if (_vcs_pli_fp_ == NULL) {
            _vcs_pli_fp_ = (void (*)(int data, int reason)) VCS_dlsymLookup("novas_call_fsdbEvent_add_relation");
        }
    }
    if (_vcs_pli_fp_) {
        _vcs_pli_fp_(data, reason);
    } else {
        vcsMsgReportNoSource1("PLI-DIFNF", "novas_call_fsdbEvent_add_relation");
    }
}
void (*__vcs_pli_dummy_reference_novas_call_fsdbEvent_add_relation)(int data, int reason) = novas_call_fsdbEvent_add_relation;
#endif /* __VCS_PLI_STUB_novas_call_fsdbEvent_add_relation */

/* PLI routine: $fsdbTrans_get_error_code:call */
#ifndef __VCS_PLI_STUB_novas_call_fsdbEvent_get_error_code
#define __VCS_PLI_STUB_novas_call_fsdbEvent_get_error_code
extern void novas_call_fsdbEvent_get_error_code(int data, int reason);
#pragma weak novas_call_fsdbEvent_get_error_code
void novas_call_fsdbEvent_get_error_code(int data, int reason)
{
    static int _vcs_pli_stub_initialized_ = 0;
    static void (*_vcs_pli_fp_)(int data, int reason) = NULL;
    if (!_vcs_pli_stub_initialized_) {
        _vcs_pli_stub_initialized_ = 1;
        _vcs_pli_fp_ = (void (*)(int data, int reason)) dlsym(RTLD_NEXT, "novas_call_fsdbEvent_get_error_code");
        if (_vcs_pli_fp_ == NULL) {
            _vcs_pli_fp_ = (void (*)(int data, int reason)) VCS_dlsymLookup("novas_call_fsdbEvent_get_error_code");
        }
    }
    if (_vcs_pli_fp_) {
        _vcs_pli_fp_(data, reason);
    } else {
        vcsMsgReportNoSource1("PLI-DIFNF", "novas_call_fsdbEvent_get_error_code");
    }
}
void (*__vcs_pli_dummy_reference_novas_call_fsdbEvent_get_error_code)(int data, int reason) = novas_call_fsdbEvent_get_error_code;
#endif /* __VCS_PLI_STUB_novas_call_fsdbEvent_get_error_code */

/* PLI routine: $fsdbTrans_add_stream_attribute:call */
#ifndef __VCS_PLI_STUB_novas_call_fsdbTrans_add_stream_attribute
#define __VCS_PLI_STUB_novas_call_fsdbTrans_add_stream_attribute
extern void novas_call_fsdbTrans_add_stream_attribute(int data, int reason);
#pragma weak novas_call_fsdbTrans_add_stream_attribute
void novas_call_fsdbTrans_add_stream_attribute(int data, int reason)
{
    static int _vcs_pli_stub_initialized_ = 0;
    static void (*_vcs_pli_fp_)(int data, int reason) = NULL;
    if (!_vcs_pli_stub_initialized_) {
        _vcs_pli_stub_initialized_ = 1;
        _vcs_pli_fp_ = (void (*)(int data, int reason)) dlsym(RTLD_NEXT, "novas_call_fsdbTrans_add_stream_attribute");
        if (_vcs_pli_fp_ == NULL) {
            _vcs_pli_fp_ = (void (*)(int data, int reason)) VCS_dlsymLookup("novas_call_fsdbTrans_add_stream_attribute");
        }
    }
    if (_vcs_pli_fp_) {
        _vcs_pli_fp_(data, reason);
    } else {
        vcsMsgReportNoSource1("PLI-DIFNF", "novas_call_fsdbTrans_add_stream_attribute");
    }
}
void (*__vcs_pli_dummy_reference_novas_call_fsdbTrans_add_stream_attribute)(int data, int reason) = novas_call_fsdbTrans_add_stream_attribute;
#endif /* __VCS_PLI_STUB_novas_call_fsdbTrans_add_stream_attribute */

/* PLI routine: $fsdbTrans_add_scope_attribute:call */
#ifndef __VCS_PLI_STUB_novas_call_fsdbTrans_add_scope_attribute
#define __VCS_PLI_STUB_novas_call_fsdbTrans_add_scope_attribute
extern void novas_call_fsdbTrans_add_scope_attribute(int data, int reason);
#pragma weak novas_call_fsdbTrans_add_scope_attribute
void novas_call_fsdbTrans_add_scope_attribute(int data, int reason)
{
    static int _vcs_pli_stub_initialized_ = 0;
    static void (*_vcs_pli_fp_)(int data, int reason) = NULL;
    if (!_vcs_pli_stub_initialized_) {
        _vcs_pli_stub_initialized_ = 1;
        _vcs_pli_fp_ = (void (*)(int data, int reason)) dlsym(RTLD_NEXT, "novas_call_fsdbTrans_add_scope_attribute");
        if (_vcs_pli_fp_ == NULL) {
            _vcs_pli_fp_ = (void (*)(int data, int reason)) VCS_dlsymLookup("novas_call_fsdbTrans_add_scope_attribute");
        }
    }
    if (_vcs_pli_fp_) {
        _vcs_pli_fp_(data, reason);
    } else {
        vcsMsgReportNoSource1("PLI-DIFNF", "novas_call_fsdbTrans_add_scope_attribute");
    }
}
void (*__vcs_pli_dummy_reference_novas_call_fsdbTrans_add_scope_attribute)(int data, int reason) = novas_call_fsdbTrans_add_scope_attribute;
#endif /* __VCS_PLI_STUB_novas_call_fsdbTrans_add_scope_attribute */

/* PLI routine: $sps_interactive:call */
#ifndef __VCS_PLI_STUB_novas_call_sps_interactive
#define __VCS_PLI_STUB_novas_call_sps_interactive
extern void novas_call_sps_interactive(int data, int reason);
#pragma weak novas_call_sps_interactive
void novas_call_sps_interactive(int data, int reason)
{
    static int _vcs_pli_stub_initialized_ = 0;
    static void (*_vcs_pli_fp_)(int data, int reason) = NULL;
    if (!_vcs_pli_stub_initialized_) {
        _vcs_pli_stub_initialized_ = 1;
        _vcs_pli_fp_ = (void (*)(int data, int reason)) dlsym(RTLD_NEXT, "novas_call_sps_interactive");
        if (_vcs_pli_fp_ == NULL) {
            _vcs_pli_fp_ = (void (*)(int data, int reason)) VCS_dlsymLookup("novas_call_sps_interactive");
        }
    }
    if (_vcs_pli_fp_) {
        _vcs_pli_fp_(data, reason);
    } else {
        vcsMsgReportNoSource1("PLI-DIFNF", "novas_call_sps_interactive");
    }
}
void (*__vcs_pli_dummy_reference_novas_call_sps_interactive)(int data, int reason) = novas_call_sps_interactive;
#endif /* __VCS_PLI_STUB_novas_call_sps_interactive */

/* PLI routine: $sps_test:call */
#ifndef __VCS_PLI_STUB_novas_call_sps_test
#define __VCS_PLI_STUB_novas_call_sps_test
extern void novas_call_sps_test(int data, int reason);
#pragma weak novas_call_sps_test
void novas_call_sps_test(int data, int reason)
{
    static int _vcs_pli_stub_initialized_ = 0;
    static void (*_vcs_pli_fp_)(int data, int reason) = NULL;
    if (!_vcs_pli_stub_initialized_) {
        _vcs_pli_stub_initialized_ = 1;
        _vcs_pli_fp_ = (void (*)(int data, int reason)) dlsym(RTLD_NEXT, "novas_call_sps_test");
        if (_vcs_pli_fp_ == NULL) {
            _vcs_pli_fp_ = (void (*)(int data, int reason)) VCS_dlsymLookup("novas_call_sps_test");
        }
    }
    if (_vcs_pli_fp_) {
        _vcs_pli_fp_(data, reason);
    } else {
        vcsMsgReportNoSource1("PLI-DIFNF", "novas_call_sps_test");
    }
}
void (*__vcs_pli_dummy_reference_novas_call_sps_test)(int data, int reason) = novas_call_sps_test;
#endif /* __VCS_PLI_STUB_novas_call_sps_test */

/* PLI routine: $fsdbDumpClassObject:call */
#ifndef __VCS_PLI_STUB_novas_call_fsdbDumpClassObject
#define __VCS_PLI_STUB_novas_call_fsdbDumpClassObject
extern void novas_call_fsdbDumpClassObject(int data, int reason);
#pragma weak novas_call_fsdbDumpClassObject
void novas_call_fsdbDumpClassObject(int data, int reason)
{
    static int _vcs_pli_stub_initialized_ = 0;
    static void (*_vcs_pli_fp_)(int data, int reason) = NULL;
    if (!_vcs_pli_stub_initialized_) {
        _vcs_pli_stub_initialized_ = 1;
        _vcs_pli_fp_ = (void (*)(int data, int reason)) dlsym(RTLD_NEXT, "novas_call_fsdbDumpClassObject");
        if (_vcs_pli_fp_ == NULL) {
            _vcs_pli_fp_ = (void (*)(int data, int reason)) VCS_dlsymLookup("novas_call_fsdbDumpClassObject");
        }
    }
    if (_vcs_pli_fp_) {
        _vcs_pli_fp_(data, reason);
    } else {
        vcsMsgReportNoSource1("PLI-DIFNF", "novas_call_fsdbDumpClassObject");
    }
}
void (*__vcs_pli_dummy_reference_novas_call_fsdbDumpClassObject)(int data, int reason) = novas_call_fsdbDumpClassObject;
#endif /* __VCS_PLI_STUB_novas_call_fsdbDumpClassObject */

/* PLI routine: $fsdbDumpClassObjectByFile:call */
#ifndef __VCS_PLI_STUB_novas_call_fsdbDumpClassObjectByFile
#define __VCS_PLI_STUB_novas_call_fsdbDumpClassObjectByFile
extern void novas_call_fsdbDumpClassObjectByFile(int data, int reason);
#pragma weak novas_call_fsdbDumpClassObjectByFile
void novas_call_fsdbDumpClassObjectByFile(int data, int reason)
{
    static int _vcs_pli_stub_initialized_ = 0;
    static void (*_vcs_pli_fp_)(int data, int reason) = NULL;
    if (!_vcs_pli_stub_initialized_) {
        _vcs_pli_stub_initialized_ = 1;
        _vcs_pli_fp_ = (void (*)(int data, int reason)) dlsym(RTLD_NEXT, "novas_call_fsdbDumpClassObjectByFile");
        if (_vcs_pli_fp_ == NULL) {
            _vcs_pli_fp_ = (void (*)(int data, int reason)) VCS_dlsymLookup("novas_call_fsdbDumpClassObjectByFile");
        }
    }
    if (_vcs_pli_fp_) {
        _vcs_pli_fp_(data, reason);
    } else {
        vcsMsgReportNoSource1("PLI-DIFNF", "novas_call_fsdbDumpClassObjectByFile");
    }
}
void (*__vcs_pli_dummy_reference_novas_call_fsdbDumpClassObjectByFile)(int data, int reason) = novas_call_fsdbDumpClassObjectByFile;
#endif /* __VCS_PLI_STUB_novas_call_fsdbDumpClassObjectByFile */

/* PLI routine: $ridbDump:call */
#ifndef __VCS_PLI_STUB_novas_call_ridbDump
#define __VCS_PLI_STUB_novas_call_ridbDump
extern void novas_call_ridbDump(int data, int reason);
#pragma weak novas_call_ridbDump
void novas_call_ridbDump(int data, int reason)
{
    static int _vcs_pli_stub_initialized_ = 0;
    static void (*_vcs_pli_fp_)(int data, int reason) = NULL;
    if (!_vcs_pli_stub_initialized_) {
        _vcs_pli_stub_initialized_ = 1;
        _vcs_pli_fp_ = (void (*)(int data, int reason)) dlsym(RTLD_NEXT, "novas_call_ridbDump");
        if (_vcs_pli_fp_ == NULL) {
            _vcs_pli_fp_ = (void (*)(int data, int reason)) VCS_dlsymLookup("novas_call_ridbDump");
        }
    }
    if (_vcs_pli_fp_) {
        _vcs_pli_fp_(data, reason);
    } else {
        vcsMsgReportNoSource1("PLI-DIFNF", "novas_call_ridbDump");
    }
}
void (*__vcs_pli_dummy_reference_novas_call_ridbDump)(int data, int reason) = novas_call_ridbDump;
#endif /* __VCS_PLI_STUB_novas_call_ridbDump */

/* PLI routine: $sps_flush_file:call */
#ifndef __VCS_PLI_STUB_novas_call_sps_flush_file
#define __VCS_PLI_STUB_novas_call_sps_flush_file
extern void novas_call_sps_flush_file(int data, int reason);
#pragma weak novas_call_sps_flush_file
void novas_call_sps_flush_file(int data, int reason)
{
    static int _vcs_pli_stub_initialized_ = 0;
    static void (*_vcs_pli_fp_)(int data, int reason) = NULL;
    if (!_vcs_pli_stub_initialized_) {
        _vcs_pli_stub_initialized_ = 1;
        _vcs_pli_fp_ = (void (*)(int data, int reason)) dlsym(RTLD_NEXT, "novas_call_sps_flush_file");
        if (_vcs_pli_fp_ == NULL) {
            _vcs_pli_fp_ = (void (*)(int data, int reason)) VCS_dlsymLookup("novas_call_sps_flush_file");
        }
    }
    if (_vcs_pli_fp_) {
        _vcs_pli_fp_(data, reason);
    } else {
        vcsMsgReportNoSource1("PLI-DIFNF", "novas_call_sps_flush_file");
    }
}
void (*__vcs_pli_dummy_reference_novas_call_sps_flush_file)(int data, int reason) = novas_call_sps_flush_file;
#endif /* __VCS_PLI_STUB_novas_call_sps_flush_file */

/* PLI routine: $fsdbDumpSingle:call */
#ifndef __VCS_PLI_STUB_novas_call_fsdbDumpSingle
#define __VCS_PLI_STUB_novas_call_fsdbDumpSingle
extern void novas_call_fsdbDumpSingle(int data, int reason);
#pragma weak novas_call_fsdbDumpSingle
void novas_call_fsdbDumpSingle(int data, int reason)
{
    static int _vcs_pli_stub_initialized_ = 0;
    static void (*_vcs_pli_fp_)(int data, int reason) = NULL;
    if (!_vcs_pli_stub_initialized_) {
        _vcs_pli_stub_initialized_ = 1;
        _vcs_pli_fp_ = (void (*)(int data, int reason)) dlsym(RTLD_NEXT, "novas_call_fsdbDumpSingle");
        if (_vcs_pli_fp_ == NULL) {
            _vcs_pli_fp_ = (void (*)(int data, int reason)) VCS_dlsymLookup("novas_call_fsdbDumpSingle");
        }
    }
    if (_vcs_pli_fp_) {
        _vcs_pli_fp_(data, reason);
    } else {
        vcsMsgReportNoSource1("PLI-DIFNF", "novas_call_fsdbDumpSingle");
    }
}
void (*__vcs_pli_dummy_reference_novas_call_fsdbDumpSingle)(int data, int reason) = novas_call_fsdbDumpSingle;
#endif /* __VCS_PLI_STUB_novas_call_fsdbDumpSingle */

/* PLI routine: $fsdbDumpIO:call */
#ifndef __VCS_PLI_STUB_novas_call_fsdbDumpIO
#define __VCS_PLI_STUB_novas_call_fsdbDumpIO
extern void novas_call_fsdbDumpIO(int data, int reason);
#pragma weak novas_call_fsdbDumpIO
void novas_call_fsdbDumpIO(int data, int reason)
{
    static int _vcs_pli_stub_initialized_ = 0;
    static void (*_vcs_pli_fp_)(int data, int reason) = NULL;
    if (!_vcs_pli_stub_initialized_) {
        _vcs_pli_stub_initialized_ = 1;
        _vcs_pli_fp_ = (void (*)(int data, int reason)) dlsym(RTLD_NEXT, "novas_call_fsdbDumpIO");
        if (_vcs_pli_fp_ == NULL) {
            _vcs_pli_fp_ = (void (*)(int data, int reason)) VCS_dlsymLookup("novas_call_fsdbDumpIO");
        }
    }
    if (_vcs_pli_fp_) {
        _vcs_pli_fp_(data, reason);
    } else {
        vcsMsgReportNoSource1("PLI-DIFNF", "novas_call_fsdbDumpIO");
    }
}
void (*__vcs_pli_dummy_reference_novas_call_fsdbDumpIO)(int data, int reason) = novas_call_fsdbDumpIO;
#endif /* __VCS_PLI_STUB_novas_call_fsdbDumpIO */

/* PLI routine: $fsdbDumpvars:call */
#ifndef __VCS_PLI_STUB_plitaskDumpvars
#define __VCS_PLI_STUB_plitaskDumpvars
extern void plitaskDumpvars(int data, int reason);
#pragma weak plitaskDumpvars
void plitaskDumpvars(int data, int reason)
{
    static int _vcs_pli_stub_initialized_ = 0;
    static void (*_vcs_pli_fp_)(int data, int reason) = NULL;
    if (!_vcs_pli_stub_initialized_) {
        _vcs_pli_stub_initialized_ = 1;
        _vcs_pli_fp_ = (void (*)(int data, int reason)) dlsym(RTLD_NEXT, "plitaskDumpvars");
        if (_vcs_pli_fp_ == NULL) {
            _vcs_pli_fp_ = (void (*)(int data, int reason)) VCS_dlsymLookup("plitaskDumpvars");
        }
    }
    if (_vcs_pli_fp_) {
        _vcs_pli_fp_(data, reason);
    } else {
        vcsMsgReportNoSource1("PLI-DIFNF", "plitaskDumpvars");
    }
}
void (*__vcs_pli_dummy_reference_plitaskDumpvars)(int data, int reason) = plitaskDumpvars;
#endif /* __VCS_PLI_STUB_plitaskDumpvars */

/* PLI routine: $fsdbDumpvars:check */
#ifndef __VCS_PLI_STUB_plicompileDumpvars
#define __VCS_PLI_STUB_plicompileDumpvars
extern void plicompileDumpvars(int data, int reason);
#pragma weak plicompileDumpvars
void plicompileDumpvars(int data, int reason)
{
    static int _vcs_pli_stub_initialized_ = 0;
    static void (*_vcs_pli_fp_)(int data, int reason) = NULL;
    if (!_vcs_pli_stub_initialized_) {
        _vcs_pli_stub_initialized_ = 1;
        _vcs_pli_fp_ = (void (*)(int data, int reason)) dlsym(RTLD_NEXT, "plicompileDumpvars");
        if (_vcs_pli_fp_ == NULL) {
            _vcs_pli_fp_ = (void (*)(int data, int reason)) VCS_dlsymLookup("plicompileDumpvars");
        }
    }
    if (_vcs_pli_fp_) {
        _vcs_pli_fp_(data, reason);
    }
}
void (*__vcs_pli_dummy_reference_plicompileDumpvars)(int data, int reason) = plicompileDumpvars;
#endif /* __VCS_PLI_STUB_plicompileDumpvars */

/* PLI routine: $fsdbDumpvars:misc */
#ifndef __VCS_PLI_STUB_plimiscFSDB
#define __VCS_PLI_STUB_plimiscFSDB
extern void plimiscFSDB(int data, int reason, int iparam );
#pragma weak plimiscFSDB
void plimiscFSDB(int data, int reason, int iparam )
{
    static int _vcs_pli_stub_initialized_ = 0;
    static void (*_vcs_pli_fp_)(int data, int reason, int iparam ) = NULL;
    if (!_vcs_pli_stub_initialized_) {
        _vcs_pli_stub_initialized_ = 1;
        _vcs_pli_fp_ = (void (*)(int data, int reason, int iparam )) dlsym(RTLD_NEXT, "plimiscFSDB");
        if (_vcs_pli_fp_ == NULL) {
            _vcs_pli_fp_ = (void (*)(int data, int reason, int iparam )) VCS_dlsymLookup("plimiscFSDB");
        }
    }
    if (_vcs_pli_fp_) {
        _vcs_pli_fp_(data, reason, iparam );
    }
}
void (*__vcs_pli_dummy_reference_plimiscFSDB)(int data, int reason, int iparam ) = plimiscFSDB;
#endif /* __VCS_PLI_STUB_plimiscFSDB */

/* PLI routine: $fsdbESDump:call */
#ifndef __VCS_PLI_STUB_plitaskESDump
#define __VCS_PLI_STUB_plitaskESDump
extern void plitaskESDump(int data, int reason);
#pragma weak plitaskESDump
void plitaskESDump(int data, int reason)
{
    static int _vcs_pli_stub_initialized_ = 0;
    static void (*_vcs_pli_fp_)(int data, int reason) = NULL;
    if (!_vcs_pli_stub_initialized_) {
        _vcs_pli_stub_initialized_ = 1;
        _vcs_pli_fp_ = (void (*)(int data, int reason)) dlsym(RTLD_NEXT, "plitaskESDump");
        if (_vcs_pli_fp_ == NULL) {
            _vcs_pli_fp_ = (void (*)(int data, int reason)) VCS_dlsymLookup("plitaskESDump");
        }
    }
    if (_vcs_pli_fp_) {
        _vcs_pli_fp_(data, reason);
    } else {
        vcsMsgReportNoSource1("PLI-DIFNF", "plitaskESDump");
    }
}
void (*__vcs_pli_dummy_reference_plitaskESDump)(int data, int reason) = plitaskESDump;
#endif /* __VCS_PLI_STUB_plitaskESDump */

/* PLI routine: $fsdbESDump:check */
#ifndef __VCS_PLI_STUB_plicompileESDump
#define __VCS_PLI_STUB_plicompileESDump
extern void plicompileESDump(int data, int reason);
#pragma weak plicompileESDump
void plicompileESDump(int data, int reason)
{
    static int _vcs_pli_stub_initialized_ = 0;
    static void (*_vcs_pli_fp_)(int data, int reason) = NULL;
    if (!_vcs_pli_stub_initialized_) {
        _vcs_pli_stub_initialized_ = 1;
        _vcs_pli_fp_ = (void (*)(int data, int reason)) dlsym(RTLD_NEXT, "plicompileESDump");
        if (_vcs_pli_fp_ == NULL) {
            _vcs_pli_fp_ = (void (*)(int data, int reason)) VCS_dlsymLookup("plicompileESDump");
        }
    }
    if (_vcs_pli_fp_) {
        _vcs_pli_fp_(data, reason);
    }
}
void (*__vcs_pli_dummy_reference_plicompileESDump)(int data, int reason) = plicompileESDump;
#endif /* __VCS_PLI_STUB_plicompileESDump */

/* PLI routine: $debussy:call */
#ifndef __VCS_PLI_STUB_plitaskDebussyVCS
#define __VCS_PLI_STUB_plitaskDebussyVCS
extern void plitaskDebussyVCS(int data, int reason);
#pragma weak plitaskDebussyVCS
void plitaskDebussyVCS(int data, int reason)
{
    static int _vcs_pli_stub_initialized_ = 0;
    static void (*_vcs_pli_fp_)(int data, int reason) = NULL;
    if (!_vcs_pli_stub_initialized_) {
        _vcs_pli_stub_initialized_ = 1;
        _vcs_pli_fp_ = (void (*)(int data, int reason)) dlsym(RTLD_NEXT, "plitaskDebussyVCS");
        if (_vcs_pli_fp_ == NULL) {
            _vcs_pli_fp_ = (void (*)(int data, int reason)) VCS_dlsymLookup("plitaskDebussyVCS");
        }
    }
    if (_vcs_pli_fp_) {
        _vcs_pli_fp_(data, reason);
    } else {
        vcsMsgReportNoSource1("PLI-DIFNF", "plitaskDebussyVCS");
    }
}
void (*__vcs_pli_dummy_reference_plitaskDebussyVCS)(int data, int reason) = plitaskDebussyVCS;
#endif /* __VCS_PLI_STUB_plitaskDebussyVCS */

/* PLI routine: $debussy:check */
#ifndef __VCS_PLI_STUB_plicompileDebussy
#define __VCS_PLI_STUB_plicompileDebussy
extern void plicompileDebussy(int data, int reason);
#pragma weak plicompileDebussy
void plicompileDebussy(int data, int reason)
{
    static int _vcs_pli_stub_initialized_ = 0;
    static void (*_vcs_pli_fp_)(int data, int reason) = NULL;
    if (!_vcs_pli_stub_initialized_) {
        _vcs_pli_stub_initialized_ = 1;
        _vcs_pli_fp_ = (void (*)(int data, int reason)) dlsym(RTLD_NEXT, "plicompileDebussy");
        if (_vcs_pli_fp_ == NULL) {
            _vcs_pli_fp_ = (void (*)(int data, int reason)) VCS_dlsymLookup("plicompileDebussy");
        }
    }
    if (_vcs_pli_fp_) {
        _vcs_pli_fp_(data, reason);
    }
}
void (*__vcs_pli_dummy_reference_plicompileDebussy)(int data, int reason) = plicompileDebussy;
#endif /* __VCS_PLI_STUB_plicompileDebussy */

/* PLI routine: $vericom:call */
#ifndef __VCS_PLI_STUB_plitaskVericom
#define __VCS_PLI_STUB_plitaskVericom
extern void plitaskVericom(int data, int reason);
#pragma weak plitaskVericom
void plitaskVericom(int data, int reason)
{
    static int _vcs_pli_stub_initialized_ = 0;
    static void (*_vcs_pli_fp_)(int data, int reason) = NULL;
    if (!_vcs_pli_stub_initialized_) {
        _vcs_pli_stub_initialized_ = 1;
        _vcs_pli_fp_ = (void (*)(int data, int reason)) dlsym(RTLD_NEXT, "plitaskVericom");
        if (_vcs_pli_fp_ == NULL) {
            _vcs_pli_fp_ = (void (*)(int data, int reason)) VCS_dlsymLookup("plitaskVericom");
        }
    }
    if (_vcs_pli_fp_) {
        _vcs_pli_fp_(data, reason);
    } else {
        vcsMsgReportNoSource1("PLI-DIFNF", "plitaskVericom");
    }
}
void (*__vcs_pli_dummy_reference_plitaskVericom)(int data, int reason) = plitaskVericom;
#endif /* __VCS_PLI_STUB_plitaskVericom */

/* PLI routine: $vericom:check */
#ifndef __VCS_PLI_STUB_plicompileVericom
#define __VCS_PLI_STUB_plicompileVericom
extern void plicompileVericom(int data, int reason);
#pragma weak plicompileVericom
void plicompileVericom(int data, int reason)
{
    static int _vcs_pli_stub_initialized_ = 0;
    static void (*_vcs_pli_fp_)(int data, int reason) = NULL;
    if (!_vcs_pli_stub_initialized_) {
        _vcs_pli_stub_initialized_ = 1;
        _vcs_pli_fp_ = (void (*)(int data, int reason)) dlsym(RTLD_NEXT, "plicompileVericom");
        if (_vcs_pli_fp_ == NULL) {
            _vcs_pli_fp_ = (void (*)(int data, int reason)) VCS_dlsymLookup("plicompileVericom");
        }
    }
    if (_vcs_pli_fp_) {
        _vcs_pli_fp_(data, reason);
    }
}
void (*__vcs_pli_dummy_reference_plicompileVericom)(int data, int reason) = plicompileVericom;
#endif /* __VCS_PLI_STUB_plicompileVericom */

/* PLI routine: $db_breakatline:call */
#ifndef __VCS_PLI_STUB_plitaskLineBreak
#define __VCS_PLI_STUB_plitaskLineBreak
extern void plitaskLineBreak(int data, int reason);
#pragma weak plitaskLineBreak
void plitaskLineBreak(int data, int reason)
{
    static int _vcs_pli_stub_initialized_ = 0;
    static void (*_vcs_pli_fp_)(int data, int reason) = NULL;
    if (!_vcs_pli_stub_initialized_) {
        _vcs_pli_stub_initialized_ = 1;
        _vcs_pli_fp_ = (void (*)(int data, int reason)) dlsym(RTLD_NEXT, "plitaskLineBreak");
        if (_vcs_pli_fp_ == NULL) {
            _vcs_pli_fp_ = (void (*)(int data, int reason)) VCS_dlsymLookup("plitaskLineBreak");
        }
    }
    if (_vcs_pli_fp_) {
        _vcs_pli_fp_(data, reason);
    } else {
        vcsMsgReportNoSource1("PLI-DIFNF", "plitaskLineBreak");
    }
}
void (*__vcs_pli_dummy_reference_plitaskLineBreak)(int data, int reason) = plitaskLineBreak;
#endif /* __VCS_PLI_STUB_plitaskLineBreak */

/* PLI routine: $db_breakatline:check */
#ifndef __VCS_PLI_STUB_plicompileLineBreak
#define __VCS_PLI_STUB_plicompileLineBreak
extern void plicompileLineBreak(int data, int reason);
#pragma weak plicompileLineBreak
void plicompileLineBreak(int data, int reason)
{
    static int _vcs_pli_stub_initialized_ = 0;
    static void (*_vcs_pli_fp_)(int data, int reason) = NULL;
    if (!_vcs_pli_stub_initialized_) {
        _vcs_pli_stub_initialized_ = 1;
        _vcs_pli_fp_ = (void (*)(int data, int reason)) dlsym(RTLD_NEXT, "plicompileLineBreak");
        if (_vcs_pli_fp_ == NULL) {
            _vcs_pli_fp_ = (void (*)(int data, int reason)) VCS_dlsymLookup("plicompileLineBreak");
        }
    }
    if (_vcs_pli_fp_) {
        _vcs_pli_fp_(data, reason);
    }
}
void (*__vcs_pli_dummy_reference_plicompileLineBreak)(int data, int reason) = plicompileLineBreak;
#endif /* __VCS_PLI_STUB_plicompileLineBreak */

/* PLI routine: $db_breakonceatline:call */
#ifndef __VCS_PLI_STUB_plitaskOnceLineBreak
#define __VCS_PLI_STUB_plitaskOnceLineBreak
extern void plitaskOnceLineBreak(int data, int reason);
#pragma weak plitaskOnceLineBreak
void plitaskOnceLineBreak(int data, int reason)
{
    static int _vcs_pli_stub_initialized_ = 0;
    static void (*_vcs_pli_fp_)(int data, int reason) = NULL;
    if (!_vcs_pli_stub_initialized_) {
        _vcs_pli_stub_initialized_ = 1;
        _vcs_pli_fp_ = (void (*)(int data, int reason)) dlsym(RTLD_NEXT, "plitaskOnceLineBreak");
        if (_vcs_pli_fp_ == NULL) {
            _vcs_pli_fp_ = (void (*)(int data, int reason)) VCS_dlsymLookup("plitaskOnceLineBreak");
        }
    }
    if (_vcs_pli_fp_) {
        _vcs_pli_fp_(data, reason);
    } else {
        vcsMsgReportNoSource1("PLI-DIFNF", "plitaskOnceLineBreak");
    }
}
void (*__vcs_pli_dummy_reference_plitaskOnceLineBreak)(int data, int reason) = plitaskOnceLineBreak;
#endif /* __VCS_PLI_STUB_plitaskOnceLineBreak */

/* PLI routine: $db_deletelinebreak:call */
#ifndef __VCS_PLI_STUB_plitaskDeleteLineBreak
#define __VCS_PLI_STUB_plitaskDeleteLineBreak
extern void plitaskDeleteLineBreak(int data, int reason);
#pragma weak plitaskDeleteLineBreak
void plitaskDeleteLineBreak(int data, int reason)
{
    static int _vcs_pli_stub_initialized_ = 0;
    static void (*_vcs_pli_fp_)(int data, int reason) = NULL;
    if (!_vcs_pli_stub_initialized_) {
        _vcs_pli_stub_initialized_ = 1;
        _vcs_pli_fp_ = (void (*)(int data, int reason)) dlsym(RTLD_NEXT, "plitaskDeleteLineBreak");
        if (_vcs_pli_fp_ == NULL) {
            _vcs_pli_fp_ = (void (*)(int data, int reason)) VCS_dlsymLookup("plitaskDeleteLineBreak");
        }
    }
    if (_vcs_pli_fp_) {
        _vcs_pli_fp_(data, reason);
    } else {
        vcsMsgReportNoSource1("PLI-DIFNF", "plitaskDeleteLineBreak");
    }
}
void (*__vcs_pli_dummy_reference_plitaskDeleteLineBreak)(int data, int reason) = plitaskDeleteLineBreak;
#endif /* __VCS_PLI_STUB_plitaskDeleteLineBreak */

/* PLI routine: $db_deletelinebreak:check */
#ifndef __VCS_PLI_STUB_plicompileDeleteLineBreak
#define __VCS_PLI_STUB_plicompileDeleteLineBreak
extern void plicompileDeleteLineBreak(int data, int reason);
#pragma weak plicompileDeleteLineBreak
void plicompileDeleteLineBreak(int data, int reason)
{
    static int _vcs_pli_stub_initialized_ = 0;
    static void (*_vcs_pli_fp_)(int data, int reason) = NULL;
    if (!_vcs_pli_stub_initialized_) {
        _vcs_pli_stub_initialized_ = 1;
        _vcs_pli_fp_ = (void (*)(int data, int reason)) dlsym(RTLD_NEXT, "plicompileDeleteLineBreak");
        if (_vcs_pli_fp_ == NULL) {
            _vcs_pli_fp_ = (void (*)(int data, int reason)) VCS_dlsymLookup("plicompileDeleteLineBreak");
        }
    }
    if (_vcs_pli_fp_) {
        _vcs_pli_fp_(data, reason);
    }
}
void (*__vcs_pli_dummy_reference_plicompileDeleteLineBreak)(int data, int reason) = plicompileDeleteLineBreak;
#endif /* __VCS_PLI_STUB_plicompileDeleteLineBreak */

/* PLI routine: $db_showlinebreak:call */
#ifndef __VCS_PLI_STUB_plitaskShowLineBreak
#define __VCS_PLI_STUB_plitaskShowLineBreak
extern void plitaskShowLineBreak(int data, int reason);
#pragma weak plitaskShowLineBreak
void plitaskShowLineBreak(int data, int reason)
{
    static int _vcs_pli_stub_initialized_ = 0;
    static void (*_vcs_pli_fp_)(int data, int reason) = NULL;
    if (!_vcs_pli_stub_initialized_) {
        _vcs_pli_stub_initialized_ = 1;
        _vcs_pli_fp_ = (void (*)(int data, int reason)) dlsym(RTLD_NEXT, "plitaskShowLineBreak");
        if (_vcs_pli_fp_ == NULL) {
            _vcs_pli_fp_ = (void (*)(int data, int reason)) VCS_dlsymLookup("plitaskShowLineBreak");
        }
    }
    if (_vcs_pli_fp_) {
        _vcs_pli_fp_(data, reason);
    } else {
        vcsMsgReportNoSource1("PLI-DIFNF", "plitaskShowLineBreak");
    }
}
void (*__vcs_pli_dummy_reference_plitaskShowLineBreak)(int data, int reason) = plitaskShowLineBreak;
#endif /* __VCS_PLI_STUB_plitaskShowLineBreak */

/* PLI routine: $db_showlinebreak:check */
#ifndef __VCS_PLI_STUB_plicompileNoArgs
#define __VCS_PLI_STUB_plicompileNoArgs
extern void plicompileNoArgs(int data, int reason);
#pragma weak plicompileNoArgs
void plicompileNoArgs(int data, int reason)
{
    static int _vcs_pli_stub_initialized_ = 0;
    static void (*_vcs_pli_fp_)(int data, int reason) = NULL;
    if (!_vcs_pli_stub_initialized_) {
        _vcs_pli_stub_initialized_ = 1;
        _vcs_pli_fp_ = (void (*)(int data, int reason)) dlsym(RTLD_NEXT, "plicompileNoArgs");
        if (_vcs_pli_fp_ == NULL) {
            _vcs_pli_fp_ = (void (*)(int data, int reason)) VCS_dlsymLookup("plicompileNoArgs");
        }
    }
    if (_vcs_pli_fp_) {
        _vcs_pli_fp_(data, reason);
    }
}
void (*__vcs_pli_dummy_reference_plicompileNoArgs)(int data, int reason) = plicompileNoArgs;
#endif /* __VCS_PLI_STUB_plicompileNoArgs */

/* PLI routine: $db_setfocus:call */
#ifndef __VCS_PLI_STUB_plitaskSetFocus
#define __VCS_PLI_STUB_plitaskSetFocus
extern void plitaskSetFocus(int data, int reason);
#pragma weak plitaskSetFocus
void plitaskSetFocus(int data, int reason)
{
    static int _vcs_pli_stub_initialized_ = 0;
    static void (*_vcs_pli_fp_)(int data, int reason) = NULL;
    if (!_vcs_pli_stub_initialized_) {
        _vcs_pli_stub_initialized_ = 1;
        _vcs_pli_fp_ = (void (*)(int data, int reason)) dlsym(RTLD_NEXT, "plitaskSetFocus");
        if (_vcs_pli_fp_ == NULL) {
            _vcs_pli_fp_ = (void (*)(int data, int reason)) VCS_dlsymLookup("plitaskSetFocus");
        }
    }
    if (_vcs_pli_fp_) {
        _vcs_pli_fp_(data, reason);
    } else {
        vcsMsgReportNoSource1("PLI-DIFNF", "plitaskSetFocus");
    }
}
void (*__vcs_pli_dummy_reference_plitaskSetFocus)(int data, int reason) = plitaskSetFocus;
#endif /* __VCS_PLI_STUB_plitaskSetFocus */

/* PLI routine: $db_setfocus:check */
#ifndef __VCS_PLI_STUB_plicompileSetFocus
#define __VCS_PLI_STUB_plicompileSetFocus
extern void plicompileSetFocus(int data, int reason);
#pragma weak plicompileSetFocus
void plicompileSetFocus(int data, int reason)
{
    static int _vcs_pli_stub_initialized_ = 0;
    static void (*_vcs_pli_fp_)(int data, int reason) = NULL;
    if (!_vcs_pli_stub_initialized_) {
        _vcs_pli_stub_initialized_ = 1;
        _vcs_pli_fp_ = (void (*)(int data, int reason)) dlsym(RTLD_NEXT, "plicompileSetFocus");
        if (_vcs_pli_fp_ == NULL) {
            _vcs_pli_fp_ = (void (*)(int data, int reason)) VCS_dlsymLookup("plicompileSetFocus");
        }
    }
    if (_vcs_pli_fp_) {
        _vcs_pli_fp_(data, reason);
    }
}
void (*__vcs_pli_dummy_reference_plicompileSetFocus)(int data, int reason) = plicompileSetFocus;
#endif /* __VCS_PLI_STUB_plicompileSetFocus */

/* PLI routine: $db_deletefocus:call */
#ifndef __VCS_PLI_STUB_plitaskDeleteFocus
#define __VCS_PLI_STUB_plitaskDeleteFocus
extern void plitaskDeleteFocus(int data, int reason);
#pragma weak plitaskDeleteFocus
void plitaskDeleteFocus(int data, int reason)
{
    static int _vcs_pli_stub_initialized_ = 0;
    static void (*_vcs_pli_fp_)(int data, int reason) = NULL;
    if (!_vcs_pli_stub_initialized_) {
        _vcs_pli_stub_initialized_ = 1;
        _vcs_pli_fp_ = (void (*)(int data, int reason)) dlsym(RTLD_NEXT, "plitaskDeleteFocus");
        if (_vcs_pli_fp_ == NULL) {
            _vcs_pli_fp_ = (void (*)(int data, int reason)) VCS_dlsymLookup("plitaskDeleteFocus");
        }
    }
    if (_vcs_pli_fp_) {
        _vcs_pli_fp_(data, reason);
    } else {
        vcsMsgReportNoSource1("PLI-DIFNF", "plitaskDeleteFocus");
    }
}
void (*__vcs_pli_dummy_reference_plitaskDeleteFocus)(int data, int reason) = plitaskDeleteFocus;
#endif /* __VCS_PLI_STUB_plitaskDeleteFocus */

/* PLI routine: $db_deletefocus:check */
#ifndef __VCS_PLI_STUB_plicompileDeleteFocus
#define __VCS_PLI_STUB_plicompileDeleteFocus
extern void plicompileDeleteFocus(int data, int reason);
#pragma weak plicompileDeleteFocus
void plicompileDeleteFocus(int data, int reason)
{
    static int _vcs_pli_stub_initialized_ = 0;
    static void (*_vcs_pli_fp_)(int data, int reason) = NULL;
    if (!_vcs_pli_stub_initialized_) {
        _vcs_pli_stub_initialized_ = 1;
        _vcs_pli_fp_ = (void (*)(int data, int reason)) dlsym(RTLD_NEXT, "plicompileDeleteFocus");
        if (_vcs_pli_fp_ == NULL) {
            _vcs_pli_fp_ = (void (*)(int data, int reason)) VCS_dlsymLookup("plicompileDeleteFocus");
        }
    }
    if (_vcs_pli_fp_) {
        _vcs_pli_fp_(data, reason);
    }
}
void (*__vcs_pli_dummy_reference_plicompileDeleteFocus)(int data, int reason) = plicompileDeleteFocus;
#endif /* __VCS_PLI_STUB_plicompileDeleteFocus */

/* PLI routine: $db_enablefocus:call */
#ifndef __VCS_PLI_STUB_plitaskEnableFocus
#define __VCS_PLI_STUB_plitaskEnableFocus
extern void plitaskEnableFocus(int data, int reason);
#pragma weak plitaskEnableFocus
void plitaskEnableFocus(int data, int reason)
{
    static int _vcs_pli_stub_initialized_ = 0;
    static void (*_vcs_pli_fp_)(int data, int reason) = NULL;
    if (!_vcs_pli_stub_initialized_) {
        _vcs_pli_stub_initialized_ = 1;
        _vcs_pli_fp_ = (void (*)(int data, int reason)) dlsym(RTLD_NEXT, "plitaskEnableFocus");
        if (_vcs_pli_fp_ == NULL) {
            _vcs_pli_fp_ = (void (*)(int data, int reason)) VCS_dlsymLookup("plitaskEnableFocus");
        }
    }
    if (_vcs_pli_fp_) {
        _vcs_pli_fp_(data, reason);
    } else {
        vcsMsgReportNoSource1("PLI-DIFNF", "plitaskEnableFocus");
    }
}
void (*__vcs_pli_dummy_reference_plitaskEnableFocus)(int data, int reason) = plitaskEnableFocus;
#endif /* __VCS_PLI_STUB_plitaskEnableFocus */

/* PLI routine: $db_enablefocus:check */
#ifndef __VCS_PLI_STUB_plicompileEnableFocus
#define __VCS_PLI_STUB_plicompileEnableFocus
extern void plicompileEnableFocus(int data, int reason);
#pragma weak plicompileEnableFocus
void plicompileEnableFocus(int data, int reason)
{
    static int _vcs_pli_stub_initialized_ = 0;
    static void (*_vcs_pli_fp_)(int data, int reason) = NULL;
    if (!_vcs_pli_stub_initialized_) {
        _vcs_pli_stub_initialized_ = 1;
        _vcs_pli_fp_ = (void (*)(int data, int reason)) dlsym(RTLD_NEXT, "plicompileEnableFocus");
        if (_vcs_pli_fp_ == NULL) {
            _vcs_pli_fp_ = (void (*)(int data, int reason)) VCS_dlsymLookup("plicompileEnableFocus");
        }
    }
    if (_vcs_pli_fp_) {
        _vcs_pli_fp_(data, reason);
    }
}
void (*__vcs_pli_dummy_reference_plicompileEnableFocus)(int data, int reason) = plicompileEnableFocus;
#endif /* __VCS_PLI_STUB_plicompileEnableFocus */

/* PLI routine: $db_disablefocus:call */
#ifndef __VCS_PLI_STUB_plitaskDisableFocus
#define __VCS_PLI_STUB_plitaskDisableFocus
extern void plitaskDisableFocus(int data, int reason);
#pragma weak plitaskDisableFocus
void plitaskDisableFocus(int data, int reason)
{
    static int _vcs_pli_stub_initialized_ = 0;
    static void (*_vcs_pli_fp_)(int data, int reason) = NULL;
    if (!_vcs_pli_stub_initialized_) {
        _vcs_pli_stub_initialized_ = 1;
        _vcs_pli_fp_ = (void (*)(int data, int reason)) dlsym(RTLD_NEXT, "plitaskDisableFocus");
        if (_vcs_pli_fp_ == NULL) {
            _vcs_pli_fp_ = (void (*)(int data, int reason)) VCS_dlsymLookup("plitaskDisableFocus");
        }
    }
    if (_vcs_pli_fp_) {
        _vcs_pli_fp_(data, reason);
    } else {
        vcsMsgReportNoSource1("PLI-DIFNF", "plitaskDisableFocus");
    }
}
void (*__vcs_pli_dummy_reference_plitaskDisableFocus)(int data, int reason) = plitaskDisableFocus;
#endif /* __VCS_PLI_STUB_plitaskDisableFocus */

/* PLI routine: $db_disablefocus:check */
#ifndef __VCS_PLI_STUB_plicompileDisableFocus
#define __VCS_PLI_STUB_plicompileDisableFocus
extern void plicompileDisableFocus(int data, int reason);
#pragma weak plicompileDisableFocus
void plicompileDisableFocus(int data, int reason)
{
    static int _vcs_pli_stub_initialized_ = 0;
    static void (*_vcs_pli_fp_)(int data, int reason) = NULL;
    if (!_vcs_pli_stub_initialized_) {
        _vcs_pli_stub_initialized_ = 1;
        _vcs_pli_fp_ = (void (*)(int data, int reason)) dlsym(RTLD_NEXT, "plicompileDisableFocus");
        if (_vcs_pli_fp_ == NULL) {
            _vcs_pli_fp_ = (void (*)(int data, int reason)) VCS_dlsymLookup("plicompileDisableFocus");
        }
    }
    if (_vcs_pli_fp_) {
        _vcs_pli_fp_(data, reason);
    }
}
void (*__vcs_pli_dummy_reference_plicompileDisableFocus)(int data, int reason) = plicompileDisableFocus;
#endif /* __VCS_PLI_STUB_plicompileDisableFocus */

/* PLI routine: $db_stopatfocus:call */
#ifndef __VCS_PLI_STUB_plitaskStopAtFocus
#define __VCS_PLI_STUB_plitaskStopAtFocus
extern void plitaskStopAtFocus(int data, int reason);
#pragma weak plitaskStopAtFocus
void plitaskStopAtFocus(int data, int reason)
{
    static int _vcs_pli_stub_initialized_ = 0;
    static void (*_vcs_pli_fp_)(int data, int reason) = NULL;
    if (!_vcs_pli_stub_initialized_) {
        _vcs_pli_stub_initialized_ = 1;
        _vcs_pli_fp_ = (void (*)(int data, int reason)) dlsym(RTLD_NEXT, "plitaskStopAtFocus");
        if (_vcs_pli_fp_ == NULL) {
            _vcs_pli_fp_ = (void (*)(int data, int reason)) VCS_dlsymLookup("plitaskStopAtFocus");
        }
    }
    if (_vcs_pli_fp_) {
        _vcs_pli_fp_(data, reason);
    } else {
        vcsMsgReportNoSource1("PLI-DIFNF", "plitaskStopAtFocus");
    }
}
void (*__vcs_pli_dummy_reference_plitaskStopAtFocus)(int data, int reason) = plitaskStopAtFocus;
#endif /* __VCS_PLI_STUB_plitaskStopAtFocus */

/* PLI routine: $vmc_init:call */
#ifndef __VCS_PLI_STUB_vmc_init
#define __VCS_PLI_STUB_vmc_init
extern void vmc_init(int data, int reason);
#pragma weak vmc_init
void vmc_init(int data, int reason)
{
    static int _vcs_pli_stub_initialized_ = 0;
    static void (*_vcs_pli_fp_)(int data, int reason) = NULL;
    if (!_vcs_pli_stub_initialized_) {
        _vcs_pli_stub_initialized_ = 1;
        _vcs_pli_fp_ = (void (*)(int data, int reason)) dlsym(RTLD_NEXT, "vmc_init");
        if (_vcs_pli_fp_ == NULL) {
            _vcs_pli_fp_ = (void (*)(int data, int reason)) VCS_dlsymLookup("vmc_init");
        }
    }
    if (_vcs_pli_fp_) {
        _vcs_pli_fp_(data, reason);
    } else {
        vcsMsgReportNoSource1("PLI-DIFNF", "vmc_init");
    }
}
void (*__vcs_pli_dummy_reference_vmc_init)(int data, int reason) = vmc_init;
#endif /* __VCS_PLI_STUB_vmc_init */

/* PLI routine: $vmc_init:check */
#ifndef __VCS_PLI_STUB_vmc_init_check
#define __VCS_PLI_STUB_vmc_init_check
extern void vmc_init_check(int data, int reason);
#pragma weak vmc_init_check
void vmc_init_check(int data, int reason)
{
    static int _vcs_pli_stub_initialized_ = 0;
    static void (*_vcs_pli_fp_)(int data, int reason) = NULL;
    if (!_vcs_pli_stub_initialized_) {
        _vcs_pli_stub_initialized_ = 1;
        _vcs_pli_fp_ = (void (*)(int data, int reason)) dlsym(RTLD_NEXT, "vmc_init_check");
        if (_vcs_pli_fp_ == NULL) {
            _vcs_pli_fp_ = (void (*)(int data, int reason)) VCS_dlsymLookup("vmc_init_check");
        }
    }
    if (_vcs_pli_fp_) {
        _vcs_pli_fp_(data, reason);
    }
}
void (*__vcs_pli_dummy_reference_vmc_init_check)(int data, int reason) = vmc_init_check;
#endif /* __VCS_PLI_STUB_vmc_init_check */

/* PLI routine: $vmc_init:misc */
#ifndef __VCS_PLI_STUB_vmc_init_misctf
#define __VCS_PLI_STUB_vmc_init_misctf
extern void vmc_init_misctf(int data, int reason, int iparam );
#pragma weak vmc_init_misctf
void vmc_init_misctf(int data, int reason, int iparam )
{
    static int _vcs_pli_stub_initialized_ = 0;
    static void (*_vcs_pli_fp_)(int data, int reason, int iparam ) = NULL;
    if (!_vcs_pli_stub_initialized_) {
        _vcs_pli_stub_initialized_ = 1;
        _vcs_pli_fp_ = (void (*)(int data, int reason, int iparam )) dlsym(RTLD_NEXT, "vmc_init_misctf");
        if (_vcs_pli_fp_ == NULL) {
            _vcs_pli_fp_ = (void (*)(int data, int reason, int iparam )) VCS_dlsymLookup("vmc_init_misctf");
        }
    }
    if (_vcs_pli_fp_) {
        _vcs_pli_fp_(data, reason, iparam );
    }
}
void (*__vcs_pli_dummy_reference_vmc_init_misctf)(int data, int reason, int iparam ) = vmc_init_misctf;
#endif /* __VCS_PLI_STUB_vmc_init_misctf */

/* PLI routine: $vmc_setup_start:call */
#ifndef __VCS_PLI_STUB_vmc_setup_start
#define __VCS_PLI_STUB_vmc_setup_start
extern void vmc_setup_start(int data, int reason);
#pragma weak vmc_setup_start
void vmc_setup_start(int data, int reason)
{
    static int _vcs_pli_stub_initialized_ = 0;
    static void (*_vcs_pli_fp_)(int data, int reason) = NULL;
    if (!_vcs_pli_stub_initialized_) {
        _vcs_pli_stub_initialized_ = 1;
        _vcs_pli_fp_ = (void (*)(int data, int reason)) dlsym(RTLD_NEXT, "vmc_setup_start");
        if (_vcs_pli_fp_ == NULL) {
            _vcs_pli_fp_ = (void (*)(int data, int reason)) VCS_dlsymLookup("vmc_setup_start");
        }
    }
    if (_vcs_pli_fp_) {
        _vcs_pli_fp_(data, reason);
    } else {
        vcsMsgReportNoSource1("PLI-DIFNF", "vmc_setup_start");
    }
}
void (*__vcs_pli_dummy_reference_vmc_setup_start)(int data, int reason) = vmc_setup_start;
#endif /* __VCS_PLI_STUB_vmc_setup_start */

/* PLI routine: $vmc_setup_start:misc */
#ifndef __VCS_PLI_STUB_vmc_setup_misctf
#define __VCS_PLI_STUB_vmc_setup_misctf
extern void vmc_setup_misctf(int data, int reason, int iparam );
#pragma weak vmc_setup_misctf
void vmc_setup_misctf(int data, int reason, int iparam )
{
    static int _vcs_pli_stub_initialized_ = 0;
    static void (*_vcs_pli_fp_)(int data, int reason, int iparam ) = NULL;
    if (!_vcs_pli_stub_initialized_) {
        _vcs_pli_stub_initialized_ = 1;
        _vcs_pli_fp_ = (void (*)(int data, int reason, int iparam )) dlsym(RTLD_NEXT, "vmc_setup_misctf");
        if (_vcs_pli_fp_ == NULL) {
            _vcs_pli_fp_ = (void (*)(int data, int reason, int iparam )) VCS_dlsymLookup("vmc_setup_misctf");
        }
    }
    if (_vcs_pli_fp_) {
        _vcs_pli_fp_(data, reason, iparam );
    }
}
void (*__vcs_pli_dummy_reference_vmc_setup_misctf)(int data, int reason, int iparam ) = vmc_setup_misctf;
#endif /* __VCS_PLI_STUB_vmc_setup_misctf */

/* PLI routine: $vmc_system_clock:call */
#ifndef __VCS_PLI_STUB_vmc_system_clock
#define __VCS_PLI_STUB_vmc_system_clock
extern void vmc_system_clock(int data, int reason);
#pragma weak vmc_system_clock
void vmc_system_clock(int data, int reason)
{
    static int _vcs_pli_stub_initialized_ = 0;
    static void (*_vcs_pli_fp_)(int data, int reason) = NULL;
    if (!_vcs_pli_stub_initialized_) {
        _vcs_pli_stub_initialized_ = 1;
        _vcs_pli_fp_ = (void (*)(int data, int reason)) dlsym(RTLD_NEXT, "vmc_system_clock");
        if (_vcs_pli_fp_ == NULL) {
            _vcs_pli_fp_ = (void (*)(int data, int reason)) VCS_dlsymLookup("vmc_system_clock");
        }
    }
    if (_vcs_pli_fp_) {
        _vcs_pli_fp_(data, reason);
    } else {
        vcsMsgReportNoSource1("PLI-DIFNF", "vmc_system_clock");
    }
}
void (*__vcs_pli_dummy_reference_vmc_system_clock)(int data, int reason) = vmc_system_clock;
#endif /* __VCS_PLI_STUB_vmc_system_clock */

/* PLI routine: $vmc_system_clock:misc */
#ifndef __VCS_PLI_STUB_vmc_signal_change_misctf
#define __VCS_PLI_STUB_vmc_signal_change_misctf
extern void vmc_signal_change_misctf(int data, int reason, int iparam );
#pragma weak vmc_signal_change_misctf
void vmc_signal_change_misctf(int data, int reason, int iparam )
{
    static int _vcs_pli_stub_initialized_ = 0;
    static void (*_vcs_pli_fp_)(int data, int reason, int iparam ) = NULL;
    if (!_vcs_pli_stub_initialized_) {
        _vcs_pli_stub_initialized_ = 1;
        _vcs_pli_fp_ = (void (*)(int data, int reason, int iparam )) dlsym(RTLD_NEXT, "vmc_signal_change_misctf");
        if (_vcs_pli_fp_ == NULL) {
            _vcs_pli_fp_ = (void (*)(int data, int reason, int iparam )) VCS_dlsymLookup("vmc_signal_change_misctf");
        }
    }
    if (_vcs_pli_fp_) {
        _vcs_pli_fp_(data, reason, iparam );
    }
}
void (*__vcs_pli_dummy_reference_vmc_signal_change_misctf)(int data, int reason, int iparam ) = vmc_signal_change_misctf;
#endif /* __VCS_PLI_STUB_vmc_signal_change_misctf */

/* PLI routine: $vmc_start_program:call */
#ifndef __VCS_PLI_STUB_vmc_start_program
#define __VCS_PLI_STUB_vmc_start_program
extern void vmc_start_program(int data, int reason);
#pragma weak vmc_start_program
void vmc_start_program(int data, int reason)
{
    static int _vcs_pli_stub_initialized_ = 0;
    static void (*_vcs_pli_fp_)(int data, int reason) = NULL;
    if (!_vcs_pli_stub_initialized_) {
        _vcs_pli_stub_initialized_ = 1;
        _vcs_pli_fp_ = (void (*)(int data, int reason)) dlsym(RTLD_NEXT, "vmc_start_program");
        if (_vcs_pli_fp_ == NULL) {
            _vcs_pli_fp_ = (void (*)(int data, int reason)) VCS_dlsymLookup("vmc_start_program");
        }
    }
    if (_vcs_pli_fp_) {
        _vcs_pli_fp_(data, reason);
    } else {
        vcsMsgReportNoSource1("PLI-DIFNF", "vmc_start_program");
    }
}
void (*__vcs_pli_dummy_reference_vmc_start_program)(int data, int reason) = vmc_start_program;
#endif /* __VCS_PLI_STUB_vmc_start_program */

/* PLI routine: $vmc_add_variable:call */
#ifndef __VCS_PLI_STUB_vmc_add_variable
#define __VCS_PLI_STUB_vmc_add_variable
extern void vmc_add_variable(int data, int reason);
#pragma weak vmc_add_variable
void vmc_add_variable(int data, int reason)
{
    static int _vcs_pli_stub_initialized_ = 0;
    static void (*_vcs_pli_fp_)(int data, int reason) = NULL;
    if (!_vcs_pli_stub_initialized_) {
        _vcs_pli_stub_initialized_ = 1;
        _vcs_pli_fp_ = (void (*)(int data, int reason)) dlsym(RTLD_NEXT, "vmc_add_variable");
        if (_vcs_pli_fp_ == NULL) {
            _vcs_pli_fp_ = (void (*)(int data, int reason)) VCS_dlsymLookup("vmc_add_variable");
        }
    }
    if (_vcs_pli_fp_) {
        _vcs_pli_fp_(data, reason);
    } else {
        vcsMsgReportNoSource1("PLI-DIFNF", "vmc_add_variable");
    }
}
void (*__vcs_pli_dummy_reference_vmc_add_variable)(int data, int reason) = vmc_add_variable;
#endif /* __VCS_PLI_STUB_vmc_add_variable */

/* PLI routine: $vmc_add_variable_array:call */
#ifndef __VCS_PLI_STUB_vmc_add_variable_array
#define __VCS_PLI_STUB_vmc_add_variable_array
extern void vmc_add_variable_array(int data, int reason);
#pragma weak vmc_add_variable_array
void vmc_add_variable_array(int data, int reason)
{
    static int _vcs_pli_stub_initialized_ = 0;
    static void (*_vcs_pli_fp_)(int data, int reason) = NULL;
    if (!_vcs_pli_stub_initialized_) {
        _vcs_pli_stub_initialized_ = 1;
        _vcs_pli_fp_ = (void (*)(int data, int reason)) dlsym(RTLD_NEXT, "vmc_add_variable_array");
        if (_vcs_pli_fp_ == NULL) {
            _vcs_pli_fp_ = (void (*)(int data, int reason)) VCS_dlsymLookup("vmc_add_variable_array");
        }
    }
    if (_vcs_pli_fp_) {
        _vcs_pli_fp_(data, reason);
    } else {
        vcsMsgReportNoSource1("PLI-DIFNF", "vmc_add_variable_array");
    }
}
void (*__vcs_pli_dummy_reference_vmc_add_variable_array)(int data, int reason) = vmc_add_variable_array;
#endif /* __VCS_PLI_STUB_vmc_add_variable_array */

/* PLI routine: $vmc_add_variable_array_elmt:call */
#ifndef __VCS_PLI_STUB_vmc_add_variable_array_elmt
#define __VCS_PLI_STUB_vmc_add_variable_array_elmt
extern void vmc_add_variable_array_elmt(int data, int reason);
#pragma weak vmc_add_variable_array_elmt
void vmc_add_variable_array_elmt(int data, int reason)
{
    static int _vcs_pli_stub_initialized_ = 0;
    static void (*_vcs_pli_fp_)(int data, int reason) = NULL;
    if (!_vcs_pli_stub_initialized_) {
        _vcs_pli_stub_initialized_ = 1;
        _vcs_pli_fp_ = (void (*)(int data, int reason)) dlsym(RTLD_NEXT, "vmc_add_variable_array_elmt");
        if (_vcs_pli_fp_ == NULL) {
            _vcs_pli_fp_ = (void (*)(int data, int reason)) VCS_dlsymLookup("vmc_add_variable_array_elmt");
        }
    }
    if (_vcs_pli_fp_) {
        _vcs_pli_fp_(data, reason);
    } else {
        vcsMsgReportNoSource1("PLI-DIFNF", "vmc_add_variable_array_elmt");
    }
}
void (*__vcs_pli_dummy_reference_vmc_add_variable_array_elmt)(int data, int reason) = vmc_add_variable_array_elmt;
#endif /* __VCS_PLI_STUB_vmc_add_variable_array_elmt */

/* PLI routine: $vmc_add_interface_signal:call */
#ifndef __VCS_PLI_STUB_vmc_add_interface_signal
#define __VCS_PLI_STUB_vmc_add_interface_signal
extern void vmc_add_interface_signal(int data, int reason);
#pragma weak vmc_add_interface_signal
void vmc_add_interface_signal(int data, int reason)
{
    static int _vcs_pli_stub_initialized_ = 0;
    static void (*_vcs_pli_fp_)(int data, int reason) = NULL;
    if (!_vcs_pli_stub_initialized_) {
        _vcs_pli_stub_initialized_ = 1;
        _vcs_pli_fp_ = (void (*)(int data, int reason)) dlsym(RTLD_NEXT, "vmc_add_interface_signal");
        if (_vcs_pli_fp_ == NULL) {
            _vcs_pli_fp_ = (void (*)(int data, int reason)) VCS_dlsymLookup("vmc_add_interface_signal");
        }
    }
    if (_vcs_pli_fp_) {
        _vcs_pli_fp_(data, reason);
    } else {
        vcsMsgReportNoSource1("PLI-DIFNF", "vmc_add_interface_signal");
    }
}
void (*__vcs_pli_dummy_reference_vmc_add_interface_signal)(int data, int reason) = vmc_add_interface_signal;
#endif /* __VCS_PLI_STUB_vmc_add_interface_signal */

/* PLI routine: $vmc_add_verilog_task:call */
#ifndef __VCS_PLI_STUB_vmc_add_verilog_task
#define __VCS_PLI_STUB_vmc_add_verilog_task
extern void vmc_add_verilog_task(int data, int reason);
#pragma weak vmc_add_verilog_task
void vmc_add_verilog_task(int data, int reason)
{
    static int _vcs_pli_stub_initialized_ = 0;
    static void (*_vcs_pli_fp_)(int data, int reason) = NULL;
    if (!_vcs_pli_stub_initialized_) {
        _vcs_pli_stub_initialized_ = 1;
        _vcs_pli_fp_ = (void (*)(int data, int reason)) dlsym(RTLD_NEXT, "vmc_add_verilog_task");
        if (_vcs_pli_fp_ == NULL) {
            _vcs_pli_fp_ = (void (*)(int data, int reason)) VCS_dlsymLookup("vmc_add_verilog_task");
        }
    }
    if (_vcs_pli_fp_) {
        _vcs_pli_fp_(data, reason);
    } else {
        vcsMsgReportNoSource1("PLI-DIFNF", "vmc_add_verilog_task");
    }
}
void (*__vcs_pli_dummy_reference_vmc_add_verilog_task)(int data, int reason) = vmc_add_verilog_task;
#endif /* __VCS_PLI_STUB_vmc_add_verilog_task */

/* PLI routine: $vmc_add_verilog_task:misc */
#ifndef __VCS_PLI_STUB_vmc_done_task_misctf
#define __VCS_PLI_STUB_vmc_done_task_misctf
extern void vmc_done_task_misctf(int data, int reason, int iparam );
#pragma weak vmc_done_task_misctf
void vmc_done_task_misctf(int data, int reason, int iparam )
{
    static int _vcs_pli_stub_initialized_ = 0;
    static void (*_vcs_pli_fp_)(int data, int reason, int iparam ) = NULL;
    if (!_vcs_pli_stub_initialized_) {
        _vcs_pli_stub_initialized_ = 1;
        _vcs_pli_fp_ = (void (*)(int data, int reason, int iparam )) dlsym(RTLD_NEXT, "vmc_done_task_misctf");
        if (_vcs_pli_fp_ == NULL) {
            _vcs_pli_fp_ = (void (*)(int data, int reason, int iparam )) VCS_dlsymLookup("vmc_done_task_misctf");
        }
    }
    if (_vcs_pli_fp_) {
        _vcs_pli_fp_(data, reason, iparam );
    }
}
void (*__vcs_pli_dummy_reference_vmc_done_task_misctf)(int data, int reason, int iparam ) = vmc_done_task_misctf;
#endif /* __VCS_PLI_STUB_vmc_done_task_misctf */

/* PLI routine: $vmc_add_vera_task:call */
#ifndef __VCS_PLI_STUB_vmc_add_vera_task
#define __VCS_PLI_STUB_vmc_add_vera_task
extern void vmc_add_vera_task(int data, int reason);
#pragma weak vmc_add_vera_task
void vmc_add_vera_task(int data, int reason)
{
    static int _vcs_pli_stub_initialized_ = 0;
    static void (*_vcs_pli_fp_)(int data, int reason) = NULL;
    if (!_vcs_pli_stub_initialized_) {
        _vcs_pli_stub_initialized_ = 1;
        _vcs_pli_fp_ = (void (*)(int data, int reason)) dlsym(RTLD_NEXT, "vmc_add_vera_task");
        if (_vcs_pli_fp_ == NULL) {
            _vcs_pli_fp_ = (void (*)(int data, int reason)) VCS_dlsymLookup("vmc_add_vera_task");
        }
    }
    if (_vcs_pli_fp_) {
        _vcs_pli_fp_(data, reason);
    } else {
        vcsMsgReportNoSource1("PLI-DIFNF", "vmc_add_vera_task");
    }
}
void (*__vcs_pli_dummy_reference_vmc_add_vera_task)(int data, int reason) = vmc_add_vera_task;
#endif /* __VCS_PLI_STUB_vmc_add_vera_task */

/* PLI routine: $vmc_vera_task_call:call */
#ifndef __VCS_PLI_STUB_vmc_vera_task_call
#define __VCS_PLI_STUB_vmc_vera_task_call
extern void vmc_vera_task_call(int data, int reason);
#pragma weak vmc_vera_task_call
void vmc_vera_task_call(int data, int reason)
{
    static int _vcs_pli_stub_initialized_ = 0;
    static void (*_vcs_pli_fp_)(int data, int reason) = NULL;
    if (!_vcs_pli_stub_initialized_) {
        _vcs_pli_stub_initialized_ = 1;
        _vcs_pli_fp_ = (void (*)(int data, int reason)) dlsym(RTLD_NEXT, "vmc_vera_task_call");
        if (_vcs_pli_fp_ == NULL) {
            _vcs_pli_fp_ = (void (*)(int data, int reason)) VCS_dlsymLookup("vmc_vera_task_call");
        }
    }
    if (_vcs_pli_fp_) {
        _vcs_pli_fp_(data, reason);
    } else {
        vcsMsgReportNoSource1("PLI-DIFNF", "vmc_vera_task_call");
    }
}
void (*__vcs_pli_dummy_reference_vmc_vera_task_call)(int data, int reason) = vmc_vera_task_call;
#endif /* __VCS_PLI_STUB_vmc_vera_task_call */

/* PLI routine: $vera_load:call */
#ifndef __VCS_PLI_STUB_vmc_vera_load
#define __VCS_PLI_STUB_vmc_vera_load
extern void vmc_vera_load(int data, int reason);
#pragma weak vmc_vera_load
void vmc_vera_load(int data, int reason)
{
    static int _vcs_pli_stub_initialized_ = 0;
    static void (*_vcs_pli_fp_)(int data, int reason) = NULL;
    if (!_vcs_pli_stub_initialized_) {
        _vcs_pli_stub_initialized_ = 1;
        _vcs_pli_fp_ = (void (*)(int data, int reason)) dlsym(RTLD_NEXT, "vmc_vera_load");
        if (_vcs_pli_fp_ == NULL) {
            _vcs_pli_fp_ = (void (*)(int data, int reason)) VCS_dlsymLookup("vmc_vera_load");
        }
    }
    if (_vcs_pli_fp_) {
        _vcs_pli_fp_(data, reason);
    } else {
        vcsMsgReportNoSource1("PLI-DIFNF", "vmc_vera_load");
    }
}
void (*__vcs_pli_dummy_reference_vmc_vera_load)(int data, int reason) = vmc_vera_load;
#endif /* __VCS_PLI_STUB_vmc_vera_load */

/* PLI routine: $vera_mload:call */
#ifndef __VCS_PLI_STUB_vmc_vera_mload
#define __VCS_PLI_STUB_vmc_vera_mload
extern void vmc_vera_mload(int data, int reason);
#pragma weak vmc_vera_mload
void vmc_vera_mload(int data, int reason)
{
    static int _vcs_pli_stub_initialized_ = 0;
    static void (*_vcs_pli_fp_)(int data, int reason) = NULL;
    if (!_vcs_pli_stub_initialized_) {
        _vcs_pli_stub_initialized_ = 1;
        _vcs_pli_fp_ = (void (*)(int data, int reason)) dlsym(RTLD_NEXT, "vmc_vera_mload");
        if (_vcs_pli_fp_ == NULL) {
            _vcs_pli_fp_ = (void (*)(int data, int reason)) VCS_dlsymLookup("vmc_vera_mload");
        }
    }
    if (_vcs_pli_fp_) {
        _vcs_pli_fp_(data, reason);
    } else {
        vcsMsgReportNoSource1("PLI-DIFNF", "vmc_vera_mload");
    }
}
void (*__vcs_pli_dummy_reference_vmc_vera_mload)(int data, int reason) = vmc_vera_mload;
#endif /* __VCS_PLI_STUB_vmc_vera_mload */

/* PLI routine: $vera_pload:call */
#ifndef __VCS_PLI_STUB_vmc_vera_pload
#define __VCS_PLI_STUB_vmc_vera_pload
extern void vmc_vera_pload(int data, int reason);
#pragma weak vmc_vera_pload
void vmc_vera_pload(int data, int reason)
{
    static int _vcs_pli_stub_initialized_ = 0;
    static void (*_vcs_pli_fp_)(int data, int reason) = NULL;
    if (!_vcs_pli_stub_initialized_) {
        _vcs_pli_stub_initialized_ = 1;
        _vcs_pli_fp_ = (void (*)(int data, int reason)) dlsym(RTLD_NEXT, "vmc_vera_pload");
        if (_vcs_pli_fp_ == NULL) {
            _vcs_pli_fp_ = (void (*)(int data, int reason)) VCS_dlsymLookup("vmc_vera_pload");
        }
    }
    if (_vcs_pli_fp_) {
        _vcs_pli_fp_(data, reason);
    } else {
        vcsMsgReportNoSource1("PLI-DIFNF", "vmc_vera_pload");
    }
}
void (*__vcs_pli_dummy_reference_vmc_vera_pload)(int data, int reason) = vmc_vera_pload;
#endif /* __VCS_PLI_STUB_vmc_vera_pload */

/* PLI routine: $vera_debugger:call */
#ifndef __VCS_PLI_STUB_vmc_vera_debugger
#define __VCS_PLI_STUB_vmc_vera_debugger
extern void vmc_vera_debugger(int data, int reason);
#pragma weak vmc_vera_debugger
void vmc_vera_debugger(int data, int reason)
{
    static int _vcs_pli_stub_initialized_ = 0;
    static void (*_vcs_pli_fp_)(int data, int reason) = NULL;
    if (!_vcs_pli_stub_initialized_) {
        _vcs_pli_stub_initialized_ = 1;
        _vcs_pli_fp_ = (void (*)(int data, int reason)) dlsym(RTLD_NEXT, "vmc_vera_debugger");
        if (_vcs_pli_fp_ == NULL) {
            _vcs_pli_fp_ = (void (*)(int data, int reason)) VCS_dlsymLookup("vmc_vera_debugger");
        }
    }
    if (_vcs_pli_fp_) {
        _vcs_pli_fp_(data, reason);
    } else {
        vcsMsgReportNoSource1("PLI-DIFNF", "vmc_vera_debugger");
    }
}
void (*__vcs_pli_dummy_reference_vmc_vera_debugger)(int data, int reason) = vmc_vera_debugger;
#endif /* __VCS_PLI_STUB_vmc_vera_debugger */

/* PLI routine: $vera_add_parameter:call */
#ifndef __VCS_PLI_STUB_vmc_vera_add_parameter
#define __VCS_PLI_STUB_vmc_vera_add_parameter
extern void vmc_vera_add_parameter(int data, int reason);
#pragma weak vmc_vera_add_parameter
void vmc_vera_add_parameter(int data, int reason)
{
    static int _vcs_pli_stub_initialized_ = 0;
    static void (*_vcs_pli_fp_)(int data, int reason) = NULL;
    if (!_vcs_pli_stub_initialized_) {
        _vcs_pli_stub_initialized_ = 1;
        _vcs_pli_fp_ = (void (*)(int data, int reason)) dlsym(RTLD_NEXT, "vmc_vera_add_parameter");
        if (_vcs_pli_fp_ == NULL) {
            _vcs_pli_fp_ = (void (*)(int data, int reason)) VCS_dlsymLookup("vmc_vera_add_parameter");
        }
    }
    if (_vcs_pli_fp_) {
        _vcs_pli_fp_(data, reason);
    } else {
        vcsMsgReportNoSource1("PLI-DIFNF", "vmc_vera_add_parameter");
    }
}
void (*__vcs_pli_dummy_reference_vmc_vera_add_parameter)(int data, int reason) = vmc_vera_add_parameter;
#endif /* __VCS_PLI_STUB_vmc_vera_add_parameter */

/* PLI routine: $vmc_get_export_index:call */
#ifndef __VCS_PLI_STUB_vmc_get_export_index
#define __VCS_PLI_STUB_vmc_get_export_index
extern void vmc_get_export_index(int data, int reason);
#pragma weak vmc_get_export_index
void vmc_get_export_index(int data, int reason)
{
    static int _vcs_pli_stub_initialized_ = 0;
    static void (*_vcs_pli_fp_)(int data, int reason) = NULL;
    if (!_vcs_pli_stub_initialized_) {
        _vcs_pli_stub_initialized_ = 1;
        _vcs_pli_fp_ = (void (*)(int data, int reason)) dlsym(RTLD_NEXT, "vmc_get_export_index");
        if (_vcs_pli_fp_ == NULL) {
            _vcs_pli_fp_ = (void (*)(int data, int reason)) VCS_dlsymLookup("vmc_get_export_index");
        }
    }
    if (_vcs_pli_fp_) {
        _vcs_pli_fp_(data, reason);
    } else {
        vcsMsgReportNoSource1("PLI-DIFNF", "vmc_get_export_index");
    }
}
void (*__vcs_pli_dummy_reference_vmc_get_export_index)(int data, int reason) = vmc_get_export_index;
#endif /* __VCS_PLI_STUB_vmc_get_export_index */

/* PLI routine: $vmc_vera_task_call_end:call */
#ifndef __VCS_PLI_STUB_vmc_vera_task_call_end
#define __VCS_PLI_STUB_vmc_vera_task_call_end
extern void vmc_vera_task_call_end(int data, int reason);
#pragma weak vmc_vera_task_call_end
void vmc_vera_task_call_end(int data, int reason)
{
    static int _vcs_pli_stub_initialized_ = 0;
    static void (*_vcs_pli_fp_)(int data, int reason) = NULL;
    if (!_vcs_pli_stub_initialized_) {
        _vcs_pli_stub_initialized_ = 1;
        _vcs_pli_fp_ = (void (*)(int data, int reason)) dlsym(RTLD_NEXT, "vmc_vera_task_call_end");
        if (_vcs_pli_fp_ == NULL) {
            _vcs_pli_fp_ = (void (*)(int data, int reason)) VCS_dlsymLookup("vmc_vera_task_call_end");
        }
    }
    if (_vcs_pli_fp_) {
        _vcs_pli_fp_(data, reason);
    } else {
        vcsMsgReportNoSource1("PLI-DIFNF", "vmc_vera_task_call_end");
    }
}
void (*__vcs_pli_dummy_reference_vmc_vera_task_call_end)(int data, int reason) = vmc_vera_task_call_end;
#endif /* __VCS_PLI_STUB_vmc_vera_task_call_end */

#ifdef __cplusplus
}
#endif
