// Function: FUN_1403b3040
// Addr: 1403b3040
// Size: 307 bytes


undefined8 FUN_1403b3040(longlong param_1)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  undefined1 uVar4;
  int iVar5;
  longlong lVar6;
  uint uVar7;
  longlong lVar8;
  uint uVar9;
  float fVar10;
  
  lVar8 = *(longlong *)(param_1 + 0x20);
  uVar9 = *(uint *)(lVar8 + 0x14);
  if (uVar9 == 0) {
    lVar6 = FUN_1403c5410(lVar8 + 0x78);
    uVar7 = (uint)*(byte *)(lVar6 + 0x12) * 0x100 + (uint)*(byte *)(lVar6 + 0x13);
    uVar9 = 1000;
    if (uVar7 - 0x10 < 0x3ff1) {
      uVar9 = uVar7;
    }
    *(uint *)(lVar8 + 0x14) = uVar9;
  }
  iVar1 = *(int *)(param_1 + 0x28);
  iVar2 = *(int *)(param_1 + 0x2c);
  fVar10 = (float)uVar9;
  *(float *)(param_1 + 0x50) = (float)iVar1 / fVar10;
  *(float *)(param_1 + 0x54) = (float)iVar2 / fVar10;
  if (iVar1 < 0) {
    lVar8 = (longlong)-iVar1 * -0x10000;
  }
  else {
    lVar8 = (longlong)iVar1 << 0x10;
  }
  *(longlong *)(param_1 + 0x58) = (longlong)((float)lVar8 / fVar10);
  if (iVar2 < 0) {
    lVar8 = (longlong)-iVar2 * -0x10000;
  }
  else {
    lVar8 = (longlong)iVar2 << 0x10;
  }
  *(longlong *)(param_1 + 0x60) = (longlong)((float)lVar8 / fVar10);
  if (((*(float *)(param_1 + 0x34) == 0.0) && (*(float *)(param_1 + 0x38) == 0.0)) &&
     (*(float *)(param_1 + 0x48) == 0.0)) {
    uVar4 = 0;
  }
  else {
    uVar4 = 1;
  }
  *(undefined1 *)(param_1 + 0x30) = uVar4;
  iVar5 = -iVar1;
  if (-iVar1 < 0) {
    iVar5 = iVar1;
  }
  fVar10 = (float)FUN_14041a690((float)iVar5 * *(float *)(param_1 + 0x34) + DAT_140492790);
  *(int *)(param_1 + 0x40) = (int)fVar10;
  iVar5 = -iVar2;
  if (-iVar2 < 0) {
    iVar5 = iVar2;
  }
  fVar10 = (float)FUN_14041a690((float)iVar5 * *(float *)(param_1 + 0x38) + DAT_140492790);
  *(int *)(param_1 + 0x44) = (int)fVar10;
  if (iVar2 == 0) {
    fVar10 = 0.0;
  }
  else {
    fVar10 = ((float)iVar1 * *(float *)(param_1 + 0x48)) / (float)iVar2;
  }
  *(float *)(param_1 + 0x4c) = fVar10;
  if ((*(undefined8 **)(param_1 + 0xb0) != (undefined8 *)0x0) &&
     (*(undefined8 **)(param_1 + 0xb0) != &DAT_14045dde0)) {
    func_0x0001402bf8e0();
  }
  *(undefined8 *)(param_1 + 0xb0) = 0;
  if (*(longlong **)(param_1 + 0xb8) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0xb8) + 0x10))();
  }
  *(undefined8 *)(param_1 + 0xb8) = 0;
  uVar3 = *(undefined8 *)(param_1 + 0xc0);
  *(undefined8 *)(param_1 + 0xc0) = 0;
  LOCK();
  *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
  UNLOCK();
  return uVar3;
}

