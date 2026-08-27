// Function: FUN_140318460
// Addr: 140318460
// Size: 418 bytes


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140318460(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  int iVar5;
  int *piVar6;
  undefined1 auStack_1f8 [32];
  longlong local_1d8;
  int *local_1d0;
  int local_1c8;
  int local_1c4 [3];
  undefined8 local_1b8 [48];
  ulonglong local_38;
  
  local_38 = DAT_1404dc040 ^ (ulonglong)auStack_1f8;
  uVar1 = *(undefined8 *)(param_1 + 0x98);
  piVar6 = *(int **)(param_1 + 0x2e0);
  local_1c4[0] = 0;
  (*(code *)param_2[0xf])(param_2,local_1b8,0x10,&local_1c8);
  if (local_1c8 < 0) {
    *(undefined4 *)(param_2 + 3) = 0xa2;
    return;
  }
  if ((local_1c8 == 0) || (0x10 < local_1c8)) {
LAB_1403184d7:
    *(undefined4 *)(param_2 + 3) = 3;
    return;
  }
  if ((piVar6 == (int *)0x0) || (*piVar6 == 0)) {
    local_1c4[0] = FUN_14031ad50(param_1,local_1c8,0);
    if (local_1c4[0] != 0) goto LAB_1403185fa;
    piVar6 = *(int **)(param_1 + 0x2e0);
  }
  else if (*piVar6 != local_1c8) goto LAB_1403184d7;
  lVar4 = *(longlong *)(piVar6 + 0x42);
  if (lVar4 == 0) {
    local_1d0 = local_1c4;
    local_1d8 = lVar4;
    lVar4 = FUN_1402f7ff0(uVar1,4,0,local_1c8 * 2);
    *(longlong *)(piVar6 + 0x42) = lVar4;
    if (local_1c4[0] != 0) {
LAB_1403185fa:
      *(int *)(param_2 + 3) = local_1c4[0];
      return;
    }
  }
  iVar5 = 0;
  *(longlong *)(piVar6 + 0x44) = lVar4 + (longlong)local_1c8 * 4;
  uVar1 = *param_2;
  uVar2 = param_2[2];
  if (0 < local_1c8) {
    do {
      lVar4 = (longlong)iVar5;
      *param_2 = local_1b8[lVar4 * 3];
      param_2[2] = local_1b8[lVar4 * 3 + 1];
      uVar3 = (*(code *)param_2[10])(param_2,0);
      iVar5 = iVar5 + 1;
      *(undefined4 *)(*(longlong *)(piVar6 + 0x42) + lVar4 * 4) = uVar3;
      *(undefined4 *)(*(longlong *)(piVar6 + 0x44) + lVar4 * 4) = uVar3;
    } while (iVar5 < local_1c8);
  }
  *param_2 = uVar1;
  param_2[2] = uVar2;
  *(int *)(param_2 + 3) = local_1c4[0];
  return;
}

