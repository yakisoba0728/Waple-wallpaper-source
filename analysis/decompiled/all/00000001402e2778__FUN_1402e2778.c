// Function: FUN_1402e2778
// Addr: 1402e2778
// Size: 121 bytes


undefined8 FUN_1402e2778(longlong param_1,undefined8 param_2,ulonglong param_3)

{
  longlong lVar1;
  ulonglong uVar3;
  longlong lVar2;
  
  lVar1 = -1;
  do {
    lVar2 = lVar1;
    lVar1 = lVar2 + 1;
  } while (*(char *)(param_1 + lVar1) != '\0');
  uVar3 = lVar2 + 2;
  if (~param_3 < uVar3) {
    return 0xc;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1402dd8b0(param_3 + 1 + uVar3);
}

