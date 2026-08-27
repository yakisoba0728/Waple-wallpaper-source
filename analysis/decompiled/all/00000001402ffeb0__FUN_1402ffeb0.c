// Function: FUN_1402ffeb0
// Addr: 1402ffeb0
// Size: 1991 bytes


int FUN_1402ffeb0(undefined8 *param_1,ushort *param_2)

{
  char cVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ushort *puVar9;
  undefined8 *puVar10;
  longlong lVar11;
  undefined8 *puVar12;
  ushort *puVar13;
  undefined1 uVar14;
  int iVar15;
  byte *pbVar16;
  uint uVar17;
  uint uVar18;
  ushort *puVar19;
  ushort *puVar20;
  ushort *puVar21;
  ushort *puVar22;
  int iVar23;
  ulonglong uVar24;
  int local_res10 [2];
  int local_res18;
  uint local_res20;
  
  iVar23 = *(int *)((longlong)param_1 + 0xc);
  local_res18 = *(int *)((longlong)param_1 + 0x14);
  iVar15 = *(int *)(param_1 + 1);
  iVar6 = *(int *)(param_1 + 2);
  uVar8 = *param_1;
  *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  *(undefined4 *)(param_1 + 0x11c) = 0;
  *(undefined4 *)(param_1 + 0x11e) = 0;
  uVar2 = *param_2;
  local_res10[0] = 0;
  if (uVar2 < 9) {
    if (param_1[6] == 0) {
      *(undefined4 *)(param_1 + 5) = 8;
      param_1[6] = param_1 + 0x231;
      param_1[7] = param_1 + 0x239;
      param_1[8] = param_1 + 0x23d;
    }
  }
  else {
    uVar18 = *(uint *)(param_1 + 5);
    if (uVar2 != uVar18 && (int)uVar18 <= (int)(uint)uVar2) {
      puVar10 = (undefined8 *)param_1[6];
      if ((undefined8 *)param_1[6] == param_1 + 0x231) {
        param_1[6] = 0;
        param_1[7] = 0;
        param_1[8] = 0;
        puVar10 = (undefined8 *)0x0;
      }
      uVar17 = uVar2 + 3 & 0xfffffffc;
      uVar7 = FUN_1402f80b0(uVar8,8,uVar18,uVar17,puVar10,local_res10);
      param_1[6] = uVar7;
      if (local_res10[0] != 0) {
        return local_res10[0];
      }
      uVar7 = FUN_1402f80b0(uVar8,4,uVar18,uVar17,param_1[7],local_res10);
      param_1[7] = uVar7;
      if (local_res10[0] != 0) {
        return local_res10[0];
      }
      uVar7 = FUN_1402f80b0(uVar8,4,uVar18,uVar17,param_1[8],local_res10);
      param_1[8] = uVar7;
      if (local_res10[0] != 0) {
        return local_res10[0];
      }
      *(uint *)(param_1 + 5) = uVar17;
    }
  }
  uVar2 = param_2[1];
  uVar18 = uVar2 + 2;
  if (uVar18 < 0x61) {
    if (param_1[4] == 0) {
      *(undefined4 *)(param_1 + 3) = 0x60;
      param_1[4] = param_1 + 0x241;
    }
  }
  else if (*(int *)(param_1 + 3) < (int)uVar18) {
    puVar10 = (undefined8 *)param_1[4];
    if ((undefined8 *)param_1[4] == param_1 + 0x241) {
      param_1[4] = 0;
      puVar10 = (undefined8 *)0x0;
    }
    uVar18 = uVar2 + 0xb & 0xfffffff8;
    uVar8 = FUN_1402f80b0(uVar8,0x30,*(int *)(param_1 + 3),uVar18,puVar10,local_res10);
    param_1[4] = uVar8;
    if (local_res10[0] != 0) {
      return local_res10[0];
    }
    *(uint *)(param_1 + 3) = uVar18;
  }
  *(uint *)((longlong)param_1 + 0x1c) = (uint)param_2[1];
  *(uint *)((longlong)param_1 + 0x2c) = (uint)*param_2;
  *(undefined4 *)(param_1 + 0xd) = 2;
  *(undefined4 *)(param_1 + 0x120) = 0xffffffff;
  iVar3 = FUN_1402f3120(param_2);
  if (iVar3 == 1) {
    *(undefined4 *)(param_1 + 0xd) = 0xfffffffe;
    *(undefined4 *)(param_1 + 0x120) = 1;
  }
  *(int *)(param_1 + 1) = iVar15;
  *(int *)(param_1 + 2) = iVar6;
  *(int *)((longlong)param_1 + 0xc) = iVar23;
  *(int *)((longlong)param_1 + 0x14) = local_res18;
  if (*(int *)((longlong)param_1 + 0x1c) != 0) {
    puVar19 = (ushort *)param_1[4];
    puVar13 = *(ushort **)(param_2 + 4);
    iVar3 = 0;
    pbVar16 = *(byte **)(param_2 + 8);
    puVar9 = puVar19 + (longlong)*(int *)((longlong)param_1 + 0x1c) * 0x18;
    uVar2 = *(ushort *)(*(longlong *)(param_1[0x230] + 8) + 0x68);
    local_res20 = (uint)uVar2 + (uint)uVar2 * 4 >> 9;
    uVar24 = (ulonglong)**(ushort **)(param_2 + 0xc);
    puVar21 = puVar19 + uVar24 * 0x18;
    puVar22 = puVar21;
    for (puVar20 = puVar19; puVar20 < puVar9; puVar20 = puVar20 + 0x18) {
      puVar20[1] = 0x404;
      puVar20[6] = *puVar13;
      puVar20[7] = puVar13[2];
      lVar11 = (longlong)*(int *)puVar13 * (longlong)iVar15;
      iVar4 = (int)((ulonglong)((lVar11 >> 0x3f) + lVar11 + 0x8000) >> 0x10) + iVar23;
      *(int *)(puVar20 + 8) = iVar4;
      *(int *)(puVar20 + 2) = iVar4;
      lVar11 = (longlong)*(int *)(puVar13 + 2) * (longlong)iVar6;
      iVar4 = (int)((ulonglong)((lVar11 >> 0x3f) + 0x8000 + lVar11) >> 0x10) + local_res18;
      *(int *)(puVar20 + 10) = iVar4;
      *(int *)(puVar20 + 4) = iVar4;
      puVar22[6] = *(ushort *)(uVar24 * 8 + *(longlong *)(param_2 + 4));
      puVar22[7] = *(ushort *)(*(longlong *)(param_2 + 4) + 4 + uVar24 * 8);
      if ((*pbVar16 & 3) == 0) {
        *puVar20 = 1;
      }
      else if ((*pbVar16 & 3) == 2) {
        *puVar20 = 2;
      }
      else {
        *puVar20 = 0;
      }
      iVar4 = -((int)(short)puVar20[6] - (int)(short)puVar21[6]);
      if (iVar4 < 0) {
        iVar4 = (int)(short)puVar20[6] - (int)(short)puVar21[6];
      }
      iVar5 = -((int)(short)puVar20[7] - (int)(short)puVar21[7]);
      if (iVar5 < 0) {
        iVar5 = (int)(short)puVar20[7] - (int)(short)puVar21[7];
      }
      if (iVar4 + iVar5 < (int)local_res20) {
        *puVar21 = *puVar21 | 0x20;
      }
      *(ushort **)(puVar20 + 0x14) = puVar21;
      *(ushort **)(puVar21 + 0x10) = puVar20;
      puVar21 = puVar20;
      if (puVar20 == puVar22) {
        lVar11 = (longlong)iVar3;
        iVar3 = iVar3 + 1;
        if (iVar3 < (int)(uint)*param_2) {
          uVar24 = (ulonglong)*(ushort *)(*(longlong *)(param_2 + 0xc) + 2 + lVar11 * 2);
          puVar21 = puVar19 + uVar24 * 0x18;
          puVar22 = puVar21;
        }
      }
      puVar13 = puVar13 + 4;
      pbVar16 = pbVar16 + 1;
    }
    puVar12 = (undefined8 *)param_1[6];
    iVar23 = 0;
    puVar10 = puVar12 + *(int *)((longlong)param_1 + 0x2c);
    if (puVar12 < puVar10) {
      lVar11 = 0;
      puVar13 = *(ushort **)(param_2 + 0xc);
      do {
        *puVar12 = puVar19 + lVar11 * 0x18;
        puVar12 = puVar12 + 1;
        lVar11 = (ulonglong)*puVar13 + 1;
        puVar13 = puVar13 + 1;
      } while (puVar12 < puVar10);
    }
    puVar12 = (undefined8 *)param_1[6];
    puVar10 = puVar12 + *(int *)((longlong)param_1 + 0x2c);
    for (; puVar12 < puVar10; puVar12 = puVar12 + 1) {
      puVar13 = (ushort *)*puVar12;
      puVar20 = puVar13;
      for (puVar21 = *(ushort **)(puVar13 + 0x14); puVar21 != puVar13;
          puVar21 = *(ushort **)(puVar21 + 0x14)) {
        iVar15 = -((int)(short)puVar20[7] - (int)(short)puVar21[7]);
        if (iVar15 < 0) {
          iVar15 = (int)(short)puVar20[7] - (int)(short)puVar21[7];
        }
        iVar6 = -((int)(short)puVar20[6] - (int)(short)puVar21[6]);
        if (iVar6 < 0) {
          iVar6 = (int)(short)puVar20[6] - (int)(short)puVar21[6];
        }
        if ((int)(local_res20 * 2 + -1) <= iVar15 + iVar6) break;
        puVar20 = puVar21;
      }
      puVar20[0xc] = 0;
      puVar20[0xd] = 0;
      puVar20[0xe] = 0;
      puVar20[0xf] = 0;
      puVar13 = puVar20;
      puVar21 = puVar20;
      iVar15 = iVar23;
      iVar6 = iVar23;
      do {
        puVar22 = *(ushort **)(puVar21 + 0x10);
        iVar15 = iVar15 + ((int)(short)puVar22[6] - (int)(short)puVar21[6]);
        iVar6 = iVar6 + ((int)(short)puVar22[7] - (int)(short)puVar21[7]);
        iVar3 = -iVar6;
        if (-iVar6 < 0) {
          iVar3 = iVar6;
        }
        iVar4 = -iVar15;
        if (-iVar15 < 0) {
          iVar4 = iVar15;
        }
        if (iVar3 + iVar4 < (int)local_res20) {
          *puVar22 = *puVar22 | 0x10;
        }
        else {
          iVar4 = -iVar15;
          iVar3 = (int)(((longlong)puVar22 - (longlong)puVar13) / 0x30);
          *(int *)(puVar13 + 0xc) = iVar3;
          *(int *)(puVar22 + 0xe) = -iVar3;
          iVar3 = iVar15;
          if (iVar6 < iVar15) {
            if (iVar6 < iVar4) {
              uVar14 = 0xfe;
              iVar4 = -iVar6;
            }
            else {
              uVar14 = 1;
              iVar3 = iVar6;
              iVar4 = iVar15;
            }
          }
          else if (iVar6 < iVar4) {
            uVar14 = 0xff;
            iVar3 = iVar6;
          }
          else {
            uVar14 = 2;
            iVar4 = iVar6;
          }
          iVar15 = -iVar3;
          if (-iVar3 < 0) {
            iVar15 = iVar3;
          }
          if (iVar4 <= iVar15 * 0xe) {
            uVar14 = 4;
          }
          *(undefined1 *)((longlong)puVar13 + 3) = uVar14;
          for (puVar13 = *(ushort **)(puVar13 + 0x10); puVar13 != puVar22;
              puVar13 = *(ushort **)(puVar13 + 0x10)) {
            *(undefined1 *)(puVar13 + 1) = uVar14;
            *(undefined1 *)((longlong)puVar13 + 3) = uVar14;
          }
          *(undefined1 *)(puVar22 + 1) = uVar14;
          iVar15 = (int)(((longlong)puVar20 - (longlong)puVar13) / 0x30);
          *(int *)(puVar13 + 0xc) = iVar15;
          *(int *)(puVar20 + 0xe) = -iVar15;
          iVar15 = iVar23;
          iVar6 = iVar23;
        }
        puVar21 = puVar22;
      } while (puVar22 != puVar20);
    }
    puVar13 = puVar19;
    if (puVar19 < puVar9) {
      do {
        if ((((*puVar13 & 0x10) == 0) && ((char)puVar13[1] == '\x04')) &&
           (*(char *)((longlong)puVar13 + 3) == '\x04')) {
          iVar23 = *(int *)(puVar13 + 0xc);
          puVar20 = puVar13 + (longlong)*(int *)(puVar13 + 0xe) * 0x18;
          if ((-1 < ((int)(short)puVar13[6] - (int)(short)puVar20[6] ^
                    (int)(short)puVar13[(longlong)iVar23 * 0x18 + 6] - (int)(short)puVar13[6])) &&
             (-1 < ((int)(short)puVar13[7] - (int)(short)puVar20[7] ^
                   (int)(short)puVar13[(longlong)iVar23 * 0x18 + 7] - (int)(short)puVar13[7]))) {
            *puVar13 = *puVar13 | 0x10;
            iVar15 = (int)(((longlong)puVar13 + ((longlong)iVar23 * 0x30 - (longlong)puVar20)) /
                          0x30);
            *(int *)(puVar20 + 0xc) = iVar15;
            *(int *)(puVar13 + (longlong)iVar23 * 0x18 + 0xe) = -iVar15;
          }
        }
        puVar13 = puVar13 + 0x18;
      } while (puVar13 < puVar9);
      do {
        if ((*puVar19 & 0x10) == 0) {
          if ((*puVar19 & 3) == 0) {
            cVar1 = *(char *)((longlong)puVar19 + 3);
            if (cVar1 == (char)puVar19[1]) {
              if (cVar1 == '\x04') {
                iVar23 = *(int *)(puVar19 + 0xc);
                puVar13 = puVar19 + (longlong)*(int *)(puVar19 + 0xe) * 0x18;
                iVar15 = FUN_1402f6ef0((int)(short)puVar19[6] - (int)(short)puVar13[6],
                                       (int)(short)puVar19[7] - (int)(short)puVar13[7],
                                       (int)(short)puVar19[(longlong)iVar23 * 0x18 + 6] -
                                       (int)(short)puVar19[6],
                                       (int)(short)puVar19[(longlong)iVar23 * 0x18 + 7] -
                                       (int)(short)puVar19[7]);
                if (iVar15 == 0) goto LAB_140300652;
                iVar15 = (int)(((longlong)puVar19 + ((longlong)iVar23 * 0x30 - (longlong)puVar13)) /
                              0x30);
                *(int *)(puVar13 + 0xc) = iVar15;
                *(int *)(puVar19 + (longlong)iVar23 * 0x18 + 0xe) = -iVar15;
              }
            }
            else if ((int)(char)puVar19[1] != -(int)cVar1) goto LAB_140300652;
          }
          *puVar19 = *puVar19 | 0x10;
        }
LAB_140300652:
        puVar19 = puVar19 + 0x18;
      } while (puVar19 < puVar9);
    }
  }
  return local_res10[0];
}

