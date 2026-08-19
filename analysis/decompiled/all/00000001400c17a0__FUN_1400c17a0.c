// Function: FUN_1400c17a0
// Addr: 1400c17a0
// Size: 180 bytes


void FUN_1400c17a0(undefined8 *param_1)

{
  int iVar1;
  code *pcVar2;
  
  *param_1 = &PTR_DAT_1404860b0;
  iVar1 = func_0x000140290e50(param_1 + 0x27);
  if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140290e00(5);
  }
  if (*(int *)((longlong)param_1 + 0x184) != 0x7fffffff) {
    param_1[0x167] = 0;
    if (param_1[0x161] != 0) {
      pcVar2 = (code *)(*DAT_140426730)(param_1[0x161],"Shutdown");
      if (pcVar2 != (code *)0x0) {
        (*pcVar2)();
      }
      (*DAT_140426728)(param_1[0x161]);
    }
    param_1[0x161] = 0;
    FUN_140290f70(param_1 + 0x27);
                    /* WARNING: Subroutine does not return */
    FUN_140017310(param_1 + 0x16d);
  }
  *(undefined4 *)((longlong)param_1 + 0x184) = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
  FUN_140290e00(6);
}

