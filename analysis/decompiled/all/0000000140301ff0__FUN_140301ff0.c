// Function: FUN_140301ff0
// Addr: 140301ff0
// Size: 2362 bytes


int FUN_140301ff0(undefined8 *param_1,int param_2)

{
  char cVar1;
  byte bVar2;
  ushort uVar3;
  ushort *puVar4;
  longlong lVar5;
  bool bVar6;
  bool bVar7;
  int iVar8;
  undefined8 uVar9;
  ulonglong uVar10;
  uint uVar11;
  ulonglong uVar12;
  byte *pbVar13;
  ushort *puVar14;
  short sVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  uint uVar19;
  int iVar20;
  int iVar21;
  short sVar22;
  int iVar23;
  int iVar24;
  uint local_res8;
  int local_res18;
  int local_res20;
  int local_148;
  int local_144;
  int local_140;
  int local_13c;
  int local_138;
  int local_134;
  uint local_130;
  uint local_12c;
  uint local_128;
  uint local_124;
  int local_120;
  int local_11c;
  byte *local_118;
  int local_110;
  ushort *local_108;
  undefined8 local_100;
  undefined8 *local_f8;
  undefined8 *local_e8;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  
  local_100 = *param_1;
  local_f8 = (undefined8 *)param_1[6];
  local_144 = 0;
  pbVar13 = (byte *)0x0;
  uStack_d0 = 0;
  uStack_a0 = 0;
  local_e8 = local_f8 + *(int *)((longlong)param_1 + 0x2c);
  local_a8 = 32000;
  local_12c = *(uint *)(param_1[0x230] + 0x40);
  *(undefined4 *)(param_1 + (longlong)param_2 * 0x113 + 9) = 0;
  local_d8 = 0;
  local_12c = local_12c / 0xe;
  local_138 = -*(int *)(param_1 + (longlong)param_2 * 0x113 + 0xd);
  if (-*(int *)(param_1 + (longlong)param_2 * 0x113 + 0xd) < 0) {
    local_138 = *(int *)(param_1 + (longlong)param_2 * 0x113 + 0xd);
  }
  uVar12 = param_1[4];
  uVar10 = (longlong)*(int *)((longlong)param_1 + 0x1c) * 0x30 + uVar12;
  if (param_2 == 0) {
    for (; uVar12 < uVar10; uVar12 = uVar12 + 0x30) {
      *(int *)(uVar12 + 0x18) = (int)*(short *)(uVar12 + 0xc);
      *(int *)(uVar12 + 0x1c) = (int)*(short *)(uVar12 + 0xe);
    }
  }
  else {
    for (; uVar12 < uVar10; uVar12 = uVar12 + 0x30) {
      *(int *)(uVar12 + 0x18) = (int)*(short *)(uVar12 + 0xe);
      *(int *)(uVar12 + 0x1c) = (int)*(short *)(uVar12 + 0xc);
    }
  }
  local_110 = local_138;
  iVar23 = 0;
  if (local_e8 <= local_f8) {
LAB_140302826:
    uVar12 = param_1[(longlong)param_2 * 0x113 + 10];
    if (uVar12 != 0) {
      uVar10 = uVar12 + (ulonglong)*(uint *)(param_1 + (longlong)param_2 * 0x113 + 9) * 0x48;
      for (; uVar12 < uVar10; uVar12 = uVar12 + 0x48) {
        lVar5 = *(longlong *)(uVar12 + 0x40);
        iVar16 = *(int *)(*(longlong *)(uVar12 + 0x38) + 0x1c);
        iVar17 = *(int *)(lVar5 + 0x1c);
        iVar21 = *(int *)(*(longlong *)(*(longlong *)(uVar12 + 0x38) + 0x28) + 0x1c);
        if (iVar16 < iVar17) {
          if (iVar21 < iVar16) {
            *(short *)(uVar12 + 10) = *(short *)(uVar12 + 10) + (short)(iVar16 - iVar21 >> 1);
          }
          iVar16 = *(int *)(*(longlong *)(lVar5 + 0x20) + 0x1c);
          if (iVar17 < iVar16) {
            *(short *)(uVar12 + 10) = *(short *)(uVar12 + 10) + (short)(iVar16 - iVar17 >> 1);
          }
        }
        else {
          if (iVar16 < iVar21) {
            *(short *)(uVar12 + 10) = *(short *)(uVar12 + 10) + (short)(iVar21 - iVar16 >> 1);
          }
          iVar16 = *(int *)(*(longlong *)(lVar5 + 0x20) + 0x1c);
          if (iVar16 < iVar17) {
            *(short *)(uVar12 + 10) = *(short *)(uVar12 + 10) + (short)(iVar17 - iVar16 >> 1);
          }
        }
      }
    }
    return iVar23;
  }
LAB_140302170:
  puVar4 = (ushort *)*local_f8;
  iVar16 = 32000;
  local_res18 = 32000;
  local_134 = -32000;
  uVar19 = 0;
  local_res20 = -32000;
  local_130 = 0;
  local_res8 = 0;
  bVar6 = false;
  local_118 = (byte *)0x0;
  iVar23 = -32000;
  iVar17 = 32000;
  local_140 = 32000;
  local_13c = -32000;
  iVar21 = -32000;
  local_128 = 0;
  local_124 = 0;
  local_120 = 32000;
  local_11c = -32000;
  puVar14 = puVar4;
  if ((*puVar4 & 0x40) == 0) {
    cVar1 = *(char *)(*(longlong *)(puVar4 + 0x14) + 3);
    iVar20 = -(int)cVar1;
    if (-1 < cVar1) {
      iVar20 = (int)cVar1;
    }
    if (iVar20 == local_138) {
      bVar2 = *(byte *)((longlong)puVar4 + 3);
      iVar20 = -(int)(char)bVar2;
      if (-1 < (char)bVar2) {
        iVar20 = (int)(char)bVar2;
      }
      if (iVar20 == local_138) {
        do {
          puVar14 = *(ushort **)(puVar14 + 0x14);
          bVar2 = *(byte *)((longlong)puVar14 + 3);
          iVar20 = -(int)(char)bVar2;
          if (-1 < (char)bVar2) {
            iVar20 = (int)(char)bVar2;
          }
          if (iVar20 != local_138) {
            puVar14 = *(ushort **)(puVar14 + 0x10);
            break;
          }
        } while (puVar14 != puVar4);
      }
    }
  }
  uVar11 = 0;
  bVar7 = false;
  iVar20 = -32000;
  iVar18 = 32000;
  local_108 = puVar14;
LAB_140302250:
  if (bVar6) {
    iVar24 = *(int *)(puVar14 + 0xc);
    iVar8 = iVar24;
    if (iVar16 <= iVar24) {
      iVar8 = iVar16;
    }
    iVar16 = iVar8;
    iVar8 = *(int *)(puVar14 + 0xe);
    if (iVar24 <= iVar20) {
      iVar24 = iVar20;
    }
    iVar20 = iVar24;
    uVar3 = *puVar14;
    if (iVar8 < iVar18) {
      uVar19 = (uint)uVar3;
      local_130 = (uint)uVar3;
      iVar18 = iVar8;
    }
    if (iVar23 < iVar8) {
      uVar11 = (uint)uVar3;
      local_res8 = (uint)uVar3;
      iVar23 = iVar8;
      local_134 = iVar8;
    }
    if ((uVar3 & 3) == 0) {
      if (iVar8 < iVar17) {
        iVar17 = iVar8;
      }
      if (iVar21 < iVar8) {
        iVar21 = iVar8;
      }
    }
    sVar22 = (short)iVar23;
    sVar15 = (short)iVar18;
    if ((uVar3 >> 6 & 1) != 0) {
LAB_1403024f4:
      *(ushort **)(pbVar13 + 0x40) = puVar14;
      *(short *)(pbVar13 + 2) = (short)(iVar16 + iVar20 >> 1);
      *(short *)(pbVar13 + 4) = (short)(iVar20 - iVar16 >> 1);
      if (((((byte)uVar11 | (byte)uVar19) & 3) != 0) && (iVar21 - iVar17 < (int)local_12c)) {
        *pbVar13 = *pbVar13 | 1;
      }
      *(short *)(pbVar13 + 6) = sVar15;
      *(short *)(pbVar13 + 8) = sVar22;
      *(short *)(pbVar13 + 10) = sVar22 - sVar15;
      local_128 = CONCAT22(local_128._2_2_,(short)uVar19);
      local_124 = CONCAT22(local_124._2_2_,(short)uVar11);
      local_res18 = iVar16;
      local_res20 = iVar20;
      local_140 = iVar18;
      local_13c = iVar23;
      local_120 = iVar17;
      local_11c = iVar21;
      local_118 = pbVar13;
LAB_14030256c:
      bVar6 = false;
      pbVar13 = (byte *)0x0;
      goto LAB_14030257e;
    }
    if (((char)*(byte *)((longlong)puVar14 + 3) != local_110) || (puVar14 == local_108)) {
      if ((local_118 == (byte *)0x0) ||
         (*(longlong *)(pbVar13 + 0x38) != *(longlong *)(local_118 + 0x40))) goto LAB_1403024f4;
      if (*(byte *)(*(longlong *)(local_118 + 0x40) + 2) == (byte)puVar14[1]) {
        if (local_res18 < iVar16) {
          iVar16 = local_res18;
        }
        if (iVar20 < local_res20) {
          iVar20 = local_res20;
        }
        if (local_140 < iVar18) {
          uVar19 = local_128 & 0xffff;
          local_130 = local_128 & 0xffff;
          iVar18 = local_140;
        }
        if (iVar23 < local_13c) {
          uVar11 = local_124 & 0xffff;
          local_res8 = local_124 & 0xffff;
          local_134 = local_13c;
          iVar23 = local_13c;
        }
        *(ushort **)(local_118 + 0x40) = puVar14;
        if (local_120 < iVar17) {
          iVar17 = local_120;
        }
        if (iVar21 < local_11c) {
          iVar21 = local_11c;
        }
        *(short *)(local_118 + 2) = (short)(iVar20 + iVar16 >> 1);
        *(short *)(local_118 + 4) = (short)(iVar20 - iVar16 >> 1);
        if (((((byte)uVar11 | (byte)uVar19) & 3) == 0) || ((int)local_12c <= iVar21 - iVar17)) {
          *local_118 = *local_118 & 0xfe;
        }
        else {
          *local_118 = *local_118 | 1;
        }
        *(short *)(local_118 + 6) = (short)iVar18;
        *(short *)(local_118 + 8) = (short)iVar23;
        *(short *)(local_118 + 10) = (short)iVar23 - (short)iVar18;
        *(int *)(param_1 + (longlong)param_2 * 0x113 + 9) =
             *(int *)(param_1 + (longlong)param_2 * 0x113 + 9) + -1;
      }
      else {
        iVar24 = -(local_13c - local_140);
        if (iVar24 < 0) {
          iVar24 = local_13c - local_140;
        }
        iVar8 = -(iVar23 - iVar18);
        if (iVar8 < 0) {
          iVar8 = iVar23 - iVar18;
        }
        uVar11 = local_res8;
        if (iVar8 < iVar24) {
          if (iVar16 < local_res18) {
            local_res18 = iVar16;
          }
          *(ushort **)(local_118 + 0x40) = puVar14;
          if (local_res20 < iVar20) {
            local_res20 = iVar20;
          }
          *(short *)(local_118 + 2) = (short)(local_res20 + local_res18 >> 1);
          *(short *)(local_118 + 4) = (short)(local_res20 - local_res18 >> 1);
          *(int *)(param_1 + (longlong)param_2 * 0x113 + 9) =
               *(int *)(param_1 + (longlong)param_2 * 0x113 + 9) + -1;
        }
        else {
          *(ushort **)(pbVar13 + 0x40) = puVar14;
          if (local_res18 < iVar16) {
            iVar16 = local_res18;
          }
          if (iVar20 < local_res20) {
            iVar20 = local_res20;
          }
          *(short *)(pbVar13 + 2) = (short)(iVar20 + iVar16 >> 1);
          *(short *)(pbVar13 + 4) = (short)(iVar20 - iVar16 >> 1);
          if (((((byte)local_res8 | (byte)uVar19) & 3) != 0) && (iVar21 - iVar17 < (int)local_12c))
          {
            *pbVar13 = *pbVar13 | 1;
          }
          *(short *)(pbVar13 + 6) = sVar15;
          *(short *)(pbVar13 + 8) = sVar22;
          *(short *)(pbVar13 + 10) = sVar22 - sVar15;
          uVar9 = *(undefined8 *)(pbVar13 + 8);
          *(undefined8 *)local_118 = *(undefined8 *)pbVar13;
          *(undefined8 *)(local_118 + 8) = uVar9;
          uVar9 = *(undefined8 *)(pbVar13 + 0x18);
          local_128 = CONCAT22(local_128._2_2_,(short)uVar19);
          *(undefined8 *)(local_118 + 0x10) = *(undefined8 *)(pbVar13 + 0x10);
          *(undefined8 *)(local_118 + 0x18) = uVar9;
          local_124 = CONCAT22(local_124._2_2_,(short)local_res8);
          uVar9 = *(undefined8 *)(pbVar13 + 0x28);
          *(undefined8 *)(local_118 + 0x20) = *(undefined8 *)(pbVar13 + 0x20);
          *(undefined8 *)(local_118 + 0x28) = uVar9;
          uVar9 = *(undefined8 *)(pbVar13 + 0x38);
          *(undefined8 *)(local_118 + 0x30) = *(undefined8 *)(pbVar13 + 0x30);
          *(undefined8 *)(local_118 + 0x38) = uVar9;
          *(undefined8 *)(local_118 + 0x40) = *(undefined8 *)(pbVar13 + 0x40);
          *(int *)(param_1 + (longlong)param_2 * 0x113 + 9) =
               *(int *)(param_1 + (longlong)param_2 * 0x113 + 9) + -1;
          local_res18 = iVar16;
          local_res20 = iVar20;
          local_140 = iVar18;
          local_13c = iVar23;
          local_120 = iVar17;
          local_11c = iVar21;
        }
      }
      goto LAB_14030256c;
    }
  }
  else {
LAB_14030257e:
    if (puVar14 == local_108) {
      if (bVar7) goto LAB_1403027ff;
      bVar7 = true;
    }
  }
  if (((*puVar14 & 0x40) != 0) || (bVar6)) {
LAB_1403027e4:
    puVar14 = *(ushort **)(puVar14 + 0x10);
  }
  else {
    bVar2 = *(byte *)((longlong)puVar14 + 3);
    iVar24 = (int)(char)bVar2;
    iVar23 = -iVar24;
    if (-1 < (char)bVar2) {
      iVar23 = iVar24;
    }
    if ((iVar23 != local_138) &&
       (iVar23 = local_134, uVar19 = local_130, puVar14 != *(ushort **)(puVar14 + 0x14)))
    goto LAB_1403027e4;
    uVar19 = *(uint *)(param_1 + (longlong)param_2 * 0x113 + 9);
    if (1000 < uVar19) {
      *(undefined4 *)(param_1 + (longlong)param_2 * 0x113 + 9) = 0;
      return 0;
    }
    local_144 = 0;
    local_148 = 0;
    if (uVar19 < 0x12) {
      if (param_1[(longlong)param_2 * 0x113 + 10] == 0) {
        *(undefined4 *)((longlong)param_1 + (longlong)param_2 * 0x898 + 0x4c) = 0x12;
        param_1[(longlong)param_2 * 0x113 + 10] = param_1 + (longlong)param_2 * 0x113 + 0xe;
      }
LAB_1403026f8:
      pbVar13 = (byte *)(param_1[(longlong)param_2 * 0x113 + 10] +
                        (ulonglong)*(uint *)(param_1 + (longlong)param_2 * 0x113 + 9) * 0x48);
      *(uint *)(param_1 + (longlong)param_2 * 0x113 + 9) =
           *(uint *)(param_1 + (longlong)param_2 * 0x113 + 9) + 1;
    }
    else {
      uVar11 = *(uint *)((longlong)param_1 + (longlong)param_2 * 0x898 + 0x4c);
      if (uVar19 < uVar11) goto LAB_1403026f8;
      pbVar13 = (byte *)0x0;
      if (uVar11 < 0x1c71c71) {
        uVar19 = (uVar11 >> 2) + 4 + uVar11;
        if ((uVar19 < uVar11) || (0x1c71c71 < uVar19)) {
          uVar19 = 0x1c71c71;
        }
        if ((undefined8 *)param_1[(longlong)param_2 * 0x113 + 10] ==
            param_1 + (longlong)param_2 * 0x113 + 0xe) {
          uVar9 = FUN_1402f80b0(local_100,0x48,0,uVar19,0,&local_148);
          param_1[(longlong)param_2 * 0x113 + 10] = uVar9;
          local_144 = local_148;
          if (local_148 != 0) {
            return local_148;
          }
          FUN_1404210f0(uVar9,param_1 + (longlong)param_2 * 0x113 + 0xe,0x510);
          local_144 = local_148;
        }
        else {
          uVar9 = FUN_1402f80b0(local_100,0x48,uVar11,uVar19,
                                (undefined8 *)param_1[(longlong)param_2 * 0x113 + 10],&local_148);
          param_1[(longlong)param_2 * 0x113 + 10] = uVar9;
          local_144 = 0;
          if (local_148 != 0) {
            return local_148;
          }
        }
        *(uint *)((longlong)param_1 + (longlong)param_2 * 0x898 + 0x4c) = uVar19;
        goto LAB_1403026f8;
      }
      local_144 = 0x40;
    }
    if (local_144 != 0) {
      return local_144;
    }
    pbVar13[0] = 0;
    pbVar13[1] = 0;
    pbVar13[2] = 0;
    pbVar13[3] = 0;
    pbVar13[4] = 0;
    pbVar13[5] = 0;
    pbVar13[6] = 0;
    pbVar13[7] = 0;
    pbVar13[8] = 0;
    pbVar13[9] = 0;
    pbVar13[10] = 0;
    pbVar13[0xb] = 0;
    pbVar13[0xc] = 0;
    pbVar13[0xd] = 0;
    pbVar13[0xe] = 0;
    pbVar13[0xf] = 0;
    pbVar13[0x10] = 0;
    pbVar13[0x11] = 0;
    pbVar13[0x12] = 0;
    pbVar13[0x13] = 0;
    pbVar13[0x14] = 0;
    pbVar13[0x15] = 0;
    pbVar13[0x16] = 0;
    pbVar13[0x17] = 0;
    pbVar13[0x18] = 0;
    pbVar13[0x19] = 0;
    pbVar13[0x1a] = 0;
    pbVar13[0x1b] = 0;
    pbVar13[0x1c] = 0;
    pbVar13[0x1d] = 0;
    pbVar13[0x1e] = 0;
    pbVar13[0x1f] = 0;
    pbVar13[0x20] = 0;
    pbVar13[0x21] = 0;
    pbVar13[0x22] = 0;
    pbVar13[0x23] = 0;
    pbVar13[0x24] = 0;
    pbVar13[0x25] = 0;
    pbVar13[0x26] = 0;
    pbVar13[0x27] = 0;
    pbVar13[0x28] = 0;
    pbVar13[0x29] = 0;
    pbVar13[0x2a] = 0;
    pbVar13[0x2b] = 0;
    pbVar13[0x2c] = 0;
    pbVar13[0x2d] = 0;
    pbVar13[0x2e] = 0;
    pbVar13[0x2f] = 0;
    pbVar13[0x30] = 0;
    pbVar13[0x31] = 0x7d;
    pbVar13[0x32] = 0;
    pbVar13[0x33] = 0;
    pbVar13[0x34] = 0;
    pbVar13[0x35] = 0;
    pbVar13[0x36] = 0;
    pbVar13[0x37] = 0;
    pbVar13[0x38] = 0;
    pbVar13[0x39] = 0;
    pbVar13[0x3a] = 0;
    pbVar13[0x3b] = 0;
    pbVar13[0x3c] = 0;
    pbVar13[0x3d] = 0;
    pbVar13[0x3e] = 0;
    pbVar13[0x3f] = 0;
    pbVar13[1] = bVar2;
    *(ushort **)(pbVar13 + 0x38) = puVar14;
    *(ushort **)(pbVar13 + 0x40) = puVar14;
    if (local_118 != (byte *)0x0) {
      local_118 = pbVar13 + -0x48;
    }
    uVar3 = *puVar14;
    iVar23 = *(int *)(puVar14 + 0xe);
    uVar11 = (uint)uVar3;
    iVar16 = *(int *)(puVar14 + 0xc);
    uVar19 = (uint)uVar3;
    local_res8 = (uint)uVar3;
    local_130 = (uint)uVar3;
    iVar17 = iVar23;
    iVar21 = iVar23;
    if ((uVar3 & 3) != 0) {
      iVar17 = 32000;
      iVar21 = -32000;
    }
    bVar6 = true;
    iVar20 = iVar16;
    iVar18 = iVar23;
    local_134 = iVar23;
    local_110 = iVar24;
    if (puVar14 != *(ushort **)(puVar14 + 0x14)) goto LAB_1403027e4;
    *(short *)(pbVar13 + 2) = (short)iVar16;
    if ((*puVar14 & 3) != 0) {
      *pbVar13 = *pbVar13 | 1;
    }
    bVar6 = false;
    *(ushort *)(pbVar13 + 6) = puVar14[0xe];
    *(ushort *)(pbVar13 + 8) = puVar14[0xe];
    pbVar13[10] = 0;
    pbVar13[0xb] = 0;
    pbVar13 = (byte *)0x0;
    puVar14 = *(ushort **)(puVar14 + 0x10);
  }
  goto LAB_140302250;
LAB_1403027ff:
  local_f8 = local_f8 + 1;
  iVar23 = local_144;
  if (local_e8 <= local_f8) goto LAB_140302826;
  goto LAB_140302170;
}

