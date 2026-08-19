// Function: FUN_1402ccd58
// Addr: 1402ccd58
// Size: 51 bytes


ulonglong FUN_1402ccd58(undefined8 *param_1)

{
  int *piVar1;
  byte bVar2;
  ulonglong uVar3;
  
  if (param_1 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_1402cb004();
  }
  piVar1 = (int *)(param_1 + 2);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 < 0) {
    uVar3 = FUN_1402e1464();
    return uVar3;
  }
  bVar2 = *(byte *)*param_1;
  *param_1 = (byte *)*param_1 + 1;
  return (ulonglong)bVar2;
}

