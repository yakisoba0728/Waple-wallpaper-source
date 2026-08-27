// Function: FUN_1401a6c60
// Addr: 1401a6c60
// Size: 1609 bytes


void FUN_1401a6c60(longlong param_1,char *param_2,longlong *param_3,longlong *param_4)

{
  undefined4 *puVar1;
  byte *pbVar2;
  longlong lVar3;
  code *pcVar4;
  char cVar5;
  size_t sVar6;
  undefined8 *****pppppuVar7;
  longlong *plVar8;
  undefined8 uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  longlong lVar12;
  longlong lVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  undefined1 *puVar16;
  ulonglong uVar17;
  ulonglong local_res8;
  undefined8 ****local_1a8;
  undefined8 uStack_1a0;
  longlong local_198;
  ulonglong local_190;
  longlong local_188;
  longlong alStack_180 [19];
  undefined1 local_e8 [8];
  undefined1 local_e0 [16];
  undefined1 local_d0 [40];
  undefined4 local_a8 [2];
  undefined8 *local_a0 [2];
  undefined1 local_90 [40];
  undefined8 ****local_68 [2];
  undefined8 local_58;
  ulonglong local_50;
  undefined1 local_48 [16];
  
  sVar6 = strlen(param_2);
  uVar17 = 0;
  uVar15 = 0xcbf29ce484222325;
  uVar10 = 0xcbf29ce484222325;
  if (sVar6 != 0) {
    do {
      pbVar2 = (byte *)(param_2 + uVar17);
      uVar17 = uVar17 + 1;
      uVar10 = (uVar10 ^ *pbVar2) * 0x100000001b3;
    } while (uVar17 < sVar6);
  }
  uVar10 = uVar10 & *(ulonglong *)(param_1 + 0x30);
  lVar13 = *(longlong *)(param_1 + 8);
  lVar12 = *(longlong *)(*(longlong *)(param_1 + 0x18) + 8 + uVar10 * 0x10);
  if (lVar12 == lVar13) {
LAB_1401a6d22:
    lVar12 = 0;
  }
  else {
    lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x18) + uVar10 * 0x10);
    cVar5 = FUN_14000d010(lVar12 + 0x10,param_2);
    while (cVar5 == '\0') {
      if (lVar12 == lVar3) goto LAB_1401a6d22;
      lVar12 = *(longlong *)(lVar12 + 8);
      cVar5 = FUN_14000d010(lVar12 + 0x10,param_2);
    }
  }
  if ((lVar12 == 0) || (lVar12 == lVar13)) {
    local_188._0_1_ = s_shaders__14048b9b0[0];
    local_188._1_1_ = s_shaders__14048b9b0[1];
    local_188._2_1_ = s_shaders__14048b9b0[2];
    local_188._3_1_ = s_shaders__14048b9b0[3];
    local_188._4_1_ = s_shaders__14048b9b0[4];
    local_188._5_1_ = s_shaders__14048b9b0[5];
    local_188._6_1_ = s_shaders__14048b9b0[6];
    local_188._7_1_ = s_shaders__14048b9b0[7];
    alStack_180[0] = 0;
    alStack_180[1] = 8;
    alStack_180[2] = 0xf;
    local_198 = 8;
    local_190 = 0xf;
    local_1a8 = (undefined8 ****)s_shaders__14048b9b0._0_8_;
    uStack_1a0 = 0;
    sVar6 = strlen(param_2);
    if (sVar6 < 8) {
      alStack_180[1] = sVar6 + 8;
      FUN_1404210f0(alStack_180,param_2,sVar6);
      plVar8 = &local_188;
      *(undefined1 *)((longlong)alStack_180 + sVar6) = 0;
    }
    else {
      plVar8 = (longlong *)FUN_140053110(&local_188,sVar6,local_res8 & 0xff,param_2,sVar6);
    }
    FUN_1400532a0(plVar8,".frag",5);
    sVar6 = strlen(param_2);
    if (local_190 - local_198 < sVar6) {
      pppppuVar7 = (undefined8 *****)FUN_140053110(&local_1a8,sVar6,local_res8 & 0xff,param_2,sVar6)
      ;
    }
    else {
      pppppuVar7 = &local_1a8;
      if (0xf < local_190) {
        pppppuVar7 = (undefined8 *****)local_1a8;
      }
      lVar13 = (longlong)pppppuVar7 + local_198;
      local_198 = local_198 + sVar6;
      FUN_1404210f0(lVar13,param_2,sVar6);
      pppppuVar7 = &local_1a8;
      *(undefined1 *)(lVar13 + sVar6) = 0;
    }
    FUN_1400532a0(pppppuVar7,".vert",5);
    uVar9 = *(undefined8 *)(param_1 + 0x80);
    uVar10 = 0;
    alStack_180[10] = 0xf;
    alStack_180[9] = 0;
    alStack_180[8] = 0;
    alStack_180[7] = 0;
    alStack_180[4] = 0;
    alStack_180[3] = 0;
    alStack_180[5] = 0;
    alStack_180[6] = 0xf;
    FUN_1400316b0(alStack_180 + 0xb);
    FUN_140162100(alStack_180 + 0xb,uVar9,&local_1a8,alStack_180 + 7,0);
    FUN_14000d9e0(alStack_180 + 0xe);
    FUN_140031340(alStack_180 + 0xc);
    uVar9 = *(undefined8 *)(param_1 + 0x80);
    FUN_1400316b0(alStack_180 + 0xb);
    FUN_140162100(alStack_180 + 0xb,uVar9,&local_188,alStack_180 + 3,0);
    FUN_14000d9e0(alStack_180 + 0xe);
    FUN_140031340(alStack_180 + 0xc);
    FUN_1401a72b0(local_e8);
    FUN_14016ce60(alStack_180 + 7,local_e8,local_a8,local_68);
    FUN_14016ce60(alStack_180 + 3,local_e8,local_a8,local_68);
    alStack_180[0xd] = 0;
    alStack_180[0xe] = 0;
    alStack_180[0xb] = 0;
    alStack_180[0xc] = 0;
    sVar6 = strlen(param_2);
    FUN_140017480(alStack_180 + 0xb,param_2,sVar6);
    plVar8 = (longlong *)FUN_1401a78d0(param_1,local_48,alStack_180 + 0xb);
    lVar13 = *plVar8;
    FUN_140164850(lVar13 + 0x30,local_e8);
    puVar1 = (undefined4 *)(lVar13 + 0x70);
    if (puVar1 != local_a8) {
      *puVar1 = local_a8[0];
      FUN_1401a7f10(lVar13 + 0x78,*local_a0[0],local_a0[0]);
      uVar9 = FUN_140012f40(puVar1,*(undefined8 *)(lVar13 + 0x80));
      FUN_14016f030(puVar1,uVar9);
      local_res8 = 0;
      FUN_14016f3d0(&local_res8);
    }
    if ((undefined8 *****)(lVar13 + 0xb0) != local_68) {
      pppppuVar7 = local_68;
      if (0xf < local_50) {
        pppppuVar7 = (undefined8 *****)local_68[0];
      }
      FUN_14000f880((undefined8 *****)(lVar13 + 0xb0),pppppuVar7,local_58);
    }
    if (0xf < (ulonglong)alStack_180[0xe]) {
      uVar17 = alStack_180[0xe] + 1;
      lVar13 = alStack_180[0xb];
      if (0xfff < uVar17) {
        lVar13 = *(longlong *)(alStack_180[0xb] + -8);
        if (0x1f < (alStack_180[0xb] - lVar13) - 8U) goto LAB_1401a72a1;
        uVar17 = alStack_180[0xe] + 0x28;
      }
      thunk_FUN_14028af80(lVar13,uVar17);
    }
    sVar6 = strlen(param_2);
    uVar17 = uVar10;
    if (sVar6 != 0) {
      do {
        uVar11 = uVar17 + 1;
        uVar15 = (uVar15 ^ (byte)param_2[uVar17]) * 0x100000001b3;
        uVar17 = uVar11;
      } while (uVar11 < sVar6);
    }
    uVar15 = uVar15 & *(ulonglong *)(param_1 + 0x30);
    uVar17 = *(ulonglong *)(param_1 + 8);
    uVar11 = *(ulonglong *)(*(longlong *)(param_1 + 0x18) + 8 + uVar15 * 0x10);
    uVar14 = uVar10;
    if (uVar11 != uVar17) {
      uVar15 = *(ulonglong *)(*(longlong *)(param_1 + 0x18) + uVar15 * 0x10);
      cVar5 = FUN_14000d010(uVar11 + 0x10,param_2);
      while ((uVar14 = uVar11, cVar5 == '\0' && (uVar14 = uVar10, uVar11 != uVar15))) {
        uVar11 = *(ulonglong *)(uVar11 + 8);
        cVar5 = FUN_14000d010(uVar11 + 0x10,param_2);
      }
    }
    puVar16 = local_48;
    if (uVar14 == 0) {
      uVar14 = uVar17;
    }
    *param_3 = uVar14 + 0x30;
    lVar13 = 1;
    *param_4 = uVar14 + 0x70;
    do {
      puVar16 = puVar16 + -0x20;
      FUN_140017240(puVar16);
      lVar13 = lVar13 + -1;
    } while (lVar13 != 0);
    FUN_14000d9e0(local_90);
    FUN_1400f8d70(local_a0);
    FUN_14000d9e0(local_d0);
    FUN_140164020(local_e0);
    if (0xf < (ulonglong)alStack_180[6]) {
      uVar15 = alStack_180[6] + 1;
      uVar10 = alStack_180[3];
      if (0xfff < uVar15) {
        uVar10 = *(ulonglong *)(alStack_180[3] - 8);
        if (0x1f < (alStack_180[3] - uVar10) - 8) goto LAB_1401a72a1;
        uVar15 = alStack_180[6] + 0x28;
      }
      thunk_FUN_14028af80(uVar10,uVar15);
    }
    alStack_180[5] = 0;
    alStack_180[6] = 0xf;
    alStack_180[3] = alStack_180[3] & 0xffffffffffffff00;
    if (0xf < (ulonglong)alStack_180[10]) {
      uVar15 = alStack_180[10] + 1;
      uVar10 = alStack_180[7];
      if (0xfff < uVar15) {
        uVar10 = *(ulonglong *)(alStack_180[7] - 8);
        if (0x1f < (alStack_180[7] - uVar10) - 8) goto LAB_1401a72a1;
        uVar15 = alStack_180[10] + 0x28;
      }
      thunk_FUN_14028af80(uVar10,uVar15);
    }
    alStack_180[9] = 0;
    alStack_180[10] = 0xf;
    alStack_180[7] = alStack_180[7] & 0xffffffffffffff00;
    if (0xf < local_190) {
      uVar10 = local_190 + 1;
      pppppuVar7 = (undefined8 *****)local_1a8;
      if (0xfff < uVar10) {
        pppppuVar7 = (undefined8 *****)local_1a8[-1];
        if (0x1f < (ulonglong)((longlong)local_1a8 + (-8 - (longlong)pppppuVar7)))
        goto LAB_1401a72a1;
        uVar10 = local_190 + 0x28;
      }
      thunk_FUN_14028af80(pppppuVar7,uVar10);
    }
    local_198 = 0;
    local_190 = 0xf;
    local_1a8 = (undefined8 ****)((ulonglong)local_1a8 & 0xffffffffffffff00);
    if (0xf < (ulonglong)alStack_180[2]) {
      uVar10 = alStack_180[2] + 1;
      lVar13 = local_188;
      if (0xfff < uVar10) {
        lVar13 = *(longlong *)(local_188 + -8);
        if (0x1f < (local_188 - lVar13) - 8U) {
LAB_1401a72a1:
          pcVar4 = (code *)swi(0x29);
          (*pcVar4)(5);
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        uVar10 = alStack_180[2] + 0x28;
      }
      thunk_FUN_14028af80(lVar13,uVar10);
    }
  }
  else {
    *param_3 = lVar12 + 0x30;
    *param_4 = lVar12 + 0x70;
  }
  return;
}

