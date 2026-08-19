// Function: FUN_140394930
// Addr: 140394930
// Size: 457 bytes


void FUN_140394930(undefined4 *param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
                  int *param_5)

{
  longlong lVar1;
  uint uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  longlong lVar5;
  int iVar6;
  uint uVar7;
  byte *pbVar8;
  uint uVar9;
  bool bVar10;
  
  *param_1 = 0;
  *(undefined8 *)(param_1 + 2) = param_2;
  *(longlong *)(param_1 + 4) = param_3;
  *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_3 + 0x20);
  *(undefined8 *)(param_1 + 8) = param_4;
  param_1[10] = 0;
  *(undefined8 *)(param_1 + 0xc) = 0;
  *(undefined8 *)(param_1 + 0xe) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x12) = 0;
  *(undefined1 *)(param_1 + 0x14) = 0;
  *(undefined8 *)(param_1 + 0x16) = 0;
  param_1[0x18] = 0x10000;
  *(undefined2 *)(param_1 + 0x19) = 0;
  pbVar8 = (byte *)&DAT_14045dde0;
  *(undefined8 **)(param_1 + 0x1a) = &DAT_14045dde0;
  puVar3 = (undefined8 *)FUN_1403c4f00(*(longlong *)(param_1 + 6) + 0x138);
  puVar4 = &DAT_14045dde0;
  if ((undefined8 *)*puVar3 != (undefined8 *)0x0) {
    puVar4 = (undefined8 *)*puVar3;
  }
  if (3 < *(uint *)(puVar4 + 3)) {
    pbVar8 = (byte *)puVar4[2];
  }
  *(byte **)(param_1 + 0x1c) = pbVar8;
  if ((uint)*pbVar8 * 0x100 + (uint)pbVar8[1] == 1) {
    bVar10 = (uint)pbVar8[4] * 0x100 + (uint)pbVar8[5] != 0;
  }
  else {
    bVar10 = false;
  }
  *(bool *)(param_1 + 0x1e) = bVar10;
  *(undefined8 *)(param_1 + 0x20) = 0;
  param_1[0x22] = 0;
  *(undefined2 *)(param_1 + 0x23) = 0;
  *(undefined8 *)(param_1 + 0x24) = 0;
  *(undefined8 *)(param_1 + 0x26) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x2a) = 0;
  param_1[0x2c] = 0;
  if ((param_5 != (int *)0x0) && (*param_5 != 0)) {
    LOCK();
    *param_5 = *param_5 + 1;
    UNLOCK();
  }
  *(int **)(param_1 + 0x16) = param_5;
  *(undefined1 *)(param_1 + 0x14) = 0;
  lVar1 = *(longlong *)(param_1 + 6);
  iVar6 = *(int *)(lVar1 + 0x18);
  if (iVar6 == -1) {
    lVar5 = FUN_140398ae0(lVar1 + 0x80);
    iVar6 = (uint)*(byte *)(lVar5 + 4) * 0x100 + (uint)*(byte *)(lVar5 + 5);
    if (iVar6 == 0) {
      iVar6 = 0;
    }
    *(int *)(lVar1 + 0x18) = iVar6;
  }
  param_1[0x18] = iVar6;
  *(undefined1 *)(param_1 + 0x19) = 1;
  lVar1 = *(longlong *)(param_1 + 0x16);
  if (lVar1 != 0) {
    lVar5 = *(longlong *)(lVar1 + 0x10);
    *(longlong *)(param_1 + 0xc) = lVar5;
    *(ulonglong *)(param_1 + 0xe) = (ulonglong)*(uint *)(lVar1 + 0x18) + lVar5;
  }
  uVar9 = param_1[0xe] - param_1[0xc];
  param_1[0x10] = uVar9;
  if (uVar9 < 0x3ffffff) {
    uVar7 = 0x4000;
    if (0x3fff < uVar9 * 0x40) {
      uVar7 = uVar9 * 0x40;
    }
    uVar2 = 0x3fffffff;
    if (uVar7 < 0x40000000) {
      uVar2 = uVar7;
    }
  }
  else {
    uVar2 = 0x3fffffff;
  }
  param_1[0x11] = uVar2;
  param_1[10] = 0;
  param_1[0x13] = 0;
                    /* WARNING: Subroutine does not return */
  FUN_1402fc440("SANITIZE",*(undefined8 *)(param_1 + 0xc),0,1,0,1,"start [%p..%p] (%lu bytes)",
                *(undefined8 *)(param_1 + 0xc),*(undefined8 *)(param_1 + 0xe),uVar9);
}

