// Function: FUN_140209540
// Addr: 140209540
// Size: 6330 bytes


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140209540(longlong *param_1)

{
  int *piVar1;
  longlong *plVar2;
  byte *pbVar3;
  uint uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  undefined1 *puVar10;
  char cVar11;
  int iVar12;
  undefined4 uVar13;
  int iVar14;
  undefined8 uVar15;
  longlong lVar16;
  longlong *plVar17;
  longlong lVar18;
  undefined8 uVar19;
  ushort uVar20;
  ulonglong uVar21;
  char *pcVar22;
  ulonglong uVar23;
  longlong *plVar24;
  longlong *plVar25;
  char cVar26;
  longlong lVar27;
  char *pcVar28;
  longlong *plVar29;
  bool bVar30;
  bool bVar31;
  uint local_res8 [2];
  char local_res10;
  char local_res18;
  int local_res20 [2];
  undefined8 ****in_stack_fffffffffffffe68;
  uint in_stack_fffffffffffffe70;
  uint in_stack_fffffffffffffe88;
  ulonglong local_160;
  uint local_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  ulonglong local_138 [2];
  undefined8 local_128;
  longlong *local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 ***local_d8;
  uint local_d0;
  undefined8 local_c8;
  ulonglong uStack_c0;
  undefined8 local_b8;
  undefined8 *local_b0;
  uint local_a8;
  ulonglong local_a0;
  longlong local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  float local_80;
  undefined8 local_7c;
  undefined8 uStack_74;
  float local_6c;
  undefined4 local_68;
  undefined8 local_64;
  float local_5c;
  float local_58;
  
  if (((int)param_1[100] < 1) && ((*(uint *)((longlong)param_1 + 0x304) >> 4 & 1) == 0)) {
    bVar31 = false;
  }
  else {
    bVar31 = true;
  }
  plVar25 = *(longlong **)(param_1[0x93] + 0xd0);
  uVar4 = *(uint *)(param_1[0x93] + 0x1fc);
  if ((plVar25 == (longlong *)0x0) || ((*(uint *)((longlong)plVar25 + 0x1c) >> 2 & 1) == 0)) {
    bVar7 = false;
  }
  else {
    bVar7 = true;
  }
  local_108 = plVar25;
  local_a8 = uVar4;
  cVar11 = (**(code **)(*param_1 + 0xd0))();
  local_res8[0] = CONCAT31(local_res8[0]._1_3_,cVar11);
  plVar2 = param_1 + 0x97;
  if ((cVar11 == '\0') || (*(int *)(*plVar2 + 0x390) < 0)) {
    bVar9 = false;
    local_res20[0] = (uint)local_res20[0]._1_3_ << 8;
    if (cVar11 != '\0') goto LAB_140209608;
LAB_140209629:
    bVar30 = (uVar4 & 0x18) != 0;
    bVar8 = false;
    local_res18 = '\0';
    if (cVar11 != '\0') goto LAB_14020963f;
LAB_140209661:
    local_res10 = '\0';
  }
  else {
    bVar9 = true;
    local_res20[0] = CONCAT31(local_res20[0]._1_3_,1);
LAB_140209608:
    if (bVar31 || (bVar7 || bVar9)) goto LAB_140209629;
    bVar30 = (uVar4 & 0x18) != 0;
    bVar8 = true;
    local_res18 = '\x01';
LAB_14020963f:
    local_res10 = '\x01';
    if (*(longlong *)(*(longlong *)(param_1[0x97] + 0x18) + 0xb0) ==
        *(longlong *)(*(longlong *)(param_1[0x97] + 0x18) + 0xb8)) goto LAB_140209661;
  }
  if ((bVar30) && ((bVar31 || bVar7 || (bVar9)))) {
    *(undefined1 *)(param_1 + 0x96) = 1;
    if (bVar8) {
      if (param_1[0x95] == 0) {
LAB_1402096a0:
        FUN_140150ac0(param_1[0x19] + 0x1630,param_1[0x94]);
        cVar11 = (char)param_1[0x96];
        param_1[0x94] = 0;
        goto LAB_1402096df;
      }
    }
    else if (param_1[0x95] != 0) goto LAB_1402096a0;
    cVar11 = '\x01';
  }
  else {
    cVar11 = '\0';
    *(undefined1 *)(param_1 + 0x96) = 0;
  }
LAB_1402096df:
  uVar4 = local_a8;
  plVar24 = param_1 + 0x96;
  uVar20 = *(ushort *)(param_1 + 0x24) | 0x40;
  if ((local_a8 & 8) == 0) {
    uVar20 = *(ushort *)(param_1 + 0x24) & 0xffbf;
  }
  *(ushort *)(param_1 + 0x24) = uVar20;
  if ((cVar11 == '\0') || (local_res18 != '\0')) {
    puVar6 = (undefined8 *)param_1[0x94];
    if (puVar6 != (undefined8 *)0x0) {
      lVar18 = param_1[0x19];
      local_a0 = 0xcbf29ce484222325;
      local_98 = 0x100000001b3;
      plVar25 = *(longlong **)(lVar18 + 0x1638);
      plVar17 = (longlong *)*plVar25;
      local_b0 = puVar6;
      if (plVar17 != plVar25) {
LAB_140209be2:
        if ((undefined8 *)plVar17[6] != puVar6) goto code_r0x000140209be8;
        if ((ulonglong)plVar17[5] < 0x10) {
          plVar29 = plVar17 + 2;
        }
        else {
          plVar29 = (longlong *)plVar17[2];
        }
        uVar23 = 0;
        uVar21 = 0xcbf29ce484222325;
        if (plVar17[4] != 0) {
          do {
            pbVar3 = (byte *)(uVar23 + (longlong)plVar29);
            uVar23 = uVar23 + 1;
            uVar21 = (uVar21 ^ *pbVar3) * 0x100000001b3;
          } while (uVar23 < (ulonglong)plVar17[4]);
        }
        uVar21 = uVar21 & *(ulonglong *)(lVar18 + 0x1660);
        lVar16 = *(longlong *)(lVar18 + 0x1648);
        plVar29 = *(longlong **)(lVar16 + uVar21 * 0x10);
        if (*(longlong **)(lVar16 + 8 + uVar21 * 0x10) == plVar17) {
          if (plVar29 == plVar17) {
            *(longlong **)(lVar16 + uVar21 * 0x10) = plVar25;
            *(longlong **)(lVar16 + 8 + uVar21 * 0x10) = plVar25;
          }
          else {
            *(longlong *)(lVar16 + 8 + uVar21 * 0x10) = plVar17[1];
          }
        }
        else if (plVar29 == plVar17) {
          *(longlong *)(lVar16 + uVar21 * 0x10) = *plVar17;
        }
        lVar16 = *plVar17;
        *(longlong *)(lVar18 + 0x1640) = *(longlong *)(lVar18 + 0x1640) + -1;
        *(longlong *)plVar17[1] = lVar16;
        *(longlong *)(lVar16 + 8) = plVar17[1];
        FUN_140017240(plVar17 + 2);
        thunk_FUN_14028af80(plVar17,0x38);
      }
LAB_140209ca6:
      lVar16 = *(longlong *)(lVar18 + 0x1688);
      plVar25 = *(longlong **)(lVar18 + 0x1678);
      uVar21 = *(ulonglong *)(lVar18 + 0x16a0) &
               (((((((((ulonglong)puVar6 & 0xff ^ local_a0) * local_98 ^
                     (ulonglong)local_b0 >> 8 & 0xff) * 0x100000001b3 ^
                    (ulonglong)local_b0 >> 0x10 & 0xff) * 0x100000001b3 ^
                   (ulonglong)local_b0 >> 0x18 & 0xff) * 0x100000001b3 ^
                  (ulonglong)local_b0 >> 0x20 & 0xff) * 0x100000001b3 ^
                 (ulonglong)local_b0 >> 0x28 & 0xff) * 0x100000001b3 ^
                (ulonglong)local_b0 >> 0x30 & 0xff) * 0x100000001b3 ^ (ulonglong)local_b0 >> 0x38) *
               0x100000001b3;
      plVar17 = *(longlong **)(lVar16 + 8 + uVar21 * 0x10);
      if (plVar17 == plVar25) {
LAB_140209d59:
        plVar17 = (longlong *)0x0;
      }
      else {
        puVar5 = (undefined8 *)plVar17[2];
        while (puVar6 != puVar5) {
          if (plVar17 == *(longlong **)(lVar16 + uVar21 * 0x10)) goto LAB_140209d59;
          plVar17 = (longlong *)plVar17[1];
          puVar5 = (undefined8 *)plVar17[2];
        }
      }
      if ((plVar17 != (longlong *)0x0) && (plVar17 != plVar25)) {
        uVar21 = *(ulonglong *)(lVar18 + 0x16a0) &
                 (((((((((ulonglong)*(byte *)(plVar17 + 2) ^ 0xcbf29ce484222325) * 0x100000001b3 ^
                       (ulonglong)*(byte *)((longlong)plVar17 + 0x11)) * 0x100000001b3 ^
                      (ulonglong)*(byte *)((longlong)plVar17 + 0x12)) * 0x100000001b3 ^
                     (ulonglong)*(byte *)((longlong)plVar17 + 0x13)) * 0x100000001b3 ^
                    (ulonglong)*(byte *)((longlong)plVar17 + 0x14)) * 0x100000001b3 ^
                   (ulonglong)*(byte *)((longlong)plVar17 + 0x15)) * 0x100000001b3 ^
                  (ulonglong)*(byte *)((longlong)plVar17 + 0x16)) * 0x100000001b3 ^
                 (ulonglong)*(byte *)((longlong)plVar17 + 0x17)) * 0x100000001b3;
        plVar29 = *(longlong **)(lVar16 + uVar21 * 0x10);
        if (*(longlong **)(lVar16 + 8 + uVar21 * 0x10) == plVar17) {
          if (plVar29 == plVar17) {
            *(longlong **)(lVar16 + uVar21 * 0x10) = plVar25;
            *(longlong **)(lVar16 + 8 + uVar21 * 0x10) = plVar25;
          }
          else {
            *(longlong *)(lVar16 + 8 + uVar21 * 0x10) = plVar17[1];
          }
        }
        else if (plVar29 == plVar17) {
          *(longlong *)(lVar16 + uVar21 * 0x10) = *plVar17;
        }
        lVar16 = *plVar17;
        *(longlong *)(lVar18 + 0x1680) = *(longlong *)(lVar18 + 0x1680) + -1;
        *(longlong *)plVar17[1] = lVar16;
        *(longlong *)(lVar16 + 8) = plVar17[1];
        thunk_FUN_14028af80(plVar17,0x18);
      }
      (**(code **)*puVar6)(puVar6,1);
      param_1[0x94] = 0;
      plVar25 = local_108;
    }
  }
  else if (param_1[0x94] == 0) {
    FUN_140084dd0(local_138,0);
    FUN_140084dd0(&local_d8,0);
    if ((char)*plVar24 == '\0') {
      local_150 = 0;
      FUN_140086ca0(&local_160,1);
      local_160 = 0;
      uVar15 = FUN_140086de0(&local_d8,"LIGHTING","");
      FUN_140085610(uVar15,&local_160);
      FUN_140085440(&local_160);
      local_150 = 0;
      FUN_140086ca0(&local_160,1,0);
      pcVar28 = "";
      local_160 = 0;
      pcVar22 = "REFLECTION";
LAB_140209a6f:
      uVar15 = FUN_140086de0(&local_d8,pcVar22,pcVar28);
      FUN_140085610(uVar15,&local_160);
      FUN_140085440(&local_160);
LAB_140209a8f:
      cVar11 = (char)local_res8[0];
    }
    else {
      local_150 = 0;
      FUN_140086ca0(&local_160,1);
      local_160 = (ulonglong)((uVar4 & 0x10) >> 4);
      uVar15 = FUN_140086de0(&local_d8,"LIGHTING","");
      FUN_140085610(uVar15,&local_160);
      FUN_140085440(&local_160);
      local_150 = 0;
      FUN_140086ca0(&local_160,1,0);
      local_160 = (ulonglong)((uVar4 & 8) >> 3);
      uVar15 = FUN_140086de0(&local_d8,"REFLECTION","");
      FUN_140085610(uVar15,&local_160);
      FUN_140085440(&local_160);
      local_150 = 0;
      FUN_140086ca0(&local_160,1,0);
      local_160 = 1;
      uVar15 = FUN_140086de0(&local_d8,"PRELIGHTING","");
      FUN_140085610(uVar15,&local_160);
      FUN_140085440(&local_160);
      cVar11 = '\0';
      if ((char)local_res8[0] != '\0') {
        local_150 = 0;
        FUN_140086ca0(&local_160,1,0);
        local_160 = 1;
        uVar15 = FUN_140086de0(&local_d8,"SKINNING","");
        FUN_140085610(uVar15,&local_160);
        FUN_140085440(&local_160);
        iVar12 = (**(code **)(*param_1 + 0xd8))(param_1);
        local_150 = 0;
        FUN_140086ca0(&local_160,1,0);
        local_160 = (longlong)iVar12;
        uVar15 = FUN_140086de0(&local_d8,"BONECOUNT","");
        FUN_140085610(uVar15,&local_160);
        FUN_140085440(&local_160);
        local_150 = 0;
        FUN_140086ca0(&local_160,1,0);
        local_160 = 1;
        uVar15 = FUN_140086de0(&local_d8,"PRELIGHTINGDUALVERTEX","");
        FUN_140085610(uVar15,&local_160);
        FUN_140085440(&local_160);
        if ((*(uint *)(*(longlong *)(*plVar2 + 0x18) + 0x38) & 0x10000) != 0) {
          local_150 = 0;
          FUN_140086ca0(&local_160,1,0);
          local_160 = 1;
          uVar15 = FUN_140086de0(&local_d8,"MORPHING","");
          FUN_140085610(uVar15,&local_160);
          FUN_140085440(&local_160);
        }
        if (((*(uint *)(*(longlong *)(*plVar2 + 0x18) + 0x38) & 0x10000) != 0) &&
           ((*(uint *)(*(longlong *)(*plVar2 + 0x18) + 0x18) & 0x2000) != 0)) {
          local_150 = 0;
          FUN_140086ca0(&local_160,1,0);
          pcVar28 = "";
          local_160 = 1;
          pcVar22 = "MORPHING_MODIFIERS";
          goto LAB_140209a6f;
        }
        goto LAB_140209a8f;
      }
    }
    puVar10 = local_100;
    local_100 = (undefined1 *)CONCAT71(local_100._1_7_,4);
    local_100._4_4_ = SUB84(puVar10,4);
    local_100 = (undefined1 *)(CONCAT44(local_100._4_4_,(undefined4)local_100) | 0x100);
    local_e8 = 0;
    local_f8 = 0;
    uStack_f0 = 0;
    local_108 = (longlong *)FUN_140084b30("nocull",6);
    uVar15 = FUN_140086de0(local_138,"cullmode","");
    FUN_140085610(uVar15,&local_108);
    FUN_140085440(&local_108);
    uVar15 = FUN_140086de0(local_138,"combos","");
    FUN_140085520(uVar15,&local_d8);
    plVar17 = (longlong *)(param_1[0x93] + 0x200);
    if (0xf < *(ulonglong *)(param_1[0x93] + 0x218)) {
      plVar17 = (longlong *)*plVar17;
    }
    lVar16 = FUN_140150770(param_1[0x19] + 0x1630,plVar17,local_138);
    lVar18 = *plVar2;
    param_1[0x94] = lVar16;
    if (((lVar18 != 0) && (*(longlong *)(lVar18 + 8) != 0)) && (*(longlong *)(lVar18 + 0x418) != 0))
    {
      *(longlong *)(lVar16 + 0xf8) = *(longlong *)(lVar18 + 0x418);
    }
    if (((char)*plVar24 == '\0') || (cVar11 != '\0')) {
      *(uint *)((longlong)param_1 + 0x304) = *(uint *)((longlong)param_1 + 0x304) | 0x10;
    }
    FUN_140085440(&local_d8);
    FUN_140085440(local_138);
  }
  puVar10 = local_100;
  lVar18 = *plVar2;
  bVar31 = lVar18 != 0;
  if ((char)local_res20[0] == '\0') {
    if (lVar18 != 0) {
      if (*(longlong *)(lVar18 + 0x408) != 0) {
        FUN_140150ac0(param_1[0x19] + 0x1630);
      }
      *(undefined8 *)(*plVar2 + 0x408) = 0;
    }
LAB_14020a450:
    if ((char)*plVar24 == '\0') goto LAB_14020a862;
    cVar11 = (char)local_res8[0];
    if ((char)local_res8[0] != '\0') {
      if (*(longlong *)(*plVar2 + 0x400) == 0) {
        lVar18 = *(longlong *)(*plVar2 + 0x18);
        local_res8[0] = 0;
        FUN_140266fa0(lVar18,local_res8);
        uVar21 = (ulonglong)local_res8[0];
        plVar25 = *(longlong **)(param_1[0x19] + 0x1518);
        lVar16 = *plVar25;
        iVar12 = *(int *)(lVar18 + 0x50) / 2;
        iVar14 = FUN_1400ea5b0(uVar21);
        uVar15 = (**(code **)(lVar16 + 0x40))
                           (plVar25,uVar21 & 0xffffffff,*(undefined8 *)(lVar18 + 0x98),
                            (longlong)*(int *)(lVar18 + 0x90) / (longlong)iVar14 & 0xffffffff,
                            *(undefined8 *)(lVar18 + 0x58),iVar12,0,0,
                            in_stack_fffffffffffffe88 & 0xffffff00);
        *(undefined8 *)(*plVar2 + 0x400) = uVar15;
      }
      goto LAB_14020a50e;
    }
  }
  else {
    if (*(longlong *)(lVar18 + 0x408) == 0) {
      lVar16 = *(longlong *)(lVar18 + 0x18);
      local_d0 = (local_d0 >> 8 & 0xfffffe) << 8;
      local_100 = (undefined1 *)CONCAT71(local_100._1_7_,7);
      local_100._4_4_ = SUB84(puVar10,4);
      local_100 = (undefined1 *)
                  (CONCAT44(local_100._4_4_,(undefined4)local_100) & 0xfffffffffffffeff);
      lVar27 = (longlong)*(int *)(lVar18 + 0x390) * 200;
      local_c8 = 0;
      uStack_c0 = 0;
      local_f8 = 0;
      uStack_f0 = 0;
      local_b8 = 0;
      local_e8 = 0;
      plVar17 = (longlong *)FUN_14028af20(0x10);
      *plVar17 = 0;
      plVar17[1] = 0;
      lVar18 = FUN_14028af20(0x58);
      *(longlong *)lVar18 = lVar18;
      *(longlong *)(lVar18 + 8) = lVar18;
      *(longlong *)(lVar18 + 0x10) = lVar18;
      *(undefined2 *)(lVar18 + 0x18) = 0x101;
      *plVar17 = lVar18;
      local_108 = plVar17;
      uVar15 = FUN_140086de0(&local_d8,"combos","");
      FUN_140085610(uVar15,&local_108);
      FUN_140085440(&local_108);
      uVar21 = (ulonglong)local_100;
      local_108 = (longlong *)(longlong)*(int *)(lVar27 + 0x1c + lVar16);
      local_100 = (undefined1 *)CONCAT71(local_100._1_7_,1);
      local_100._4_4_ = SUB84(uVar21,4);
      local_100 = (undefined1 *)
                  (CONCAT44(local_100._4_4_,(undefined4)local_100) & 0xfffffffffffffeff);
      local_f8 = 0;
      uStack_f0 = 0;
      local_e8 = 0;
      uVar15 = FUN_140086de0(&local_d8,"combos","");
      uVar15 = FUN_140086de0(uVar15,"BLENDROWCOUNT","");
      FUN_140085610(uVar15,&local_108);
      FUN_140085440(&local_108);
      uVar15 = FUN_140150770(param_1[0x19] + 0x1630,**(undefined8 **)(lVar27 + lVar16),&local_d8);
      *(undefined8 *)(*plVar2 + 0x408) = uVar15;
      FUN_140085440(&local_d8);
    }
    if ((char)*plVar24 != '\0') {
      bVar31 = false;
      FUN_140153110(&local_108,param_1[1]);
      FUN_14002fd20(&local_d8,"_rt_imageLayerAlbedo_",&local_108);
      FUN_140017240(&local_108);
      if (*(longlong *)(*plVar2 + 1000) == 0) {
        in_stack_fffffffffffffe88 = 0;
        in_stack_fffffffffffffe70 = -(uint)((*(uint *)(param_1[0x19] + 0x118) & 0x2000) != 0) & 0xe;
        in_stack_fffffffffffffe68 = &local_d8;
        if (0xf < uStack_c0) {
          in_stack_fffffffffffffe68 = (undefined8 ****)local_d8;
        }
        uVar15 = FUN_1401aadb0(param_1[0x19] + 0x16c0,*(undefined4 *)((longlong)plVar25 + 0x2c),
                               (int)plVar25[6],1,in_stack_fffffffffffffe68,in_stack_fffffffffffffe70
                               ,0x1b,2,1);
        *(undefined8 *)(*plVar2 + 1000) = uVar15;
        piVar1 = (int *)(*(longlong *)(*plVar2 + 1000) + 0x2c);
        *piVar1 = *piVar1 + 1;
      }
      else {
        FUN_140161f40(*(longlong *)(*plVar2 + 1000),*(undefined4 *)((longlong)plVar25 + 0x2c));
      }
      if (*(longlong *)(*plVar2 + 0x410) == 0) {
        FUN_140084dd0(&local_160,0);
        puVar10 = local_100;
        local_100 = (undefined1 *)CONCAT71(local_100._1_7_,6);
        local_100._4_4_ = SUB84(puVar10,4);
        local_100 = (undefined1 *)
                    (CONCAT44(local_100._4_4_,(undefined4)local_100) & 0xfffffffffffffeff);
        local_e8 = 0;
        local_f8 = 0;
        uStack_f0 = 0;
        plVar17 = (longlong *)FUN_14028af20(0x10);
        *plVar17 = 0;
        plVar17[1] = 0;
        lVar18 = FUN_14028af20(0x58);
        *(longlong *)lVar18 = lVar18;
        *(longlong *)(lVar18 + 8) = lVar18;
        *(longlong *)(lVar18 + 0x10) = lVar18;
        *(undefined2 *)(lVar18 + 0x18) = 0x101;
        *plVar17 = lVar18;
        local_108 = plVar17;
        uVar15 = FUN_140086de0(&local_160,"textures","");
        FUN_140085610(uVar15,&local_108);
        FUN_140085440(&local_108);
        uVar15 = FUN_140086de0(&local_160,"textures","");
        plVar17 = plVar25 + 0xf;
        if (0xf < (ulonglong)plVar25[0x12]) {
          plVar17 = (longlong *)*plVar17;
        }
        FUN_140084f50(local_138,plVar17);
        FUN_140087690(uVar15,local_138);
        FUN_140085440(local_138);
        uVar21 = (ulonglong)local_100;
        local_100 = (undefined1 *)CONCAT71(local_100._1_7_,7);
        local_100._4_4_ = SUB84(uVar21,4);
        local_100 = (undefined1 *)
                    (CONCAT44(local_100._4_4_,(undefined4)local_100) & 0xfffffffffffffeff);
        local_f8 = 0;
        uStack_f0 = 0;
        local_e8 = 0;
        plVar17 = (longlong *)FUN_14028af20(0x10);
        *plVar17 = 0;
        plVar17[1] = 0;
        lVar18 = FUN_14028af20(0x58);
        *(longlong *)lVar18 = lVar18;
        *(longlong *)(lVar18 + 8) = lVar18;
        *(longlong *)(lVar18 + 0x10) = lVar18;
        *(undefined2 *)(lVar18 + 0x18) = 0x101;
        *plVar17 = lVar18;
        local_108 = plVar17;
        uVar15 = FUN_140086de0(&local_160,"combos","");
        FUN_140085610(uVar15,&local_108);
        FUN_140085440(&local_108);
        uVar15 = FUN_1401531c0(0);
        FUN_140084f50(local_138,uVar15);
        uVar15 = FUN_140086de0(&local_160,"blending","");
        FUN_140085610(uVar15,local_138);
        FUN_140085440(local_138);
        if ((*(uint *)((longlong)plVar25 + 0x1c) >> 2 & 1) != 0) {
          local_128 = 0;
          FUN_140086ca0(local_138,1,0);
          local_138[0] = 1;
          uVar15 = FUN_140086de0(&local_160,"combos","");
          uVar15 = FUN_140086de0(uVar15,"SPRITESHEET","");
          FUN_140085610(uVar15,local_138);
          FUN_140085440(local_138);
        }
        uVar15 = FUN_140150770(param_1[0x19] + 0x1630,"materials/util/fullscreenlayer.json",
                               &local_160);
        *(undefined8 *)(*plVar2 + 0x410) = uVar15;
        FUN_140085440(&local_160);
      }
      local_68 = 0x40400000;
      local_64 = 0x3f800000;
      local_90 = _DAT_140492aa0;
      uStack_88 = _UNK_140492aa8;
      local_5c = (float)*(uint *)((longlong)plVar25 + 0x2c) / (float)*(uint *)(plVar25 + 4);
      local_5c = local_5c + local_5c;
      local_58 = (float)*(uint *)(plVar25 + 6) / (float)*(uint *)((longlong)plVar25 + 0x24);
      local_7c = _DAT_140492af0;
      uStack_74 = _UNK_140492af8;
      local_6c = (float)((uint)local_58 ^ DAT_140492ff0);
      if ((*(byte *)(param_1[0x19] + 0x118) & 1) != 0) {
        local_58 = 0.0;
        local_6c = local_5c;
      }
      puVar6 = *(undefined8 **)(*plVar2 + 0x3f0);
      local_80 = local_58;
      if (puVar6 != (undefined8 *)0x0) {
        (**(code **)*puVar6)(puVar6,1);
      }
      plVar25 = *(longlong **)(param_1[0x19] + 0x1518);
      local_108 = (longlong *)local_res20;
      local_100 = &stack0x00000028;
      lVar18 = *plVar25;
      local_res20[0] = 0;
      local_res20[1] = 7;
      uVar13 = FUN_140098c30(&local_108);
      uVar15 = (**(code **)(lVar18 + 0x48))
                         (plVar25,uVar13,&local_90,3,
                          (ulonglong)in_stack_fffffffffffffe68 & 0xffffffff00000000,
                          in_stack_fffffffffffffe70 & 0xffffff00);
      *(undefined8 *)(*plVar2 + 0x3f0) = uVar15;
      *(undefined8 *)(param_1[0x94] + 0xd0) = *(undefined8 *)(*(longlong *)(*plVar2 + 1000) + 0x20);
      FUN_140017240(&local_d8);
      goto LAB_14020a450;
    }
LAB_14020a862:
    cVar11 = (char)local_res8[0];
  }
  if (*plVar2 != 0) {
    puVar6 = *(undefined8 **)(*plVar2 + 0x400);
    if (puVar6 != (undefined8 *)0x0) {
      (**(code **)*puVar6)(puVar6,1);
    }
    *(undefined8 *)(*plVar2 + 0x400) = 0;
  }
LAB_14020a50e:
  if (bVar31) {
    if (*(longlong *)(*plVar2 + 0x410) != 0) {
      FUN_140150ac0(param_1[0x19] + 0x1630);
    }
    *(undefined8 *)(*plVar2 + 0x410) = 0;
    lVar18 = *(longlong *)(*plVar2 + 1000);
    if (lVar18 != 0) {
      lVar16 = param_1[0x19];
      *(int *)(lVar18 + 0x2c) = *(int *)(lVar18 + 0x2c) + -1;
      if (*(int *)(lVar18 + 0x2c) < 1) {
        FUN_1401ab5f0(lVar16 + 0x16c0);
      }
    }
    *(undefined8 *)(*plVar2 + 1000) = 0;
    puVar6 = *(undefined8 **)(*plVar2 + 0x3f0);
    if (puVar6 != (undefined8 *)0x0) {
      (**(code **)*puVar6)(puVar6,1);
    }
    *(undefined8 *)(*plVar2 + 0x3f0) = 0;
  }
  plVar25 = param_1 + 0x95;
  if ((local_res18 == '\0') || (*plVar25 != 0)) {
    cVar26 = local_res10;
    if (((*(byte *)(param_1 + 0x24) & 4) == 0) || (param_1[0x33] == param_1[0x34])) {
      if ((local_res18 == '\0') && (*plVar25 != 0)) {
        FUN_140150ac0(param_1[0x19] + 0x1630);
        *plVar25 = 0;
        cVar26 = local_res10;
      }
    }
    else if (*plVar25 == 0) {
      lVar18 = param_1[0x19];
      if ((*(uint *)((longlong)param_1 + 0x304) >> 1 & 1) == 0) {
        pcVar22 = (char *)FUN_1401ecae0(param_1);
      }
      else {
        pcVar22 = "materials/util/fullscreenlayer.json";
      }
      lVar18 = FUN_140150770(lVar18 + 0x1630,pcVar22,0);
      *plVar25 = lVar18;
      cVar26 = local_res10;
    }
  }
  else {
    local_d0 = (local_d0 >> 8 & 0xfffffe) << 8;
    local_b8 = 0;
    local_c8 = 0;
    uStack_c0 = 0;
    uVar15 = FUN_140086de0(&local_d8,"combos","");
    local_158 = CONCAT31(local_158._1_3_,1);
    local_158 = local_158 & 0xfffffeff;
    local_140 = 0;
    local_160 = 1;
    local_150 = 0;
    uStack_148 = 0;
    uVar19 = FUN_140086de0(uVar15,"SKINNING","");
    FUN_140085610(uVar19,&local_160);
    FUN_140085440(&local_160);
    local_158 = CONCAT31(local_158._1_3_,1);
    local_158 = local_158 & 0xfffffeff;
    local_150 = 0;
    uStack_148 = 0;
    local_140 = 0;
    iVar12 = (**(code **)(*param_1 + 0xd8))(param_1);
    local_160 = (ulonglong)iVar12;
    uVar19 = FUN_140086de0(uVar15,"BONECOUNT");
    FUN_140085610(uVar19,&local_160);
    FUN_140085440(&local_160);
    if ((*(uint *)(*(longlong *)(*plVar2 + 0x18) + 0x18) >> 2 & 1) != 0) {
      local_158 = CONCAT31(local_158._1_3_,1);
      local_158 = local_158 & 0xfffffeff;
      local_140 = 0;
      local_160 = 1;
      local_150 = 0;
      uStack_148 = 0;
      uVar19 = FUN_140086de0(uVar15,"SKINNING_ALPHA");
      FUN_140085610(uVar19,&local_160);
      FUN_140085440(&local_160);
    }
    if ((*(uint *)(*(longlong *)(*plVar2 + 0x18) + 0x38) & 0x10000) != 0) {
      local_158 = CONCAT31(local_158._1_3_,1);
      local_158 = local_158 & 0xfffffeff;
      local_140 = 0;
      local_160 = 1;
      local_150 = 0;
      uStack_148 = 0;
      uVar19 = FUN_140086de0(uVar15,"MORPHING");
      FUN_140085610(uVar19,&local_160);
      FUN_140085440(&local_160);
    }
    if (((*(uint *)(*(longlong *)(*plVar2 + 0x18) + 0x38) & 0x10000) != 0) &&
       ((*(uint *)(*(longlong *)(*plVar2 + 0x18) + 0x18) & 0x2000) != 0)) {
      local_158 = CONCAT31(local_158._1_3_,1);
      local_158 = local_158 & 0xfffffeff;
      local_140 = 0;
      local_160 = 1;
      local_150 = 0;
      uStack_148 = 0;
      uVar19 = FUN_140086de0(uVar15,"MORPHING_MODIFIERS");
      FUN_140085610(uVar19,&local_160);
      FUN_140085440(&local_160);
    }
    local_128 = 0;
    if ((char)*plVar24 == '\0') {
      FUN_140086ca0(local_138,1);
      uVar4 = local_a8;
      local_138[0] = (ulonglong)((local_a8 & 0x10) >> 4);
      uVar19 = FUN_140086de0(uVar15,"LIGHTING","");
      FUN_140085610(uVar19,local_138);
      FUN_140085440(local_138);
      local_128 = 0;
      FUN_140086ca0(local_138,1,0);
      local_138[0] = (ulonglong)((uVar4 & 8) >> 3);
      uVar19 = FUN_140086de0(uVar15,"REFLECTION","");
      FUN_140085610(uVar19,local_138);
      FUN_140085440(local_138);
    }
    else {
      FUN_140086ca0(local_138,1);
      local_138[0] = 0;
      uVar19 = FUN_140086de0(uVar15,"LIGHTING","");
      FUN_140085610(uVar19,local_138);
      FUN_140085440(local_138);
      local_128 = 0;
      FUN_140086ca0(local_138,1,0);
      local_138[0] = 0;
      uVar19 = FUN_140086de0(uVar15,"REFLECTION","");
      FUN_140085610(uVar19,local_138);
      FUN_140085440(local_138);
    }
    plVar24 = (longlong *)(param_1[0x93] + 0x200);
    if (0xf < *(ulonglong *)(param_1[0x93] + 0x218)) {
      plVar24 = (longlong *)*plVar24;
    }
    lVar18 = FUN_140150770(param_1[0x19] + 0x1630,plVar24,&local_d8);
    cVar26 = local_res10;
    *plVar25 = lVar18;
    if (*(longlong *)(*plVar2 + 0x418) != 0) {
      *(longlong *)(lVar18 + 0xf8) = *(longlong *)(*plVar2 + 0x418);
    }
    if ((local_res10 != '\0') && (*(longlong *)(*plVar2 + 0x428) == 0)) {
      local_128 = 0;
      FUN_140086ca0(local_138,1,0);
      local_138[0] = 1;
      uVar19 = FUN_140086de0(uVar15,"CLIPPINGUVS","");
      FUN_140085610(uVar19,local_138);
      FUN_140085440(local_138);
      local_128 = 0;
      FUN_140086ca0(local_138,1,0);
      local_138[0] = 1;
      uVar15 = FUN_140086de0(uVar15,"CLIPPINGTARGET","");
      FUN_140085610(uVar15,local_138);
      FUN_140085440(local_138);
      plVar25 = (longlong *)(param_1[0x93] + 0x200);
      if (0xf < *(ulonglong *)(param_1[0x93] + 0x218)) {
        plVar25 = (longlong *)*plVar25;
      }
      uVar15 = FUN_140150770(param_1[0x19] + 0x1630,plVar25,&local_d8);
      *(undefined8 *)(*plVar2 + 0x428) = uVar15;
    }
    FUN_140085440(&local_d8);
  }
  lVar18 = *plVar2;
  if (cVar26 == '\0') {
    if (((lVar18 != 0) && (*(longlong *)(lVar18 + 8) != 0)) && (*(longlong *)(lVar18 + 0x420) != 0))
    {
      FUN_140150ac0(param_1[0x19] + 0x1630);
      *(undefined8 *)(*plVar2 + 0x420) = 0;
    }
  }
  else if (*(longlong *)(lVar18 + 0x420) == 0) {
    local_d0 = (local_d0 >> 8 & 0xfffffe) << 8;
    local_b8 = 0;
    local_c8 = 0;
    uStack_c0 = 0;
    uVar15 = FUN_140086de0(&local_d8,"combos","");
    local_158 = CONCAT31(local_158._1_3_,1);
    local_158 = local_158 & 0xfffffeff;
    local_140 = 0;
    local_160 = (ulonglong)(cVar11 != '\0');
    local_150 = 0;
    uStack_148 = 0;
    uVar19 = FUN_140086de0(uVar15,"SKINNING","");
    FUN_140085610(uVar19,&local_160);
    FUN_140085440(&local_160);
    local_158 = CONCAT31(local_158._1_3_,1);
    local_158 = local_158 & 0xfffffeff;
    local_150 = 0;
    uStack_148 = 0;
    local_140 = 0;
    iVar12 = (**(code **)(*param_1 + 0xd8))(param_1);
    local_160 = (ulonglong)iVar12;
    uVar19 = FUN_140086de0(uVar15,"BONECOUNT","");
    FUN_140085610(uVar19,&local_160);
    FUN_140085440(&local_160);
    if ((*(uint *)(*(longlong *)(*plVar2 + 0x18) + 0x18) >> 2 & 1) != 0) {
      local_128 = 0;
      FUN_140086ca0(local_138,1,0);
      local_138[0] = 1;
      uVar19 = FUN_140086de0(uVar15,"SKINNING_ALPHA","");
      FUN_140085610(uVar19,local_138);
      FUN_140085440(local_138);
    }
    if ((*(uint *)(*(longlong *)(*plVar2 + 0x18) + 0x38) & 0x10000) != 0) {
      local_128 = 0;
      FUN_140086ca0(local_138,1,0);
      local_138[0] = 1;
      uVar19 = FUN_140086de0(uVar15,"MORPHING","");
      FUN_140085610(uVar19,local_138);
      FUN_140085440(local_138);
    }
    if (((*(uint *)(*(longlong *)(*plVar2 + 0x18) + 0x38) & 0x10000) != 0) &&
       ((*(uint *)(*(longlong *)(*plVar2 + 0x18) + 0x18) & 0x2000) != 0)) {
      local_128 = 0;
      FUN_140086ca0(local_138,1,0);
      local_138[0] = 1;
      uVar19 = FUN_140086de0(uVar15,"MORPHING_MODIFIERS","");
      FUN_140085610(uVar19,local_138);
      FUN_140085440(local_138);
    }
    if (*(char *)(param_1[0x93] + 0x1f0) == '\x03') {
      local_128 = 0;
      FUN_140086ca0(local_138,1,0);
      local_138[0] = 1;
      uVar15 = FUN_140086de0(uVar15,"ALPHATOCOVERAGE","");
      FUN_140085610(uVar15,local_138);
      FUN_140085440(local_138);
    }
    uVar15 = FUN_140150770(param_1[0x19] + 0x1630,"materials/util/clippingmaskimage4.json",&local_d8
                          );
    *(undefined8 *)(*plVar2 + 0x420) = uVar15;
    FUN_140085440(&local_d8);
    return;
  }
  return;
code_r0x000140209be8:
  plVar17 = (longlong *)*plVar17;
  if (plVar17 == plVar25) goto LAB_140209ca6;
  goto LAB_140209be2;
}

