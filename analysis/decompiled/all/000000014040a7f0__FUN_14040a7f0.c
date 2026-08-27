// Function: FUN_14040a7f0
// Addr: 14040a7f0
// Size: 862 bytes


ulonglong FUN_14040a7f0(ushort *param_1,longlong param_2,longlong param_3,longlong param_4,
                       longlong param_5)

{
  byte bVar1;
  uint uVar2;
  undefined1 *puVar3;
  char cVar4;
  uint uVar5;
  undefined4 uVar6;
  ushort *puVar7;
  int *piVar8;
  undefined8 *puVar9;
  longlong lVar10;
  byte bVar11;
  undefined2 uVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  undefined2 *puVar16;
  byte *pbVar17;
  ulonglong uVar18;
  uint uVar19;
  undefined4 local_48;
  
  puVar7 = (ushort *)FUN_140386d60(param_2,param_1);
  if (((puVar7 == (ushort *)0x0) || (*(int *)(param_2 + 0x2c) != 0)) ||
     (puVar7 = param_1 + 1, puVar7 < param_1)) goto LAB_14040ab34;
  lVar10 = *(longlong *)(param_2 + 8);
  pbVar17 = (byte *)((longlong)param_1 + (2 - lVar10));
  if ((pbVar17 < (byte *)0x80000000) &&
     (puVar7 = (ushort *)(*(longlong *)(param_2 + 0x10) - lVar10),
     (longlong)pbVar17 <= (longlong)puVar7)) {
    if ((int)pbVar17 != 0) {
      FUN_1404217a0(lVar10,0);
    }
    lVar10 = *(longlong *)(param_2 + 8);
    puVar7 = (ushort *)(pbVar17 + lVar10);
    *(ushort **)(param_2 + 8) = puVar7;
    if ((lVar10 == 0) || (param_1 == (ushort *)0x0)) goto LAB_14040ab34;
    uVar2 = *(uint *)(param_3 + 0x10);
    bVar11 = (byte)(uVar2 >> 8);
    local_48._0_2_ = CONCAT11((char)uVar2,bVar11);
    puVar7 = (ushort *)(ulonglong)(ushort)local_48;
    *param_1 = (ushort)local_48;
    if ((uint)bVar11 * 0x100 + (uVar2 & 0xff) != uVar2) {
      *(uint *)(param_2 + 0x2c) = *(uint *)(param_2 + 0x2c) | 0x10;
    }
    if (*(int *)(param_2 + 0x2c) != 0) goto LAB_14040ab34;
    puVar7 = (ushort *)((ulonglong)*(byte *)((longlong)param_1 + 1) + 1);
    if (param_1 + (longlong)(puVar7 + (ulonglong)(byte)*param_1 * 0x80) < param_1)
    goto LAB_14040ab34;
    lVar10 = *(longlong *)(param_2 + 8);
    uVar18 = (longlong)(param_1 + (longlong)(puVar7 + (ulonglong)(byte)*param_1 * 0x80)) - lVar10;
    if ((uVar18 < 0x80000000) &&
       (puVar7 = (ushort *)(*(longlong *)(param_2 + 0x10) - lVar10),
       (longlong)uVar18 <= (longlong)puVar7)) {
      if ((int)uVar18 != 0) {
        FUN_1404217a0(lVar10,0);
      }
      lVar10 = *(longlong *)(param_2 + 8);
      puVar7 = (ushort *)(lVar10 + uVar18);
      *(ushort **)(param_2 + 8) = puVar7;
      if (lVar10 != 0) {
        if (uVar2 != 0) {
          uVar18 = 0;
          local_48 = 0;
          uVar13 = *(uint *)(param_5 + 0x10);
          puVar16 = *(undefined2 **)(param_5 + 8);
          do {
            uVar5 = (uint)uVar18;
            if (uVar5 < *(uint *)(param_4 + 0x10)) {
              piVar8 = (int *)(*(longlong *)(param_4 + 8) + uVar18 * 4);
            }
            else {
              piVar8 = (int *)&DAT_14045dd10;
            }
            uVar19 = 0;
            if (-1 < (int)(*piVar8 - 1U)) {
              uVar19 = *piVar8 - 1U;
            }
            uVar15 = uVar19;
            if (uVar13 <= uVar19) {
              uVar15 = uVar13;
            }
            if (uVar5 < uVar2) {
              pbVar17 = (byte *)(*(longlong *)(param_3 + 8) + uVar18 * 2);
            }
            else {
              pbVar17 = (byte *)&DAT_14045dd10;
            }
            if (uVar5 < (uint)(byte)*param_1 * 0x100 + (uint)*(byte *)((longlong)param_1 + 1)) {
              puVar7 = param_1 + uVar18 + 1;
            }
            else {
              puVar7 = (ushort *)&DAT_1404e4f20;
            }
            *puVar7 = 0;
            if (*(int *)(param_2 + 0x2c) == 0) {
              puVar9 = (undefined8 *)FUN_1403a3490(param_2 + 0x30);
              if (puVar9 == (undefined8 *)0x0) {
                if (*(int *)(param_2 + 0x2c) == 0) {
                  *(undefined4 *)(param_2 + 0x2c) = 1;
                }
              }
              else {
                *puVar9 = *(undefined8 *)(param_2 + 8);
                puVar9[1] = *(undefined8 *)(param_2 + 0x10);
                puVar9[6] = *(undefined8 *)(param_2 + 0x48);
                *(undefined8 **)(param_2 + 0x48) = puVar9;
              }
            }
            puVar3 = *(undefined1 **)(param_2 + 8);
            bVar11 = *pbVar17;
            bVar1 = pbVar17[1];
            lVar10 = FUN_140386cc0(param_2,puVar3);
            if (lVar10 == 0) {
LAB_14040ab1f:
              puVar7 = (ushort *)FUN_1403f0c80(param_2);
              goto LAB_14040ab34;
            }
            iVar14 = (uint)bVar11 * 0x100 + (uint)bVar1;
            puVar3[1] = (char)iVar14;
            *puVar3 = (char)((uint)iVar14 >> 8);
            cVar4 = FUN_14040a6f0(puVar3 + 2,param_2,uVar15,0);
            if (cVar4 == '\0') goto LAB_14040ab1f;
            uVar18 = 0;
            uVar13 = uVar15;
            if (uVar15 != 0) {
              do {
                lVar10 = uVar18 * 2;
                uVar5 = (int)uVar18 + 1;
                uVar18 = (ulonglong)uVar5;
                if (uVar13 == 0) {
                  uVar12 = (undefined2)(undefined4)DAT_14045dd10;
                }
                else {
                  uVar12 = *puVar16;
                  uVar13 = uVar13 - 1;
                  puVar16 = puVar16 + 1;
                }
                *(undefined2 *)(puVar3 + lVar10 + 4) = uVar12;
              } while (uVar5 < uVar15);
            }
            uVar6 = FUN_1403f0d30(param_2,1);
            FUN_14036b900(param_2,puVar7,uVar6,0,0);
            uVar13 = *(uint *)(param_5 + 0x10);
            if (uVar13 < uVar19) {
              uVar19 = uVar13;
            }
            local_48 = local_48 + 1;
            uVar18 = (ulonglong)local_48;
            *(int *)(param_5 + 0x14) = *(int *)(param_5 + 0x14) + uVar19;
            uVar13 = uVar13 - uVar19;
            puVar7 = (ushort *)((ulonglong)uVar19 * 2);
            *(uint *)(param_5 + 0x10) = uVar13;
            *(longlong *)(param_5 + 8) = (longlong)(*(longlong *)(param_5 + 8) + (longlong)puVar7);
            puVar16 = *(undefined2 **)(param_5 + 8);
          } while (local_48 < uVar2);
        }
        return CONCAT71((int7)((ulonglong)puVar7 >> 8),1);
      }
      goto LAB_14040ab34;
    }
  }
  *(undefined4 *)(param_2 + 0x2c) = 4;
LAB_14040ab34:
  return (ulonglong)puVar7 & 0xffffffffffffff00;
}

