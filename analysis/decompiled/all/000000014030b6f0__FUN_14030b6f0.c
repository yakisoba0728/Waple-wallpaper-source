// Function: FUN_14030b6f0
// Addr: 14030b6f0
// Size: 546 bytes


undefined8 FUN_14030b6f0(longlong param_1,char param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  byte *pbVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  ulonglong uVar10;
  
  lVar3 = *(longlong *)(param_1 + 0xd8);
  plVar1 = (longlong *)(param_1 + 0xb0);
  lVar4 = *(longlong *)(param_1 + 8);
  iVar2 = *(int *)(lVar3 + 0x218);
  if (0 < iVar2) {
    FUN_1404210f0(*(undefined8 *)(param_1 + 0xa8),*plVar1,
                  (ulonglong)*(ushort *)(param_1 + 0xa0) << 3);
  }
  if (param_2 == '\0') {
    *(undefined4 *)(lVar3 + 0x160) = *(undefined4 *)(*(longlong *)(lVar4 + 0x40) + 4);
    *(undefined4 *)(lVar3 + 0x164) = *(undefined4 *)(*(longlong *)(lVar4 + 0x40) + 8);
  }
  else {
    *(undefined4 *)(lVar3 + 0x160) = 0x10000;
    *(undefined4 *)(lVar3 + 0x164) = 0x10000;
    FUN_1404210f0(*(undefined8 *)(param_1 + 0xb8),*plVar1,
                  (ulonglong)*(ushort *)(param_1 + 0xa0) << 3);
  }
  *(uint *)(*plVar1 + (ulonglong)*(ushort *)(param_1 + 0xa0) * 8 + -0x20) =
       *(int *)(*plVar1 + -0x20 + (ulonglong)*(ushort *)(param_1 + 0xa0) * 8) + 0x20U & 0xffffffc0;
  *(uint *)(*plVar1 + (ulonglong)*(ushort *)(param_1 + 0xa0) * 8 + -0x18) =
       *(int *)(*plVar1 + -0x18 + (ulonglong)*(ushort *)(param_1 + 0xa0) * 8) + 0x20U & 0xffffffc0;
  *(uint *)(*plVar1 + (ulonglong)*(ushort *)(param_1 + 0xa0) * 8 + -0xc) =
       *(int *)(*plVar1 + -0xc + (ulonglong)*(ushort *)(param_1 + 0xa0) * 8) + 0x20U & 0xffffffc0;
  *(uint *)(*plVar1 + (ulonglong)*(ushort *)(param_1 + 0xa0) * 8 + -4) =
       *(int *)(*plVar1 + -4 + (ulonglong)*(ushort *)(param_1 + 0xa0) * 8) + 0x20U & 0xffffffc0;
  if (0 < iVar2) {
    *(undefined8 *)(lVar3 + 0x288) = *(undefined8 *)(lVar3 + 0x220);
    *(int *)(lVar3 + 0x290) = iVar2;
    *(undefined8 *)(lVar3 + 0x1e0) = *(undefined8 *)(lVar3 + 0x220);
    *(int *)(lVar3 + 0x1ec) = iVar2;
    *(undefined4 *)(lVar3 + 0x1e8) = 0;
    *(undefined4 *)(lVar3 + 0x1dc) = 3;
    *(undefined4 *)(lVar3 + 0x1d8) = 3;
    *(char *)(lVar3 + 0x2c5) = param_2;
    uVar9 = *(undefined8 *)(param_1 + 0xa8);
    *(undefined8 *)(lVar3 + 0xe8) = *(undefined8 *)(param_1 + 0xa0);
    *(undefined8 *)(lVar3 + 0xf0) = uVar9;
    uVar9 = *(undefined8 *)(param_1 + 0xb8);
    *(undefined8 *)(lVar3 + 0xf8) = *(undefined8 *)(param_1 + 0xb0);
    *(undefined8 *)(lVar3 + 0x100) = uVar9;
    uVar6 = *(undefined4 *)(param_1 + 0xc4);
    uVar7 = *(undefined4 *)(param_1 + 200);
    uVar8 = *(undefined4 *)(param_1 + 0xcc);
    *(undefined4 *)(lVar3 + 0x108) = *(undefined4 *)(param_1 + 0xc0);
    *(undefined4 *)(lVar3 + 0x10c) = uVar6;
    *(undefined4 *)(lVar3 + 0x110) = uVar7;
    *(undefined4 *)(lVar3 + 0x114) = uVar8;
    *(undefined8 *)(lVar3 + 0x118) = *(undefined8 *)(param_1 + 0xd0);
    uVar9 = FUN_14030f330(lVar3,lVar4);
    if (((int)uVar9 != 0) && (*(char *)(lVar3 + 0x2c6) != '\0')) {
      return uVar9;
    }
    pbVar5 = *(byte **)(*(longlong *)(param_1 + 0x18) + 0x70);
    *pbVar5 = *pbVar5 | *(char *)(lVar3 + 0x1d4) << 5 | 4U;
  }
  if (*(int *)(lVar3 + 0x324) == 0) {
    uVar10 = (ulonglong)*(ushort *)(param_1 + 0xa0);
    *(undefined8 *)(param_1 + 0x58) =
         *(undefined8 *)(*(longlong *)(param_1 + 0xb0) + -0x20 + uVar10 * 8);
    *(undefined8 *)(param_1 + 0x60) =
         *(undefined8 *)(*(longlong *)(param_1 + 0xb0) + -0x18 + uVar10 * 8);
    *(undefined8 *)(param_1 + 0xf8) =
         *(undefined8 *)(*(longlong *)(param_1 + 0xb0) + -0x10 + uVar10 * 8);
    *(undefined8 *)(param_1 + 0x100) =
         *(undefined8 *)(*(longlong *)(param_1 + 0xb0) + -8 + uVar10 * 8);
  }
  return 0;
}

