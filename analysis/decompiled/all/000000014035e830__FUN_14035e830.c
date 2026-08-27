// Function: FUN_14035e830
// Addr: 14035e830
// Size: 347 bytes


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14035e830(longlong param_1)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  uint uVar6;
  
  uVar6 = *(int *)(param_1 + 0x7c) + 1;
  if ((int)uVar6 < 0) {
    uVar6 = 0;
  }
  cVar2 = FUN_1403a4db0(param_1 + 0x78,uVar6,0);
  puVar5 = &DAT_1404e4f20;
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
    if ((uVar1 < uVar6) && (iVar3 = (uVar6 - uVar1) * 0x1c, iVar3 != 0)) {
      FUN_1404217a0((ulonglong)uVar1 * 0x1c + *(longlong *)(param_1 + 0x80),0,iVar3);
    }
    *(uint *)(param_1 + 0x7c) = uVar6;
    puVar4 = (undefined8 *)((ulonglong)(uVar6 - 1) * 0x1c + *(longlong *)(param_1 + 0x80));
  }
  *(undefined4 *)puVar4 = 0x636c6967;
  *(undefined4 *)((longlong)puVar4 + 4) = *(undefined4 *)(param_1 + 0x7c);
  *(undefined4 *)(puVar4 + 1) = 1;
  *(undefined4 *)((longlong)puVar4 + 0xc) = 1;
  *(undefined4 *)(puVar4 + 2) = 1;
  *(undefined4 *)((longlong)puVar4 + 0x14) = *(undefined4 *)(param_1 + 0x70);
  *(undefined4 *)(puVar4 + 3) = *(undefined4 *)(param_1 + 0x74);
  uVar6 = *(int *)(param_1 + 0x7c) + 1;
  if ((int)uVar6 < 0) {
    uVar6 = 0;
  }
  cVar2 = FUN_1403a4db0(param_1 + 0x78,uVar6,0);
  if (cVar2 == '\0') {
    DAT_1404e4f20 = CONCAT44(DAT_14045dd10._4_4_,(undefined4)DAT_14045dd10);
    DAT_1404e4f28 = (undefined4)DAT_14045dd18;
    _DAT_1404e4f2c = DAT_14045dd18._4_4_;
    DAT_1404e4f30 = (undefined4)DAT_14045dd20;
    _DAT_1404e4f34 = ram0x00014045dd24;
  }
  else {
    uVar1 = *(uint *)(param_1 + 0x7c);
    if ((uVar1 < uVar6) && (iVar3 = (uVar6 - uVar1) * 0x1c, iVar3 != 0)) {
      FUN_1404217a0((ulonglong)uVar1 * 0x1c + *(longlong *)(param_1 + 0x80),0,iVar3);
    }
    *(uint *)(param_1 + 0x7c) = uVar6;
    puVar5 = (undefined8 *)((ulonglong)(uVar6 - 1) * 0x1c + *(longlong *)(param_1 + 0x80));
  }
  *(undefined4 *)puVar5 = 0x6c696761;
  *(undefined4 *)((longlong)puVar5 + 4) = *(undefined4 *)(param_1 + 0x7c);
  *(undefined4 *)(puVar5 + 1) = 0;
  *(undefined8 *)((longlong)puVar5 + 0xc) = 1;
  *(undefined4 *)((longlong)puVar5 + 0x14) = *(undefined4 *)(param_1 + 0x70);
  *(undefined4 *)(puVar5 + 3) = *(undefined4 *)(param_1 + 0x74);
  return;
}

