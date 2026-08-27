// Function: FUN_140002170
// Addr: 140002170
// Size: 1648 bytes


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140002170(void)

{
  byte *pbVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  undefined8 uVar8;
  longlong *plVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  float fVar12;
  int iVar13;
  undefined8 *puVar14;
  undefined4 *puVar15;
  byte bVar16;
  ulonglong uVar17;
  longlong lVar18;
  ulonglong uVar19;
  longlong *plVar20;
  char *pcVar21;
  longlong *plVar22;
  longlong *plVar23;
  char *pcVar24;
  ulonglong uVar25;
  ulonglong uVar26;
  float fVar27;
  undefined4 uVar28;
  ulonglong local_res18;
  undefined4 *local_res20;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  char local_e8 [8];
  char local_e0 [4];
  char local_dc [2];
  undefined2 local_da;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined4 local_c8;
  char *local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  char *local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined4 local_78;
  char local_70 [8];
  undefined1 local_68 [40];
  
  local_e8 = (char  [8])s__rt_Reflection_14048b538._0_8_;
  local_e0 = (char  [4])s__rt_Reflection_14048b538._8_4_;
  local_dc = (char  [2])s__rt_Reflection_14048b538._12_2_;
  local_c0 = (char *)0x0;
  uStack_b8 = 0;
  local_da = 0;
  local_d8 = 0xe;
  local_d0 = 0xf;
  local_c8 = 1;
  local_b0 = 0;
  local_a8 = 0;
  local_c0 = (char *)FUN_14028af20(0x20);
  uVar28 = s__rt_FullFrameBuffer_14048b588._15_4_;
  uVar8 = CONCAT17(s__rt_FullFrameBuffer_14048b588[0xf],s__rt_FullFrameBuffer_14048b588._8_7_);
  local_b0 = 0x13;
  local_a8 = 0x1f;
  *(undefined8 *)local_c0 = s__rt_FullFrameBuffer_14048b588._0_8_;
  *(undefined8 *)(local_c0 + 8) = uVar8;
  *(undefined4 *)(local_c0 + 0xf) = uVar28;
  local_c0[0x13] = '\0';
  local_a0 = 2;
  local_98 = (char *)0x0;
  uStack_90 = 0;
  local_88 = 0;
  local_80 = 0;
  local_98 = (char *)FUN_14028af20(0x20);
  uVar8 = s__rt_MipMappedFrameBuffer_14048b568._16_8_;
  uVar11 = s__rt_MipMappedFrameBuffer_14048b568._12_4_;
  uVar10 = s__rt_MipMappedFrameBuffer_14048b568._8_4_;
  uVar28 = s__rt_MipMappedFrameBuffer_14048b568._4_4_;
  local_88 = 0x18;
  local_80 = 0x1f;
  *(undefined4 *)local_98 = s__rt_MipMappedFrameBuffer_14048b568._0_4_;
  *(undefined4 *)(local_98 + 4) = uVar28;
  *(undefined4 *)(local_98 + 8) = uVar10;
  *(undefined4 *)(local_98 + 0xc) = uVar11;
  *(undefined8 *)(local_98 + 0x10) = uVar8;
  local_98[0x18] = '\0';
  local_78 = 8;
  DAT_1404e7f90 = 0.0;
  DAT_1404e7f98 = (longlong *)0x0;
  DAT_1404e7fa0 = 0;
  DAT_1404e7f98 = (longlong *)FUN_14028af20(0x38);
  *DAT_1404e7f98 = (longlong)DAT_1404e7f98;
  DAT_1404e7f98[1] = (longlong)DAT_1404e7f98;
  DAT_1404e7fa8 = 0;
  _DAT_1404e7fb0 = 0;
  uRam00000001404e7fb8 = 0;
  DAT_1404e7fc0 = 7;
  DAT_1404e7fc8 = 8;
  DAT_1404e7f90 = 1.0;
  FUN_140011f50(&DAT_1404e7fa8,0x10,DAT_1404e7f98);
  fVar12 = DAT_140492974;
  pcVar24 = local_e8;
  do {
    uVar17 = 0;
    pcVar21 = pcVar24;
    if (0xf < *(ulonglong *)(pcVar24 + 0x18)) {
      pcVar21 = *(char **)pcVar24;
    }
    uVar25 = 0xcbf29ce484222325;
    local_res18 = 0xcbf29ce484222325;
    if (*(ulonglong *)(pcVar24 + 0x10) != 0) {
      do {
        pbVar1 = (byte *)(pcVar21 + uVar17);
        uVar17 = uVar17 + 1;
        uVar25 = (uVar25 ^ *pbVar1) * 0x100000001b3;
        local_res18 = uVar25;
      } while (uVar17 < *(ulonglong *)(pcVar24 + 0x10));
    }
    FUN_14015be30(uVar17,&local_f8,pcVar24,local_res18);
    if (CONCAT44(uStack_ec,uStack_f0) == 0) {
      if (DAT_1404e7fa0 == 0x492492492492492) {
                    /* WARNING: Subroutine does not return */
        FUN_14028c2e0("unordered_map/set too long");
      }
      puVar14 = (undefined8 *)FUN_14028af20(0x38);
      FUN_140016fc0(puVar14 + 2,pcVar24);
      *(undefined4 *)(puVar14 + 6) = *(undefined4 *)(pcVar24 + 0x20);
      uVar17 = DAT_1404e7fc8;
      if (DAT_1404e7f90 < (float)(DAT_1404e7fa0 + 1) / (float)DAT_1404e7fc8) {
        fVar27 = (float)FUN_140419fa0((float)(DAT_1404e7fa0 + 1) / DAT_1404e7f90);
        plVar7 = DAT_1404e7f98;
        lVar18 = 0;
        if ((fVar12 <= fVar27) && (fVar27 = fVar27 - fVar12, fVar27 < fVar12)) {
          lVar18 = -0x8000000000000000;
        }
        uVar25 = 8;
        if (8 < (ulonglong)((longlong)fVar27 + lVar18)) {
          uVar25 = (longlong)fVar27 + lVar18;
        }
        uVar19 = uVar17;
        if ((uVar17 < uVar25) && ((0x1ff < uVar17 || (uVar19 = uVar17 * 8, uVar17 * 8 < uVar25)))) {
          uVar19 = uVar25;
        }
        for (lVar18 = 0x3f; 0xfffffffffffffffU >> lVar18 == 0; lVar18 = lVar18 + -1) {
        }
        if ((ulonglong)(1L << ((byte)lVar18 & 0x3f)) < uVar19) {
                    /* WARNING: Subroutine does not return */
          FUN_14028c2e0("invalid hash bucket count");
        }
        uVar17 = uVar19 - 1 | 1;
        lVar18 = 0x3f;
        if (uVar17 != 0) {
          for (; uVar17 >> lVar18 == 0; lVar18 = lVar18 + -1) {
          }
        }
        bVar16 = (char)lVar18 + 1;
        uVar17 = 1L << (bVar16 & 0x3f);
        FUN_140011f50(&DAT_1404e7fa8,2L << (bVar16 & 0x3f),DAT_1404e7f98);
        DAT_1404e7fc0 = uVar17 - 1;
        local_res20 = &DAT_1404e7f90;
        DAT_1404e7fc8 = uVar17;
        plVar9 = (longlong *)*DAT_1404e7f98;
        lVar18 = DAT_1404e7fa8;
joined_r0x0001400024ef:
        DAT_1404e7fa8 = lVar18;
        if (plVar9 != plVar7) {
          uVar17 = plVar9[5];
          plVar22 = plVar9 + 2;
          plVar2 = (longlong *)*plVar9;
          if (0xf < uVar17) {
            plVar22 = (longlong *)plVar9[2];
          }
          uVar25 = plVar9[4];
          uVar19 = 0;
          uVar26 = 0xcbf29ce484222325;
          if (uVar25 != 0) {
            do {
              pbVar1 = (byte *)(uVar19 + (longlong)plVar22);
              uVar19 = uVar19 + 1;
              uVar26 = (uVar26 ^ *pbVar1) * 0x100000001b3;
            } while (uVar19 < uVar25);
            uVar17 = plVar9[5];
          }
          uVar26 = uVar26 & DAT_1404e7fc0;
          plVar22 = *(longlong **)(lVar18 + uVar26 * 0x10);
          if (plVar22 == plVar7) {
            *(longlong **)(lVar18 + uVar26 * 0x10) = plVar9;
            *(longlong **)(lVar18 + 8 + uVar26 * 0x10) = plVar9;
            plVar9 = plVar2;
            lVar18 = DAT_1404e7fa8;
          }
          else {
            plVar3 = *(longlong **)(lVar18 + 8 + uVar26 * 0x10);
            plVar23 = plVar3 + 2;
            if (0xf < (ulonglong)plVar3[5]) {
              plVar23 = (longlong *)*plVar23;
            }
            plVar20 = plVar9 + 2;
            if (0xf < uVar17) {
              plVar20 = (longlong *)plVar9[2];
            }
            if (uVar25 == plVar3[4]) {
              if ((uVar25 != 0) && (iVar13 = memcmp(plVar20,plVar23,uVar25), iVar13 != 0)) {
                uVar17 = plVar9[5];
                goto joined_r0x0001400025fd;
              }
              plVar3 = (longlong *)*plVar3;
              if (plVar3 != plVar9) {
                puVar6 = (undefined8 *)plVar9[1];
                *puVar6 = plVar2;
                puVar4 = (undefined8 *)plVar2[1];
                *puVar4 = plVar3;
                puVar5 = (undefined8 *)plVar3[1];
                *puVar5 = plVar9;
                plVar3[1] = (longlong)puVar4;
                plVar2[1] = (longlong)puVar6;
                plVar9[1] = (longlong)puVar5;
              }
              *(longlong **)(lVar18 + 8 + uVar26 * 0x10) = plVar9;
              plVar9 = plVar2;
              lVar18 = DAT_1404e7fa8;
            }
            else {
joined_r0x0001400025fd:
              while (plVar22 != plVar3) {
                plVar3 = (longlong *)plVar3[1];
                plVar23 = plVar3 + 2;
                if (0xf < (ulonglong)plVar3[5]) {
                  plVar23 = (longlong *)*plVar23;
                }
                if (uVar17 < 0x10) {
                  plVar20 = plVar9 + 2;
                }
                else {
                  plVar20 = (longlong *)plVar9[2];
                }
                if (uVar25 == plVar3[4]) {
                  if ((uVar25 == 0) || (iVar13 = memcmp(plVar20,plVar23,uVar25), iVar13 == 0)) {
                    lVar18 = *plVar3;
                    puVar6 = (undefined8 *)plVar9[1];
                    *puVar6 = plVar2;
                    plVar22 = (longlong *)plVar2[1];
                    *plVar22 = lVar18;
                    puVar4 = *(undefined8 **)(lVar18 + 8);
                    *puVar4 = plVar9;
                    *(longlong **)(lVar18 + 8) = plVar22;
                    plVar2[1] = (longlong)puVar6;
                    plVar9[1] = (longlong)puVar4;
                    plVar9 = plVar2;
                    lVar18 = DAT_1404e7fa8;
                    goto joined_r0x0001400024ef;
                  }
                  uVar17 = plVar9[5];
                }
              }
              puVar6 = (undefined8 *)plVar9[1];
              *puVar6 = plVar2;
              puVar4 = (undefined8 *)plVar2[1];
              *puVar4 = plVar3;
              puVar5 = (undefined8 *)plVar3[1];
              *puVar5 = plVar9;
              plVar3[1] = (longlong)puVar4;
              plVar2[1] = (longlong)puVar6;
              plVar9[1] = (longlong)puVar5;
              *(longlong **)(lVar18 + uVar26 * 0x10) = plVar9;
              plVar9 = plVar2;
              lVar18 = DAT_1404e7fa8;
            }
          }
          goto joined_r0x0001400024ef;
        }
        local_res20 = (undefined4 *)0x0;
        uVar28 = FUN_14003a070(&local_res20);
        puVar15 = (undefined4 *)FUN_14015be30(uVar28,local_68,puVar14 + 2,local_res18);
        local_f8 = *puVar15;
        uStack_f4 = puVar15[1];
        uStack_f0 = puVar15[2];
        uStack_ec = puVar15[3];
      }
      plVar9 = (longlong *)CONCAT44(uStack_f4,local_f8);
      DAT_1404e7fa0 = DAT_1404e7fa0 + 1;
      puVar6 = (undefined8 *)plVar9[1];
      *puVar14 = plVar9;
      puVar14[1] = puVar6;
      *puVar6 = puVar14;
      plVar9[1] = (longlong)puVar14;
      lVar18 = DAT_1404e7fa8;
      local_res18 = local_res18 & DAT_1404e7fc0;
      plVar7 = *(longlong **)(DAT_1404e7fa8 + local_res18 * 0x10);
      if (plVar7 == DAT_1404e7f98) {
        *(undefined8 **)(DAT_1404e7fa8 + local_res18 * 0x10) = puVar14;
LAB_14000276a:
        *(undefined8 **)(lVar18 + 8 + local_res18 * 0x10) = puVar14;
      }
      else if (plVar7 == plVar9) {
        *(undefined8 **)(DAT_1404e7fa8 + local_res18 * 0x10) = puVar14;
      }
      else if (*(undefined8 **)(DAT_1404e7fa8 + 8 + local_res18 * 0x10) == puVar6)
      goto LAB_14000276a;
    }
    pcVar24 = pcVar24 + 0x28;
    if (pcVar24 == local_70) {
      FUN_140017240(&local_98);
      FUN_140017240(&local_c0);
      FUN_140017240(local_e8);
      FUN_14028b410(FUN_140424aa0);
      return;
    }
  } while( true );
}

