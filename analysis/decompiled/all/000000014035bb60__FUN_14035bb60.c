// Function: FUN_14035bb60
// Addr: 14035bb60
// Size: 495 bytes


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14035bb60(longlong param_1)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  undefined8 *puVar4;
  uint uVar5;
  undefined8 *puVar6;
  
  uVar5 = *(int *)(param_1 + 0x7c) + 1;
  if ((int)uVar5 < 0) {
    uVar5 = 0;
  }
  cVar2 = FUN_1403a4db0(param_1 + 0x78,uVar5,0);
  puVar6 = &DAT_1404e4f20;
  if (cVar2 == '\0') {
    puVar4 = &DAT_1404e4f20;
    DAT_1404e4f20 = CONCAT44(DAT_14045dd10._4_4_,(undefined4)DAT_14045dd10);
    DAT_1404e4f28 = (undefined4)DAT_14045dd18;
    _DAT_1404e4f2c = DAT_14045dd18._4_4_;
    DAT_1404e4f30 = (undefined4)DAT_14045dd20;
    _DAT_1404e4f34 = ram0x00014045dd24;
  }
  else {
    uVar1 = *(uint *)(param_1 + 0x7c);
    if ((uVar1 < uVar5) && (iVar3 = (uVar5 - uVar1) * 0x1c, iVar3 != 0)) {
      FUN_1404217a0((ulonglong)uVar1 * 0x1c + *(longlong *)(param_1 + 0x80),0,iVar3);
    }
    *(uint *)(param_1 + 0x7c) = uVar5;
    puVar4 = (undefined8 *)((ulonglong)(uVar5 - 1) * 0x1c + *(longlong *)(param_1 + 0x80));
  }
  *(undefined4 *)puVar4 = 0x6c6a6d6f;
  *(undefined4 *)((longlong)puVar4 + 4) = *(undefined4 *)(param_1 + 0x7c);
  puVar4[1] = 1;
  *(undefined4 *)(puVar4 + 2) = 0;
  *(undefined4 *)((longlong)puVar4 + 0x14) = *(undefined4 *)(param_1 + 0x70);
  *(undefined4 *)(puVar4 + 3) = *(undefined4 *)(param_1 + 0x74);
  uVar5 = *(int *)(param_1 + 0x7c) + 1;
  if ((int)uVar5 < 0) {
    uVar5 = 0;
  }
  cVar2 = FUN_1403a4db0(param_1 + 0x78,uVar5,0);
  if (cVar2 == '\0') {
    puVar4 = &DAT_1404e4f20;
    DAT_1404e4f20 = CONCAT44(DAT_14045dd10._4_4_,(undefined4)DAT_14045dd10);
    DAT_1404e4f28 = (undefined4)DAT_14045dd18;
    _DAT_1404e4f2c = DAT_14045dd18._4_4_;
    DAT_1404e4f30 = (undefined4)DAT_14045dd20;
    _DAT_1404e4f34 = ram0x00014045dd24;
  }
  else {
    uVar1 = *(uint *)(param_1 + 0x7c);
    if ((uVar1 < uVar5) && (iVar3 = (uVar5 - uVar1) * 0x1c, iVar3 != 0)) {
      FUN_1404217a0((ulonglong)uVar1 * 0x1c + *(longlong *)(param_1 + 0x80),0,iVar3);
    }
    *(uint *)(param_1 + 0x7c) = uVar5;
    puVar4 = (undefined8 *)((ulonglong)(uVar5 - 1) * 0x1c + *(longlong *)(param_1 + 0x80));
  }
  *(undefined4 *)puVar4 = 0x766a6d6f;
  *(undefined4 *)((longlong)puVar4 + 4) = *(undefined4 *)(param_1 + 0x7c);
  puVar4[1] = 1;
  *(undefined4 *)(puVar4 + 2) = 0;
  *(undefined4 *)((longlong)puVar4 + 0x14) = *(undefined4 *)(param_1 + 0x70);
  *(undefined4 *)(puVar4 + 3) = *(undefined4 *)(param_1 + 0x74);
  uVar5 = *(int *)(param_1 + 0x7c) + 1;
  if ((int)uVar5 < 0) {
    uVar5 = 0;
  }
  cVar2 = FUN_1403a4db0(param_1 + 0x78,uVar5,0);
  if (cVar2 == '\0') {
    DAT_1404e4f20 = CONCAT44(DAT_14045dd10._4_4_,(undefined4)DAT_14045dd10);
    DAT_1404e4f28 = (undefined4)DAT_14045dd18;
    _DAT_1404e4f2c = DAT_14045dd18._4_4_;
    DAT_1404e4f30 = (undefined4)DAT_14045dd20;
    _DAT_1404e4f34 = ram0x00014045dd24;
  }
  else {
    uVar1 = *(uint *)(param_1 + 0x7c);
    if ((uVar1 < uVar5) && (iVar3 = (uVar5 - uVar1) * 0x1c, iVar3 != 0)) {
      FUN_1404217a0((ulonglong)uVar1 * 0x1c + *(longlong *)(param_1 + 0x80),0,iVar3);
    }
    *(uint *)(param_1 + 0x7c) = uVar5;
    puVar6 = (undefined8 *)((ulonglong)(uVar5 - 1) * 0x1c + *(longlong *)(param_1 + 0x80));
  }
  *(undefined4 *)puVar6 = 0x746a6d6f;
  *(undefined4 *)((longlong)puVar6 + 4) = *(undefined4 *)(param_1 + 0x7c);
  puVar6[1] = 1;
  *(undefined4 *)(puVar6 + 2) = 0;
  *(undefined4 *)((longlong)puVar6 + 0x14) = *(undefined4 *)(param_1 + 0x70);
  *(undefined4 *)(puVar6 + 3) = *(undefined4 *)(param_1 + 0x74);
  return;
}

