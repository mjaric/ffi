#ifndef _STRUCT_H
#define	_STRUCT_H

#include "AbstractMemory.h"

#ifdef	__cplusplus
extern "C" {
#endif

    extern void rb_FFI_Struct_Init(void);

    struct StructLayout;
    typedef struct Struct {
        struct StructLayout* layout;
        AbstractMemory* pointer;
        VALUE rbLayout;
        VALUE rbPointer;
    } Struct;

    extern VALUE rb_FFI_Struct_class;
#ifdef	__cplusplus
}
#endif

#endif	/* _STRUCT_H */

