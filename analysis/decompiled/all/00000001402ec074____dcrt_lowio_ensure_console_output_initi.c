// Function: __dcrt_lowio_ensure_console_output_initialized
// Addr: 1402ec074
// Size: 82 bytes


/* Library Function - Single Match
    __dcrt_lowio_ensure_console_output_initialized
   
   Libraries: Visual Studio 2017 Debug, Visual Studio 2017 Release, Visual Studio 2019 Debug, Visual
   Studio 2019 Release */

bool __dcrt_lowio_ensure_console_output_initialized(void)

{
  if (DAT_1404dd040 == -2) {
    DAT_1404dd040 = (*DAT_140426700)(L"CONOUT$",0x40000000,3,0,3,0,0);
  }
  return DAT_1404dd040 != -1;
}

