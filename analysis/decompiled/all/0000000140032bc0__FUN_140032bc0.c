// Function: FUN_140032bc0
// Addr: 140032bc0
// Size: 1343 bytes


longlong * FUN_140032bc0(float *param_1,longlong *param_2,undefined8 *param_3)

{
  byte *pbVar1;
  longlong *plVar2;
  longlong *plVar3;
  size_t _Size;
  undefined8 *puVar4;
  longlong *plVar5;
  int iVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  byte bVar9;
  ulonglong uVar10;
  longlong lVar11;
  ulonglong uVar12;
  longlong *plVar13;
  undefined8 *_Buf1;
  ulonglong uVar14;
  longlong *plVar15;
  undefined8 *_Buf2;
  float *pfVar16;
  longlong *plVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  ulonglong uVar20;
  float fVar21;
  float *local_res8;
  longlong *local_res10;
  float *local_res18;
  ulonglong local_res20;
  undefined8 *local_58;
  longlong local_50;
  
  puVar19 = param_3;
  if (0xf < (ulonglong)param_3[3]) {
    puVar19 = (undefined8 *)*param_3;
  }
  uVar10 = 0;
  uVar20 = 0xcbf29ce484222325;
  local_res20 = 0xcbf29ce484222325;
  if (param_3[2] != 0) {
    do {
      pbVar1 = (byte *)((longlong)puVar19 + uVar10);
      uVar10 = uVar10 + 1;
      uVar20 = (uVar20 ^ *pbVar1) * 0x100000001b3;
      local_res20 = uVar20;
    } while (uVar10 < (ulonglong)param_3[2]);
  }
  uVar10 = local_res20;
  local_res8 = param_1;
  local_res10 = param_2;
  FUN_1400110a0(param_1,&local_58,param_3,local_res20);
  if (local_50 != 0) {
    *param_2 = local_50;
    *(undefined1 *)(param_2 + 1) = 0;
    return param_2;
  }
  if (*(longlong *)(param_1 + 4) == 0x555555555555555) {
                    /* WARNING: Subroutine does not return */
    FUN_14028c2e0("unordered_map/set too long");
  }
  puVar7 = (undefined8 *)FUN_14028af20(0x30);
  puVar19 = puVar7 + 2;
  FUN_140016fc0(puVar19,param_3);
  uVar20 = *(ulonglong *)(param_1 + 0xe);
  if (*param_1 < (float)(*(longlong *)(param_1 + 4) + 1) / (float)uVar20) {
    fVar21 = (float)FUN_140419fa0((float)(*(longlong *)(param_1 + 4) + 1) / *param_1);
    lVar11 = 0;
    if ((DAT_140492974 <= fVar21) && (fVar21 = fVar21 - DAT_140492974, fVar21 < DAT_140492974)) {
      lVar11 = -0x8000000000000000;
    }
    uVar12 = 8;
    if (8 < (ulonglong)((longlong)fVar21 + lVar11)) {
      uVar12 = (longlong)fVar21 + lVar11;
    }
    uVar14 = uVar20;
    if ((uVar20 < uVar12) && ((0x1ff < uVar20 || (uVar14 = uVar20 * 8, uVar20 * 8 < uVar12)))) {
      uVar14 = uVar12;
    }
    for (lVar11 = 0x3f; 0xfffffffffffffffU >> lVar11 == 0; lVar11 = lVar11 + -1) {
    }
    if ((ulonglong)(1L << ((byte)lVar11 & 0x3f)) < uVar14) {
                    /* WARNING: Subroutine does not return */
      FUN_14028c2e0("invalid hash bucket count");
    }
    plVar2 = *(longlong **)(param_1 + 2);
    pfVar16 = param_1 + 6;
    uVar20 = uVar14 - 1 | 1;
    lVar11 = 0x3f;
    if (uVar20 != 0) {
      for (; uVar20 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    bVar9 = (char)lVar11 + 1;
    lVar11 = 1L << (bVar9 & 0x3f);
    local_res18 = pfVar16;
    FUN_140037600(pfVar16,2L << (bVar9 & 0x3f),plVar2);
    *(longlong *)(param_1 + 0xe) = lVar11;
    *(longlong *)(param_1 + 0xc) = lVar11 + -1;
    plVar5 = (longlong *)**(undefined8 **)(param_1 + 2);
joined_r0x000140032ddd:
    if (plVar5 != plVar2) {
      uVar20 = plVar5[5];
      plVar8 = plVar5 + 2;
      plVar3 = (longlong *)*plVar5;
      uVar10 = plVar5[4];
      if (0xf < uVar20) {
        plVar8 = (longlong *)plVar5[2];
      }
      uVar12 = 0;
      uVar14 = 0xcbf29ce484222325;
      if (uVar10 != 0) {
        do {
          pbVar1 = (byte *)(uVar12 + (longlong)plVar8);
          uVar12 = uVar12 + 1;
          uVar14 = (uVar14 ^ *pbVar1) * 0x100000001b3;
        } while (uVar12 < uVar10);
        pfVar16 = param_1 + 6;
      }
      lVar11 = *(longlong *)pfVar16;
      uVar14 = *(ulonglong *)(param_1 + 0xc) & uVar14;
      plVar8 = *(longlong **)(lVar11 + uVar14 * 0x10);
      if (plVar8 == plVar2) {
        *(longlong **)(lVar11 + uVar14 * 0x10) = plVar5;
        *(longlong **)(lVar11 + 8 + uVar14 * 0x10) = plVar5;
        plVar5 = plVar3;
        param_1 = local_res8;
        uVar10 = local_res20;
      }
      else {
        plVar17 = *(longlong **)(lVar11 + 8 + uVar14 * 0x10);
        plVar15 = plVar17 + 2;
        if (0xf < (ulonglong)plVar17[5]) {
          plVar15 = (longlong *)*plVar15;
        }
        plVar13 = plVar5 + 2;
        if (0xf < uVar20) {
          plVar13 = (longlong *)plVar5[2];
        }
        if (uVar10 == plVar17[4]) {
          if ((uVar10 != 0) && (iVar6 = memcmp(plVar13,plVar15,uVar10), iVar6 != 0)) {
            plVar8 = *(longlong **)(lVar11 + uVar14 * 0x10);
            uVar20 = plVar5[5];
            goto LAB_140032ee2;
          }
          plVar17 = (longlong *)*plVar17;
          if (plVar17 != plVar5) {
            plVar8 = (longlong *)plVar5[1];
            *plVar8 = (longlong)plVar3;
            puVar18 = (undefined8 *)plVar3[1];
            *puVar18 = plVar17;
            puVar4 = (undefined8 *)plVar17[1];
            *puVar4 = plVar5;
            plVar17[1] = (longlong)puVar18;
            plVar3[1] = (longlong)plVar8;
            plVar5[1] = (longlong)puVar4;
          }
          *(longlong **)(lVar11 + 8 + uVar14 * 0x10) = plVar5;
          pfVar16 = local_res18;
          plVar5 = plVar3;
          param_1 = local_res8;
          uVar10 = local_res20;
        }
        else {
LAB_140032ee2:
          if (plVar8 != plVar17) {
            do {
              plVar17 = (longlong *)plVar17[1];
              plVar15 = plVar17 + 2;
              if (0xf < (ulonglong)plVar17[5]) {
                plVar15 = (longlong *)*plVar15;
              }
              if (uVar20 < 0x10) {
                plVar13 = plVar5 + 2;
              }
              else {
                plVar13 = (longlong *)plVar5[2];
              }
              if (uVar10 == plVar17[4]) {
                if ((uVar10 == 0) || (iVar6 = memcmp(plVar13,plVar15,uVar10), iVar6 == 0)) {
                  lVar11 = *plVar17;
                  plVar8 = (longlong *)plVar5[1];
                  *plVar8 = (longlong)plVar3;
                  plVar15 = (longlong *)plVar3[1];
                  *plVar15 = lVar11;
                  puVar18 = *(undefined8 **)(lVar11 + 8);
                  *puVar18 = plVar5;
                  *(longlong **)(lVar11 + 8) = plVar15;
                  plVar3[1] = (longlong)plVar8;
                  plVar5[1] = (longlong)puVar18;
                  pfVar16 = local_res18;
                  plVar5 = plVar3;
                  param_1 = local_res8;
                  uVar10 = local_res20;
                  goto joined_r0x000140032ddd;
                }
                plVar8 = *(longlong **)(lVar11 + uVar14 * 0x10);
                uVar20 = plVar5[5];
              }
            } while (plVar8 != plVar17);
          }
          plVar8 = (longlong *)plVar5[1];
          *plVar8 = (longlong)plVar3;
          puVar18 = (undefined8 *)plVar3[1];
          *puVar18 = plVar17;
          puVar4 = (undefined8 *)plVar17[1];
          *puVar4 = plVar5;
          plVar17[1] = (longlong)puVar18;
          plVar3[1] = (longlong)plVar8;
          plVar5[1] = (longlong)puVar4;
          *(longlong **)(lVar11 + uVar14 * 0x10) = plVar5;
          pfVar16 = local_res18;
          plVar5 = plVar3;
          param_1 = local_res8;
          uVar10 = local_res20;
        }
      }
      goto joined_r0x000140032ddd;
    }
    local_res8 = (float *)0x0;
    FUN_140038ea0(&local_res8);
    puVar18 = *(undefined8 **)
               (*(longlong *)pfVar16 + 8 + (uVar10 & *(ulonglong *)(param_1 + 0xc)) * 0x10);
    local_58 = *(undefined8 **)(param_1 + 2);
    param_2 = local_res10;
    if (puVar18 != *(undefined8 **)(param_1 + 2)) {
      uVar20 = puVar7[5];
      _Size = puVar7[4];
      puVar4 = *(undefined8 **)
                (*(longlong *)pfVar16 + (uVar10 & *(ulonglong *)(param_1 + 0xc)) * 0x10);
      while( true ) {
        _Buf2 = puVar18 + 2;
        if (0xf < (ulonglong)puVar18[5]) {
          _Buf2 = (undefined8 *)*_Buf2;
        }
        _Buf1 = puVar19;
        if (0xf < uVar20) {
          _Buf1 = (undefined8 *)*puVar19;
        }
        if ((_Size == puVar18[4]) &&
           ((_Size == 0 || (iVar6 = memcmp(_Buf1,_Buf2,_Size), iVar6 == 0)))) break;
        local_58 = puVar18;
        param_2 = local_res10;
        if (puVar18 == puVar4) goto LAB_14003307b;
        puVar18 = (undefined8 *)puVar18[1];
      }
      local_58 = (undefined8 *)*puVar18;
      param_2 = local_res10;
    }
  }
LAB_14003307b:
  puVar19 = (undefined8 *)local_58[1];
  *(longlong *)(param_1 + 4) = *(longlong *)(param_1 + 4) + 1;
  *puVar7 = local_58;
  puVar7[1] = puVar19;
  *puVar19 = puVar7;
  local_58[1] = puVar7;
  lVar11 = *(longlong *)(param_1 + 6);
  uVar10 = *(ulonglong *)(param_1 + 0xc) & uVar10;
  puVar18 = *(undefined8 **)(lVar11 + uVar10 * 0x10);
  if (puVar18 == *(undefined8 **)(param_1 + 2)) {
    *(undefined8 **)(lVar11 + uVar10 * 0x10) = puVar7;
  }
  else {
    if (puVar18 == local_58) {
      *(undefined8 **)(lVar11 + uVar10 * 0x10) = puVar7;
      goto LAB_1400330c8;
    }
    if (*(undefined8 **)(lVar11 + 8 + uVar10 * 0x10) != puVar19) goto LAB_1400330c8;
  }
  *(undefined8 **)(lVar11 + 8 + uVar10 * 0x10) = puVar7;
LAB_1400330c8:
  *param_2 = (longlong)puVar7;
  *(undefined1 *)(param_2 + 1) = 1;
  return param_2;
}

