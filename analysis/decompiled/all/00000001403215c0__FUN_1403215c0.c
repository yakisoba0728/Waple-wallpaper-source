// Function: FUN_1403215c0
// Addr: 1403215c0
// Size: 176 bytes


void FUN_1403215c0(uint *param_1,undefined8 param_2)

{
  longlong lVar1;
  uint uVar2;
  ulonglong uVar4;
  ulonglong uVar3;
  
  uVar4 = 0;
  if ((*(longlong *)(param_1 + 6) != 0) && (uVar3 = uVar4, param_1[5] != 0)) {
    do {
      lVar1 = uVar3 * 8;
      FUN_1402f7f90(param_2,*(undefined8 *)(*(longlong *)(param_1 + 6) + lVar1));
      uVar2 = (int)uVar3 + 1;
      uVar3 = (ulonglong)uVar2;
      *(undefined8 *)(lVar1 + *(longlong *)(param_1 + 6)) = 0;
    } while (uVar2 < param_1[5]);
  }
  FUN_1402f7f90(param_2,*(undefined8 *)(param_1 + 6));
  param_1[6] = 0;
  param_1[7] = 0;
  if ((*(longlong *)(param_1 + 2) != 0) && (*param_1 != 0)) {
    do {
      FUN_1402f7f90(param_2,*(undefined8 *)(*(longlong *)(param_1 + 2) + 8 + uVar4 * 0x10));
      uVar2 = (int)uVar4 + 1;
      *(undefined8 *)(*(longlong *)(param_1 + 2) + 8 + uVar4 * 0x10) = 0;
      uVar4 = (ulonglong)uVar2;
    } while (uVar2 < *param_1);
  }
  FUN_1402f7f90(param_2,*(undefined8 *)(param_1 + 2));
  param_1[2] = 0;
  param_1[3] = 0;
  return;
}

