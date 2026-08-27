// Function: FUN_140162ac0
// Addr: 140162ac0
// Size: 3027 bytes


ulonglong FUN_140162ac0(ulonglong param_1,longlong ****param_2,longlong *param_3)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  code *pcVar3;
  longlong *plVar4;
  undefined1 *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  int iVar13;
  undefined8 uVar14;
  undefined4 *puVar15;
  undefined1 (*pauVar16) [16];
  size_t sVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  undefined8 uVar20;
  longlong ****pppplVar21;
  undefined1 (*pauVar22) [16];
  char *pcVar23;
  longlong lVar24;
  longlong lVar25;
  undefined1 *puVar26;
  longlong ****pppplVar27;
  ulonglong uVar28;
  longlong *plVar29;
  ulonglong uVar30;
  undefined1 *puVar31;
  longlong ****unaff_RDI;
  undefined1 (*unaff_R12) [16];
  uint uVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dc_00;
  undefined4 extraout_XMM0_Dc_01;
  undefined4 extraout_XMM0_Dc_02;
  undefined4 extraout_XMM0_Dd;
  undefined4 extraout_XMM0_Dd_00;
  undefined4 extraout_XMM0_Dd_01;
  undefined4 extraout_XMM0_Dd_02;
  undefined1 unaff_XMM6 [16];
  undefined4 unaff_XMM7_Da;
  undefined4 unaff_XMM7_Db;
  undefined4 unaff_XMM7_Dc;
  undefined4 unaff_XMM7_Dd;
  undefined4 unaff_XMM8_Da;
  undefined4 unaff_XMM8_Db;
  undefined4 unaff_XMM8_Dc;
  undefined4 unaff_XMM8_Dd;
  longlong local_res8 [2];
  undefined1 local_res18;
  undefined8 uStack_1a0;
  undefined1 auStack_198 [32];
  ulonglong local_178 [2];
  undefined8 local_168;
  undefined4 auStack_160 [2];
  undefined8 local_158;
  undefined8 uStack_150;
  longlong local_148 [7];
  longlong ***local_110;
  undefined8 uStack_108;
  longlong local_100;
  ulonglong local_f8;
  longlong local_e8;
  undefined1 local_e0 [16];
  ulonglong local_d0 [5];
  undefined1 local_a8 [32];
  undefined1 local_88 [32];
  undefined4 local_68 [12];
  longlong local_38;
  
  dVar33 = (double)CONCAT44(unaff_XMM7_Db,unaff_XMM7_Da);
  puVar31 = auStack_198;
  pppplVar21 = param_2;
  puVar5 = auStack_198;
  if (*(int *)(*(longlong *)ThreadLocalStoragePointer + 0x130) < DAT_1404e95d0) goto LAB_14016365d;
  do {
    *(longlong *****)(puVar31 + 0x1a0) = unaff_RDI;
    *(undefined1 (**) [16])(puVar31 + 0x160) = unaff_R12;
    *(undefined1 (*) [16])(puVar31 + 0x150) = unaff_XMM6;
    *(double *)(puVar31 + 0x140) = dVar33;
    *(undefined4 *)(puVar31 + 0x148) = unaff_XMM7_Dc;
    *(undefined4 *)(puVar31 + 0x14c) = unaff_XMM7_Dd;
    *(undefined4 *)(puVar31 + 0x130) = unaff_XMM8_Da;
    *(undefined4 *)(puVar31 + 0x134) = unaff_XMM8_Db;
    *(undefined4 *)(puVar31 + 0x138) = unaff_XMM8_Dc;
    *(undefined4 *)(puVar31 + 0x13c) = unaff_XMM8_Dd;
    *(undefined8 *)(puVar31 + -8) = 0x140162b3f;
    uVar14 = FUN_14003a8b0(&local_e8,s_shaders__1404dfca0,pppplVar21);
    *(undefined8 *)(puVar31 + -8) = 0x140162b54;
    puVar15 = (undefined4 *)FUN_1400532a0(uVar14,".vert",5);
    uVar12 = puVar15[1];
    uVar6 = puVar15[2];
    uVar7 = puVar15[3];
    uVar8 = puVar15[4];
    uVar9 = puVar15[5];
    uVar10 = puVar15[6];
    uVar11 = puVar15[7];
    *(undefined8 *)(puVar15 + 4) = 0;
    *(undefined4 *)(puVar31 + 0x30) = *puVar15;
    *(undefined4 *)(puVar31 + 0x34) = uVar12;
    *(undefined4 *)(puVar31 + 0x38) = uVar6;
    *(undefined4 *)(puVar31 + 0x3c) = uVar7;
    *(undefined8 *)(puVar15 + 6) = 0xf;
    *(undefined4 *)(puVar31 + 0x40) = uVar8;
    *(undefined4 *)(puVar31 + 0x44) = uVar9;
    *(undefined4 *)(puVar31 + 0x48) = uVar10;
    *(undefined4 *)(puVar31 + 0x4c) = uVar11;
    *(undefined1 *)puVar15 = 0;
    *(undefined8 *)(puVar31 + -8) = 0x140162b85;
    FUN_14000de40(param_3 + 4,puVar31 + 0x30);
    uVar30 = *(ulonglong *)(puVar31 + 0x48);
    if (uVar30 < 0x10) {
LAB_140162bc2:
      *(undefined8 *)(puVar31 + -8) = 0x140162bcb;
      FUN_140017240(&local_e8);
      *(undefined8 *)(puVar31 + -8) = 0x140162bdf;
      uVar14 = FUN_14003a8b0(puVar31 + 0x50,s_shaders__1404dfca0,pppplVar21);
      *(undefined8 *)(puVar31 + -8) = 0x140162bf4;
      puVar15 = (undefined4 *)FUN_1400532a0(uVar14,".frag",5);
      unaff_RDI = (longlong ****)(param_3 + 0xc);
      uVar12 = puVar15[1];
      uVar6 = puVar15[2];
      uVar7 = puVar15[3];
      uVar8 = puVar15[4];
      uVar9 = puVar15[5];
      uVar10 = puVar15[6];
      uVar11 = puVar15[7];
      *(undefined8 *)(puVar15 + 4) = 0;
      *(undefined4 *)(puVar31 + 0x30) = *puVar15;
      *(undefined4 *)(puVar31 + 0x34) = uVar12;
      *(undefined4 *)(puVar31 + 0x38) = uVar6;
      *(undefined4 *)(puVar31 + 0x3c) = uVar7;
      *(undefined8 *)(puVar15 + 6) = 0xf;
      *(undefined4 *)(puVar31 + 0x40) = uVar8;
      *(undefined4 *)(puVar31 + 0x44) = uVar9;
      *(undefined4 *)(puVar31 + 0x48) = uVar10;
      *(undefined4 *)(puVar31 + 0x4c) = uVar11;
      *(undefined1 *)puVar15 = 0;
      *(undefined8 *)(puVar31 + -8) = 0x140162c25;
      FUN_14000de40(unaff_RDI,puVar31 + 0x30);
      uVar30 = *(ulonglong *)(puVar31 + 0x48);
      if (0xf < uVar30) {
        lVar25 = *(longlong *)(puVar31 + 0x30);
        uVar28 = uVar30 + 1;
        lVar24 = lVar25;
        if (0xfff < uVar28) {
          lVar24 = *(longlong *)(lVar25 + -8);
          if (0x1f < (lVar25 - lVar24) - 8U) goto LAB_140163656;
          uVar28 = uVar30 + 0x28;
        }
        *(undefined8 *)(puVar31 + -8) = 0x140162c62;
        thunk_FUN_14028af80(lVar24,uVar28);
      }
      uVar30 = *(ulonglong *)(puVar31 + 0x68);
      if (0xf < uVar30) {
        lVar25 = *(longlong *)(puVar31 + 0x50);
        uVar28 = uVar30 + 1;
        lVar24 = lVar25;
        if (0xfff < uVar28) {
          lVar24 = *(longlong *)(lVar25 + -8);
          if (0x1f < (lVar25 - lVar24) - 8U) goto LAB_140163656;
          uVar28 = uVar30 + 0x28;
        }
        *(undefined8 *)(puVar31 + -8) = 0x140162ca0;
        thunk_FUN_14028af80(lVar24,uVar28);
      }
      *(undefined8 *)(puVar31 + -8) = 0x140162cb4;
      uVar14 = FUN_14003a8b0(puVar31 + 0x30,s_shaders__1404dfca0,pppplVar21);
      *(undefined8 *)(puVar31 + -8) = 0x140162cc9;
      pauVar16 = (undefined1 (*) [16])FUN_1400532a0(uVar14,".geom",5);
      unaff_R12 = (undefined1 (*) [16])(param_3 + 8);
      auVar1 = *pauVar16;
      dVar33 = auVar1._0_8_;
      unaff_XMM7_Dc = auVar1._8_4_;
      unaff_XMM7_Dd = auVar1._12_4_;
      auVar2 = pauVar16[1];
      *(undefined8 *)pauVar16[1] = 0;
      *(undefined8 *)(pauVar16[1] + 8) = 0xf;
      (*pauVar16)[0] = 0;
      if (unaff_R12 == (undefined1 (*) [16])local_a8) {
        unaff_XMM6 = auVar2 >> 0x40;
        uVar30 = auVar2._8_8_;
        if (0xf < uVar30) {
          uVar28 = uVar30 + 1;
          dVar34 = dVar33;
          if (0xfff < uVar28) {
            dVar34 = *(double *)((longlong)dVar33 + -8);
            if (0x1f < ((longlong)dVar33 - (longlong)dVar34) - 8U) goto LAB_140163656;
            uVar28 = uVar30 + 0x28;
          }
          *(undefined8 *)(puVar31 + -8) = 0x140162d7d;
          thunk_FUN_14028af80(dVar34,uVar28);
        }
      }
      else {
        uVar30 = param_3[0xb];
        unaff_XMM6 = auVar2;
        if (0xf < uVar30) {
          lVar25 = *(longlong *)*unaff_R12;
          uVar28 = uVar30 + 1;
          if (0xfff < uVar28) {
            if (0x1f < (lVar25 - *(longlong *)(lVar25 + -8)) - 8U) goto LAB_140163656;
            uVar28 = uVar30 + 0x28;
            lVar25 = *(longlong *)(lVar25 + -8);
          }
          *(undefined8 *)(puVar31 + -8) = 0x140162d2d;
          thunk_FUN_14028af80(lVar25,uVar28);
        }
        *unaff_R12 = auVar1;
        *(undefined1 (*) [16])(param_3 + 10) = auVar2;
      }
      uVar30 = *(ulonglong *)(puVar31 + 0x48);
      if (0xf < uVar30) {
        lVar25 = *(longlong *)(puVar31 + 0x30);
        uVar28 = uVar30 + 1;
        lVar24 = lVar25;
        if (0xfff < uVar28) {
          lVar24 = *(longlong *)(lVar25 + -8);
          if (0x1f < (lVar25 - lVar24) - 8U) goto LAB_140163656;
          uVar28 = uVar30 + 0x28;
        }
        *(undefined8 *)(puVar31 + -8) = 0x140162dbb;
        thunk_FUN_14028af80(lVar24,uVar28);
      }
      pppplVar21 = (longlong ****)param_3[1];
      local_100 = 0;
      local_f8 = 0;
      uVar32 = *(uint *)(*(longlong *)(param_1 + 8) + 0x118) >> 3;
      local_110 = (longlong ***)0x0;
      uStack_108 = 0;
      *(undefined8 *)(puVar31 + -8) = 0x140162de7;
      sVar17 = strlen((char *)pppplVar21);
      *(undefined8 *)(puVar31 + -8) = 0x140162df6;
      FUN_140017480(&local_110,pppplVar21,sVar17);
      if ((uVar32 & 1) != 0) {
        *(undefined8 *)(puVar31 + -8) = 0x140162e12;
        FUN_1400532a0(&local_110,"#define GS_ENABLED 1\n",0x15);
      }
      uVar14 = *(undefined8 *)*param_3;
      *(undefined8 *)(puVar31 + -8) = 0x140162e22;
      puVar18 = (undefined8 *)FUN_14016c400(puVar31 + 0x30,uVar14);
      uVar30 = puVar18[2];
      if (0xf < (ulonglong)puVar18[3]) {
        puVar18 = (undefined8 *)*puVar18;
      }
      if (local_f8 - local_100 < uVar30) {
        *(ulonglong *)(puVar31 + 0x20) = uVar30;
        *(undefined8 *)(puVar31 + -8) = 0x140162e89;
        FUN_140053110(&local_110,uVar30,local_res18);
      }
      else {
        lVar25 = uVar30 + local_100;
        pppplVar21 = &local_110;
        if (0xf < local_f8) {
          pppplVar21 = (longlong ****)local_110;
        }
        pcVar23 = (char *)(local_100 + (longlong)pppplVar21);
        local_100 = lVar25;
        *(undefined8 *)(puVar31 + -8) = 0x140162e69;
        FUN_1404210f0(pcVar23,puVar18,uVar30);
        *(char *)(lVar25 + (longlong)pppplVar21) = '\0';
      }
      unaff_RDI = (longlong ****)(param_3 + 0xc);
      uVar30 = *(ulonglong *)(puVar31 + 0x48);
      if (0xf < uVar30) {
        lVar25 = *(longlong *)(puVar31 + 0x30);
        uVar28 = uVar30 + 1;
        lVar24 = lVar25;
        if (0xfff < uVar28) {
          lVar24 = *(longlong *)(lVar25 + -8);
          if (0x1f < (lVar25 - lVar24) - 8U) goto LAB_140163656;
          uVar28 = uVar30 + 0x28;
        }
        *(undefined8 *)(puVar31 + -8) = 0x140162ec6;
        thunk_FUN_14028af80(lVar24,uVar28);
      }
      uVar14 = *(undefined8 *)*param_3;
      *(undefined8 *)(puVar31 + -8) = 0x140162ed5;
      FUN_140164690(param_1 + 0x70,uVar14);
      uVar14 = *(undefined8 *)(param_1 + 8);
      local_148[6] = 0;
      *(undefined8 *)(puVar31 + 0x70) = 0;
      *(undefined8 *)(puVar31 + 0x78) = 0;
      *(undefined8 *)(puVar31 + -8) = 0x140162ef3;
      FUN_1400316b0(&local_e8);
      *(undefined1 **)(puVar31 + 0x20) = puVar31 + 0x70;
      *(undefined8 *)(puVar31 + -8) = 0x140162f14;
      FUN_140162100(&local_e8,uVar14,param_3 + 4,param_3 + 0x10);
      *(undefined8 *)(puVar31 + -8) = 0x140162f1d;
      FUN_14000d9e0(local_d0);
      *(undefined8 *)(puVar31 + -8) = 0x140162f26;
      FUN_140031340(local_e0);
      pppplVar21 = *(longlong *****)(param_1 + 8);
      *(undefined8 *)(puVar31 + -8) = 0x140162f33;
      FUN_1400316b0(&local_e8);
      *(undefined1 **)(puVar31 + 0x20) = puVar31 + 0x70;
      *(undefined8 *)(puVar31 + -8) = 0x140162f53;
      FUN_140162100(&local_e8,pppplVar21,unaff_RDI,param_3 + 0x18);
      *(undefined8 *)(puVar31 + -8) = 0x140162f5c;
      FUN_14000d9e0(local_d0);
      *(undefined8 *)(puVar31 + -8) = 0x140162f65;
      FUN_140031340(local_e0);
      if (*(longlong *)(*param_3 + 0x10) != 0) {
        *(undefined8 *)(puVar31 + -8) = 0x140162f7a;
        FUN_140164850(param_1 + 0x30);
      }
      lVar25 = *param_3;
      if (*(longlong *)(lVar25 + 8) != 0) {
        *(undefined8 *)(puVar31 + -8) = 0x140162f94;
        puVar19 = (undefined8 *)FUN_14016c800(&local_e8,lVar25,param_1 + 0x30);
        puVar18 = puVar19;
        if (0xf < (ulonglong)puVar19[3]) {
          puVar18 = (undefined8 *)*puVar19;
        }
        uVar14 = puVar19[2];
        *(undefined8 *)(puVar31 + -8) = 0x140162fb0;
        FUN_1400532a0(&local_110,puVar18,uVar14);
        *(undefined8 *)(puVar31 + -8) = 0x140162fb9;
        FUN_140017240(&local_e8);
      }
      *(undefined8 *)(puVar31 + -8) = 0x140162fce;
      uVar14 = FUN_140076fd0(puVar31 + 0x30,&local_110,param_3 + 0x10);
      *(undefined8 *)(puVar31 + -8) = 0x140162fdd;
      FUN_14000de40(param_3 + 0x10,uVar14);
      uVar30 = *(ulonglong *)(puVar31 + 0x48);
      if (0xf < uVar30) {
        lVar25 = *(longlong *)(puVar31 + 0x30);
        uVar28 = uVar30 + 1;
        lVar24 = lVar25;
        if (0xfff < uVar28) {
          lVar24 = *(longlong *)(lVar25 + -8);
          if (0x1f < (lVar25 - lVar24) - 8U) goto LAB_140163656;
          uVar28 = uVar30 + 0x28;
        }
        *(undefined8 *)(puVar31 + -8) = 0x14016301b;
        thunk_FUN_14028af80(lVar24,uVar28);
      }
      *(undefined8 *)(puVar31 + -8) = 0x140163030;
      uVar14 = FUN_140076fd0(puVar31 + 0x30,&local_110,param_3 + 0x18);
      *(undefined8 *)(puVar31 + -8) = 0x14016303f;
      FUN_14000de40(param_3 + 0x18,uVar14);
      uVar30 = *(ulonglong *)(puVar31 + 0x48);
      if (0xf < uVar30) {
        lVar25 = *(longlong *)(puVar31 + 0x30);
        uVar28 = uVar30 + 1;
        lVar24 = lVar25;
        if (0xfff < uVar28) {
          lVar24 = *(longlong *)(lVar25 + -8);
          if (0x1f < (lVar25 - lVar24) - 8U) goto LAB_140163656;
          uVar28 = uVar30 + 0x28;
        }
        *(undefined8 *)(puVar31 + -8) = 0x14016307c;
        thunk_FUN_14028af80(lVar24,uVar28);
      }
      if ((uVar32 & 1) != 0) {
        uVar14 = *(undefined8 *)(param_1 + 8);
        *(undefined8 *)(puVar31 + -8) = 0x14016308e;
        FUN_1400316b0(&local_e8);
        *(undefined1 **)(puVar31 + 0x20) = puVar31 + 0x70;
        *(undefined8 *)(puVar31 + -8) = 0x1401630af;
        FUN_140162100(&local_e8,uVar14,param_3 + 8,param_3 + 0x14);
        *(undefined8 *)(puVar31 + -8) = 0x1401630b8;
        FUN_14000d9e0(local_d0);
        *(undefined8 *)(puVar31 + -8) = 0x1401630c1;
        FUN_140031340(local_e0);
        if (param_3[0x16] != 0) {
          *(undefined8 *)(puVar31 + -8) = 0x1401630df;
          uVar14 = FUN_140076fd0(&local_e8,&local_110,param_3 + 0x14);
          *(undefined8 *)(puVar31 + -8) = 0x1401630ee;
          FUN_14000de40(param_3 + 0x14,uVar14);
          *(undefined8 *)(puVar31 + -8) = 0x1401630f7;
          FUN_140017240(&local_e8);
        }
      }
      unaff_RDI = (longlong ****)param_3[2];
      lVar25 = *param_3;
      pcVar3 = *(code **)(**(longlong **)(*(longlong *)(param_1 + 8) + 0x1518) + 0x30);
      *(undefined8 *)(puVar31 + -8) = 0x14016310f;
      uVar12 = (*pcVar3)();
      *(ulonglong *)(puVar31 + 0x20) = param_1 + 0x30;
      *(undefined8 *)(puVar31 + -8) = 0x140163129;
      uVar14 = FUN_14016c990(&local_e8,uVar12,param_2,lVar25);
      lVar25 = param_3[3];
      *(undefined8 *)(puVar31 + -8) = 0x140163141;
      uVar20 = FUN_14003a8b0(puVar31 + 0x30,s_shaders__1404dfca0,lVar25);
      *(undefined8 *)(puVar31 + -8) = 0x140163151;
      pppplVar21 = (longlong ****)FUN_1400ea380(puVar31 + 0x50,uVar20,uVar14);
      *(undefined8 *)(puVar31 + -8) = 0x14016315c;
      sVar17 = strlen((char *)unaff_RDI);
      *(undefined8 *)(puVar31 + -8) = 0x14016316a;
      pauVar22 = (undefined1 (*) [16])FUN_1400532a0(pppplVar21,unaff_RDI,sVar17);
      pauVar16 = (undefined1 (*) [16])(param_3 + 0x1c);
      auVar1 = *pauVar22;
      dVar33 = auVar1._0_8_;
      unaff_XMM7_Dc = auVar1._8_4_;
      unaff_XMM7_Dd = auVar1._12_4_;
      auVar2 = pauVar22[1];
      *(undefined8 *)pauVar22[1] = 0;
      *(undefined8 *)(pauVar22[1] + 8) = 0xf;
      (*pauVar22)[0] = 0;
      if (pauVar16 == (undefined1 (*) [16])local_88) {
        unaff_XMM6 = auVar2 >> 0x40;
        uVar30 = auVar2._8_8_;
        if (0xf < uVar30) {
          uVar28 = uVar30 + 1;
          dVar34 = dVar33;
          if (0xfff < uVar28) {
            dVar34 = *(double *)((longlong)dVar33 + -8);
            if (0x1f < ((longlong)dVar33 - (longlong)dVar34) - 8U) goto LAB_140163656;
            uVar28 = uVar30 + 0x28;
          }
          *(undefined8 *)(puVar31 + -8) = 0x140163223;
          thunk_FUN_14028af80(dVar34,uVar28);
        }
      }
      else {
        uVar30 = param_3[0x1f];
        unaff_XMM6 = auVar2;
        if (0xf < uVar30) {
          lVar25 = *(longlong *)*pauVar16;
          uVar28 = uVar30 + 1;
          if (0xfff < uVar28) {
            if (0x1f < (lVar25 - *(longlong *)(lVar25 + -8)) - 8U) goto LAB_140163656;
            uVar28 = uVar30 + 0x28;
            lVar25 = *(longlong *)(lVar25 + -8);
          }
          *(undefined8 *)(puVar31 + -8) = 0x1401631d6;
          thunk_FUN_14028af80(lVar25,uVar28);
        }
        *pauVar16 = auVar1;
        *(undefined1 (*) [16])(param_3 + 0x1e) = auVar2;
      }
      uVar30 = *(ulonglong *)(puVar31 + 0x68);
      if (0xf < uVar30) {
        lVar25 = *(longlong *)(puVar31 + 0x50);
        uVar28 = uVar30 + 1;
        lVar24 = lVar25;
        if (0xfff < uVar28) {
          lVar24 = *(longlong *)(lVar25 + -8);
          if (0x1f < (lVar25 - lVar24) - 8U) goto LAB_140163656;
          uVar28 = uVar30 + 0x28;
        }
        *(undefined8 *)(puVar31 + -8) = 0x140163260;
        thunk_FUN_14028af80(lVar24,uVar28);
      }
      uVar30 = *(ulonglong *)(puVar31 + 0x48);
      *(undefined8 *)(puVar31 + 0x60) = 0;
      *(undefined8 *)(puVar31 + 0x68) = 0xf;
      puVar31[0x50] = 0;
      if (0xf < uVar30) {
        lVar25 = *(longlong *)(puVar31 + 0x30);
        uVar28 = uVar30 + 1;
        lVar24 = lVar25;
        if (0xfff < uVar28) {
          lVar24 = *(longlong *)(lVar25 + -8);
          if (0x1f < (lVar25 - lVar24) - 8U) goto LAB_140163656;
          uVar28 = uVar30 + 0x28;
        }
        *(undefined8 *)(puVar31 + -8) = 0x1401632b1;
        thunk_FUN_14028af80(lVar24,uVar28);
      }
      uVar30 = local_d0[0];
      *(undefined8 *)(puVar31 + 0x40) = 0;
      *(undefined8 *)(puVar31 + 0x48) = 0xf;
      puVar31[0x30] = 0;
      if (0xf < uVar30) {
        uVar28 = uVar30 + 1;
        lVar25 = local_e8;
        if (0xfff < uVar28) {
          lVar25 = *(longlong *)(local_e8 + -8);
          if (0x1f < (local_e8 - lVar25) - 8U) goto LAB_140163656;
          uVar28 = uVar30 + 0x28;
        }
        *(undefined8 *)(puVar31 + -8) = 0x140163300;
        thunk_FUN_14028af80(lVar25,uVar28);
      }
      plVar4 = *(longlong **)(*(longlong *)(param_1 + 8) + 0x1898);
      if ((ulonglong)param_3[7] < 0x10) {
        plVar29 = param_3 + 4;
      }
      else {
        plVar29 = (longlong *)param_3[4];
      }
      pcVar3 = *(code **)(*plVar4 + 0x30);
      *(undefined8 *)(puVar31 + -8) = 0x140163322;
      dVar33 = (double)(*pcVar3)(plVar4,plVar29);
      plVar4 = *(longlong **)(*(longlong *)(param_1 + 8) + 0x1898);
      if ((ulonglong)param_3[0xf] < 0x10) {
        plVar29 = param_3 + 0xc;
      }
      else {
        plVar29 = (longlong *)param_3[0xc];
      }
      pcVar3 = *(code **)(*plVar4 + 0x30);
      *(undefined8 *)(puVar31 + -8) = 0x140163348;
      dVar34 = (double)(*pcVar3)(plVar4,plVar29);
      plVar4 = *(longlong **)(*(longlong *)(param_1 + 8) + 0x1898);
      if (0xf < (ulonglong)param_3[0xb]) {
        unaff_R12 = *(undefined1 (**) [16])*unaff_R12;
      }
      pcVar3 = *(code **)(*plVar4 + 0x30);
      *(undefined8 *)(puVar31 + -8) = 0x14016336a;
      dVar35 = (double)(*pcVar3)(plVar4,unaff_R12);
      if (dVar34 <= dVar33) {
        dVar34 = dVar33;
      }
      unaff_XMM6._8_4_ = extraout_XMM0_Dc_00;
      unaff_XMM6._0_8_ = dVar35;
      unaff_XMM6._12_4_ = extraout_XMM0_Dd_00;
      if (dVar35 <= dVar34) {
        unaff_XMM6._8_4_ = extraout_XMM0_Dc;
        unaff_XMM6._0_8_ = dVar34;
        unaff_XMM6._12_4_ = extraout_XMM0_Dd;
      }
      unaff_RDI = *(longlong *****)(puVar31 + 0x78);
      for (pppplVar21 = *(longlong *****)(puVar31 + 0x70); pppplVar21 != unaff_RDI;
          pppplVar21 = pppplVar21 + 4) {
        *(undefined8 *)(puVar31 + -8) = 0x1401633a7;
        FUN_140035e80(pppplVar21,0,"shaders/",8);
        pcVar3 = *(code **)(**(longlong **)(*(longlong *)(param_1 + 8) + 0x1898) + 0x30);
        *(undefined8 *)(puVar31 + -8) = 0x1401633c5;
        dVar33 = (double)(*pcVar3)();
        if (unaff_XMM6._0_8_ < dVar33) {
          pcVar3 = *(code **)(**(longlong **)(*(longlong *)(param_1 + 8) + 0x1898) + 0x30);
          *(undefined8 *)(puVar31 + -8) = 0x1401633e9;
          unaff_XMM6._0_8_ = (*pcVar3)();
          unaff_XMM6._8_4_ = extraout_XMM0_Dc_01;
          unaff_XMM6._12_4_ = extraout_XMM0_Dd_01;
        }
      }
      plVar4 = *(longlong **)(*(longlong *)(param_1 + 8) + 0x1898);
      pauVar22 = pauVar16;
      if (0xf < (ulonglong)param_3[0x1f]) {
        pauVar22 = *(undefined1 (**) [16])*pauVar16;
      }
      pcVar3 = *(code **)(*plVar4 + 0x30);
      *(undefined8 *)(puVar31 + -8) = 0x140163416;
      dVar33 = (double)(*pcVar3)(plVar4,pauVar22);
      unaff_XMM8_Da = 0;
      unaff_XMM8_Db = 0;
      unaff_XMM8_Dc = 0;
      unaff_XMM8_Dd = 0;
      unaff_XMM7_Dc = extraout_XMM0_Dc_02;
      unaff_XMM7_Dd = extraout_XMM0_Dd_02;
      if (0.0 < dVar33) {
        if (0xf < (ulonglong)param_3[0x1f]) {
          pauVar16 = *(undefined1 (**) [16])*pauVar16;
        }
        plVar4 = *(longlong **)(*(longlong *)(param_1 + 8) + 0x1898);
        pcVar3 = *(code **)(*plVar4 + 8);
        *(undefined8 *)(puVar31 + -8) = 0x140163452;
        param_1 = (*pcVar3)(plVar4,pauVar16,0,1);
        *(undefined8 *)(puVar31 + 0x60) = 0;
        *(undefined8 *)(puVar31 + 0x68) = 0xf;
        *(undefined8 *)(puVar31 + 0x50) = 0;
        *(undefined8 *)(puVar31 + 0x58) = 0;
        puVar31[0x50] = 0;
        if (param_1 != 0) {
          *(undefined8 *)(puVar31 + -8) = 0x14016347f;
          pcVar23 = (char *)thunk_FUN_14028af20(9);
          pcVar3 = *(code **)(*plVar4 + 0x10);
          *(undefined8 *)(puVar31 + -8) = 0x140163498;
          iVar13 = (*pcVar3)(plVar4,param_1,pcVar23,8);
          pcVar23[iVar13] = '\0';
          *(undefined8 *)(puVar31 + -8) = 0x1401634a7;
          sVar17 = strlen(pcVar23);
          *(undefined8 *)(puVar31 + -8) = 0x1401634b7;
          FUN_14000f880(puVar31 + 0x50,pcVar23,sVar17);
          *(undefined8 *)(puVar31 + -8) = 0x1401634bf;
          thunk_FUN_14028af80(pcVar23);
        }
        pcVar3 = *(code **)(*plVar4 + 0x20);
        *(undefined8 *)(puVar31 + -8) = 0x1401634cb;
        (*pcVar3)(plVar4,param_1);
        unaff_RDI = *(longlong *****)(puVar31 + 0x68);
        puVar5 = *(undefined1 **)(puVar31 + 0x50);
        puVar26 = puVar31 + 0x50;
        if ((longlong ****)0xf < unaff_RDI) {
          puVar26 = puVar5;
        }
        if (*(longlong *)(puVar31 + 0x60) == 8) {
          *(undefined8 *)(puVar31 + -8) = 0x1401634f9;
          iVar13 = memcmp(puVar26,&DAT_140486948,8);
          if (iVar13 != 0) goto LAB_1401634fd;
        }
        else {
LAB_1401634fd:
          unaff_XMM7_Dc = 0;
          unaff_XMM7_Dd = 0;
          dVar33 = DAT_1404929d0;
        }
        if ((longlong ****)0xf < unaff_RDI) {
          pppplVar21 = (longlong ****)((longlong)unaff_RDI + 1);
          puVar26 = puVar5;
          if ((longlong ****)0xfff < pppplVar21) {
            puVar26 = *(undefined1 **)(puVar5 + -8);
            pppplVar21 = (longlong ****)(puVar5 + (-8 - (longlong)puVar26));
            if ((longlong ****)0x1f < pppplVar21) goto LAB_140163656;
            pppplVar21 = unaff_RDI + 5;
          }
          *(undefined8 *)(puVar31 + -8) = 0x14016353c;
          thunk_FUN_14028af80(puVar26,pppplVar21);
        }
      }
      if ((dVar33 < 0.0) || (param_1 = CONCAT71((int7)(param_1 >> 8),1), dVar33 < unaff_XMM6._0_8_))
      {
        param_1 = param_1 & 0xffffffffffffff00;
        *(undefined8 *)(puVar31 + -8) = 0x14016355b;
        FUN_14016b0e0(param_3 + 0x10);
        *(undefined8 *)(puVar31 + -8) = 0x140163567;
        FUN_14016b0e0(param_3 + 0x14);
        *(undefined8 *)(puVar31 + -8) = 0x140163573;
        FUN_14016b0e0(param_3 + 0x18);
      }
      pppplVar21 = *(longlong *****)(puVar31 + 0x70);
      if (pppplVar21 != (longlong ****)0x0) {
        unaff_RDI = *(longlong *****)(puVar31 + 0x78);
        pppplVar27 = pppplVar21;
        if (pppplVar21 != unaff_RDI) {
          do {
            *(undefined8 *)(puVar31 + -8) = 0x14016358f;
            FUN_140017240(pppplVar21);
            pppplVar21 = pppplVar21 + 4;
          } while (pppplVar21 != unaff_RDI);
          pppplVar27 = *(longlong *****)(puVar31 + 0x70);
        }
        uVar30 = local_148[6] - (longlong)pppplVar27 & 0xffffffffffffffe0;
        pppplVar21 = pppplVar27;
        if (0xfff < uVar30) {
          pppplVar21 = (longlong ****)((longlong)pppplVar27 + (-8 - (longlong)pppplVar27[-1]));
          if ((longlong ****)0x1f < pppplVar21) goto LAB_140163656;
          uVar30 = uVar30 + 0x27;
          pppplVar27 = (longlong ****)pppplVar27[-1];
        }
        *(undefined8 *)(puVar31 + -8) = 0x1401635d4;
        thunk_FUN_14028af80(pppplVar27,uVar30);
        local_148[6] = 0;
        *(undefined8 *)(puVar31 + 0x70) = 0;
        *(undefined8 *)(puVar31 + 0x78) = 0;
      }
      if (local_f8 < 0x10) goto LAB_140163618;
      uVar30 = local_f8 + 1;
      pppplVar27 = (longlong ****)local_110;
      if (uVar30 < 0x1000) goto LAB_140163613;
      pppplVar27 = (longlong ****)local_110[-1];
      if ((char *)((longlong)local_110 + (-8 - (longlong)pppplVar27)) < (char *)0x20) {
        uVar30 = local_f8 + 0x28;
LAB_140163613:
        *(undefined8 *)(puVar31 + -8) = 0x140163618;
        thunk_FUN_14028af80(pppplVar27,uVar30);
LAB_140163618:
        return param_1 & 0xff;
      }
    }
    else {
      lVar25 = *(longlong *)(puVar31 + 0x30);
      uVar28 = uVar30 + 1;
      lVar24 = lVar25;
      if (uVar28 < 0x1000) {
LAB_140162bbd:
        *(undefined8 *)(puVar31 + -8) = 0x140162bc2;
        thunk_FUN_14028af80(lVar24,uVar28);
        goto LAB_140162bc2;
      }
      lVar24 = *(longlong *)(lVar25 + -8);
      if ((lVar25 - lVar24) - 8U < 0x20) {
        uVar28 = uVar30 + 0x28;
        goto LAB_140162bbd;
      }
    }
LAB_140163656:
    pcVar3 = (code *)swi(0x29);
    (*pcVar3)(5);
    puVar5 = puVar31 + 8;
LAB_14016365d:
    puVar31 = puVar5;
    *(undefined8 *)(puVar31 + -8) = 0x140163669;
    FUN_14028b140(&DAT_1404e95d0);
    if (DAT_1404e95d0 == -1) {
      *(undefined8 *)(puVar31 + -8) = 0x140163682;
      FUN_14028b410(FUN_140424c20);
      *(undefined8 *)(puVar31 + -8) = 0x14016368e;
      _Init_thread_footer(&DAT_1404e95d0);
    }
  } while( true );
}

