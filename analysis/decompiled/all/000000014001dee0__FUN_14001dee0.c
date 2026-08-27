// Function: FUN_14001dee0
// Addr: 14001dee0
// Size: 129 bytes


/* WARNING: Removing unreachable block (ram,0x00014001df3f) */

void FUN_14001dee0(void)

{
  char cVar1;
  longlong local_38;
  
  cVar1 = FUN_14003db10();
  if (cVar1 != '\0') {
    FUN_14003d930(DAT_1404df54c);
    switch(IMAGE_DOS_HEADER_140000000.e_magic + switchD_14001df18::switchdataD_14001df64) {
    case (char *)0x14001df1a:
      if (local_38 != 0) {
        FUN_140088e40(local_38);
        thunk_FUN_14028af80(local_38,0x10);
        return;
      }
    }
  }
  return;
}

