// Function: FUN_1400e11d0
// Addr: 1400e11d0
// Size: 176 bytes


void FUN_1400e11d0(longlong param_1,uint param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  puVar3 = *(undefined8 **)(param_1 + 0x18);
  lVar1 = *(longlong *)(param_1 + 0x10);
  uVar4 = (ulonglong)param_2;
  lVar2 = ((longlong)puVar3 - lVar1) / 6 + ((longlong)puVar3 - lVar1 >> 0x3f);
  uVar5 = (lVar2 >> 2) - (lVar2 >> 0x3f);
  if (uVar4 < uVar5) {
    *(ulonglong *)(param_1 + 0x18) = lVar1 + uVar4 * 0x18;
    return;
  }
  if (uVar5 < uVar4) {
    if ((ulonglong)((*(longlong *)(param_1 + 0x20) - lVar1) / 0x18) < uVar4) {
      FUN_1400e72e0(param_1 + 0x10,uVar4);
      return;
    }
    for (lVar1 = uVar4 - uVar5; lVar1 != 0; lVar1 = lVar1 + -1) {
      *puVar3 = 0;
      puVar3[1] = 0;
      puVar3[2] = 0;
      puVar3 = puVar3 + 3;
    }
    *(undefined8 **)(param_1 + 0x18) = puVar3;
  }
  return;
}

