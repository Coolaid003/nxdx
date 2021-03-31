#ifndef _NTSTATUS_
#define _NTSTATUS_

#include "xboxdef.h"

#define STATUS_SUCCESS ((NTSTATUS)0x00000000L)
#define STATUS_WAIT_0 ((NTSTATUS)0x00000000L)
#define STATUS_ABANDONED_WAIT_0 ((NTSTATUS)0x00000080L)
#define STATUS_USER_APC ((NTSTATUS)0x000000C0L)
#define STATUS_ALERTED ((NTSTATUS)0x00000101L)
#define STATUS_TIMEOUT ((NTSTATUS)0x00000102L)
#define STATUS_PENDING ((NTSTATUS)0x00000103L)
#define STATUS_OBJECT_NAME_EXISTS ((NTSTATUS)0x40000000L)
#define STATUS_NO_YIELD_PERFORMED ((NTSTATUS)0x40000024L)
#define STATUS_SEGMENT_NOTIFICATION ((NTSTATUS)0x40000005L)
#define STATUS_GUARD_PAGE_VIOLATION ((NTSTATUS)0x80000001L)
#define STATUS_DATATYPE_MISALIGNMENT ((NTSTATUS)0x80000002L)
#define STATUS_BREAKPOINT ((NTSTATUS)0x80000003L)
#define STATUS_SINGLE_STEP ((NTSTATUS)0x80000004L)
#define STATUS_BUFFER_OVERFLOW ((NTSTATUS)0x80000005L)
#define STATUS_NO_MORE_FILES ((NTSTATUS)0x80000006L)
#define STATUS_NO_MORE_ENTRIES ((NTSTATUS)0x8000001AL)
#define STATUS_UNSUCCESSFUL ((NTSTATUS)0xC0000001L)
#define STATUS_ACCESS_VIOLATION ((NTSTATUS)0xC0000005L)
#define STATUS_IN_PAGE_ERROR ((NTSTATUS)0xC0000006L)
#define STATUS_INVALID_HANDLE ((NTSTATUS)0xC0000008L)
#define STATUS_INVALID_PARAMETER ((NTSTATUS)0xC000000DL)
#define STATUS_END_OF_FILE ((NTSTATUS)0xC0000011L)
#define STATUS_NO_MEMORY ((NTSTATUS)0xC0000017L)
#define STATUS_ILLEGAL_INSTRUCTION ((NTSTATUS)0xC000001DL)
#define STATUS_ALREADY_COMMITTED ((NTSTATUS)0xC0000021L)
#define STATUS_ACCESS_DENIED ((NTSTATUS)0xC0000022L)
#define STATUS_BUFFER_TOO_SMALL ((NTSTATUS)0xC0000023L)
#define STATUS_OBJECT_TYPE_MISMATCH ((NTSTATUS)0xC0000024L)
#define STATUS_NONCONTINUABLE_EXCEPTION ((NTSTATUS)0xC0000025L)
#define STATUS_INVALID_DISPOSITION ((NTSTATUS)0xC0000026L)
#define STATUS_OBJECT_NAME_INVALID ((NTSTATUS)0xC0000033L)
#define STATUS_OBJECT_NAME_NOT_FOUND ((NTSTATUS)0xC0000034L)
#define STATUS_OBJECT_NAME_COLLISION ((NTSTATUS)0xC0000035L)
#define STATUS_OBJECT_PATH_NOT_FOUND ((NTSTATUS)0xC000003AL)
#define STATUS_SEMAPHORE_LIMIT_EXCEEDED ((NTSTATUS)0xC0000047L)
#define STATUS_ARRAY_BOUNDS_EXCEEDED ((NTSTATUS)0xC000008CL)
#define STATUS_FLOAT_DENORMAL_OPERAND ((NTSTATUS)0xC000008DL)
#define STATUS_FLOAT_DIVIDE_BY_ZERO ((NTSTATUS)0xC000008EL)
#define STATUS_FLOAT_INEXACT_RESULT ((NTSTATUS)0xC000008FL)
#define STATUS_FLOAT_INVALID_OPERATION ((NTSTATUS)0xC0000090L)
#define STATUS_FLOAT_OVERFLOW ((NTSTATUS)0xC0000091L)
#define STATUS_FLOAT_STACK_CHECK ((NTSTATUS)0xC0000092L)
#define STATUS_FLOAT_UNDERFLOW ((NTSTATUS)0xC0000093L)
#define STATUS_INTEGER_DIVIDE_BY_ZERO ((NTSTATUS)0xC0000094L)
#define STATUS_INTEGER_OVERFLOW ((NTSTATUS)0xC0000095L)
#define STATUS_PRIVILEGED_INSTRUCTION ((NTSTATUS)0xC0000096L)
#define STATUS_DATA_OVERRUN ((NTSTATUS)0xC000003CL)
#define STATUS_INVALID_IMAGE_FORMAT ((NTSTATUS)0xC000007BL)
#define STATUS_INSUFFICIENT_RESOURCES ((NTSTATUS)0xC000009AL)
#define STATUS_FILE_IS_A_DIRECTORY ((NTSTATUS)0xC00000BAL)
#define STATUS_INVALID_PARAMETER_1 ((NTSTATUS)0xC00000EFL)
#define STATUS_INVALID_PARAMETER_2 ((NTSTATUS)0xC00000F0L)
#define STATUS_INVALID_PARAMETER_3 ((NTSTATUS)0xC00000F1L)
#define STATUS_INVALID_PARAMETER_4 ((NTSTATUS)0xC00000F2L)
#define STATUS_INVALID_PARAMETER_5 ((NTSTATUS)0xC00000F3L)
#define STATUS_INVALID_PARAMETER_6 ((NTSTATUS)0xC00000F4L)
#define STATUS_INVALID_PARAMETER_7 ((NTSTATUS)0xC00000F5L)
#define STATUS_INVALID_PARAMETER_8 ((NTSTATUS)0xC00000F6L)
#define STATUS_INVALID_PARAMETER_9 ((NTSTATUS)0xC00000F7L)
#define STATUS_INVALID_PARAMETER_10 ((NTSTATUS)0xC00000F8L)
#define STATUS_INVALID_PARAMETER_11 ((NTSTATUS)0xC00000F9L)
#define STATUS_INVALID_PARAMETER_12 ((NTSTATUS)0xC00000FAL)
#define STATUS_STACK_OVERFLOW ((NTSTATUS)0xC00000FDL)
#define STATUS_CONTROL_C_EXIT ((NTSTATUS)0xC000013AL)
#define STATUS_TOO_MANY_SECRETS ((NTSTATUS)0xC0000156L)
#define STATUS_HANDLE_NOT_CLOSABLE ((NTSTATUS)0xC0000235L)
#define STATUS_IMAGE_GAME_REGION_VIOLATION ((NTSTATUS)0xC0050001L)
#define STATUS_IMAGE_MEDIA_TYPE_VIOLATION ((NTSTATUS)0xC0050002L)

#endif

