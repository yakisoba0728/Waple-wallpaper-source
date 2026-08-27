// Function: FUN_140308860
// Addr: 140308860
// Size: 212 bytes


void FUN_140308860(longlong param_1,uint *param_2)

{
  undefined8 uVar1;
  uint uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong lVar5;
  
  uVar1 = *(undefined8 *)(param_1 + 0x98);
  uVar4 = 0;
  if (*(longlong *)(param_2 + 2) != 0) {
    uVar3 = uVar4;
    if (*param_2 != 0) {
      do {
        lVar5 = uVar3 * 0x20;
        FUN_1402f7f90(uVar1,*(undefined8 *)(*(longlong *)(param_2 + 2) + 8 + lVar5));
        *(undefined8 *)(*(longlong *)(param_2 + 2) + 8 + lVar5) = 0;
        FUN_1402f7f90(uVar1,*(undefined8 *)(*(longlong *)(param_2 + 2) + 0x10 + lVar5));
        uVar2 = (int)uVar3 + 1;
        *(undefined8 *)(lVar5 + 0x10 + *(longlong *)(param_2 + 2)) = 0;
        uVar3 = (ulonglong)uVar2;
      } while (uVar2 < *param_2);
    }
    FUN_1402f7f90(uVar1,*(undefined8 *)(param_2 + 2));
    param_2[2] = 0;
    param_2[3] = 0;
  }
  if (*(longlong *)(param_2 + 6) != 0) {
    if (param_2[5] != 0) {
      do {
        lVar5 = uVar4 * 8;
        FUN_1402f7f90(uVar1,*(undefined8 *)(*(longlong *)(param_2 + 6) + lVar5));
        uVar2 = (int)uVar4 + 1;
        uVar4 = (ulonglong)uVar2;
        *(undefined8 *)(lVar5 + *(longlong *)(param_2 + 6)) = 0;
      } while (uVar2 < param_2[5]);
    }
    FUN_1402f7f90(uVar1,*(undefined8 *)(param_2 + 6));
    param_2[6] = 0;
    param_2[7] = 0;
  }
  return;
}

