// Function: FUN_1402c75a0
// Addr: 1402c75a0
// Size: 126 bytes


void FUN_1402c75a0(longlong *param_1,undefined8 param_2,int param_3,int *param_4)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  if (param_3 != 0) {
    puVar1 = (undefined8 *)*param_1;
    if (puVar1[2] != puVar1[1]) {
      uVar2 = puVar1[1] - puVar1[2];
      uVar3 = (longlong)param_3;
      if (uVar2 < (ulonglong)(longlong)param_3) {
        uVar3 = uVar2;
      }
                    /* WARNING: Subroutine does not return */
      FUN_1404211c0(*puVar1,param_2,uVar3 * 2);
    }
    if (*(char *)(puVar1 + 3) == '\0') {
      *param_4 = -1;
    }
    else {
      *param_4 = *param_4 + param_3;
    }
  }
  return;
}

