// Function: FUN_140178e90
// Addr: 140178e90
// Size: 1468 bytes


undefined8 * FUN_140178e90(float *param_1,undefined8 *param_2,undefined8 *param_3)

{
  float *pfVar1;
  byte *pbVar2;
  longlong *plVar3;
  longlong *plVar4;
  size_t _Size;
  undefined8 *puVar5;
  undefined8 uVar6;
  longlong *plVar7;
  undefined1 uVar8;
  int iVar9;
  undefined8 *puVar10;
  ulonglong uVar11;
  longlong *plVar12;
  byte bVar13;
  ulonglong uVar14;
  undefined8 *puVar15;
  longlong lVar16;
  ulonglong uVar17;
  longlong *plVar18;
  longlong *_Buf1;
  undefined8 *_Buf1_00;
  undefined8 *puVar19;
  undefined8 *puVar20;
  longlong *plVar21;
  float *pfVar22;
  ulonglong uVar23;
  float fVar24;
  float *local_res8;
  undefined8 *local_res10;
  longlong *local_res18;
  longlong local_res20;
  ulonglong local_68;
  
  uVar11 = param_3[3];
  puVar20 = param_3;
  if (0xf < uVar11) {
    puVar20 = (undefined8 *)*param_3;
  }
  uVar17 = param_3[2];
  uVar14 = 0;
  uVar23 = 0xcbf29ce484222325;
  local_68 = 0xcbf29ce484222325;
  if (uVar17 != 0) {
    do {
      pbVar2 = (byte *)((longlong)puVar20 + uVar14);
      uVar14 = uVar14 + 1;
      uVar23 = (uVar23 ^ *pbVar2) * 0x100000001b3;
      local_68 = uVar23;
    } while (uVar14 < uVar17);
  }
  puVar20 = *(undefined8 **)(param_1 + 2);
  puVar19 = *(undefined8 **)
             (*(longlong *)(param_1 + 6) + 8 + (local_68 & *(ulonglong *)(param_1 + 0xc)) * 0x10);
  local_res8 = param_1;
  local_res10 = param_2;
  if (puVar19 != puVar20) {
    puVar10 = *(undefined8 **)
               (*(longlong *)(param_1 + 6) + (local_68 & *(ulonglong *)(param_1 + 0xc)) * 0x10);
    puVar20 = puVar19;
    while( true ) {
      puVar19 = puVar20 + 2;
      if (0xf < (ulonglong)puVar20[5]) {
        puVar19 = (undefined8 *)*puVar19;
      }
      puVar15 = param_3;
      if (0xf < uVar11) {
        puVar15 = (undefined8 *)*param_3;
      }
      if ((uVar17 == puVar20[4]) &&
         ((uVar17 == 0 || (iVar9 = memcmp(puVar15,puVar19,uVar17), iVar9 == 0)))) {
        uVar8 = 0;
        goto LAB_14017940f;
      }
      if (puVar20 == puVar10) break;
      puVar20 = (undefined8 *)puVar20[1];
    }
  }
  if (*(longlong *)(param_1 + 4) == 0x222222222222222) {
                    /* WARNING: Subroutine does not return */
    FUN_14028c2e0("unordered_map/set too long");
  }
  puVar10 = (undefined8 *)FUN_14028af20(0x78);
  puVar10[2] = 0;
  puVar10[3] = 0;
  puVar19 = puVar10 + 2;
  puVar10[4] = 0;
  puVar10[5] = 0;
  uVar6 = param_3[1];
  *puVar19 = *param_3;
  puVar10[3] = uVar6;
  uVar6 = param_3[3];
  puVar10[4] = param_3[2];
  puVar10[5] = uVar6;
  param_3[2] = 0;
  param_3[3] = 0xf;
  *(undefined1 *)param_3 = 0;
  puVar10[6] = 0;
  puVar10[0xe] = 0;
  puVar10[7] = 0;
  puVar10[8] = 0;
  puVar10[9] = 0;
  puVar10[10] = 0xf;
  *(undefined1 *)(puVar10 + 7) = 0;
  puVar10[0xb] = 0;
  puVar10[0xc] = 0;
  puVar10[0xd] = 0;
  uVar11 = *(ulonglong *)(param_1 + 0xe);
  if (*param_1 < (float)(*(longlong *)(param_1 + 4) + 1) / (float)uVar11) {
    fVar24 = (float)FUN_140419fa0((float)(*(longlong *)(param_1 + 4) + 1) / *param_1);
    lVar16 = 0;
    if ((DAT_140492974 <= fVar24) && (fVar24 = fVar24 - DAT_140492974, fVar24 < DAT_140492974)) {
      lVar16 = -0x8000000000000000;
    }
    uVar17 = 8;
    if (8 < (ulonglong)((longlong)fVar24 + lVar16)) {
      uVar17 = (longlong)fVar24 + lVar16;
    }
    uVar14 = uVar11;
    if ((uVar11 < uVar17) && ((0x1ff < uVar11 || (uVar14 = uVar11 * 8, uVar11 * 8 < uVar17)))) {
      uVar14 = uVar17;
    }
    for (lVar16 = 0x3f; 0xfffffffffffffffU >> lVar16 == 0; lVar16 = lVar16 + -1) {
    }
    if ((ulonglong)(1L << ((byte)lVar16 & 0x3f)) < uVar14) {
                    /* WARNING: Subroutine does not return */
      FUN_14028c2e0("invalid hash bucket count");
    }
    plVar3 = *(longlong **)(param_1 + 2);
    uVar11 = uVar14 - 1 | 1;
    pfVar1 = param_1 + 6;
    lVar16 = 0x3f;
    if (uVar11 != 0) {
      for (; uVar11 >> lVar16 == 0; lVar16 = lVar16 + -1) {
      }
    }
    bVar13 = (char)lVar16 + 1;
    lVar16 = 1L << (bVar13 & 0x3f);
    FUN_140037600(pfVar1,2L << (bVar13 & 0x3f),plVar3);
    *(longlong *)(param_1 + 0xe) = lVar16;
    *(longlong *)(param_1 + 0xc) = lVar16 + -1;
    plVar7 = (longlong *)**(undefined8 **)(param_1 + 2);
    pfVar22 = local_res8;
    while (plVar7 != plVar3) {
      uVar11 = plVar7[5];
      plVar12 = plVar7 + 2;
      plVar4 = (longlong *)*plVar7;
      if (0xf < uVar11) {
        plVar12 = (longlong *)plVar7[2];
      }
      uVar17 = plVar7[4];
      uVar14 = 0;
      uVar23 = 0xcbf29ce484222325;
      if (uVar17 != 0) {
        do {
          pbVar2 = (byte *)((longlong)plVar12 + uVar14);
          uVar14 = uVar14 + 1;
          uVar23 = (uVar23 ^ *pbVar2) * 0x100000001b3;
          pfVar22 = local_res8;
        } while (uVar14 < uVar17);
      }
      uVar23 = uVar23 & *(ulonglong *)(pfVar22 + 0xc);
      local_res20 = *(longlong *)pfVar1;
      local_res18 = *(longlong **)(local_res20 + uVar23 * 0x10);
      if (local_res18 == plVar3) {
        *(longlong **)(local_res20 + uVar23 * 0x10) = plVar7;
        *(longlong **)(local_res20 + 8 + uVar23 * 0x10) = plVar7;
        plVar7 = plVar4;
        param_1 = local_res8;
      }
      else {
        plVar21 = *(longlong **)(local_res20 + 8 + uVar23 * 0x10);
        plVar12 = plVar21 + 2;
        if (0xf < (ulonglong)plVar21[5]) {
          plVar12 = (longlong *)*plVar12;
        }
        plVar18 = plVar7 + 2;
        if (0xf < uVar11) {
          plVar18 = (longlong *)plVar7[2];
        }
        if (uVar17 == plVar21[4]) {
          if ((uVar17 != 0) && (iVar9 = memcmp(plVar18,plVar12,uVar17), iVar9 != 0)) {
            uVar11 = plVar7[5];
            goto LAB_14017925c;
          }
          plVar21 = (longlong *)*plVar21;
          if (plVar21 != plVar7) {
            plVar12 = (longlong *)plVar7[1];
            *plVar12 = (longlong)plVar4;
            puVar20 = (undefined8 *)plVar4[1];
            *puVar20 = plVar21;
            puVar15 = (undefined8 *)plVar21[1];
            *puVar15 = plVar7;
            plVar21[1] = (longlong)puVar20;
            plVar4[1] = (longlong)plVar12;
            plVar7[1] = (longlong)puVar15;
          }
          *(longlong **)(local_res20 + 8 + uVar23 * 0x10) = plVar7;
        }
        else {
LAB_14017925c:
          plVar12 = local_res18;
          if (local_res18 != plVar21) {
            do {
              plVar21 = (longlong *)plVar21[1];
              plVar18 = plVar21 + 2;
              if (0xf < (ulonglong)plVar21[5]) {
                plVar18 = (longlong *)*plVar18;
              }
              if (uVar11 < 0x10) {
                _Buf1 = plVar7 + 2;
              }
              else {
                _Buf1 = (longlong *)plVar7[2];
              }
              if (uVar17 == plVar21[4]) {
                if ((uVar17 == 0) || (iVar9 = memcmp(_Buf1,plVar18,uVar17), iVar9 == 0)) {
                  lVar16 = *plVar21;
                  plVar12 = (longlong *)plVar7[1];
                  *plVar12 = (longlong)plVar4;
                  plVar21 = (longlong *)plVar4[1];
                  *plVar21 = lVar16;
                  puVar20 = *(undefined8 **)(lVar16 + 8);
                  *puVar20 = plVar7;
                  *(longlong **)(lVar16 + 8) = plVar21;
                  plVar4[1] = (longlong)plVar12;
                  plVar7[1] = (longlong)puVar20;
                  goto LAB_1401792e0;
                }
                uVar11 = plVar7[5];
                plVar12 = local_res18;
              }
            } while (plVar12 != plVar21);
          }
          plVar12 = (longlong *)plVar7[1];
          *plVar12 = (longlong)plVar4;
          puVar20 = (undefined8 *)plVar4[1];
          *puVar20 = plVar21;
          puVar15 = (undefined8 *)plVar21[1];
          *puVar15 = plVar7;
          plVar21[1] = (longlong)puVar20;
          plVar4[1] = (longlong)plVar12;
          plVar7[1] = (longlong)puVar15;
          *(longlong **)(local_res20 + uVar23 * 0x10) = plVar7;
        }
LAB_1401792e0:
        pfVar1 = pfVar22 + 6;
        plVar7 = plVar4;
        param_1 = local_res8;
      }
    }
    local_res8 = (float *)0x0;
    FUN_14017b610(&local_res8);
    puVar15 = *(undefined8 **)
               (*(longlong *)pfVar1 + 8 + (local_68 & *(ulonglong *)(param_1 + 0xc)) * 0x10);
    puVar20 = *(undefined8 **)(param_1 + 2);
    if (puVar15 != *(undefined8 **)(param_1 + 2)) {
      uVar11 = puVar10[5];
      _Size = puVar10[4];
      puVar5 = *(undefined8 **)
                (*(longlong *)pfVar1 + (local_68 & *(ulonglong *)(param_1 + 0xc)) * 0x10);
      while( true ) {
        puVar20 = puVar15 + 2;
        if (0xf < (ulonglong)puVar15[5]) {
          puVar20 = (undefined8 *)*puVar20;
        }
        _Buf1_00 = puVar19;
        if (0xf < uVar11) {
          _Buf1_00 = (undefined8 *)*puVar19;
        }
        if ((_Size == puVar15[4]) &&
           ((_Size == 0 || (iVar9 = memcmp(_Buf1_00,puVar20,_Size), iVar9 == 0)))) break;
        puVar20 = puVar15;
        if (puVar15 == puVar5) goto LAB_1401793c0;
        puVar15 = (undefined8 *)puVar15[1];
      }
      puVar20 = (undefined8 *)*puVar15;
    }
  }
LAB_1401793c0:
  puVar19 = (undefined8 *)puVar20[1];
  *(longlong *)(param_1 + 4) = *(longlong *)(param_1 + 4) + 1;
  *puVar10 = puVar20;
  puVar10[1] = puVar19;
  *puVar19 = puVar10;
  puVar20[1] = puVar10;
  lVar16 = *(longlong *)(param_1 + 6);
  local_68 = *(ulonglong *)(param_1 + 0xc) & local_68;
  puVar15 = *(undefined8 **)(lVar16 + local_68 * 0x10);
  if (puVar15 == *(undefined8 **)(param_1 + 2)) {
    *(undefined8 **)(lVar16 + local_68 * 0x10) = puVar10;
  }
  else {
    if (puVar15 == puVar20) {
      *(undefined8 **)(lVar16 + local_68 * 0x10) = puVar10;
      goto LAB_14017940d;
    }
    if (*(undefined8 **)(lVar16 + 8 + local_68 * 0x10) != puVar19) goto LAB_14017940d;
  }
  *(undefined8 **)(lVar16 + 8 + local_68 * 0x10) = puVar10;
LAB_14017940d:
  uVar8 = 1;
  puVar20 = puVar10;
LAB_14017940f:
  *(undefined1 *)(local_res10 + 1) = uVar8;
  *local_res10 = puVar20;
  return local_res10;
}

