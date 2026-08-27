// Function: FUN_14038ac70
// Addr: 14038ac70
// Size: 538 bytes


undefined8 FUN_14038ac70(longlong param_1,uint param_2,longlong param_3)

{
  uint *puVar1;
  byte *pbVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int *piVar5;
  ushort *puVar6;
  byte bVar7;
  byte bVar8;
  uint uVar9;
  longlong lVar10;
  longlong lVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  char cVar15;
  short sVar16;
  int iVar17;
  ulonglong uVar18;
  longlong lVar19;
  byte *pbVar20;
  byte *pbVar21;
  uint uVar22;
  int iVar23;
  ushort uVar24;
  uint uVar25;
  ulonglong uVar26;
  
  if (*(char *)(param_1 + 0x8d) != '\0') {
    FUN_14036b6f0(*(undefined8 *)(param_1 + 0x90),param_3,param_2,2);
  }
  uVar26 = 0;
  if (param_2 != 0) {
    do {
      pbVar2 = (byte *)(param_3 + uVar26 * 2);
      iVar23 = (uint)*(byte *)(param_3 + uVar26 * 2) * 0x100 + (uint)pbVar2[1];
      if (iVar23 == 0xffff) {
        puVar1 = (uint *)(*(longlong *)(param_1 + 0x20) + 0xd8);
        *puVar1 = *puVar1 | 0x1000000;
        uVar18 = (ulonglong)*(uint *)(*(longlong *)(param_1 + 0x20) + 0x5c);
        lVar10 = *(longlong *)(*(longlong *)(param_1 + 0x20) + 0x70);
        puVar6 = (ushort *)(lVar10 + 0x10 + uVar18 * 0x14);
        *puVar6 = *puVar6 & 0xa0;
        puVar6 = (ushort *)(lVar10 + 0x10 + uVar18 * 0x14);
        *puVar6 = *puVar6 | 0x841;
      }
      else if (*(char *)(param_1 + 0x78) != '\0') {
        pbVar21 = *(byte **)(param_1 + 0x70);
        if ((uint)*pbVar21 * 0x100 + (uint)pbVar21[1] == 1) {
          uVar22 = (uint)pbVar21[5] + (uint)pbVar21[4] * 0x100;
          if (uVar22 == 0) {
            pbVar20 = (byte *)&DAT_14045dd10;
          }
          else {
            pbVar20 = pbVar21 + uVar22;
          }
        }
        else {
          pbVar20 = (byte *)&DAT_14045dd10;
        }
        iVar17 = FUN_1403c6780(pbVar20,iVar23);
        if (iVar17 == 1) {
          uVar24 = 2;
        }
        else if (iVar17 == 2) {
          uVar24 = 4;
        }
        else if (iVar17 == 3) {
          if ((uint)*pbVar21 * 0x100 + (uint)pbVar21[1] == 1) {
            uVar22 = (uint)pbVar21[0xb] + (uint)pbVar21[10] * 0x100;
            if (uVar22 == 0) {
              pbVar21 = (byte *)&DAT_14045dd10;
            }
            else {
              pbVar21 = pbVar21 + uVar22;
            }
          }
          else {
            pbVar21 = (byte *)&DAT_14045dd10;
          }
          sVar16 = FUN_1403c6780(pbVar21,iVar23);
          uVar24 = sVar16 << 8 | 8;
        }
        else {
          uVar24 = 0;
        }
        *(ushort *)
         (*(longlong *)(*(longlong *)(param_1 + 0x20) + 0x70) + 0xc +
         (ulonglong)*(uint *)(*(longlong *)(param_1 + 0x20) + 0x5c) * 0x14) = uVar24;
      }
      lVar10 = *(longlong *)(param_1 + 0x20);
      bVar7 = pbVar2[1];
      bVar8 = *pbVar2;
      cVar15 = FUN_1403eaf70(lVar10,0,1);
      if (cVar15 == '\0') {
        return 0;
      }
      uVar22 = *(uint *)(lVar10 + 0x5c);
      if (uVar22 < *(uint *)(lVar10 + 0x60)) {
        lVar19 = *(longlong *)(lVar10 + 0x70);
      }
      else {
        uVar22 = *(int *)(lVar10 + 100) - 1;
        if (*(int *)(lVar10 + 100) == 0) {
          uVar22 = 0;
        }
        lVar19 = *(longlong *)(lVar10 + 0x78);
      }
      puVar3 = (undefined4 *)(lVar19 + (ulonglong)uVar22 * 0x14);
      uVar12 = puVar3[1];
      uVar13 = puVar3[2];
      uVar14 = puVar3[3];
      uVar25 = (int)uVar26 + 1;
      uVar26 = (ulonglong)uVar25;
      uVar9 = *(uint *)(lVar10 + 100);
      lVar11 = *(longlong *)(lVar10 + 0x78);
      puVar4 = (undefined4 *)(lVar11 + (ulonglong)uVar9 * 0x14);
      *puVar4 = *puVar3;
      puVar4[1] = uVar12;
      puVar4[2] = uVar13;
      puVar4[3] = uVar14;
      piVar5 = (int *)(lVar11 + (ulonglong)uVar9 * 0x14);
      piVar5[4] = *(int *)(lVar19 + (ulonglong)uVar22 * 0x14 + 0x10);
      *piVar5 = (uint)bVar8 * 0x100 + (uint)bVar7;
      *(int *)(lVar10 + 100) = *(int *)(lVar10 + 100) + 1;
    } while (uVar25 < param_2);
  }
  return 1;
}

