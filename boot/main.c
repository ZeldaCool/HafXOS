#include <stdint.h>
#include <stdbool.h>

#ifndef EFI_H
#define EFI_H

typedef void* EFI_PVOID;
typedef void* EFI_HANDLE;

#ifdef __i386__
#define MESSAGE L"i386\r\n"
typedef uint32_t UINTN;
#endif

#ifdef __amd64__
#define MESSAGE L"x86_64\r\n"
typedef uint64_t UINTN;
#endif

typedef UINTN EFI_STATUS;

#define EFIERR(a) (a | ~(((EFI_STATUS)-1) >> 1))
#define EFI_ERROR(a) (a & ~(((EFI_STATUS)-1) >> 1))

#define EFI_NOT_READY EFIERR(6)

typedef struct {
  uint64_t Signature;
  uint32_t Revision;
  uint32_t HeaderSize;
  uint32_t CRC32;
  uint32_t Reserved;
} EFI_TABLE_HEADER;

typedef struct {
  uint32_t MaxMode;
  uint32_t Mode;
  uint32_t Attribute;
  uint32_t CursorColumn;
  uint32_t CursorRow;
  uint8_t CursorVisible;
} SIMPLE_TEXT_OUTPUT_MODE;

#endif


