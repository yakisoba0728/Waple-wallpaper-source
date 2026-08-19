// Function: FUN_1402fff80
// Addr: 1402fff80
// Size: 1639 bytes


undefined4 FUN_1402fff80(undefined8 *param_1,ushort *param_2)

{
  char cVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  ushort *puVar7;
  undefined8 *puVar8;
  longlong lVar9;
  undefined8 *puVar10;
  ushort *puVar11;
  undefined1 uVar12;
  int iVar13;
  byte *pbVar14;
  uint uVar15;
  ushort *puVar16;
  ushort *puVar17;
  ushort *puVar18;
  ushort *puVar19;
  int iVar20;
  ulonglong uVar21;
  undefined4 local_res10 [2];
  int local_res18;
  uint local_res20;
  
  iVar20 = *(int *)((longlong)param_1 + 0xc);
  local_res18 = *(int *)((longlong)param_1 + 0x14);
  iVar13 = *(int *)(param_1 + 1);
  iVar6 = *(int *)(param_1 + 2);
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
    uVar15 = *(uint *)(param_1 + 5);
    if (uVar2 != uVar15 && (int)uVar15 <= (int)(uint)uVar2) {
      puVar8 = (undefined8 *)param_1[6];
      if ((undefined8 *)param_1[6] == param_1 + 0x231) {
        param_1[6] = 0;
        param_1[7] = 0;
        param_1[8] = 0;
        puVar8 = (undefined8 *)0x0;
      }
                    /* WARNING: Subroutine does not return */
      FUN_1402f8180(*param_1,8,uVar15,uVar2 + 3 & 0xfffffffc,puVar8,local_res10);
    }
  }
  uVar2 = param_2[1];
  uVar15 = uVar2 + 2;
  if (uVar15 < 0x61) {
    if (param_1[4] == 0) {
      *(undefined4 *)(param_1 + 3) = 0x60;
      param_1[4] = param_1 + 0x241;
    }
  }
  else if (*(int *)(param_1 + 3) < (int)uVar15) {
    puVar8 = (undefined8 *)param_1[4];
    if ((undefined8 *)param_1[4] == param_1 + 0x241) {
      param_1[4] = 0;
      puVar8 = (undefined8 *)0x0;
    }
                    /* WARNING: Subroutine does not return */
    FUN_1402f8180(*param_1,0x30,*(int *)(param_1 + 3),uVar2 + 0xb & 0xfffffff8,puVar8,local_res10);
  }
  *(uint *)((longlong)param_1 + 0x1c) = (uint)param_2[1];
  *(uint *)((longlong)param_1 + 0x2c) = (uint)*param_2;
  *(undefined4 *)(param_1 + 0xd) = 2;
  *(undefined4 *)(param_1 + 0x120) = 0xffffffff;
  iVar3 = FUN_1402f31f0(param_2);
  if (iVar3 == 1) {
    *(undefined4 *)(param_1 + 0xd) = 0xfffffffe;
    *(undefined4 *)(param_1 + 0x120) = 1;
  }
  *(int *)(param_1 + 1) = iVar13;
  *(int *)(param_1 + 2) = iVar6;
  *(int *)((longlong)param_1 + 0xc) = iVar20;
  *(int *)((longlong)param_1 + 0x14) = local_res18;
  if (*(int *)((longlong)param_1 + 0x1c) != 0) {
    puVar16 = (ushort *)param_1[4];
    puVar11 = *(ushort **)(param_2 + 4);
    iVar3 = 0;
    pbVar14 = *(byte **)(param_2 + 8);
    puVar7 = puVar16 + (longlong)*(int *)((longlong)param_1 + 0x1c) * 0x18;
    uVar2 = *(ushort *)(*(longlong *)(param_1[0x230] + 8) + 0x68);
    local_res20 = (uint)uVar2 + (uint)uVar2 * 4 >> 9;
    uVar21 = (ulonglong)**(ushort **)(param_2 + 0xc);
    puVar18 = puVar16 + uVar21 * 0x18;
    puVar19 = puVar18;
    for (puVar17 = puVar16; puVar17 < puVar7; puVar17 = puVar17 + 0x18) {
      puVar17[1] = 0x404;
      puVar17[6] = *puVar11;
      puVar17[7] = puVar11[2];
      lVar9 = (longlong)*(int *)puVar11 * (longlong)iVar13;
      iVar4 = (int)((ulonglong)((lVar9 >> 0x3f) + lVar9 + 0x8000) >> 0x10) + iVar20;
      *(int *)(puVar17 + 8) = iVar4;
      *(int *)(puVar17 + 2) = iVar4;
      lVar9 = (longlong)*(int *)(puVar11 + 2) * (longlong)iVar6;
      iVar4 = (int)((ulonglong)((lVar9 >> 0x3f) + 0x8000 + lVar9) >> 0x10) + local_res18;
      *(int *)(puVar17 + 10) = iVar4;
      *(int *)(puVar17 + 4) = iVar4;
      puVar19[6] = *(ushort *)(uVar21 * 8 + *(longlong *)(param_2 + 4));
      puVar19[7] = *(ushort *)(*(longlong *)(param_2 + 4) + 4 + uVar21 * 8);
      if ((*pbVar14 & 3) == 0) {
        *puVar17 = 1;
      }
      else if ((*pbVar14 & 3) == 2) {
        *puVar17 = 2;
      }
      else {
        *puVar17 = 0;
      }
      iVar4 = -((int)(short)puVar17[6] - (int)(short)puVar18[6]);
      if (iVar4 < 0) {
        iVar4 = (int)(short)puVar17[6] - (int)(short)puVar18[6];
      }
      iVar5 = -((int)(short)puVar17[7] - (int)(short)puVar18[7]);
      if (iVar5 < 0) {
        iVar5 = (int)(short)puVar17[7] - (int)(short)puVar18[7];
      }
      if (iVar4 + iVar5 < (int)local_res20) {
        *puVar18 = *puVar18 | 0x20;
      }
      *(ushort **)(puVar17 + 0x14) = puVar18;
      *(ushort **)(puVar18 + 0x10) = puVar17;
      puVar18 = puVar17;
      if (puVar17 == puVar19) {
        lVar9 = (longlong)iVar3;
        iVar3 = iVar3 + 1;
        if (iVar3 < (int)(uint)*param_2) {
          uVar21 = (ulonglong)*(ushort *)(*(longlong *)(param_2 + 0xc) + 2 + lVar9 * 2);
          puVar18 = puVar16 + uVar21 * 0x18;
          puVar19 = puVar18;
        }
      }
      puVar11 = puVar11 + 4;
      pbVar14 = pbVar14 + 1;
    }
    puVar10 = (undefined8 *)param_1[6];
    iVar20 = 0;
    puVar8 = puVar10 + *(int *)((longlong)param_1 + 0x2c);
    if (puVar10 < puVar8) {
      lVar9 = 0;
      puVar11 = *(ushort **)(param_2 + 0xc);
      do {
        *puVar10 = puVar16 + lVar9 * 0x18;
        puVar10 = puVar10 + 1;
        lVar9 = (ulonglong)*puVar11 + 1;
        puVar11 = puVar11 + 1;
      } while (puVar10 < puVar8);
    }
    puVar10 = (undefined8 *)param_1[6];
    puVar8 = puVar10 + *(int *)((longlong)param_1 + 0x2c);
    for (; puVar10 < puVar8; puVar10 = puVar10 + 1) {
      puVar11 = (ushort *)*puVar10;
      puVar17 = puVar11;
      for (puVar18 = *(ushort **)(puVar11 + 0x14); puVar18 != puVar11;
          puVar18 = *(ushort **)(puVar18 + 0x14)) {
        iVar13 = -((int)(short)puVar17[7] - (int)(short)puVar18[7]);
        if (iVar13 < 0) {
          iVar13 = (int)(short)puVar17[7] - (int)(short)puVar18[7];
        }
        iVar6 = -((int)(short)puVar17[6] - (int)(short)puVar18[6]);
        if (iVar6 < 0) {
          iVar6 = (int)(short)puVar17[6] - (int)(short)puVar18[6];
        }
        if ((int)(local_res20 * 2 + -1) <= iVar13 + iVar6) break;
        puVar17 = puVar18;
      }
      puVar17[0xc] = 0;
      puVar17[0xd] = 0;
      puVar17[0xe] = 0;
      puVar17[0xf] = 0;
      puVar11 = puVar17;
      puVar18 = puVar17;
      iVar13 = iVar20;
      iVar6 = iVar20;
      do {
        puVar19 = *(ushort **)(puVar18 + 0x10);
        iVar13 = iVar13 + ((int)(short)puVar19[6] - (int)(short)puVar18[6]);
        iVar6 = iVar6 + ((int)(short)puVar19[7] - (int)(short)puVar18[7]);
        iVar3 = -iVar6;
        if (-iVar6 < 0) {
          iVar3 = iVar6;
        }
        iVar4 = -iVar13;
        if (-iVar13 < 0) {
          iVar4 = iVar13;
        }
        if (iVar3 + iVar4 < (int)local_res20) {
          *puVar19 = *puVar19 | 0x10;
        }
        else {
          iVar4 = -iVar13;
          iVar3 = (int)(((longlong)puVar19 - (longlong)puVar11) / 0x30);
          *(int *)(puVar11 + 0xc) = iVar3;
          *(int *)(puVar19 + 0xe) = -iVar3;
          iVar3 = iVar13;
          if (iVar6 < iVar13) {
            if (iVar6 < iVar4) {
              uVar12 = 0xfe;
              iVar4 = -iVar6;
            }
            else {
              uVar12 = 1;
              iVar3 = iVar6;
              iVar4 = iVar13;
            }
          }
          else if (iVar6 < iVar4) {
            uVar12 = 0xff;
            iVar3 = iVar6;
          }
          else {
            uVar12 = 2;
            iVar4 = iVar6;
          }
          iVar13 = -iVar3;
          if (-iVar3 < 0) {
            iVar13 = iVar3;
          }
          if (iVar4 <= iVar13 * 0xe) {
            uVar12 = 4;
          }
          *(undefined1 *)((longlong)puVar11 + 3) = uVar12;
          for (puVar11 = *(ushort **)(puVar11 + 0x10); puVar11 != puVar19;
              puVar11 = *(ushort **)(puVar11 + 0x10)) {
            *(undefined1 *)(puVar11 + 1) = uVar12;
            *(undefined1 *)((longlong)puVar11 + 3) = uVar12;
          }
          *(undefined1 *)(puVar19 + 1) = uVar12;
          iVar13 = (int)(((longlong)puVar17 - (longlong)puVar11) / 0x30);
          *(int *)(puVar11 + 0xc) = iVar13;
          *(int *)(puVar17 + 0xe) = -iVar13;
          iVar13 = iVar20;
          iVar6 = iVar20;
        }
        puVar18 = puVar19;
      } while (puVar19 != puVar17);
    }
    puVar11 = puVar16;
    if (puVar16 < puVar7) {
      do {
        if ((((*puVar11 & 0x10) == 0) && ((char)puVar11[1] == '\x04')) &&
           (*(char *)((longlong)puVar11 + 3) == '\x04')) {
          iVar20 = *(int *)(puVar11 + 0xc);
          puVar17 = puVar11 + (longlong)*(int *)(puVar11 + 0xe) * 0x18;
          if ((-1 < ((int)(short)puVar11[6] - (int)(short)puVar17[6] ^
                    (int)(short)puVar11[(longlong)iVar20 * 0x18 + 6] - (int)(short)puVar11[6])) &&
             (-1 < ((int)(short)puVar11[7] - (int)(short)puVar17[7] ^
                   (int)(short)puVar11[(longlong)iVar20 * 0x18 + 7] - (int)(short)puVar11[7]))) {
            *puVar11 = *puVar11 | 0x10;
            iVar13 = (int)(((longlong)puVar11 + ((longlong)iVar20 * 0x30 - (longlong)puVar17)) /
                          0x30);
            *(int *)(puVar17 + 0xc) = iVar13;
            *(int *)(puVar11 + (longlong)iVar20 * 0x18 + 0xe) = -iVar13;
          }
        }
        puVar11 = puVar11 + 0x18;
      } while (puVar11 < puVar7);
      do {
        if ((*puVar16 & 0x10) == 0) {
          if ((*puVar16 & 3) == 0) {
            cVar1 = *(char *)((longlong)puVar16 + 3);
            if (cVar1 == (char)puVar16[1]) {
              if (cVar1 == '\x04') {
                iVar20 = *(int *)(puVar16 + 0xc);
                puVar11 = puVar16 + (longlong)*(int *)(puVar16 + 0xe) * 0x18;
                iVar13 = FUN_1402f6fc0((int)(short)puVar16[6] - (int)(short)puVar11[6],
                                       (int)(short)puVar16[7] - (int)(short)puVar11[7],
                                       (int)(short)puVar16[(longlong)iVar20 * 0x18 + 6] -
                                       (int)(short)puVar16[6],
                                       (int)(short)puVar16[(longlong)iVar20 * 0x18 + 7] -
                                       (int)(short)puVar16[7]);
                if (iVar13 == 0) goto code_r0x000140300722;
                iVar13 = (int)(((longlong)puVar16 + ((longlong)iVar20 * 0x30 - (longlong)puVar11)) /
                              0x30);
                *(int *)(puVar11 + 0xc) = iVar13;
                *(int *)(puVar16 + (longlong)iVar20 * 0x18 + 0xe) = -iVar13;
              }
            }
            else if ((int)(char)puVar16[1] != -(int)cVar1) goto code_r0x000140300722;
          }
          *puVar16 = *puVar16 | 0x10;
        }
code_r0x000140300722:
        puVar16 = puVar16 + 0x18;
      } while (puVar16 < puVar7);
    }
  }
  return local_res10[0];
}

