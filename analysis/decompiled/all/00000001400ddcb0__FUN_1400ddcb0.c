// Function: FUN_1400ddcb0
// Addr: 1400ddcb0
// Size: 1320 bytes


undefined8 * FUN_1400ddcb0(float *param_1,undefined8 *param_2)

{
  byte *pbVar1;
  longlong *plVar2;
  longlong *plVar3;
  size_t _Size;
  undefined8 *puVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  int iVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  byte bVar10;
  ulonglong uVar11;
  longlong lVar12;
  ulonglong uVar13;
  longlong *plVar14;
  undefined8 *_Buf1;
  ulonglong uVar15;
  longlong *plVar16;
  undefined8 *_Buf2;
  float *pfVar17;
  longlong *plVar18;
  undefined8 *puVar19;
  ulonglong uVar20;
  float fVar21;
  float *local_res8;
  float *local_res10;
  ulonglong local_res18;
  undefined8 *local_res20;
  undefined8 *local_60;
  undefined8 *local_58;
  
  puVar8 = param_2;
  if (0xf < (ulonglong)param_2[3]) {
    puVar8 = (undefined8 *)*param_2;
  }
  uVar11 = 0;
  uVar20 = 0xcbf29ce484222325;
  local_res18 = 0xcbf29ce484222325;
  if (param_2[2] != 0) {
    do {
      pbVar1 = (byte *)(uVar11 + (longlong)puVar8);
      uVar11 = uVar11 + 1;
      uVar20 = (uVar20 ^ *pbVar1) * 0x100000001b3;
      local_res18 = uVar20;
    } while (uVar11 < (ulonglong)param_2[2]);
  }
  uVar11 = local_res18;
  local_res8 = param_1;
  FUN_1400110a0(param_1,&local_60,param_2,local_res18);
  puVar8 = local_58;
  if (local_58 != (undefined8 *)0x0) goto LAB_1400de1a6;
  if (*(longlong *)(param_1 + 4) == 0x492492492492492) {
                    /* WARNING: Subroutine does not return */
    FUN_14028c2e0("unordered_map/set too long");
  }
  puVar8 = (undefined8 *)FUN_14028af20(0x38);
  puVar5 = puVar8 + 2;
  local_res20 = puVar8;
  FUN_140016fc0(puVar5,param_2);
  *(undefined4 *)(puVar8 + 6) = 0;
  uVar20 = *(ulonglong *)(param_1 + 0xe);
  if (*param_1 < (float)(*(longlong *)(param_1 + 4) + 1) / (float)uVar20) {
    fVar21 = (float)FUN_140419fa0((float)(*(longlong *)(param_1 + 4) + 1) / *param_1);
    lVar12 = 0;
    if ((DAT_140492974 <= fVar21) && (fVar21 = fVar21 - DAT_140492974, fVar21 < DAT_140492974)) {
      lVar12 = -0x8000000000000000;
    }
    uVar13 = 8;
    if (8 < (ulonglong)((longlong)fVar21 + lVar12)) {
      uVar13 = (longlong)fVar21 + lVar12;
    }
    uVar15 = uVar20;
    if ((uVar20 < uVar13) && ((0x1ff < uVar20 || (uVar15 = uVar20 * 8, uVar20 * 8 < uVar13)))) {
      uVar15 = uVar13;
    }
    for (lVar12 = 0x3f; 0xfffffffffffffffU >> lVar12 == 0; lVar12 = lVar12 + -1) {
    }
    if ((ulonglong)(1L << ((byte)lVar12 & 0x3f)) < uVar15) {
                    /* WARNING: Subroutine does not return */
      FUN_14028c2e0("invalid hash bucket count");
    }
    plVar2 = *(longlong **)(param_1 + 2);
    pfVar17 = param_1 + 6;
    uVar20 = uVar15 - 1 | 1;
    lVar12 = 0x3f;
    if (uVar20 != 0) {
      for (; uVar20 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    bVar10 = (char)lVar12 + 1;
    lVar12 = 1L << (bVar10 & 0x3f);
    local_res10 = pfVar17;
    FUN_140011f50(pfVar17,2L << (bVar10 & 0x3f),plVar2);
    *(longlong *)(param_1 + 0xe) = lVar12;
    *(longlong *)(param_1 + 0xc) = lVar12 + -1;
    plVar6 = (longlong *)**(undefined8 **)(param_1 + 2);
joined_r0x0001400ddec7:
    if (plVar6 != plVar2) {
      uVar20 = plVar6[5];
      plVar9 = plVar6 + 2;
      plVar3 = (longlong *)*plVar6;
      uVar11 = plVar6[4];
      if (0xf < uVar20) {
        plVar9 = (longlong *)plVar6[2];
      }
      uVar13 = 0;
      uVar15 = 0xcbf29ce484222325;
      if (uVar11 != 0) {
        do {
          pbVar1 = (byte *)((longlong)plVar9 + uVar13);
          uVar13 = uVar13 + 1;
          uVar15 = (uVar15 ^ *pbVar1) * 0x100000001b3;
          pfVar17 = local_res10;
        } while (uVar13 < uVar11);
      }
      lVar12 = *(longlong *)pfVar17;
      uVar15 = *(ulonglong *)(local_res8 + 0xc) & uVar15;
      plVar9 = *(longlong **)(lVar12 + uVar15 * 0x10);
      if (plVar9 == plVar2) {
        *(longlong **)(lVar12 + uVar15 * 0x10) = plVar6;
        *(longlong **)(lVar12 + 8 + uVar15 * 0x10) = plVar6;
        plVar6 = plVar3;
        puVar8 = local_res20;
        param_1 = local_res8;
        uVar11 = local_res18;
      }
      else {
        plVar18 = *(longlong **)(lVar12 + 8 + uVar15 * 0x10);
        plVar16 = plVar18 + 2;
        if (0xf < (ulonglong)plVar18[5]) {
          plVar16 = (longlong *)*plVar16;
        }
        plVar14 = plVar6 + 2;
        if (0xf < uVar20) {
          plVar14 = (longlong *)plVar6[2];
        }
        if (uVar11 == plVar18[4]) {
          if ((uVar11 != 0) && (iVar7 = memcmp(plVar14,plVar16,uVar11), iVar7 != 0)) {
            plVar9 = *(longlong **)(lVar12 + uVar15 * 0x10);
            uVar20 = plVar6[5];
            goto LAB_1400ddfce;
          }
          plVar18 = (longlong *)*plVar18;
          if (plVar18 != plVar6) {
            plVar9 = (longlong *)plVar6[1];
            *plVar9 = (longlong)plVar3;
            puVar8 = (undefined8 *)plVar3[1];
            *puVar8 = plVar18;
            puVar19 = (undefined8 *)plVar18[1];
            *puVar19 = plVar6;
            plVar18[1] = (longlong)puVar8;
            plVar3[1] = (longlong)plVar9;
            plVar6[1] = (longlong)puVar19;
          }
          *(longlong **)(lVar12 + 8 + uVar15 * 0x10) = plVar6;
          pfVar17 = local_res10;
          plVar6 = plVar3;
          puVar8 = local_res20;
          param_1 = local_res8;
          uVar11 = local_res18;
        }
        else {
LAB_1400ddfce:
          if (plVar9 != plVar18) {
            do {
              plVar18 = (longlong *)plVar18[1];
              plVar16 = plVar18 + 2;
              if (0xf < (ulonglong)plVar18[5]) {
                plVar16 = (longlong *)*plVar16;
              }
              if (uVar20 < 0x10) {
                plVar14 = plVar6 + 2;
              }
              else {
                plVar14 = (longlong *)plVar6[2];
              }
              if (uVar11 == plVar18[4]) {
                if ((uVar11 == 0) || (iVar7 = memcmp(plVar14,plVar16,uVar11), iVar7 == 0)) {
                  lVar12 = *plVar18;
                  plVar9 = (longlong *)plVar6[1];
                  *plVar9 = (longlong)plVar3;
                  plVar16 = (longlong *)plVar3[1];
                  *plVar16 = lVar12;
                  puVar8 = *(undefined8 **)(lVar12 + 8);
                  *puVar8 = plVar6;
                  *(longlong **)(lVar12 + 8) = plVar16;
                  plVar3[1] = (longlong)plVar9;
                  plVar6[1] = (longlong)puVar8;
                  pfVar17 = local_res10;
                  plVar6 = plVar3;
                  puVar8 = local_res20;
                  param_1 = local_res8;
                  uVar11 = local_res18;
                  goto joined_r0x0001400ddec7;
                }
                plVar9 = *(longlong **)(lVar12 + uVar15 * 0x10);
                uVar20 = plVar6[5];
              }
            } while (plVar9 != plVar18);
          }
          plVar9 = (longlong *)plVar6[1];
          *plVar9 = (longlong)plVar3;
          puVar8 = (undefined8 *)plVar3[1];
          *puVar8 = plVar18;
          puVar19 = (undefined8 *)plVar18[1];
          *puVar19 = plVar6;
          plVar18[1] = (longlong)puVar8;
          plVar3[1] = (longlong)plVar9;
          plVar6[1] = (longlong)puVar19;
          *(longlong **)(lVar12 + uVar15 * 0x10) = plVar6;
          pfVar17 = local_res10;
          plVar6 = plVar3;
          puVar8 = local_res20;
          param_1 = local_res8;
          uVar11 = local_res18;
        }
      }
      goto joined_r0x0001400ddec7;
    }
    local_res8 = (float *)0x0;
    FUN_1400e6380(&local_res8);
    puVar19 = *(undefined8 **)
               (*(longlong *)pfVar17 + 8 + (uVar11 & *(ulonglong *)(param_1 + 0xc)) * 0x10);
    local_60 = *(undefined8 **)(param_1 + 2);
    if (puVar19 != *(undefined8 **)(param_1 + 2)) {
      uVar20 = puVar8[5];
      _Size = puVar8[4];
      puVar4 = *(undefined8 **)
                (*(longlong *)pfVar17 + (uVar11 & *(ulonglong *)(param_1 + 0xc)) * 0x10);
      while( true ) {
        _Buf2 = puVar19 + 2;
        if (0xf < (ulonglong)puVar19[5]) {
          _Buf2 = (undefined8 *)*_Buf2;
        }
        _Buf1 = puVar5;
        if (0xf < uVar20) {
          _Buf1 = (undefined8 *)*puVar5;
        }
        if ((_Size == puVar19[4]) &&
           ((_Size == 0 || (iVar7 = memcmp(_Buf1,_Buf2,_Size), iVar7 == 0)))) break;
        local_60 = puVar19;
        if (puVar19 == puVar4) goto LAB_1400de15b;
        puVar19 = (undefined8 *)puVar19[1];
      }
      local_60 = (undefined8 *)*puVar19;
    }
  }
LAB_1400de15b:
  puVar5 = (undefined8 *)local_60[1];
  *(longlong *)(param_1 + 4) = *(longlong *)(param_1 + 4) + 1;
  *puVar8 = local_60;
  puVar8[1] = puVar5;
  *puVar5 = puVar8;
  local_60[1] = puVar8;
  lVar12 = *(longlong *)(param_1 + 6);
  uVar11 = *(ulonglong *)(param_1 + 0xc) & uVar11;
  puVar19 = *(undefined8 **)(lVar12 + uVar11 * 0x10);
  if (puVar19 == *(undefined8 **)(param_1 + 2)) {
    *(undefined8 **)(lVar12 + uVar11 * 0x10) = puVar8;
  }
  else {
    if (puVar19 == local_60) {
      *(undefined8 **)(lVar12 + uVar11 * 0x10) = puVar8;
      goto LAB_1400de1a6;
    }
    if (*(undefined8 **)(lVar12 + 8 + uVar11 * 0x10) != puVar5) goto LAB_1400de1a6;
  }
  *(undefined8 **)(lVar12 + 8 + uVar11 * 0x10) = puVar8;
LAB_1400de1a6:
  return puVar8 + 6;
}

