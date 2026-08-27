// Function: FUN_140151f40
// Addr: 140151f40
// Size: 1376 bytes


undefined8 * FUN_140151f40(float *param_1,undefined8 *param_2)

{
  float *pfVar1;
  byte *pbVar2;
  longlong *plVar3;
  longlong *plVar4;
  size_t _Size;
  longlong *plVar5;
  int iVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  longlong *plVar9;
  byte bVar10;
  ulonglong uVar11;
  undefined8 *puVar12;
  longlong lVar13;
  ulonglong uVar14;
  longlong *plVar15;
  longlong *_Buf1;
  undefined8 *_Buf1_00;
  undefined8 *puVar16;
  undefined8 *puVar17;
  longlong *plVar18;
  undefined8 *puVar19;
  float *pfVar20;
  ulonglong uVar21;
  float fVar22;
  float *local_res8;
  longlong *local_res10;
  longlong local_res18;
  ulonglong local_res20;
  
  uVar8 = param_2[3];
  uVar14 = param_2[2];
  puVar17 = param_2;
  if (0xf < uVar8) {
    puVar17 = (undefined8 *)*param_2;
  }
  uVar11 = 0;
  uVar21 = 0xcbf29ce484222325;
  local_res20 = 0xcbf29ce484222325;
  if (uVar14 != 0) {
    do {
      pbVar2 = (byte *)(uVar11 + (longlong)puVar17);
      uVar11 = uVar11 + 1;
      uVar21 = (uVar21 ^ *pbVar2) * 0x100000001b3;
      local_res20 = uVar21;
    } while (uVar11 < uVar14);
  }
  uVar11 = local_res20;
  puVar17 = *(undefined8 **)(param_1 + 2);
  puVar16 = *(undefined8 **)
             (*(longlong *)(param_1 + 6) + 8 + (local_res20 & *(ulonglong *)(param_1 + 0xc)) * 0x10)
  ;
  local_res8 = param_1;
  if (puVar16 != puVar17) {
    puVar19 = *(undefined8 **)
               (*(longlong *)(param_1 + 6) + (local_res20 & *(ulonglong *)(param_1 + 0xc)) * 0x10);
    puVar17 = puVar16;
    while( true ) {
      puVar16 = puVar17 + 2;
      if (0xf < (ulonglong)puVar17[5]) {
        puVar16 = (undefined8 *)*puVar16;
      }
      puVar12 = param_2;
      if (0xf < uVar8) {
        puVar12 = (undefined8 *)*param_2;
      }
      if ((uVar14 == puVar17[4]) &&
         ((puVar7 = puVar17, uVar14 == 0 || (iVar6 = memcmp(puVar12,puVar16,uVar14), iVar6 == 0))))
      goto LAB_14015246f;
      if (puVar17 == puVar19) break;
      puVar17 = (undefined8 *)puVar17[1];
    }
  }
  if (*(longlong *)(param_1 + 4) == 0x492492492492492) {
                    /* WARNING: Subroutine does not return */
    FUN_14028c2e0("unordered_map/set too long");
  }
  puVar7 = (undefined8 *)FUN_14028af20(0x38);
  puVar16 = puVar7 + 2;
  FUN_140016fc0(puVar16,param_2);
  puVar7[6] = 0;
  uVar8 = *(ulonglong *)(param_1 + 0xe);
  if (*param_1 < (float)(*(longlong *)(param_1 + 4) + 1) / (float)uVar8) {
    fVar22 = (float)FUN_140419fa0((float)(*(longlong *)(param_1 + 4) + 1) / *param_1);
    lVar13 = 0;
    if ((DAT_140492974 <= fVar22) && (fVar22 = fVar22 - DAT_140492974, fVar22 < DAT_140492974)) {
      lVar13 = -0x8000000000000000;
    }
    uVar14 = 8;
    if (8 < (ulonglong)((longlong)fVar22 + lVar13)) {
      uVar14 = (longlong)fVar22 + lVar13;
    }
    uVar21 = uVar8;
    if ((uVar8 < uVar14) && ((0x1ff < uVar8 || (uVar21 = uVar8 * 8, uVar8 * 8 < uVar14)))) {
      uVar21 = uVar14;
    }
    for (lVar13 = 0x3f; 0xfffffffffffffffU >> lVar13 == 0; lVar13 = lVar13 + -1) {
    }
    if ((ulonglong)(1L << ((byte)lVar13 & 0x3f)) < uVar21) {
                    /* WARNING: Subroutine does not return */
      FUN_14028c2e0("invalid hash bucket count");
    }
    plVar3 = *(longlong **)(param_1 + 2);
    uVar8 = uVar21 - 1 | 1;
    pfVar1 = param_1 + 6;
    lVar13 = 0x3f;
    if (uVar8 != 0) {
      for (; uVar8 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    bVar10 = (char)lVar13 + 1;
    lVar13 = 1L << (bVar10 & 0x3f);
    FUN_14004f190(pfVar1,2L << (bVar10 & 0x3f),plVar3);
    *(longlong *)(param_1 + 0xe) = lVar13;
    *(longlong *)(param_1 + 0xc) = lVar13 + -1;
    plVar5 = (longlong *)**(undefined8 **)(param_1 + 2);
    pfVar20 = local_res8;
    while (plVar5 != plVar3) {
      uVar14 = plVar5[5];
      plVar9 = plVar5 + 2;
      plVar4 = (longlong *)*plVar5;
      uVar8 = plVar5[4];
      if (0xf < uVar14) {
        plVar9 = (longlong *)plVar5[2];
      }
      uVar11 = 0;
      uVar21 = 0xcbf29ce484222325;
      if (uVar8 != 0) {
        do {
          pbVar2 = (byte *)((longlong)plVar9 + uVar11);
          uVar11 = uVar11 + 1;
          uVar21 = (uVar21 ^ *pbVar2) * 0x100000001b3;
          pfVar20 = local_res8;
        } while (uVar11 < uVar8);
      }
      uVar21 = uVar21 & *(ulonglong *)(pfVar20 + 0xc);
      local_res18 = *(longlong *)pfVar1;
      local_res10 = *(longlong **)(local_res18 + uVar21 * 0x10);
      if (local_res10 == plVar3) {
        *(longlong **)(local_res18 + uVar21 * 0x10) = plVar5;
        *(longlong **)(local_res18 + 8 + uVar21 * 0x10) = plVar5;
        plVar5 = plVar4;
        param_1 = local_res8;
        uVar11 = local_res20;
      }
      else {
        plVar18 = *(longlong **)(local_res18 + 8 + uVar21 * 0x10);
        plVar9 = plVar18 + 2;
        if (0xf < (ulonglong)plVar18[5]) {
          plVar9 = (longlong *)*plVar9;
        }
        plVar15 = plVar5 + 2;
        if (0xf < uVar14) {
          plVar15 = (longlong *)plVar5[2];
        }
        if (uVar8 == plVar18[4]) {
          if ((uVar8 != 0) && (iVar6 = memcmp(plVar15,plVar9,uVar8), iVar6 != 0)) {
            uVar14 = plVar5[5];
            goto LAB_1401522bc;
          }
          plVar18 = (longlong *)*plVar18;
          if (plVar18 != plVar5) {
            plVar9 = (longlong *)plVar5[1];
            *plVar9 = (longlong)plVar4;
            puVar17 = (undefined8 *)plVar4[1];
            *puVar17 = plVar18;
            puVar19 = (undefined8 *)plVar18[1];
            *puVar19 = plVar5;
            plVar18[1] = (longlong)puVar17;
            plVar4[1] = (longlong)plVar9;
            plVar5[1] = (longlong)puVar19;
          }
          *(longlong **)(local_res18 + 8 + uVar21 * 0x10) = plVar5;
        }
        else {
LAB_1401522bc:
          plVar9 = local_res10;
          if (local_res10 != plVar18) {
            do {
              plVar18 = (longlong *)plVar18[1];
              plVar15 = plVar18 + 2;
              if (0xf < (ulonglong)plVar18[5]) {
                plVar15 = (longlong *)*plVar15;
              }
              if (uVar14 < 0x10) {
                _Buf1 = plVar5 + 2;
              }
              else {
                _Buf1 = (longlong *)plVar5[2];
              }
              if (uVar8 == plVar18[4]) {
                if ((uVar8 == 0) || (iVar6 = memcmp(_Buf1,plVar15,uVar8), iVar6 == 0)) {
                  lVar13 = *plVar18;
                  plVar9 = (longlong *)plVar5[1];
                  *plVar9 = (longlong)plVar4;
                  plVar18 = (longlong *)plVar4[1];
                  *plVar18 = lVar13;
                  puVar17 = *(undefined8 **)(lVar13 + 8);
                  *puVar17 = plVar5;
                  *(longlong **)(lVar13 + 8) = plVar18;
                  plVar4[1] = (longlong)plVar9;
                  plVar5[1] = (longlong)puVar17;
                  goto LAB_140152340;
                }
                uVar14 = plVar5[5];
                plVar9 = local_res10;
              }
            } while (plVar9 != plVar18);
          }
          plVar9 = (longlong *)plVar5[1];
          *plVar9 = (longlong)plVar4;
          puVar17 = (undefined8 *)plVar4[1];
          *puVar17 = plVar18;
          puVar19 = (undefined8 *)plVar18[1];
          *puVar19 = plVar5;
          plVar18[1] = (longlong)puVar17;
          plVar4[1] = (longlong)plVar9;
          plVar5[1] = (longlong)puVar19;
          *(longlong **)(local_res18 + uVar21 * 0x10) = plVar5;
        }
LAB_140152340:
        pfVar1 = pfVar20 + 6;
        plVar5 = plVar4;
        param_1 = local_res8;
        uVar11 = local_res20;
      }
    }
    local_res8 = (float *)0x0;
    FUN_1400e6380(&local_res8);
    puVar19 = *(undefined8 **)
               (*(longlong *)pfVar1 + 8 + (uVar11 & *(ulonglong *)(param_1 + 0xc)) * 0x10);
    puVar17 = *(undefined8 **)(param_1 + 2);
    if (puVar19 != *(undefined8 **)(param_1 + 2)) {
      uVar8 = puVar7[5];
      _Size = puVar7[4];
      puVar12 = *(undefined8 **)
                 (*(longlong *)pfVar1 + (uVar11 & *(ulonglong *)(param_1 + 0xc)) * 0x10);
      while( true ) {
        puVar17 = puVar19 + 2;
        if (0xf < (ulonglong)puVar19[5]) {
          puVar17 = (undefined8 *)*puVar17;
        }
        _Buf1_00 = puVar16;
        if (0xf < uVar8) {
          _Buf1_00 = (undefined8 *)*puVar16;
        }
        if ((_Size == puVar19[4]) &&
           ((_Size == 0 || (iVar6 = memcmp(_Buf1_00,puVar17,_Size), iVar6 == 0)))) break;
        puVar17 = puVar19;
        if (puVar19 == puVar12) goto LAB_140152422;
        puVar19 = (undefined8 *)puVar19[1];
      }
      puVar17 = (undefined8 *)*puVar19;
    }
  }
LAB_140152422:
  puVar16 = (undefined8 *)puVar17[1];
  *(longlong *)(param_1 + 4) = *(longlong *)(param_1 + 4) + 1;
  *puVar7 = puVar17;
  puVar7[1] = puVar16;
  *puVar16 = puVar7;
  puVar17[1] = puVar7;
  lVar13 = *(longlong *)(param_1 + 6);
  uVar11 = *(ulonglong *)(param_1 + 0xc) & uVar11;
  puVar19 = *(undefined8 **)(lVar13 + uVar11 * 0x10);
  if (puVar19 == *(undefined8 **)(param_1 + 2)) {
    *(undefined8 **)(lVar13 + uVar11 * 0x10) = puVar7;
  }
  else {
    if (puVar19 == puVar17) {
      *(undefined8 **)(lVar13 + uVar11 * 0x10) = puVar7;
      goto LAB_14015246f;
    }
    if (*(undefined8 **)(lVar13 + 8 + uVar11 * 0x10) != puVar16) goto LAB_14015246f;
  }
  *(undefined8 **)(lVar13 + 8 + uVar11 * 0x10) = puVar7;
LAB_14015246f:
  return puVar7 + 6;
}

