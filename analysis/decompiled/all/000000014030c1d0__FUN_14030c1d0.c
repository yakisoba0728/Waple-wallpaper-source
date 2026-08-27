// Function: FUN_14030c1d0
// Addr: 14030c1d0
// Size: 970 bytes


ulonglong FUN_14030c1d0(longlong param_1)

{
  byte *pbVar1;
  ushort *puVar2;
  int *piVar3;
  byte bVar4;
  ushort uVar5;
  longlong lVar6;
  undefined1 *puVar7;
  byte *pbVar8;
  ulonglong uVar9;
  undefined8 uVar10;
  ushort uVar11;
  uint uVar12;
  ushort *puVar13;
  int *piVar14;
  byte *pbVar15;
  byte *pbVar16;
  byte *pbVar17;
  byte bVar18;
  byte *pbVar19;
  ulonglong uVar20;
  int iVar21;
  longlong lVar22;
  uint local_res18 [2];
  int local_res20;
  
  uVar5 = *(ushort *)(param_1 + 0x34);
  lVar6 = *(longlong *)(param_1 + 0x18);
  puVar7 = *(undefined1 **)(param_1 + 0x108);
  pbVar8 = *(byte **)(param_1 + 0x110);
  if (uVar5 == 0) {
    iVar21 = 0;
  }
  else {
    iVar21 = (int)(short)uVar5;
    if (*(uint *)(lVar6 + 0xc) <
        (uint)*(ushort *)(lVar6 + 0x60) + (uint)*(ushort *)(lVar6 + 0x18) + iVar21) {
      uVar9 = FUN_1402f0870(lVar6,0,iVar21);
      local_res18[0] = (uint)uVar9;
      if (local_res18[0] != 0) {
        return uVar9;
      }
      goto LAB_14030c25b;
    }
  }
  local_res18[0] = 0;
LAB_14030c25b:
  if (((short)uVar5 < 0xfff) && (puVar7 + (longlong)(iVar21 * 2) + 2 <= pbVar8)) {
    puVar13 = *(ushort **)(lVar6 + 0x78);
    puVar2 = puVar13 + (short)uVar5;
    uVar12 = 0xffffffff;
    for (; puVar13 < puVar2; puVar13 = puVar13 + 1) {
      uVar11 = CONCAT11(*puVar7,puVar7[1]);
      *puVar13 = uVar11;
      if ((int)(uint)uVar11 <= (int)uVar12) goto LAB_14030c57e;
      puVar7 = puVar7 + 2;
      uVar12 = (uint)uVar11;
    }
    local_res20 = uVar12 + 1;
    if ((uVar12 + 5 == 0) ||
       (*(ushort *)(lVar6 + 0x1a) + 4 + (uint)*(ushort *)(lVar6 + 0x62) + local_res20 <=
        *(uint *)(lVar6 + 8))) {
      local_res18[0] = 0;
    }
    else {
      uVar9 = FUN_1402f0870(lVar6,uVar12 + 5,0);
      local_res18[0] = (uint)uVar9;
      if (local_res18[0] != 0) {
        return uVar9;
      }
    }
    uVar11 = CONCAT11(*puVar7,puVar7[1]);
    pbVar17 = puVar7 + 2 + uVar11;
    if (pbVar8 < pbVar17) {
      uVar9 = 0x16;
    }
    else {
      if ((*(byte *)(param_1 + 0x20) & 2) == 0) {
        lVar22 = *(longlong *)(param_1 + 0xd8);
        uVar10 = *(undefined8 *)(lVar22 + 0x10);
        if (*(int *)(lVar22 + 0x218) != 0) {
          FUN_1402f7f90(uVar10,*(undefined8 *)(lVar22 + 0x220));
          *(undefined8 *)(lVar22 + 0x220) = 0;
        }
        *(undefined4 *)(lVar22 + 0x218) = 0;
        if (uVar11 != 0) {
          uVar10 = FUN_1402f7f20(uVar10,puVar7 + 2,(ulonglong)uVar11,local_res18);
          *(undefined8 *)(lVar22 + 0x220) = uVar10;
          if (local_res18[0] != 0) {
            return (ulonglong)local_res18[0];
          }
          *(uint *)(lVar22 + 0x218) = (uint)uVar11;
        }
      }
      pbVar15 = *(byte **)(lVar6 + 0x70);
      lVar22 = (longlong)local_res20;
      pbVar19 = pbVar15 + lVar22;
      pbVar16 = pbVar17;
      if (pbVar15 < pbVar19) {
        do {
          pbVar1 = pbVar16 + 1;
          if (pbVar8 < pbVar1) goto LAB_14030c57e;
          bVar18 = *pbVar16;
          *pbVar15 = bVar18;
          pbVar15 = pbVar15 + 1;
          pbVar17 = pbVar1;
          if ((bVar18 & 8) != 0) {
            pbVar17 = pbVar16 + 2;
            if (pbVar8 < pbVar17) goto LAB_14030c57e;
            bVar4 = *pbVar1;
            uVar9 = (ulonglong)bVar4;
            if (pbVar19 < pbVar15 + uVar9) goto LAB_14030c57e;
            if (bVar4 != 0) {
              FUN_1404217a0(pbVar15,bVar18,bVar4);
              do {
                pbVar15 = pbVar15 + 1;
                bVar18 = (char)uVar9 - 1;
                uVar9 = (ulonglong)bVar18;
              } while (bVar18 != 0);
            }
          }
          pbVar16 = pbVar17;
        } while (pbVar15 < pbVar19);
        pbVar15 = *(byte **)(lVar6 + 0x70);
      }
      if ((local_res20 != 0) && ((*pbVar15 & 0x40) != 0)) {
        *(uint *)(lVar6 + 0x38) = *(uint *)(lVar6 + 0x38) | 0x40;
      }
      piVar14 = *(int **)(lVar6 + 0x68);
      iVar21 = 0;
      pbVar19 = *(byte **)(lVar6 + 0x70);
      piVar3 = piVar14 + lVar22 * 2;
      for (; piVar14 < piVar3; piVar14 = piVar14 + 2) {
        bVar18 = *pbVar19;
        if ((bVar18 & 2) == 0) {
          pbVar15 = pbVar17;
          uVar12 = 0;
          if ((bVar18 & 0x10) == 0) {
            pbVar15 = pbVar17 + 2;
            if (pbVar8 < pbVar15) goto LAB_14030c57e;
            uVar12 = (int)(short)((ushort)*pbVar17 << 8) | (uint)pbVar17[1];
          }
        }
        else {
          pbVar15 = pbVar17 + 1;
          if (pbVar8 < pbVar15) goto LAB_14030c57e;
          uVar12 = -(uint)*pbVar17;
          if ((bVar18 & 0x10) != 0) {
            uVar12 = (uint)*pbVar17;
          }
        }
        iVar21 = iVar21 + uVar12;
        pbVar19 = pbVar19 + 1;
        *piVar14 = iVar21;
        pbVar17 = pbVar15;
      }
      uVar20 = *(ulonglong *)(lVar6 + 0x68);
      iVar21 = 0;
      pbVar19 = *(byte **)(lVar6 + 0x70);
      uVar9 = uVar20 + lVar22 * 8;
      for (; uVar20 < uVar9; uVar20 = uVar20 + 8) {
        bVar18 = *pbVar19;
        if ((bVar18 & 4) == 0) {
          pbVar15 = pbVar17;
          uVar12 = 0;
          if ((bVar18 & 0x20) == 0) {
            pbVar15 = pbVar17 + 2;
            if (pbVar8 < pbVar15) goto LAB_14030c57e;
            uVar12 = (int)(short)((ushort)*pbVar17 << 8) | (uint)pbVar17[1];
          }
        }
        else {
          pbVar15 = pbVar17 + 1;
          if (pbVar8 < pbVar15) goto LAB_14030c57e;
          uVar12 = -(uint)*pbVar17;
          if ((bVar18 & 0x20) != 0) {
            uVar12 = (uint)*pbVar17;
          }
        }
        iVar21 = iVar21 + uVar12;
        *(int *)(uVar20 + 4) = iVar21;
        *pbVar19 = bVar18 & 1;
        pbVar19 = pbVar19 + 1;
        pbVar17 = pbVar15;
      }
      *(ushort *)(lVar6 + 0x60) = uVar5;
      *(short *)(lVar6 + 0x62) = (short)local_res20;
      *(byte **)(param_1 + 0x108) = pbVar17;
      uVar9 = (ulonglong)local_res18[0];
    }
  }
  else {
LAB_14030c57e:
    uVar9 = 0x14;
  }
  return uVar9;
}

