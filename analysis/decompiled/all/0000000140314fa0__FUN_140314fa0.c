// Function: FUN_140314fa0
// Addr: 140314fa0
// Size: 578 bytes


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_140314fa0(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  ulonglong uVar8;
  longlong lVar9;
  ulonglong uVar10;
  uint uVar11;
  
  lVar9 = _UNK_14043bb48;
  lVar2 = *param_1;
  lVar3 = param_1[0x22];
  param_1[0x11] = _DAT_14043bb40;
  param_1[0x12] = lVar9;
  lVar9 = _UNK_14043bb58;
  param_1[0x13] = _DAT_14043bb50;
  param_1[0x14] = lVar9;
  lVar9 = _UNK_14043bb68;
  param_1[0x15] = _DAT_14043bb60;
  param_1[0x16] = lVar9;
  uVar7 = _DAT_14043bb7c;
  uVar6 = _UNK_14043bb78;
  uVar5 = _UNK_14043bb74;
  *(undefined4 *)(param_1 + 0x17) = _DAT_14043bb70;
  *(undefined4 *)((longlong)param_1 + 0xbc) = uVar5;
  *(undefined4 *)(param_1 + 0x18) = uVar6;
  *(undefined4 *)((longlong)param_1 + 0xc4) = uVar7;
  uVar7 = _UNK_14043bb88;
  uVar6 = _UNK_14043bb84;
  uVar5 = _UNK_14043bb80;
  *(undefined4 *)((longlong)param_1 + 0xc4) = _DAT_14043bb7c;
  *(undefined4 *)(param_1 + 0x19) = uVar5;
  *(undefined4 *)((longlong)param_1 + 0xcc) = uVar6;
  *(undefined4 *)(param_1 + 0x1a) = uVar7;
  FUN_1404217a0(param_1[0x1c],0,(ulonglong)*(ushort *)(param_1 + 0x1b) << 3);
  FUN_1404217a0(param_1[0x1d],0,(ulonglong)*(ushort *)(param_1 + 0x1b) << 3);
  FUN_14030bb90(lVar3,lVar2,param_1);
  FUN_1404217a0(*(undefined8 *)(lVar3 + 0x2a0),0,(ulonglong)*(ushort *)(lVar3 + 0x298) << 2);
  uVar10 = 0;
  uVar8 = uVar10;
  if (*(int *)(lVar3 + 0x1f8) != 0) {
    do {
      uVar11 = (int)uVar8 + 1;
      iVar1 = *(int *)(uVar8 * 4 + *(longlong *)(lVar2 + 0x3d8));
      lVar9 = (longlong)((int)(iVar1 + (iVar1 >> 0x1f & 0x3fU)) >> 6) * (longlong)(int)param_1[0xe];
      *(int *)(uVar8 * 4 + *(longlong *)(lVar3 + 0x200)) =
           (int)((ulonglong)(lVar9 + (lVar9 >> 0x3f) + 0x8000) >> 0x10);
      uVar8 = (ulonglong)uVar11;
    } while (uVar11 < *(uint *)(lVar3 + 0x1f8));
  }
  *(undefined8 *)(lVar3 + 0x288) = 0;
  *(undefined4 *)(lVar3 + 0x290) = 0;
  iVar1 = *(int *)(lVar2 + 0x3c0);
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x11c) = 0;
  }
  else {
    uVar4 = *(undefined8 *)(lVar2 + 0x3c8);
    *(undefined8 *)(lVar3 + 0x278) = uVar4;
    *(int *)(lVar3 + 0x280) = iVar1;
    *(int *)(lVar3 + 0x1ec) = iVar1;
    *(undefined8 *)(lVar3 + 0x1e0) = uVar4;
    *(undefined4 *)(lVar3 + 0x1e8) = 0;
    *(undefined4 *)(lVar3 + 0x1dc) = 2;
    *(undefined4 *)(lVar3 + 0x1d8) = 2;
    *(undefined4 *)(lVar3 + 0xe8) = 0;
    uVar8 = FUN_14030f330(lVar3,param_1);
    *(int *)((longlong)param_1 + 0x11c) = (int)uVar8;
    uVar10 = uVar8 & 0xffffffff;
    if ((int)uVar8 != 0) {
      return uVar8;
    }
  }
  *(undefined4 *)(param_1 + 0x17) = *(undefined4 *)(lVar3 + 0x1bc);
  *(undefined4 *)((longlong)param_1 + 0xbc) = *(undefined4 *)(lVar3 + 0x1c0);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(lVar3 + 0x1c4);
  *(undefined4 *)((longlong)param_1 + 0xc4) = *(undefined4 *)(lVar3 + 0x1c8);
  *(undefined2 *)(param_1 + 0x19) = *(undefined2 *)(lVar3 + 0x1cc);
  *(undefined2 *)((longlong)param_1 + 0xca) = *(undefined2 *)(lVar3 + 0x1ce);
  *(undefined1 *)((longlong)param_1 + 0xcc) = *(undefined1 *)(lVar3 + 0x1d0);
  *(undefined1 *)((longlong)param_1 + 0xcd) = *(undefined1 *)(lVar3 + 0x1d1);
  *(undefined1 *)((longlong)param_1 + 0xce) = *(undefined1 *)(lVar3 + 0x1d2);
  *(undefined4 *)(param_1 + 0x1a) = *(undefined4 *)(lVar3 + 0x1d4);
  return uVar10;
}

