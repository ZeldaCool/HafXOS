#include "efi.h"

EFI_STATUS efi_main(EFI_HANDLE ImageHandle, EFI_SYSTEM_TABLE* SystemTable)
{
	(void)ImageHandle;
	EFI_STATUS Status;

	Status = SystemTable->ConOut->OutputString(SystemTable->ConOut, L"Hello World\n\r" MESSAGE);
	if(EFI_ERROR(Status))
		return Status;

  return Status;  
}
