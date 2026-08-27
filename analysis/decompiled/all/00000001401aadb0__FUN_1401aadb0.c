// Function: FUN_1401aadb0
// Addr: 1401aadb0
// Size: 1627 bytes


/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_1401aadb0(float *param_1)

{
  float *pfVar1;
  byte *pbVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  code *pcVar7;
  longlong *plVar8;
  int iVar9;
  size_t sVar10;
  undefined8 *puVar11;
  ulonglong uVar12;
  byte bVar13;
  ulonglong uVar14;
  undefined8 *******pppppppuVar15;
  longlong lVar16;
  ulonglong uVar17;
  longlong *plVar18;
  undefined8 *_Buf1;
  undefined8 *******pppppppuVar19;
  undefined8 *puVar20;
  longlong *plVar21;
  longlong *plVar22;
  undefined8 *puVar23;
  undefined8 *puVar24;
  undefined1 *puVar25;
  float *pfVar26;
  ulonglong uVar27;
  float fVar28;
  float *local_res8 [4];
  char *in_stack_00000028;
  undefined4 in_stack_00000030;
  undefined4 in_stack_00000038;
  undefined4 in_stack_00000040;
  undefined4 in_stack_00000048;
  undefined1 auStack_e8 [8];
  undefined1 auStack_e0 [24];
  char *local_c8;
  undefined4 local_c0;
  undefined4 local_b8;
  undefined4 local_b0;
  undefined4 local_a8;
  longlong local_98;
  ulonglong local_90;
  undefined8 local_88;
  undefined8 *local_80;
  undefined8 *******local_70;
  undefined8 uStack_68;
  ulonglong local_60;
  ulonglong uStack_58;
  
  puVar25 = auStack_e8;
  local_a8 = in_stack_00000048;
  local_b0 = in_stack_00000040;
  local_b8 = in_stack_00000038;
  local_c0 = in_stack_00000030;
  local_c8 = in_stack_00000028;
  local_res8[0] = param_1;
  local_88 = (**(code **)(**(longlong **)(*(longlong *)(param_1 + 0x10) + 0x1518) + 0x70))();
  if (in_stack_00000028 == (char *)0x0) {
    return local_88;
  }
  uVar14 = 0;
  local_60 = 0;
  local_70 = (undefined8 *******)0x0;
  uStack_68 = 0;
  uStack_58 = 0;
  sVar10 = strlen(in_stack_00000028);
  FUN_140017480(&local_70,in_stack_00000028,sVar10);
  uVar17 = uStack_58;
  uVar12 = local_60;
  pppppppuVar19 = local_70;
  uVar27 = 0xcbf29ce484222325;
  pppppppuVar15 = &local_70;
  if (0xf < uStack_58) {
    pppppppuVar15 = local_70;
  }
  local_90 = 0xcbf29ce484222325;
  if (local_60 != 0) {
    do {
      pbVar2 = (byte *)((longlong)pppppppuVar15 + uVar14);
      uVar14 = uVar14 + 1;
      uVar27 = (uVar27 ^ *pbVar2) * 0x100000001b3;
      local_90 = uVar27;
    } while (uVar14 < local_60);
  }
  uVar14 = local_90;
  puVar23 = *(undefined8 **)(param_1 + 2);
  puVar20 = *(undefined8 **)
             (*(longlong *)(param_1 + 6) + 8 + (local_90 & *(ulonglong *)(param_1 + 0xc)) * 0x10);
  if (puVar20 != puVar23) {
    puVar24 = *(undefined8 **)
               (*(longlong *)(param_1 + 6) + (local_90 & *(ulonglong *)(param_1 + 0xc)) * 0x10);
    puVar23 = puVar20;
    while( true ) {
      puVar20 = puVar23 + 2;
      if (0xf < (ulonglong)puVar23[5]) {
        puVar20 = (undefined8 *)*puVar20;
      }
      pppppppuVar15 = &local_70;
      if (0xf < uVar17) {
        pppppppuVar15 = pppppppuVar19;
      }
      if ((uVar12 == puVar23[4]) &&
         ((puVar11 = puVar23, uVar12 == 0 ||
          (iVar9 = memcmp(pppppppuVar15,puVar20,uVar12), iVar9 == 0)))) goto LAB_1401ab38d;
      if (puVar23 == puVar24) break;
      puVar23 = (undefined8 *)puVar23[1];
    }
  }
  if (*(longlong *)(param_1 + 4) == 0x492492492492492) {
                    /* WARNING: Subroutine does not return */
    FUN_14028c2e0("unordered_map/set too long");
  }
  puVar11 = (undefined8 *)FUN_14028af20(0x38);
  puVar11[2] = local_70;
  puVar11[3] = uStack_68;
  puVar20 = puVar11 + 2;
  puVar11[4] = local_60;
  puVar11[5] = uStack_58;
  local_60 = 0;
  uStack_58 = 0xf;
  local_70 = (undefined8 *******)((ulonglong)local_70 & 0xffffffffffffff00);
  puVar11[6] = 0;
  uVar12 = *(ulonglong *)(param_1 + 0xe);
  local_80 = puVar11;
  if (*param_1 < (float)(*(longlong *)(param_1 + 4) + 1) / (float)uVar12) {
    fVar28 = (float)FUN_140419fa0((float)(*(longlong *)(param_1 + 4) + 1) / *param_1);
    lVar16 = 0;
    if ((DAT_140492974 <= fVar28) && (fVar28 = fVar28 - DAT_140492974, fVar28 < DAT_140492974)) {
      lVar16 = -0x8000000000000000;
    }
    uVar17 = 8;
    if (8 < (ulonglong)((longlong)fVar28 + lVar16)) {
      uVar17 = (longlong)fVar28 + lVar16;
    }
    uVar27 = uVar12;
    if ((uVar12 < uVar17) && ((0x1ff < uVar12 || (uVar27 = uVar12 * 8, uVar12 * 8 < uVar17)))) {
      uVar27 = uVar17;
    }
    for (lVar16 = 0x3f; 0xfffffffffffffffU >> lVar16 == 0; lVar16 = lVar16 + -1) {
    }
    if ((ulonglong)(1L << ((byte)lVar16 & 0x3f)) < uVar27) goto LAB_1401ab3f3;
    plVar3 = *(longlong **)(param_1 + 2);
    uVar12 = uVar27 - 1 | 1;
    pfVar1 = param_1 + 6;
    lVar16 = 0x3f;
    if (uVar12 != 0) {
      for (; uVar12 >> lVar16 == 0; lVar16 = lVar16 + -1) {
      }
    }
    bVar13 = (char)lVar16 + 1;
    lVar16 = 1L << (bVar13 & 0x3f);
    FUN_14004f190(pfVar1,2L << (bVar13 & 0x3f),plVar3);
    *(longlong *)(param_1 + 0xe) = lVar16;
    *(longlong *)(param_1 + 0xc) = lVar16 + -1;
    plVar8 = (longlong *)**(undefined8 **)(param_1 + 2);
    pfVar26 = local_res8[0];
    while (plVar8 != plVar3) {
      uVar12 = plVar8[5];
      plVar21 = plVar8 + 2;
      plVar4 = (longlong *)*plVar8;
      uVar17 = plVar8[4];
      if (0xf < uVar12) {
        plVar21 = (longlong *)plVar8[2];
      }
      uVar14 = 0;
      uVar27 = 0xcbf29ce484222325;
      if (uVar17 != 0) {
        do {
          pbVar2 = (byte *)((longlong)plVar21 + uVar14);
          uVar14 = uVar14 + 1;
          uVar27 = (uVar27 ^ *pbVar2) * 0x100000001b3;
          pfVar26 = local_res8[0];
        } while (uVar14 < uVar17);
      }
      uVar27 = uVar27 & *(ulonglong *)(pfVar26 + 0xc);
      local_98 = *(longlong *)pfVar1;
      plVar21 = *(longlong **)(local_98 + uVar27 * 0x10);
      if (plVar21 == plVar3) {
        *(longlong **)(local_98 + uVar27 * 0x10) = plVar8;
        *(longlong **)(local_98 + 8 + uVar27 * 0x10) = plVar8;
        plVar8 = plVar4;
        puVar11 = local_80;
        param_1 = local_res8[0];
        uVar14 = local_90;
      }
      else {
        plVar5 = *(longlong **)(local_98 + 8 + uVar27 * 0x10);
        plVar22 = plVar5 + 2;
        if (0xf < (ulonglong)plVar5[5]) {
          plVar22 = (longlong *)*plVar22;
        }
        plVar18 = plVar8 + 2;
        if (0xf < uVar12) {
          plVar18 = (longlong *)plVar8[2];
        }
        if (uVar17 == plVar5[4]) {
          if ((uVar17 != 0) && (iVar9 = memcmp(plVar18,plVar22,uVar17), iVar9 != 0)) {
            uVar12 = plVar8[5];
            goto joined_r0x0001401ab1d9;
          }
          plVar5 = (longlong *)*plVar5;
          if (plVar5 != plVar8) {
            plVar21 = (longlong *)plVar8[1];
            *plVar21 = (longlong)plVar4;
            puVar23 = (undefined8 *)plVar4[1];
            *puVar23 = plVar5;
            puVar24 = (undefined8 *)plVar5[1];
            *puVar24 = plVar8;
            plVar5[1] = (longlong)puVar23;
            plVar4[1] = (longlong)plVar21;
            plVar8[1] = (longlong)puVar24;
          }
          *(longlong **)(local_98 + 8 + uVar27 * 0x10) = plVar8;
        }
        else {
joined_r0x0001401ab1d9:
          while (plVar21 != plVar5) {
            plVar5 = (longlong *)plVar5[1];
            plVar22 = plVar5 + 2;
            if (0xf < (ulonglong)plVar5[5]) {
              plVar22 = (longlong *)*plVar22;
            }
            if (uVar12 < 0x10) {
              plVar18 = plVar8 + 2;
            }
            else {
              plVar18 = (longlong *)plVar8[2];
            }
            if (uVar17 == plVar5[4]) {
              if ((uVar17 == 0) || (iVar9 = memcmp(plVar18,plVar22,uVar17), iVar9 == 0)) {
                lVar16 = *plVar5;
                plVar21 = (longlong *)plVar8[1];
                *plVar21 = (longlong)plVar4;
                plVar22 = (longlong *)plVar4[1];
                *plVar22 = lVar16;
                puVar23 = *(undefined8 **)(lVar16 + 8);
                *puVar23 = plVar8;
                *(longlong **)(lVar16 + 8) = plVar22;
                plVar4[1] = (longlong)plVar21;
                plVar8[1] = (longlong)puVar23;
                goto LAB_1401ab25c;
              }
              uVar12 = plVar8[5];
            }
          }
          plVar21 = (longlong *)plVar8[1];
          *plVar21 = (longlong)plVar4;
          puVar23 = (undefined8 *)plVar4[1];
          *puVar23 = plVar5;
          puVar24 = (undefined8 *)plVar5[1];
          *puVar24 = plVar8;
          plVar5[1] = (longlong)puVar23;
          plVar4[1] = (longlong)plVar21;
          plVar8[1] = (longlong)puVar24;
          *(longlong **)(local_98 + uVar27 * 0x10) = plVar8;
        }
LAB_1401ab25c:
        pfVar1 = pfVar26 + 6;
        plVar8 = plVar4;
        puVar11 = local_80;
        param_1 = local_res8[0];
        uVar14 = local_90;
      }
    }
    local_res8[0] = (float *)0x0;
    FUN_1400e6380(local_res8);
    puVar24 = *(undefined8 **)
               (*(longlong *)pfVar1 + 8 + (uVar14 & *(ulonglong *)(param_1 + 0xc)) * 0x10);
    puVar23 = *(undefined8 **)(param_1 + 2);
    if (puVar24 != *(undefined8 **)(param_1 + 2)) {
      uVar12 = puVar11[5];
      sVar10 = puVar11[4];
      puVar6 = *(undefined8 **)
                (*(longlong *)pfVar1 + (uVar14 & *(ulonglong *)(param_1 + 0xc)) * 0x10);
      while( true ) {
        puVar23 = puVar24 + 2;
        if (0xf < (ulonglong)puVar24[5]) {
          puVar23 = (undefined8 *)*puVar23;
        }
        _Buf1 = puVar20;
        if (0xf < uVar12) {
          _Buf1 = (undefined8 *)*puVar20;
        }
        if ((sVar10 == puVar24[4]) &&
           ((sVar10 == 0 || (iVar9 = memcmp(_Buf1,puVar23,sVar10), iVar9 == 0)))) break;
        puVar23 = puVar24;
        if (puVar24 == puVar6) goto LAB_1401ab340;
        puVar24 = (undefined8 *)puVar24[1];
      }
      puVar23 = (undefined8 *)*puVar24;
    }
  }
LAB_1401ab340:
  puVar20 = (undefined8 *)puVar23[1];
  *(longlong *)(param_1 + 4) = *(longlong *)(param_1 + 4) + 1;
  *puVar11 = puVar23;
  puVar11[1] = puVar20;
  *puVar20 = puVar11;
  puVar23[1] = puVar11;
  lVar16 = *(longlong *)(param_1 + 6);
  uVar14 = *(ulonglong *)(param_1 + 0xc) & uVar14;
  puVar24 = *(undefined8 **)(lVar16 + uVar14 * 0x10);
  if (puVar24 == *(undefined8 **)(param_1 + 2)) {
    *(undefined8 **)(lVar16 + uVar14 * 0x10) = puVar11;
LAB_1401ab388:
    *(undefined8 **)(lVar16 + 8 + uVar14 * 0x10) = puVar11;
  }
  else if (puVar24 == puVar23) {
    *(undefined8 **)(lVar16 + uVar14 * 0x10) = puVar11;
  }
  else if (*(undefined8 **)(lVar16 + 8 + uVar14 * 0x10) == puVar20) goto LAB_1401ab388;
LAB_1401ab38d:
  puVar11[6] = local_88;
  if (0xf < uStack_58) {
    uVar12 = uStack_58 + 1;
    pppppppuVar19 = local_70;
    if (0xfff < uVar12) {
      pppppppuVar19 = (undefined8 *******)local_70[-1];
      if (0x1f < (ulonglong)((longlong)local_70 + (-8 - (longlong)pppppppuVar19))) {
        pcVar7 = (code *)swi(0x29);
        (*pcVar7)(5);
        puVar25 = auStack_e0;
LAB_1401ab3f3:
                    /* WARNING: Subroutine does not return */
        *(undefined **)(puVar25 + -8) = &UNK_1401ab3ff;
        FUN_14028c2e0("invalid hash bucket count");
      }
      uVar12 = uStack_58 + 0x28;
    }
    thunk_FUN_14028af80(pppppppuVar19,uVar12);
  }
  return local_88;
}

