// Function: FUN_14034d2b0
// Addr: 14034d2b0
// Size: 334 bytes


undefined8 FUN_14034d2b0(longlong *param_1,uint param_2)

{
  longlong lVar1;
  longlong lVar2;
  byte *pbVar3;
  uint uVar4;
  longlong lVar5;
  uint uVar6;
  ushort uVar7;
  uint uVar8;
  undefined1 *puVar9;
  uint uVar10;
  longlong lVar11;
  undefined1 *puVar12;
  uint uVar13;
  ulonglong uVar14;
  uint uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  
  uVar4 = *(uint *)(param_1 + 6);
  lVar5 = param_1[3];
  if (uVar4 <= param_2) {
    return 0xffffffff;
  }
  uVar6 = uVar4 * 2;
  uVar8 = uVar6 + 2;
  uVar16 = (ulonglong)uVar6;
  uVar17 = (ulonglong)uVar8;
  lVar1 = lVar5 + 0xe;
  lVar11 = (ulonglong)uVar8 + ((ulonglong)uVar6 + 7) * 2;
  while( true ) {
    uVar10 = param_2 * 2;
    lVar2 = (ulonglong)uVar10 + lVar1;
    uVar14 = (ulonglong)uVar10;
    puVar9 = (undefined1 *)(lVar5 + 0xe + uVar17 + uVar14);
    uVar15 = (uint)CONCAT11(*(undefined1 *)((ulonglong)uVar10 + lVar1),*(undefined1 *)(lVar2 + 1));
    puVar12 = (undefined1 *)(lVar11 + uVar14 + lVar5);
    *(uint *)((longlong)param_1 + 0x3c) = uVar15;
    pbVar3 = (byte *)((ulonglong)uVar6 + (ulonglong)uVar8 + lVar1 + uVar14);
    uVar10 = (uint)CONCAT11(*puVar9,*(undefined1 *)(uVar17 + 1 + lVar2));
    *(uint *)(param_1 + 7) = uVar10;
    *(uint *)(param_1 + 8) = (uint)(byte)puVar9[uVar16 + 1] | (int)(short)((ushort)*pbVar3 << 8);
    uVar7 = CONCAT11(*puVar12,pbVar3[uVar16 + 1]);
    uVar13 = (uint)uVar7;
    if (((uVar4 - 1 <= param_2) && (uVar10 == 0xffff)) && (uVar15 == 0xffff)) break;
LAB_14034d39b:
    if (uVar13 != 0xffff) {
      if (uVar7 != 0) {
        puVar12 = puVar12 + uVar13;
        goto LAB_14034d3c8;
      }
      goto LAB_14034d3c6;
    }
    param_2 = param_2 + 1;
    if (uVar4 <= param_2) {
      return 0xffffffff;
    }
    lVar11 = uVar17 + (uVar16 + 7) * 2;
  }
  if (uVar7 != 0) {
    if (puVar12 + (ulonglong)uVar13 + 2 <=
        (undefined1 *)((ulonglong)*(uint *)(*param_1 + 0x298) + *(longlong *)(*param_1 + 0x290)))
    goto LAB_14034d39b;
    *(undefined4 *)(param_1 + 8) = 1;
  }
LAB_14034d3c6:
  puVar12 = (undefined1 *)0x0;
LAB_14034d3c8:
  param_1[9] = (longlong)puVar12;
  *(uint *)((longlong)param_1 + 0x34) = param_2;
  return 0;
}

