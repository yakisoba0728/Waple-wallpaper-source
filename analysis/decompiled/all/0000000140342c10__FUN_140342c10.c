// Function: FUN_140342c10
// Addr: 140342c10
// Size: 223 bytes


void FUN_140342c10(longlong param_1)

{
  undefined8 uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  uVar2 = *(ulonglong *)(param_1 + 0x1e8);
  uVar1 = *(undefined8 *)(param_1 + 0x98);
  if (uVar2 != 0) {
    uVar3 = uVar2 + (ulonglong)*(uint *)(param_1 + 0x1dc) * 0x18;
    for (; uVar2 < uVar3; uVar2 = uVar2 + 0x18) {
      FUN_1402f7f90(uVar1,*(undefined8 *)(uVar2 + 0x10));
      *(undefined8 *)(uVar2 + 0x10) = 0;
    }
    FUN_1402f7f90(uVar1,*(undefined8 *)(param_1 + 0x1e8));
    *(undefined8 *)(param_1 + 0x1e8) = 0;
  }
  uVar2 = *(ulonglong *)(param_1 + 0x1f8);
  if (uVar2 != 0) {
    uVar3 = (ulonglong)*(uint *)(param_1 + 0x1f0) * 0x10 + uVar2;
    for (; uVar2 < uVar3; uVar2 = uVar2 + 0x10) {
      FUN_1402f7f90(uVar1,*(undefined8 *)(uVar2 + 8));
      *(undefined8 *)(uVar2 + 8) = 0;
    }
    FUN_1402f7f90(uVar1,*(undefined8 *)(param_1 + 0x1f8));
    *(undefined8 *)(param_1 + 0x1f8) = 0;
  }
  *(undefined8 *)(param_1 + 0x1dc) = 0;
  *(uint *)(param_1 + 0x1f0) = 0;
  *(undefined2 *)(param_1 + 0x1d8) = 0;
  return;
}

