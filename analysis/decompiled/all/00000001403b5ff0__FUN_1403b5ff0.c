// Function: FUN_1403b5ff0
// Addr: 1403b5ff0
// Size: 2106 bytes


void FUN_1403b5ff0(longlong *param_1,undefined4 *param_2)

{
  longlong lVar1;
  bool bVar2;
  undefined4 uVar3;
  bool bVar4;
  byte bVar5;
  uint uVar6;
  undefined4 uVar7;
  uint uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  int iVar11;
  byte *pbVar12;
  byte *pbVar13;
  int iVar14;
  byte *pbVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  uint uVar19;
  byte bVar20;
  short sVar21;
  
  uVar7 = *(undefined4 *)((longlong)param_1 + 0xc);
  lVar1 = param_1[2];
  uVar3 = *(undefined4 *)((longlong)param_1 + 0x14);
  *param_2 = (int)param_1[1];
  param_2[1] = uVar7;
  param_2[2] = (int)lVar1;
  param_2[3] = uVar3;
  uVar7 = *(undefined4 *)((longlong)param_1 + 0x1c);
  lVar1 = param_1[4];
  uVar3 = *(undefined4 *)((longlong)param_1 + 0x24);
  param_2[4] = (int)param_1[3];
  param_2[5] = uVar7;
  param_2[6] = (int)lVar1;
  param_2[7] = uVar3;
  *(longlong *)(param_2 + 8) = param_1[0x20];
  FUN_1403b54d0(param_1 + 5,param_2 + 10);
  if ((*(byte *)(param_1 + 0x1f) & 1) != 0) {
    FUN_1403b4b60(param_1 + 0x15,param_2 + 0x22);
  }
  iVar18 = 0;
  lVar1 = *(longlong *)(param_2 + 0x10);
  iVar14 = param_2[0xf] + -1;
  iVar11 = iVar14;
  if (-1 < iVar14) {
    do {
      uVar6 = (uint)(iVar11 + iVar18) >> 1;
      uVar19 = *(uint *)(lVar1 + (ulonglong)uVar6 * 0x24);
      if (uVar19 < 0x66726164) {
        if (0x66726162 < uVar19) {
          iVar11 = *(int *)(lVar1 + (ulonglong)uVar6 * 0x24 + 0x1c);
          goto LAB_1403b609c;
        }
        iVar18 = uVar6 + 1;
      }
      else {
        iVar11 = uVar6 - 1;
      }
    } while (iVar18 <= iVar11);
  }
  iVar11 = 0;
LAB_1403b609c:
  iVar16 = 0;
  param_2[0x28] = iVar11;
  iVar18 = iVar14;
  if (-1 < iVar14) {
    do {
      uVar6 = (uint)(iVar18 + iVar16) >> 1;
      uVar19 = *(uint *)(lVar1 + (ulonglong)uVar6 * 0x24);
      if (uVar19 < 0x6e756d73) {
        if (0x6e756d71 < uVar19) {
          iVar18 = *(int *)(lVar1 + (ulonglong)uVar6 * 0x24 + 0x1c);
          goto LAB_1403b60e2;
        }
        iVar16 = uVar6 + 1;
      }
      else {
        iVar18 = uVar6 - 1;
      }
    } while (iVar16 <= iVar18);
  }
  iVar18 = 0;
LAB_1403b60e2:
  iVar17 = 0;
  param_2[0x29] = iVar18;
  iVar16 = iVar14;
  if (-1 < iVar14) {
    do {
      uVar6 = (uint)(iVar16 + iVar17) >> 1;
      uVar19 = *(uint *)(lVar1 + (ulonglong)uVar6 * 0x24);
      if (uVar19 < 0x646e6f6e) {
        if (0x646e6f6c < uVar19) {
          iVar16 = *(int *)(lVar1 + (ulonglong)uVar6 * 0x24 + 0x1c);
          goto LAB_1403b6123;
        }
        iVar17 = uVar6 + 1;
      }
      else {
        iVar16 = uVar6 - 1;
      }
    } while (iVar17 <= iVar16);
  }
  iVar16 = 0;
LAB_1403b6123:
  param_2[0x2a] = iVar16;
  if ((iVar11 == 0) && ((iVar18 == 0 || (iVar16 == 0)))) {
    bVar5 = 0;
  }
  else {
    bVar5 = 2;
  }
  *(byte *)(param_2 + 0x2d) = *(byte *)(param_2 + 0x2d) & 0xfd;
  iVar18 = 0;
  *(byte *)(param_2 + 0x2d) = *(byte *)(param_2 + 0x2d) | bVar5;
  bVar5 = *(byte *)(param_2 + 0x2d);
  iVar11 = iVar14;
  if (-1 < iVar14) {
    do {
      uVar6 = (uint)(iVar11 + iVar18) >> 1;
      uVar19 = *(uint *)(lVar1 + (ulonglong)uVar6 * 0x24);
      if (uVar19 < 0x72746c6e) {
        if (0x72746c6c < uVar19) {
          uVar7 = *(undefined4 *)(lVar1 + (ulonglong)uVar6 * 0x24 + 0x1c);
          goto LAB_1403b618c;
        }
        iVar18 = uVar6 + 1;
      }
      else {
        iVar11 = uVar6 - 1;
      }
    } while (iVar18 <= iVar11);
  }
  uVar7 = 0;
LAB_1403b618c:
  iVar18 = 0;
  param_2[0x2b] = uVar7;
  iVar11 = iVar14;
  if (-1 < iVar14) {
    do {
      uVar6 = (uint)(iVar11 + iVar18) >> 1;
      uVar19 = *(uint *)(lVar1 + (ulonglong)uVar6 * 0x24);
      if (uVar19 < 0x76657275) {
        if (0x76657273 < uVar19) {
          iVar11 = *(int *)(lVar1 + (ulonglong)uVar6 * 0x24 + 0x1c);
          goto LAB_1403b61d1;
        }
        iVar18 = uVar6 + 1;
      }
      else {
        iVar11 = uVar6 - 1;
      }
    } while (iVar18 <= iVar11);
  }
  iVar11 = 0;
LAB_1403b61d1:
  bVar20 = -(iVar11 != 0) & 4;
  *(byte *)(param_2 + 0x2d) = bVar20 | bVar5 & 0xfb;
  uVar19 = 0x766b726e;
  if ((*(uint *)(param_1 + 1) & 0xfffffffe) == 4) {
    uVar19 = 0x6b65726e;
  }
  iVar18 = 0;
  iVar11 = iVar14;
  if (-1 < iVar14) {
    do {
      uVar8 = (uint)(iVar11 + iVar18) >> 1;
      uVar6 = *(uint *)(lVar1 + (ulonglong)uVar8 * 0x24);
      if (uVar19 < uVar6) {
        iVar11 = uVar8 - 1;
      }
      else {
        if (uVar19 <= uVar6) {
          iVar11 = *(int *)(lVar1 + (ulonglong)uVar8 * 0x24 + 0x18);
          goto LAB_1403b623e;
        }
        iVar18 = uVar8 + 1;
      }
    } while (iVar18 <= iVar11);
  }
  iVar11 = 0;
LAB_1403b623e:
  param_2[0x2c] = iVar11;
  iVar18 = 0;
  *(byte *)(param_2 + 0x2d) = iVar11 != 0 | bVar20 | bVar5 & 0xfa;
  if (-1 < iVar14) {
    do {
      uVar8 = (uint)(iVar14 + iVar18) >> 1;
      uVar6 = *(uint *)(lVar1 + (ulonglong)uVar8 * 0x24);
      if (uVar19 < uVar6) {
        iVar14 = uVar8 - 1;
      }
      else {
        if (uVar19 <= uVar6) {
          iVar11 = *(int *)(lVar1 + (ulonglong)uVar8 * 0x24 + 8);
          goto LAB_1403b6290;
        }
        iVar18 = uVar8 + 1;
      }
    } while (iVar18 <= iVar14);
  }
  iVar11 = 0xffff;
LAB_1403b6290:
  if ((*(int *)(*(longlong *)(param_2 + 8) + 0x50) == 0) ||
     (*(int *)(*(longlong *)(param_2 + 8) + 0x50) == param_2[0xb])) {
    bVar4 = false;
  }
  else {
    bVar4 = true;
  }
  puVar9 = (undefined8 *)FUN_1403c4e30(*param_1 + 0x138);
  pbVar15 = (byte *)&DAT_14045dd10;
  puVar10 = &DAT_14045dd10;
  if ((undefined8 *)*puVar9 != (undefined8 *)0x0) {
    puVar10 = (undefined8 *)*puVar9;
  }
  if (*(uint *)(puVar10 + 3) < 4) {
    pbVar12 = (byte *)&DAT_14045dd10;
  }
  else {
    pbVar12 = (byte *)puVar10[2];
  }
  if (((uint)pbVar12[1] + (uint)*pbVar12 * 0x100 != 1) ||
     ((ushort)((ushort)pbVar12[5] + (ushort)pbVar12[4] * 0x100) == 0)) {
    *(byte *)(param_2 + 0x2d) = *(byte *)(param_2 + 0x2d) | 0x20;
  }
  *(byte *)((longlong)param_2 + 0xb5) =
       ((char)param_1[0x1f] << 4 ^ *(byte *)((longlong)param_2 + 0xb5)) & 0x10 ^
       *(byte *)((longlong)param_2 + 0xb5);
  puVar9 = (undefined8 *)FUN_1403c5570(*param_1 + 0x168);
  puVar10 = &DAT_14045dd10;
  if ((undefined8 *)*puVar9 != (undefined8 *)0x0) {
    puVar10 = (undefined8 *)*puVar9;
  }
  if (*(uint *)(puVar10 + 3) < 8) {
    pbVar12 = (byte *)&DAT_14045dd10;
  }
  else {
    pbVar12 = (byte *)puVar10[2];
  }
  sVar21 = (ushort)pbVar12[1] + (ushort)*pbVar12 * 0x100;
  if (((*(byte *)(param_1 + 0x1f) & 1) == 0) && (iVar18 = FUN_1404175e0(), iVar18 != 0)) {
    bVar2 = true;
  }
  else {
    bVar2 = false;
  }
  if (bVar4) {
LAB_1403b63e7:
    bVar4 = false;
  }
  else {
    puVar9 = (undefined8 *)FUN_1403c4ed0(*param_1 + 0x148);
    puVar10 = &DAT_14045dd10;
    if ((undefined8 *)*puVar9 != (undefined8 *)0x0) {
      puVar10 = (undefined8 *)*puVar9;
    }
    if (*(uint *)(puVar10 + 3) < 4) {
      pbVar12 = (byte *)&DAT_14045dd10;
    }
    else {
      pbVar12 = (byte *)puVar10[2];
    }
    if ((((uint)pbVar12[1] + (uint)*pbVar12 * 0x100) * 0x100 + (uint)pbVar12[2]) * 0x100 +
        (uint)pbVar12[3] == 0) goto LAB_1403b63e7;
    bVar4 = true;
  }
  if (sVar21 == 0) {
    if (bVar4) goto LAB_1403b640a;
  }
  else if ((bVar2) && (bVar4)) {
LAB_1403b640a:
    *(byte *)((longlong)param_2 + 0xb5) = *(byte *)((longlong)param_2 + 0xb5) | 1;
  }
  else {
    *(byte *)((longlong)param_2 + 0xb5) = *(byte *)((longlong)param_2 + 0xb5) | 8;
  }
  bVar5 = *(byte *)((longlong)param_2 + 0xb5);
  if (((bVar5 & 8) == 0) && ((iVar11 == 0xffff || ((bVar5 & 1) == 0)))) {
    if (sVar21 == 0) {
      puVar9 = (undefined8 *)FUN_1403c54d0(*param_1 + 0x130);
      puVar10 = &DAT_14045dd10;
      if ((undefined8 *)*puVar9 != (undefined8 *)0x0) {
        puVar10 = (undefined8 *)*puVar9;
      }
      if (*(uint *)(puVar10 + 3) < 4) {
        pbVar12 = (byte *)&DAT_14045dd10;
      }
      else {
        pbVar12 = (byte *)puVar10[2];
      }
      if ((uint)pbVar12[1] * 0x10000 + (uint)pbVar12[2] * 0x100 + (uint)*pbVar12 * 0x1000000 +
          (uint)pbVar12[3] != 0) {
        *(byte *)((longlong)param_2 + 0xb5) =
             (*(byte *)(param_1 + 0x1f) >> 1 ^ *(byte *)((longlong)param_2 + 0xb5)) & 2 ^
             *(byte *)((longlong)param_2 + 0xb5);
      }
    }
    else {
      *(byte *)((longlong)param_2 + 0xb5) = bVar5 | 8;
    }
  }
  bVar5 = *(byte *)((longlong)param_2 + 0xb5);
  if (((*(byte *)(param_1 + 0x1f) & 4) == 0) || ((bVar5 & 0xb) != 0)) {
    bVar20 = 0;
  }
  else {
    bVar20 = 4;
  }
  *(byte *)((longlong)param_2 + 0xb5) = bVar5 & 0xfb | bVar20;
  if (((*(byte *)(param_1 + 0x1f) & 2) == 0) || ((bVar5 & 8) != 0)) goto LAB_1403b65e6;
  if ((bVar5 & 2) != 0) {
    puVar9 = (undefined8 *)FUN_1403c54d0(*param_1 + 0x130);
    puVar10 = &DAT_14045dd10;
    if ((undefined8 *)*puVar9 != (undefined8 *)0x0) {
      puVar10 = (undefined8 *)*puVar9;
    }
    pbVar12 = (byte *)&DAT_14045dd10;
    if (3 < *(uint *)(puVar10 + 3)) {
      pbVar12 = (byte *)puVar10[2];
    }
    iVar11 = (uint)pbVar12[1] + (uint)*pbVar12 * 0x100;
    if (iVar11 == 0) {
      pbVar13 = pbVar12 + 4;
      uVar19 = 0;
      uVar6 = (uint)pbVar12[3] + (uint)pbVar12[2] * 0x100;
      if (uVar6 != 0) {
        do {
          if (pbVar13[4] == 1) goto LAB_1403b65e2;
          uVar19 = uVar19 + 1;
          pbVar13 = pbVar13 + (ulonglong)pbVar13[3] + (ulonglong)pbVar13[2] * 0x100;
        } while (uVar19 < uVar6);
      }
    }
    else {
      if (iVar11 != 1) goto LAB_1403b65a1;
      pbVar13 = pbVar12 + 8;
      uVar6 = 0;
      uVar19 = (uint)pbVar12[5] * 0x10000 + (uint)pbVar12[6] * 0x100 + (uint)pbVar12[4] * 0x1000000
               + (uint)pbVar12[7];
      if (uVar19 != 0) {
        do {
          if (pbVar13[5] == 1) goto LAB_1403b65e2;
          uVar6 = uVar6 + 1;
          pbVar13 = pbVar13 + ((ulonglong)CONCAT11(*pbVar13,pbVar13[1]) * 0x100 +
                              (ulonglong)pbVar13[2]) * 0x100 + (ulonglong)pbVar13[3];
        } while (uVar6 < uVar19);
      }
    }
    bVar4 = false;
    goto LAB_1403b659d;
  }
LAB_1403b65a1:
  bVar5 = 0x10;
LAB_1403b65e8:
  bVar20 = *(byte *)(param_2 + 0x2d);
  iVar18 = 0;
  *(byte *)(param_2 + 0x2d) = bVar20 & 0xef | bVar5;
  iVar11 = param_2[0xf] + -1;
  if (-1 < iVar11) {
    do {
      uVar6 = (uint)(iVar11 + iVar18) >> 1;
      uVar19 = *(uint *)(*(longlong *)(param_2 + 0x10) + (ulonglong)uVar6 * 0x24);
      if (uVar19 < 0x6d61726c) {
        if (0x6d61726a < uVar19) {
          iVar11 = *(int *)(*(longlong *)(param_2 + 0x10) + (ulonglong)uVar6 * 0x24 + 0x1c);
          goto LAB_1403b6640;
        }
        iVar18 = uVar6 + 1;
      }
      else {
        iVar11 = uVar6 - 1;
      }
    } while (iVar18 <= iVar11);
  }
  iVar11 = 0;
LAB_1403b6640:
  *(byte *)(param_2 + 0x2d) = -(iVar11 != 0) & 8U | bVar20 & 0xe7 | bVar5;
  if ((*(byte *)((longlong)param_2 + 0xb5) & 9) == 0) {
    if ((*(byte *)((longlong)param_2 + 0xb5) & 2) != 0) {
      puVar9 = (undefined8 *)FUN_1403c54d0(*param_1 + 0x130);
      puVar10 = &DAT_14045dd10;
      if ((undefined8 *)*puVar9 != (undefined8 *)0x0) {
        puVar10 = (undefined8 *)*puVar9;
      }
      if (3 < *(uint *)(puVar10 + 3)) {
        pbVar15 = (byte *)puVar10[2];
      }
      iVar11 = (uint)*pbVar15 * 0x100 + (uint)pbVar15[1];
      if (iVar11 == 0) {
        pbVar12 = pbVar15 + 4;
        uVar19 = 0;
        uVar6 = (uint)pbVar15[3] + (uint)pbVar15[2] * 0x100;
        if (uVar6 != 0) {
          do {
            if ((pbVar12[5] & 4) != 0) goto LAB_1403b6759;
            uVar19 = uVar19 + 1;
            pbVar12 = pbVar12 + (ulonglong)pbVar12[3] + (ulonglong)pbVar12[2] * 0x100;
          } while (uVar19 < uVar6);
        }
      }
      else {
        if (iVar11 != 1) goto LAB_1403b670f;
        pbVar12 = pbVar15 + 8;
        uVar19 = 0;
        uVar6 = (uint)pbVar15[5] * 0x10000 + (uint)pbVar15[6] * 0x100 + (uint)pbVar15[4] * 0x1000000
                + (uint)pbVar15[7];
        if (uVar6 != 0) {
          do {
            if ((pbVar12[4] & 0x40) != 0) goto LAB_1403b6759;
            uVar19 = uVar19 + 1;
            pbVar12 = pbVar12 + ((ulonglong)CONCAT11(*pbVar12,pbVar12[1]) * 0x100 +
                                (ulonglong)pbVar12[2]) * 0x100 + (ulonglong)pbVar12[3];
          } while (uVar19 < uVar6);
        }
      }
      bVar4 = false;
LAB_1403b670b:
      if (bVar4) goto LAB_1403b675d;
    }
LAB_1403b670f:
    bVar5 = 0x80;
  }
  else {
LAB_1403b675d:
    bVar5 = 0;
  }
  *(byte *)(param_2 + 0x2d) = *(byte *)(param_2 + 0x2d) & 0x7f;
  pbVar15 = (byte *)(param_2 + 0x2d);
  *pbVar15 = *pbVar15 | bVar5;
  bVar5 = *(byte *)(param_2 + 0x2d);
  if (((char)*pbVar15 < '\0') && ((*(byte *)(param_1 + 0x1f) & 4) != 0)) {
    bVar20 = 0x40;
  }
  else {
    bVar20 = 0;
  }
  *(byte *)(param_2 + 0x2d) = bVar5 & 0xbf | bVar20;
  if ((*(byte *)((longlong)param_2 + 0xb5) & 0x10) != 0) {
    *(byte *)(param_2 + 0x2d) = bVar5 & 0x3f | bVar20;
  }
  pbVar15 = (byte *)FUN_1403c5750(*param_1 + 0x178);
  if (((((uint)pbVar15[1] + (uint)*pbVar15 * 0x100) * 0x100 + (uint)pbVar15[2]) * 0x100 +
       (uint)pbVar15[3] != 0) &&
     (pbVar15 = (byte *)FUN_1403981f0(*param_1 + 0xb8),
     (((uint)pbVar15[1] + (uint)*pbVar15 * 0x100) * 0x100 + (uint)pbVar15[2]) * 0x100 +
     (uint)pbVar15[3] != 0)) {
    *(byte *)((longlong)param_2 + 0xb5) = *(byte *)((longlong)param_2 + 0xb5) & 0xdf;
    *(byte *)((longlong)param_2 + 0xb5) = *(byte *)((longlong)param_2 + 0xb5) | 0x20;
    return;
  }
  *(byte *)((longlong)param_2 + 0xb5) = *(byte *)((longlong)param_2 + 0xb5) & 0xdf;
  return;
LAB_1403b65e2:
  bVar4 = true;
LAB_1403b659d:
  if (!bVar4) goto LAB_1403b65a1;
LAB_1403b65e6:
  bVar5 = 0;
  goto LAB_1403b65e8;
LAB_1403b6759:
  bVar4 = true;
  goto LAB_1403b670b;
}

