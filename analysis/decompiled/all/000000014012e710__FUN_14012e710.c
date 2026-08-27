// Function: FUN_14012e710
// Addr: 14012e710
// Size: 8374 bytes


void FUN_14012e710(void)

{
  undefined1 auVar1 [16];
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  undefined1 auVar5 [15];
  longlong *******ppppppplVar6;
  longlong *******ppppppplVar7;
  longlong *plVar8;
  char cVar9;
  int iVar10;
  uint uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  int iVar15;
  BOOL BVar16;
  longlong *******ppppppplVar17;
  undefined8 *puVar18;
  longlong lVar19;
  ulonglong uVar20;
  longlong ******pppppplVar21;
  longlong *******ppppppplVar22;
  int *piVar23;
  longlong *****ppppplVar24;
  undefined8 uVar25;
  longlong lVar26;
  longlong *plVar27;
  uint uVar28;
  int iVar29;
  int iVar30;
  int iVar31;
  longlong *******ppppppplVar32;
  ulonglong uVar33;
  int iVar34;
  ulonglong uVar35;
  int *piVar36;
  undefined8 *puVar37;
  longlong *******ppppppplVar38;
  int iVar39;
  int iVar40;
  int *piVar41;
  longlong lVar42;
  undefined1 *puVar43;
  int iVar44;
  int iVar45;
  longlong lVar46;
  ulonglong uVar47;
  undefined1 (*pauVar48) [16];
  ulonglong uVar49;
  longlong *plVar50;
  longlong lVar51;
  int iVar52;
  undefined8 extraout_XMM0_Qb;
  undefined8 extraout_XMM0_Qb_00;
  undefined1 auVar53 [16];
  undefined8 extraout_XMM0_Qb_01;
  undefined8 local_res8;
  longlong *****local_res10;
  int local_res18;
  longlong *local_res20;
  undefined1 auStack_278 [8];
  undefined1 auStack_270 [24];
  longlong ******local_258;
  undefined8 uStack_250;
  longlong *****local_248;
  ulonglong uStack_240;
  longlong local_238;
  undefined1 local_230 [3];
  undefined1 uStack_22d;
  undefined4 uStack_22c;
  undefined4 uStack_228;
  undefined4 uStack_224;
  int local_220;
  undefined1 local_21b [3];
  longlong local_218;
  longlong lStack_210;
  longlong local_208;
  undefined8 local_200;
  int local_1f8;
  int local_1f4;
  undefined1 (*local_1f0) [16];
  undefined1 (*pauStack_1e8) [16];
  undefined1 (*local_1e0) [16];
  int *local_1d8;
  longlong local_1d0;
  undefined8 uStack_1c8;
  longlong local_1c0;
  undefined1 local_1b8 [16];
  undefined8 *local_1a8;
  undefined8 local_1a0;
  longlong ******local_198;
  longlong *****local_190;
  undefined1 local_183 [11];
  longlong local_178;
  ulonglong local_170;
  undefined1 local_168 [16];
  longlong local_158;
  longlong local_150;
  undefined8 uStack_148;
  longlong local_140;
  longlong ******local_138;
  longlong ******local_130;
  undefined1 local_118 [8];
  ulonglong local_110 [2];
  longlong local_100 [3];
  ulonglong local_e8;
  undefined1 local_d8 [8];
  longlong *local_d0;
  longlong local_c8;
  undefined1 local_c0 [40];
  undefined1 local_98 [8];
  longlong *local_90 [2];
  undefined1 local_80 [64];
  
  puVar43 = auStack_278;
  FUN_140130fc0();
  DAT_1404e8df8 = DAT_1404e8df8 & 0xfffffff5;
  iVar39 = 0;
  local_1a0 = 0;
  local_1a8 = &DAT_1404e8ec8;
  switch(DAT_1404df594) {
  case 0:
  case 1:
  case 2:
  case 3:
  case 5:
    cVar9 = FUN_14012c970(&local_1a8);
    if (cVar9 == '\0') goto switchD_14012e764_caseD_6;
    break;
  case 4:
switchD_14012e764_caseD_4:
    FUN_140130fc0();
    FUN_14012bed0(&local_1a8);
    break;
  case 6:
switchD_14012e764_caseD_6:
    FUN_140130fc0();
    cVar9 = FUN_140015180(10,0,0);
    if ((cVar9 == '\0') || (cVar9 = FUN_14012df50(&local_1a8), cVar9 == '\0'))
    goto switchD_14012e764_caseD_4;
  }
  ppppppplVar22 = DAT_1404e8ed0;
  iVar44 = DAT_1404df594;
  for (ppppppplVar38 = DAT_1404e8ec8; ppppppplVar38 != ppppppplVar22;
      ppppppplVar38 = ppppppplVar38 + 0x11) {
    if (ppppppplVar38[6] < (longlong ******)0x10) {
      ppppppplVar32 = ppppppplVar38 + 3;
      ppppppplVar17 = (longlong *******)((longlong)(ppppppplVar38[5] + 3) + (longlong)ppppppplVar38)
      ;
    }
    else {
      ppppppplVar32 = (longlong *******)ppppppplVar38[3];
      ppppppplVar17 = (longlong *******)((longlong)ppppppplVar38[5] + (longlong)ppppppplVar32);
    }
    for (; ppppppplVar32 != ppppppplVar17;
        ppppppplVar32 = (longlong *******)((longlong)ppppppplVar32 + 1)) {
      if (*(char *)ppppppplVar32 == '\\') {
        *(char *)ppppppplVar32 = '/';
      }
    }
    if (ppppppplVar38[0xe] < (longlong ******)0x10) {
      ppppppplVar32 = ppppppplVar38 + 0xb;
      ppppppplVar17 =
           (longlong *******)((longlong)(ppppppplVar38[0xd] + 0xb) + (longlong)ppppppplVar38);
    }
    else {
      ppppppplVar32 = (longlong *******)ppppppplVar38[0xb];
      ppppppplVar17 = (longlong *******)((longlong)ppppppplVar38[0xd] + (longlong)ppppppplVar32);
    }
    for (; ppppppplVar32 != ppppppplVar17;
        ppppppplVar32 = (longlong *******)((longlong)ppppppplVar32 + 1)) {
      if (*(char *)ppppppplVar32 == '\\') {
        *(char *)ppppppplVar32 = '/';
      }
    }
  }
  if ((iVar44 - 2U < 2) && (DAT_1404e8ec8 != DAT_1404e8ed0)) {
    lVar46 = ((longlong)DAT_1404e8ed0 - (longlong)DAT_1404e8ec8 >> 3) * -0xf0f0f0f0f0f0f0f;
    if (iVar44 == 2) {
      FUN_140131200(DAT_1404e8ec8,DAT_1404e8ed0,lVar46,&LAB_14012bb90);
      if (((longlong)DAT_1404e8ed0 - (longlong)DAT_1404e8ec8 >> 3) * -0xf0f0f0f0f0f0f0f != 0) {
        do {
          ppppppplVar38 = DAT_1404e8ec8 + (longlong)iVar39 * 0x11 + 3;
          FUN_14000f880(ppppppplVar38,"MonitorPositionL",0x10);
          puVar18 = (undefined8 *)FUN_140053e40(&local_258,iVar39);
          puVar37 = puVar18 + 2;
          if (0xf < (ulonglong)puVar18[3]) {
            puVar18 = (undefined8 *)*puVar18;
          }
          FUN_1400532a0(ppppppplVar38,puVar18,*puVar37);
          FUN_140017240(&local_258);
          FUN_1400532a0(ppppppplVar38,&DAT_14048ac78,2);
          iVar39 = iVar39 + 1;
        } while ((ulonglong)(longlong)iVar39 <
                 (ulonglong)
                 (((longlong)DAT_1404e8ed0 - (longlong)DAT_1404e8ec8 >> 3) * -0xf0f0f0f0f0f0f0f));
      }
    }
    else {
      FUN_140131200(DAT_1404e8ec8,DAT_1404e8ed0,lVar46,&LAB_14012bb70);
      iVar31 = 1;
      iVar30 = 1;
      iVar40 = 0;
      iVar44 = *(int *)((longlong)DAT_1404e8ec8 + 4);
      iVar34 = *(int *)DAT_1404e8ec8;
      uVar20 = ((longlong)DAT_1404e8ed0 - (longlong)DAT_1404e8ec8 >> 3) * -0xf0f0f0f0f0f0f0f;
      local_res10 = (longlong *****)CONCAT44(local_res10._4_4_,iVar34);
      iVar29 = iVar34;
      iVar45 = iVar39;
      iVar15 = iVar44;
      if (uVar20 < 2) {
        iVar10 = iVar40;
        if (uVar20 == 0) goto LAB_14012eb64;
      }
      else {
        do {
          iVar52 = *(int *)(DAT_1404e8ec8 + (longlong)iVar30 * 0x11);
          iVar2 = *(int *)((longlong)DAT_1404e8ec8 + ((longlong)iVar30 * 0x22 + 1) * 4);
          iVar10 = iVar45;
          if (iVar52 == iVar29) {
            iVar52 = iVar29;
            iVar40 = iVar39;
            if (iVar2 != iVar15) {
              iVar40 = iVar31;
              if (iVar2 != 0) {
                iVar40 = iVar39;
              }
              iVar31 = iVar31 + 1;
              iVar15 = iVar2;
            }
          }
          else {
            iVar31 = 1;
            iVar10 = iVar45 + 1;
            if (-1 < iVar52) {
              iVar10 = iVar45;
            }
            iVar40 = 0;
            iVar15 = iVar2;
            if (-1 < iVar52) {
              iVar40 = iVar39;
            }
          }
          iVar30 = iVar30 + 1;
          iVar29 = iVar52;
          iVar39 = iVar40;
          iVar45 = iVar10;
        } while ((ulonglong)(longlong)iVar30 < uVar20);
      }
      iVar29 = 0;
      local_res8 = local_res8 & 0xffffffff00000000;
      iVar45 = 0;
      iVar39 = 0;
      do {
        lVar46 = (longlong)iVar45;
        iVar15 = *(int *)((longlong)DAT_1404e8ec8 + (lVar46 * 0x22 + 1) * 4);
        if (*(int *)(DAT_1404e8ec8 + lVar46 * 0x11) == iVar34) {
          if (iVar15 != iVar44) {
            iVar29 = iVar29 + 1;
            iVar44 = iVar15;
          }
        }
        else {
          local_res10 = (longlong *****)
                        CONCAT44(local_res10._4_4_,*(int *)(DAT_1404e8ec8 + lVar46 * 0x11));
          local_res8 = CONCAT44(local_res8._4_4_,iVar39 + 1);
          iVar29 = 0;
          iVar44 = iVar15;
        }
        ppppppplVar38 = DAT_1404e8ec8 + lVar46 * 0x11 + 3;
        FUN_14000f880(ppppppplVar38,"MonitorPositionL",0x10);
        puVar18 = (undefined8 *)FUN_140053e40(&local_258,(int)local_res8 - iVar10);
        puVar37 = puVar18 + 2;
        if (0xf < (ulonglong)puVar18[3]) {
          puVar18 = (undefined8 *)*puVar18;
        }
        FUN_1400532a0(ppppppplVar38,puVar18,*puVar37);
        FUN_140017240(&local_258);
        FUN_1400532a0(ppppppplVar38,&DAT_14048ac74,1);
        puVar18 = (undefined8 *)FUN_140053e40(&local_258,iVar29 - iVar40);
        puVar37 = puVar18 + 2;
        if (0xf < (ulonglong)puVar18[3]) {
          puVar18 = (undefined8 *)*puVar18;
        }
        FUN_1400532a0(ppppppplVar38,puVar18,*puVar37);
        FUN_140017240(&local_258);
        iVar45 = iVar45 + 1;
        iVar34 = (int)local_res10;
        iVar39 = (int)local_res8;
      } while ((ulonglong)(longlong)iVar45 <
               (ulonglong)
               (((longlong)DAT_1404e8ed0 - (longlong)DAT_1404e8ec8 >> 3) * -0xf0f0f0f0f0f0f0f));
    }
  }
LAB_14012eb64:
  uVar20 = 0;
  FUN_140131200(DAT_1404e8ec8,DAT_1404e8ed0,
                ((longlong)DAT_1404e8ed0 - (longlong)DAT_1404e8ec8 >> 3) * -0xf0f0f0f0f0f0f0f,
                &LAB_14012bb50);
  ppppppplVar38 = DAT_1404e8ed0;
  iVar39 = -(int)local_1a0;
  if (-(int)local_1a0 < 0) {
    iVar39 = (int)local_1a0;
  }
  iVar44 = -local_1a0._4_4_;
  if (-local_1a0._4_4_ < 0) {
    iVar44 = local_1a0._4_4_;
  }
  ppppppplVar22 = DAT_1404e8ec8;
  if (DAT_1404e8ec8 != DAT_1404e8ed0) {
    do {
      *(int *)(ppppppplVar22 + 2) = *(int *)ppppppplVar22;
      *(int *)ppppppplVar22 = *(int *)ppppppplVar22 + iVar39;
      *(int *)((longlong)ppppppplVar22 + 0x14) = *(int *)((longlong)ppppppplVar22 + 4);
      *(int *)((longlong)ppppppplVar22 + 4) = *(int *)((longlong)ppppppplVar22 + 4) + iVar44;
      ppppppplVar22 = ppppppplVar22 + 0x11;
    } while (ppppppplVar22 != ppppppplVar38);
    ppppppplVar22 = DAT_1404e8ec8;
    ppppppplVar38 = DAT_1404e8ed0;
    if (DAT_1404e8ec8 != DAT_1404e8ed0) {
      do {
        ppppppplVar32 = ppppppplVar22;
        ppppppplVar17 = ppppppplVar38;
        ppppppplVar7 = ppppppplVar22;
        if ((((*(int *)(ppppppplVar22 + 1) - 0x21U < 0x3fe0) &&
             (*(int *)((longlong)ppppppplVar22 + 0xc) - 0x21U < 0x3fe0)) &&
            (*(int *)(ppppppplVar22 + 2) + 0x4000U < 0x8001)) &&
           (*(int *)((longlong)ppppppplVar22 + 0x14) + 0x4000U < 0x8001)) {
          ppppppplVar22 = ppppppplVar22 + 0x11;
        }
        else {
          while (ppppppplVar6 = ppppppplVar7 + 0x11, ppppppplVar6 != ppppppplVar38) {
            *(int *)ppppppplVar32 = *(int *)ppppppplVar6;
            *(int *)((longlong)ppppppplVar32 + 4) = *(int *)((longlong)ppppppplVar7 + 0x8c);
            *(int *)(ppppppplVar32 + 1) = *(int *)(ppppppplVar7 + 0x12);
            *(int *)((longlong)ppppppplVar32 + 0xc) = *(int *)((longlong)ppppppplVar7 + 0x94);
            *(int *)(ppppppplVar32 + 2) = *(int *)(ppppppplVar7 + 0x13);
            *(int *)((longlong)ppppppplVar32 + 0x14) = *(int *)((longlong)ppppppplVar7 + 0x9c);
            FUN_14000de40(ppppppplVar32 + 3,ppppppplVar7 + 0x14);
            FUN_14000de40(ppppppplVar32 + 7,ppppppplVar7 + 0x18);
            FUN_14000de40(ppppppplVar32 + 0xb,ppppppplVar7 + 0x1c);
            ppppppplVar32[0xf] = ppppppplVar7[0x20];
            *(int *)(ppppppplVar32 + 0x10) = *(int *)(ppppppplVar7 + 0x21);
            ppppppplVar32 = ppppppplVar32 + 0x11;
            ppppppplVar17 = DAT_1404e8ed0;
            ppppppplVar7 = ppppppplVar6;
          }
          FUN_140017240(ppppppplVar17 + -6);
          FUN_140017240(ppppppplVar17 + -10);
          FUN_140017240(ppppppplVar17 + -0xe);
          ppppppplVar38 = DAT_1404e8ed0 + -0x11;
          DAT_1404e8ed0 = ppppppplVar38;
        }
      } while (ppppppplVar22 != ppppppplVar38);
    }
  }
  if ((DAT_1404df594 != 0) || (DAT_1404e8ec8 == ppppppplVar38)) goto LAB_14013073a;
  FUN_1400493a0(local_118);
  FUN_1400493a0(local_d8);
  local_1d0 = 0;
  uStack_1c8 = 0;
  local_1c0 = 0;
  local_res18 = 0;
  FUN_1401310e0(&local_1d0,
                ((longlong)DAT_1404e8ed0 - (longlong)DAT_1404e8ec8 >> 3) * -0xf0f0f0f0f0f0f0f);
  uVar49 = uVar20;
  uVar35 = uVar20;
  if (((longlong)DAT_1404e8ed0 - (longlong)DAT_1404e8ec8 >> 3) * -0xf0f0f0f0f0f0f0f != 0) {
    do {
      iVar39 = (int)uVar49;
      iVar44 = (int)uVar35;
      ppppppplVar32 = DAT_1404e8ec8 + (longlong)iVar44 * 0x11;
      ppppppplVar38 = ppppppplVar32 + 3;
      ppppppplVar22 = ppppppplVar32 + 7;
      if (ppppppplVar32 != ppppppplVar32 + -4) {
        ppppppplVar17 = ppppppplVar38;
        if ((longlong ******)0xf < ppppppplVar32[6]) {
          ppppppplVar17 = (longlong *******)*ppppppplVar38;
        }
        FUN_14000f880(ppppppplVar22,ppppppplVar17,ppppppplVar32[5]);
      }
      ppppppplVar32[5] = (longlong ******)0x0;
      ppppppplVar17 = ppppppplVar38;
      if ((longlong ******)0xf < ppppppplVar32[6]) {
        ppppppplVar17 = (longlong *******)*ppppppplVar38;
      }
      *(undefined1 *)ppppppplVar17 = 0;
      ppppppplVar17 = ppppppplVar22;
      if ((longlong ******)0xf < ppppppplVar32[10]) {
        ppppppplVar17 = (longlong *******)*ppppppplVar22;
      }
      lVar46 = FUN_140087490(&DAT_1404e7ef8,ppppppplVar17,
                             (longlong)ppppppplVar32[9] + (longlong)ppppppplVar17);
      if (lVar46 == 0) {
LAB_14012ef20:
        uVar49 = (ulonglong)(iVar39 + 1);
      }
      else {
        if ((longlong ******)0xf < ppppppplVar32[10]) {
          ppppppplVar22 = (longlong *******)*ppppppplVar22;
        }
        lVar46 = FUN_140086de0(&DAT_1404e7ef8,ppppppplVar22,
                               (longlong)ppppppplVar32[9] + (longlong)ppppppplVar22);
        if ((*(char *)(lVar46 + 8) != '\a') ||
           (lVar46 = FUN_140086de0(lVar46,"location",""), 2 < *(byte *)(lVar46 + 8) - 1))
        goto LAB_14012ef20;
        uVar11 = FUN_140085ee0(lVar46);
        local_res8 = CONCAT44(local_res8._4_4_,uVar11);
        uVar47 = (((((ulonglong)(uVar11 & 0xff) ^ 0xcbf29ce484222325) * 0x100000001b3 ^
                   (ulonglong)((int)uVar11 >> 8 & 0xff)) * 0x100000001b3 ^
                  (ulonglong)((int)uVar11 >> 0x10 & 0xff)) * 0x100000001b3 ^
                 (ulonglong)((int)uVar11 >> 0x18 & 0xff)) * 0x100000001b3 & local_e8;
        uVar35 = *(ulonglong *)(local_100[0] + 8 + uVar47 * 0x10);
        uVar33 = uVar20;
        if (uVar35 != local_110[0]) {
          uVar28 = *(uint *)(uVar35 + 0x10);
          while ((uVar33 = uVar35, uVar11 != uVar28 &&
                 (uVar33 = uVar20, uVar35 != *(ulonglong *)(local_100[0] + uVar47 * 0x10)))) {
            uVar35 = *(ulonglong *)(uVar35 + 8);
            uVar28 = *(uint *)(uVar35 + 0x10);
          }
        }
        if ((uVar33 != 0) && (uVar33 != local_110[0])) {
          FUN_140130b20(local_d8,&local_200,&local_res8);
          iVar39 = iVar39 + 1;
          goto LAB_14012ef20;
        }
        FUN_140130b20(local_118,local_1b8,&local_res8);
        uVar12 = (int)local_res8;
        uVar25 = FUN_140053e40(&local_138,local_res8 & 0xffffffff);
        ppppppplVar22 = (longlong *******)FUN_14002fd20(&local_258,"Monitor",uVar25);
        if (ppppppplVar38 != ppppppplVar22) {
          FUN_140017240(ppppppplVar38);
          pppppplVar21 = ppppppplVar22[1];
          *ppppppplVar38 = *ppppppplVar22;
          ppppppplVar32[4] = pppppplVar21;
          pppppplVar21 = ppppppplVar22[3];
          ppppppplVar32[5] = ppppppplVar22[2];
          ppppppplVar32[6] = pppppplVar21;
          ppppppplVar22[2] = (longlong ******)0x0;
          ppppppplVar22[3] = (longlong ******)0xf;
          *(undefined1 *)ppppppplVar22 = 0;
        }
        FUN_140017240(&local_258);
        FUN_140017240(&local_138);
        *(undefined4 *)(local_1d0 + (longlong)iVar44 * 4) = uVar12;
      }
      uVar35 = (ulonglong)(iVar44 + 1U);
    } while ((ulonglong)(longlong)(int)(iVar44 + 1U) <
             (ulonglong)
             (((longlong)DAT_1404e8ed0 - (longlong)DAT_1404e8ec8 >> 3) * -0xf0f0f0f0f0f0f0f));
    local_res18 = (int)uVar49;
    if (local_res18 < 1) goto LAB_14012effa;
LAB_14012f008:
    FUN_140085520(&DAT_1404e7f20,&DAT_1404e7ef8);
    if (local_c8 != 0) {
      local_res20 = local_d0;
      plVar27 = (longlong *)*local_d0;
      plVar50 = local_d0;
      if (plVar27 != local_d0) {
        do {
          uVar35 = 0;
          FUN_1400493a0(local_98);
          iVar39 = -1;
          uVar49 = 0xffffffffffffffff;
          local_res8 = CONCAT44(local_res8._4_4_,0xffffffff);
          local_res10 = (longlong *****)((ulonglong)local_res10 & 0xffffffff00000000);
          uVar20 = uVar35;
          if (((longlong)DAT_1404e8ed0 - (longlong)DAT_1404e8ec8 >> 3) * -0xf0f0f0f0f0f0f0f != 0) {
            do {
              ppppppplVar32 = DAT_1404e8ec8;
              iVar44 = (int)uVar20;
              lVar46 = (longlong)(int)uVar35;
              ppppppplVar22 = DAT_1404e8ec8 + lVar46 * 0x11 + 7;
              ppppppplVar38 = ppppppplVar22;
              if ((longlong ******)0xf < DAT_1404e8ec8[lVar46 * 0x11 + 10]) {
                ppppppplVar38 = (longlong *******)*ppppppplVar22;
              }
              lVar19 = FUN_140087490(&DAT_1404e7f20,ppppppplVar38,
                                     (longlong)DAT_1404e8ec8[lVar46 * 0x11 + 9] +
                                     (longlong)ppppppplVar38);
              if (lVar19 == 0) {
LAB_14012f1b0:
                iVar39 = (int)local_res8;
              }
              else {
                if ((longlong ******)0xf < ppppppplVar32[lVar46 * 0x11 + 10]) {
                  ppppppplVar22 = (longlong *******)*ppppppplVar22;
                }
                lVar46 = FUN_140086de0(&DAT_1404e7f20,ppppppplVar22,
                                       (longlong)ppppppplVar32[lVar46 * 0x11 + 9] +
                                       (longlong)ppppppplVar22);
                if (*(char *)(lVar46 + 8) != '\a') goto LAB_14012f1b0;
                lVar19 = FUN_140086de0(lVar46,"location","");
                lVar46 = FUN_140086de0(lVar46,"timestamp","");
                if ((2 < *(byte *)(lVar19 + 8) - 1) || (2 < *(byte *)(lVar46 + 8) - 1))
                goto LAB_14012f1b0;
                iVar39 = FUN_140085ee0(lVar19);
                uVar20 = FUN_140086000(lVar46);
                if (iVar39 != (int)plVar27[2]) goto LAB_14012f1b0;
                FUN_140130b20(local_98,&local_200,&local_res10);
                iVar44 = (int)local_res10;
                if (uVar49 <= uVar20) goto LAB_14012f1b0;
                local_res8 = CONCAT44(local_res8._4_4_,(int)local_res10);
                uVar49 = uVar20;
                iVar39 = (int)local_res10;
              }
              uVar11 = iVar44 + 1;
              uVar35 = (ulonglong)(int)uVar11;
              local_res10 = (longlong *****)CONCAT44(local_res10._4_4_,uVar11);
              uVar20 = (ulonglong)uVar11;
              plVar50 = local_res20;
            } while (uVar35 < (ulonglong)
                              (((longlong)DAT_1404e8ed0 - (longlong)DAT_1404e8ec8 >> 3) *
                              -0xf0f0f0f0f0f0f0f));
          }
          plVar8 = local_90[0];
          ppppppplVar38 = DAT_1404e8ec8;
          for (plVar3 = (longlong *)*local_90[0]; DAT_1404e8ec8 = ppppppplVar38, plVar3 != plVar8;
              plVar3 = (longlong *)*plVar3) {
            pppppplVar21 = (longlong ******)(longlong)(int)plVar3[2];
            local_res10 = (longlong *****)pppppplVar21;
            if ((int)plVar3[2] == iVar39) {
              if ((int)plVar27[2] < 0) {
                lVar46 = FUN_140053cb0(local_21b,-(int)plVar27[2]);
                *(undefined1 *)(lVar46 + -1) = 0x2d;
                lVar46 = lVar46 + -1;
              }
              else {
                lVar46 = FUN_140053cb0(local_21b);
              }
              FUN_140053d10(&local_258,lVar46,local_21b);
              ppppppplVar22 = (longlong *******)FUN_14002fd20(&local_138,"Monitor",&local_258);
              ppppppplVar38 = ppppppplVar38 + (longlong)pppppplVar21 * 0x11 + 3;
              if (ppppppplVar38 != ppppppplVar22) {
                FUN_140017240(ppppppplVar38);
                pppppplVar21 = ppppppplVar22[1];
                *ppppppplVar38 = *ppppppplVar22;
                ppppppplVar38[1] = pppppplVar21;
                pppppplVar21 = ppppppplVar22[3];
                ppppppplVar38[2] = ppppppplVar22[2];
                ppppppplVar38[3] = pppppplVar21;
                ppppppplVar22[2] = (longlong ******)0x0;
                ppppppplVar22[3] = (longlong ******)0xf;
                *(undefined1 *)ppppppplVar22 = 0;
              }
              FUN_140017240(&local_138);
              FUN_140017240(&local_258);
              *(int *)(local_1d0 + (longlong)local_res10 * 4) = (int)plVar27[2];
              iVar39 = (int)local_res8;
            }
            else {
              ppppppplVar38[(longlong)pppppplVar21 * 0x11 + 5] = (longlong ******)0x0;
              ppppppplVar22 = ppppppplVar38 + (longlong)pppppplVar21 * 0x11 + 3;
              if ((longlong ******)0xf < ppppppplVar38[(longlong)pppppplVar21 * 0x11 + 6]) {
                ppppppplVar22 = (longlong *******)*ppppppplVar22;
              }
              *(undefined1 *)ppppppplVar22 = 0;
            }
            ppppppplVar38 = DAT_1404e8ec8;
          }
          FUN_14000d9e0(local_80);
          FUN_140049340(local_90);
          plVar27 = (longlong *)*plVar27;
        } while (plVar27 != plVar50);
      }
    }
    ppppppplVar38 = DAT_1404e8ec8;
    local_140 = 0;
    local_198 = (longlong ******)DAT_1404e8ec8;
    local_150 = 0;
    uStack_148 = 0;
    if (((longlong)DAT_1404e8ed0 - (longlong)DAT_1404e8ec8 >> 3) * -0xf0f0f0f0f0f0f0f != 0) {
      FUN_140133720(&local_150);
    }
    ppppppplVar32 = DAT_1404e8ed0;
    piVar41 = (int *)0x0;
    plVar27 = (longlong *)0x0;
    piVar36 = (int *)0x0;
    local_res20 = (longlong *)0x0;
    local_1d8 = (int *)0x0;
    local_208 = 0;
    local_168 = ZEXT816(0);
    local_158 = 0;
    local_218 = 0;
    lStack_210 = 0;
    for (ppppppplVar22 = DAT_1404e8ec8; ppppppplVar22 != ppppppplVar32;
        ppppppplVar22 = ppppppplVar22 + 0x11) {
      piVar23 = (int *)thunk_FUN_14028d170(plVar27,piVar41,*(int *)(ppppppplVar22 + 2));
      if (piVar23 == piVar41) {
        if (piVar41 == piVar36) {
          uVar20 = (longlong)piVar41 - (longlong)plVar27;
          if ((longlong)uVar20 >> 2 == 0x3fffffffffffffff) {
LAB_1401307c2:
                    /* WARNING: Subroutine does not return */
            FUN_140013050();
          }
          uVar49 = ((longlong)uVar20 >> 2) + 1;
          local_1d8 = (int *)((longlong)piVar36 - (longlong)plVar27 >> 2);
          uVar35 = (ulonglong)local_1d8 >> 1;
          if (0x3fffffffffffffff - uVar35 < local_1d8) {
            uVar33 = 0x3fffffffffffffff;
          }
          else {
            uVar33 = (longlong)local_1d8 + uVar35;
            if ((longlong)local_1d8 + uVar35 < uVar49) {
              uVar33 = uVar49;
            }
          }
          local_res8 = uVar33;
          plVar27 = (longlong *)FUN_140034a00(uVar35,&local_res8);
          plVar50 = local_res20;
          *(int *)((longlong)plVar27 + (uVar20 & 0xfffffffffffffffc)) = *(int *)(ppppppplVar22 + 2);
          uVar25 = FUN_1404210f0(plVar27,local_res20,uVar20);
          if (plVar50 != (longlong *)0x0) {
            FUN_140038030(uVar25,plVar50,local_1d8);
          }
          piVar36 = (int *)((longlong)plVar27 + uVar33 * 4);
          piVar41 = (int *)((longlong)plVar27 + uVar49 * 4);
          local_res20 = plVar27;
          local_1d8 = piVar36;
        }
        else {
          *piVar41 = *(int *)(ppppppplVar22 + 2);
          piVar41 = piVar41 + 1;
        }
      }
    }
    local_res8 = local_res8 & 0xffffffff00000000;
    uVar20 = (longlong)piVar41 - (longlong)plVar27 >> 2;
    local_170 = uVar20;
    FUN_140132dc0(plVar27,piVar41,uVar20,0);
    lVar46 = lStack_210;
    lVar19 = lStack_210 - local_218 >> 3;
    uVar49 = lVar19 * -0x5555555555555555;
    if (uVar20 < uVar49) {
      lVar19 = local_218 + uVar20 * 0x18;
      for (lVar42 = lVar19; lVar42 != lVar46; lVar42 = lVar42 + 0x18) {
        FUN_140031b80(lVar42);
      }
      uVar35 = local_res8 & 0xffffffff;
      lStack_210 = lVar19;
    }
    else {
      uVar35 = 0;
      if (uVar49 < uVar20) {
        if ((ulonglong)((local_208 - local_218 >> 3) * -0x5555555555555555) < uVar20) {
          FUN_1401334d0(&local_218);
        }
        else {
          lStack_210 = FUN_1401336f0(lStack_210,uVar20 + lVar19 * 0x5555555555555555);
          uVar35 = 0;
        }
      }
    }
    FUN_1401310e0(local_168);
    uVar11 = 0;
    if (uVar20 == 0) {
      iVar39 = 0;
    }
    else {
      do {
        uVar28 = uVar11;
        if (*(int *)((longlong)plVar27 + (longlong)(int)uVar11 * 4) != 0) {
          uVar28 = (uint)uVar35;
        }
        uVar11 = uVar11 + 1;
        uVar35 = (ulonglong)uVar28;
      } while ((ulonglong)(longlong)(int)uVar11 < uVar20);
      local_res8 = CONCAT44(local_res8._4_4_,uVar28);
      iVar39 = 0;
      local_res10 = (longlong *****)((ulonglong)local_res10 & 0xffffffff00000000);
      do {
        local_200 = DAT_1404e8ed0;
        if (DAT_1404e8ec8 != DAT_1404e8ed0) {
          lVar46 = (longlong)iVar39;
          ppppppplVar38 = DAT_1404e8ec8;
          local_178 = lVar46;
          do {
            if (*(int *)(ppppppplVar38 + 2) == *(int *)((longlong)plVar27 + lVar46 * 4)) {
              piVar36 = *(int **)(local_218 + 8 + lVar46 * 0x18);
              plVar50 = (longlong *)(local_218 + lVar46 * 0x18);
              piVar41 = *(int **)(local_218 + 0x10 + lVar46 * 0x18);
              if (piVar36 == piVar41) {
                uVar20 = (longlong)piVar36 - *plVar50;
                lVar46 = (longlong)uVar20 >> 2;
                if (lVar46 == 0x3fffffffffffffff) goto LAB_1401307c2;
                ppppppplVar22 = (longlong *******)(lVar46 + 1);
                uVar49 = (longlong)piVar41 - *plVar50 >> 2;
                if (0x3fffffffffffffff - (uVar49 >> 1) < uVar49) {
                  ppppppplVar32 = (longlong *******)0x3fffffffffffffff;
                }
                else {
                  ppppppplVar32 = (longlong *******)((uVar49 >> 1) + uVar49);
                  if (ppppppplVar32 < ppppppplVar22) {
                    ppppppplVar32 = ppppppplVar22;
                  }
                }
                local_1b8._0_8_ = ppppppplVar32;
                lVar46 = FUN_140034a00(uVar49,local_1b8);
                uVar20 = uVar20 & 0xfffffffffffffffc;
                *(int *)(uVar20 + lVar46) = *(int *)((longlong)ppppppplVar38 + 0x14);
                piVar41 = (int *)*plVar50;
                if (piVar36 == (int *)plVar50[1]) {
                  lVar42 = plVar50[1] - (longlong)piVar41;
                  lVar19 = lVar46;
                  piVar36 = piVar41;
                }
                else {
                  FUN_1404210f0(lVar46,piVar41,(longlong)piVar36 - (longlong)piVar41);
                  lVar19 = lVar46 + 4 + uVar20;
                  lVar42 = plVar50[1] - (longlong)piVar36;
                }
                FUN_1404210f0(lVar19,piVar36,lVar42);
                FUN_140038af0(plVar50,lVar46,ppppppplVar22,ppppppplVar32);
                lVar46 = local_178;
                plVar27 = local_res20;
              }
              else {
                *piVar36 = *(int *)((longlong)ppppppplVar38 + 0x14);
                plVar50[1] = plVar50[1] + 4;
                lVar46 = local_178;
              }
            }
            ppppppplVar38 = ppppppplVar38 + 0x11;
          } while (ppppppplVar38 != local_200);
          iVar39 = (int)local_res10;
        }
        iVar39 = iVar39 + 1;
        local_res10 = (longlong *****)CONCAT44(local_res10._4_4_,iVar39);
      } while ((ulonglong)(longlong)iVar39 < local_170);
      ppppppplVar38 = (longlong *******)local_198;
      uVar20 = local_170;
      iVar39 = (int)local_res8;
    }
    iVar44 = 0;
    if ((lStack_210 - local_218 >> 3) * -0x5555555555555555 != 0) {
      do {
        lVar42 = local_218;
        lVar51 = (longlong)iVar44;
        lVar46 = *(longlong *)(local_218 + 8 + lVar51 * 0x18);
        lVar19 = *(longlong *)(local_218 + lVar51 * 0x18);
        FUN_140132dc0(lVar19,lVar46,lVar46 - lVar19 >> 2,0);
        lVar46 = *(longlong *)(lVar42 + 8 + lVar51 * 0x18);
        lVar19 = *(longlong *)(lVar42 + lVar51 * 0x18);
        if (lVar46 - lVar19 >> 2 != 0) {
          iVar34 = 0;
          do {
            if ((*(int *)((longlong)ppppppplVar38 + 0x14) <= *(int *)(lVar19 + (longlong)iVar34 * 4)
                ) || ((longlong)iVar34 == (lVar46 - lVar19 >> 2) + -1)) {
              *(int *)(local_168._0_8_ + lVar51 * 4) = iVar34;
              break;
            }
            iVar34 = iVar34 + 1;
          } while ((ulonglong)(longlong)iVar34 < (ulonglong)(lVar46 - lVar19 >> 2));
        }
        iVar44 = iVar44 + 1;
        uVar20 = local_170;
      } while ((ulonglong)(longlong)iVar44 <
               (ulonglong)((lStack_210 - local_218 >> 3) * -0x5555555555555555));
    }
    iVar44 = local_res18;
    iVar34 = 0;
    if (((longlong)DAT_1404e8ed0 - (longlong)DAT_1404e8ec8 >> 3) * -0xf0f0f0f0f0f0f0f != 0) {
LAB_14012f810:
      ppppppplVar38 = DAT_1404e8ec8;
      if (uVar20 != 0) {
        lVar46 = (longlong)iVar34;
        iVar29 = 0;
        do {
          lVar19 = (longlong)iVar29;
          if (*(int *)((longlong)local_res20 + lVar19 * 4) ==
              *(int *)(DAT_1404e8ec8 + lVar46 * 0x11 + 2)) {
            *(int *)(local_150 + 8 + lVar46 * 0x10) = iVar29;
            *(int *)(local_150 + lVar46 * 0x10) = iVar29 - iVar39;
            lVar42 = *(longlong *)(local_218 + 8 + lVar19 * 0x18);
            lVar51 = *(longlong *)(local_218 + lVar19 * 0x18);
            if (lVar42 - lVar51 >> 2 != 0) {
              iVar29 = 0;
              goto LAB_14012f897;
            }
            break;
          }
          iVar29 = iVar29 + 1;
        } while ((ulonglong)(longlong)iVar29 < uVar20);
      }
      goto LAB_14012f8c8;
    }
LAB_14012f8fa:
    if (0 < local_res18) {
      pppppplVar21 = ppppppplVar38[5];
      local_1e0 = (undefined1 (*) [16])0x0;
      local_1f0 = (undefined1 (*) [16])0x0;
      pauStack_1e8 = (undefined1 (*) [16])0x0;
      local_res10 = (longlong *****)pppppplVar21;
      FUN_140088360(&DAT_1404e7f20,&local_138);
      local_200 = (longlong *******)local_130;
      ppppppplVar38 = (longlong *******)local_138;
      if (local_138 != local_130) {
        do {
          pppppplVar21 = ppppppplVar38[2];
          local_258 = (longlong ******)0x0;
          uStack_250 = (longlong ******)0x0;
          local_248 = (longlong *****)0x0;
          uStack_240 = 0;
          ppppppplVar22 = ppppppplVar38;
          if ((longlong ******)0xf < ppppppplVar38[3]) {
            ppppppplVar22 = (longlong *******)*ppppppplVar38;
          }
          if ((longlong ******)0x7fffffffffffffff < pppppplVar21) goto LAB_1401307bc;
          if (pppppplVar21 < (longlong ******)0x10) {
            uStack_240 = 0xf;
            local_258 = *ppppppplVar22;
            uStack_250 = ppppppplVar22[1];
            local_248 = (longlong *****)pppppplVar21;
          }
          else {
            local_res8 = (ulonglong)pppppplVar21 | 0xf;
            if (local_res8 < 0x8000000000000000) {
              if (local_res8 < 0x16) {
                local_res8 = 0x16;
              }
            }
            else {
              local_res8 = 0x7fffffffffffffff;
            }
            local_258 = (longlong ******)FUN_1400173f0(&local_258,&local_res8);
            uStack_240 = local_res8;
            local_248 = (longlong *****)pppppplVar21;
            FUN_1404210f0(local_258,ppppppplVar22,(longlong)pppppplVar21 + 1);
          }
          ppppppplVar22 = &local_258;
          if (0xf < uStack_240) {
            ppppppplVar22 = (longlong *******)local_258;
          }
          lVar46 = FUN_140086de0(&DAT_1404e7f20,ppppppplVar22,
                                 (longlong)local_248 + (longlong)ppppppplVar22);
          if (*(char *)(lVar46 + 8) == '\a') {
            lVar19 = FUN_140086de0(lVar46,"location","");
            lVar42 = FUN_140086de0(lVar46,&DAT_14048aca4,&DAT_14048aca8);
            lVar51 = FUN_140086de0(lVar46,&DAT_14048ac9c,&DAT_14048aca0);
            lVar26 = FUN_140086de0(lVar46,&DAT_14048ac94,&DAT_14048ac98);
            lVar46 = FUN_140086de0(lVar46,&DAT_14048acb8,&DAT_14048acbc);
            if ((((2 < *(byte *)(lVar19 + 8) - 1) || (2 < *(byte *)(lVar42 + 8) - 1)) ||
                (2 < *(byte *)(lVar51 + 8) - 1)) ||
               ((2 < *(byte *)(lVar26 + 8) - 1 || (2 < *(byte *)(lVar46 + 8) - 1)))) {
              ppppppplVar22 = &local_198;
              local_198 = (longlong ******)&local_258;
              if (0xf < uStack_240) {
                local_198 = local_258;
              }
              local_190 = local_248;
              goto LAB_14012fc85;
            }
            uVar11 = FUN_140085ee0(lVar19);
            auVar53 = _local_230;
            local_res8 = CONCAT44(local_res8._4_4_,uVar11);
            uVar49 = local_res8;
            uVar35 = (((((ulonglong)(uVar11 & 0xff) ^ 0xcbf29ce484222325) * 0x100000001b3 ^
                       (ulonglong)((int)uVar11 >> 8 & 0xff)) * 0x100000001b3 ^
                      (ulonglong)((int)uVar11 >> 0x10 & 0xff)) * 0x100000001b3 ^
                     (ulonglong)((int)uVar11 >> 0x18 & 0xff)) * 0x100000001b3 & local_e8;
            uVar20 = *(ulonglong *)(local_100[0] + 8 + uVar35 * 0x10);
            if (uVar20 == local_110[0]) {
LAB_14012fbc7:
              uVar20 = 0;
            }
            else {
              uVar28 = *(uint *)(uVar20 + 0x10);
              while (uVar11 != uVar28) {
                if (uVar20 == *(ulonglong *)(local_100[0] + uVar35 * 0x10)) goto LAB_14012fbc7;
                uVar20 = *(ulonglong *)(uVar20 + 8);
                uVar28 = *(uint *)(uVar20 + 0x10);
              }
            }
            if ((uVar20 == 0) || (uVar20 == local_110[0])) {
              local_res8._1_1_ = (undefined1)(uVar11 >> 8);
              auVar5._1_14_ = stack0xfffffffffffffdd2;
              auVar5[0] = local_res8._1_1_;
              local_230._0_2_ = auVar5._0_2_ << 8;
              local_res8._2_1_ = (undefined1)(uVar11 >> 0x10);
              local_230[2] = local_res8._2_1_;
              local_res8._3_1_ = (undefined1)(uVar11 >> 0x18);
              _uStack_22c = auVar53._4_12_;
              uStack_22d = local_res8._3_1_;
              local_230[0] = (char)uVar11;
              local_res8 = uVar49;
              uVar12 = FUN_140085ee0(lVar42);
              uStack_224 = uVar12;
              iVar39 = FUN_140085ee0(lVar51);
              local_220 = iVar39;
              uVar13 = FUN_140085ee0(lVar26);
              uStack_22c = uVar13;
              uVar14 = FUN_140085ee0(lVar46);
              uStack_228 = uVar14;
              if (pauStack_1e8 == local_1e0) {
                FUN_1401332e0(&local_1f0,pauStack_1e8,local_230);
              }
              else {
                *(uint *)*pauStack_1e8 = uVar11;
                *(undefined4 *)(*pauStack_1e8 + 4) = uVar13;
                *(undefined4 *)(*pauStack_1e8 + 8) = uVar14;
                *(undefined4 *)(*pauStack_1e8 + 0xc) = uVar12;
                *(int *)pauStack_1e8[1] = iVar39;
                pauStack_1e8 = (undefined1 (*) [16])(pauStack_1e8[1] + 4);
              }
            }
          }
          else {
            ppppppplVar22 = (longlong *******)local_1b8;
            local_1b8._0_8_ = &local_258;
            if (0xf < uStack_240) {
              local_1b8._0_8_ = local_258;
            }
            local_1b8._8_8_ = local_248;
LAB_14012fc85:
            FUN_1400878f0(&DAT_1404e7f20,ppppppplVar22);
          }
          if (0xf < uStack_240) {
            uVar20 = uStack_240 + 1;
            ppppppplVar22 = (longlong *******)local_258;
            if (0xfff < uVar20) {
              ppppppplVar22 = (longlong *******)local_258[-1];
              if (0x1f < (ulonglong)((longlong)local_258 + (-8 - (longlong)ppppppplVar22)))
              goto LAB_1401307b5;
              uVar20 = uStack_240 + 0x28;
            }
            thunk_FUN_14028af80(ppppppplVar22,uVar20);
          }
          ppppppplVar38 = ppppppplVar38 + 4;
          pppppplVar21 = (longlong ******)local_res10;
          iVar44 = local_res18;
        } while (ppppppplVar38 != local_200);
      }
      FUN_14000dcc0(&local_138);
      auVar53._0_8_ =
           FUN_140132170(local_1f0,pauStack_1e8,
                         ((longlong)pauStack_1e8 - (longlong)local_1f0 >> 2) * -0x3333333333333333,
                         local_res8 & 0xff);
      auVar53._8_8_ = extraout_XMM0_Qb;
      lVar46 = local_100[0];
      pauVar48 = local_1f0;
      ppppppplVar38 = DAT_1404e8ec8;
LAB_14012fd51:
      if (pauVar48 == pauStack_1e8) {
        uVar20 = 0;
        do {
          iVar39 = (int)uVar20;
          uVar35 = ((((uVar20 & 0xff ^ 0xcbf29ce484222325) * 0x100000001b3 ^
                     (ulonglong)(iVar39 >> 8 & 0xff)) * 0x100000001b3 ^
                    (ulonglong)(iVar39 >> 0x10 & 0xff)) * 0x100000001b3 ^
                   (ulonglong)(iVar39 >> 0x18 & 0xff)) * 0x100000001b3 & local_e8;
          uVar49 = *(ulonglong *)(lVar46 + 8 + uVar35 * 0x10);
          if (uVar49 == local_110[0]) {
LAB_14012ffe0:
            uVar49 = 0;
          }
          else {
            iVar34 = *(int *)(uVar49 + 0x10);
            while (iVar39 != iVar34) {
              if (uVar49 == *(ulonglong *)(lVar46 + uVar35 * 0x10)) goto LAB_14012ffe0;
              uVar49 = *(ulonglong *)(uVar49 + 8);
              iVar34 = *(int *)(uVar49 + 0x10);
            }
          }
          uVar35 = local_110[0];
          if (uVar49 != 0) {
            uVar35 = uVar49;
          }
          if (uVar35 == local_110[0]) goto LAB_14012fff9;
          uVar20 = (ulonglong)(iVar39 + 1);
        } while( true );
      }
      auVar1 = *pauVar48;
      iVar34 = auVar1._0_4_;
      iVar39 = *(int *)pauVar48[1];
      _local_230 = auVar1;
      local_220 = iVar39;
      auVar53._0_8_ = FUN_1404210f0(pauVar48);
      ppppppplVar38 = DAT_1404e8ec8;
      auVar53._8_8_ = extraout_XMM0_Qb_00;
      pauStack_1e8 = (undefined1 (*) [16])(pauStack_1e8[-2] + 0xc);
      uVar20 = ((longlong)DAT_1404e8ed0 - (longlong)DAT_1404e8ec8 >> 3) * -0xf0f0f0f0f0f0f0f;
      lVar46 = local_100[0];
      pauVar48 = local_1f0;
      if (uVar20 != 0) {
        iVar45 = 0;
        iVar40 = -1;
        iVar29 = 0x7fffffff;
        if (pppppplVar21 == (longlong ******)0x0) {
          auVar53 = auVar1 >> 0x60;
          do {
            lVar19 = (longlong)iVar45;
            if (DAT_1404e8ec8[lVar19 * 0x11 + 5] == (longlong ******)0x0) {
              iVar30 = *(int *)(local_150 + 8 + lVar19 * 0x10) - auVar1._12_4_;
              iVar15 = -iVar30;
              if (iVar15 < 0) {
                iVar15 = iVar30;
              }
              iVar31 = *(int *)(local_150 + 0xc + lVar19 * 0x10) - iVar39;
              iVar30 = -iVar31;
              if (iVar30 < 0) {
                iVar30 = iVar31;
              }
              iVar30 = iVar15 * 100 + iVar30;
              if (iVar30 < iVar29) {
                iVar29 = iVar30;
                iVar40 = iVar45;
              }
            }
            iVar45 = iVar45 + 1;
          } while ((ulonglong)(longlong)iVar45 < uVar20);
        }
        else {
          auVar53 = auVar1 >> 0x40;
          do {
            lVar19 = (longlong)iVar45;
            if (DAT_1404e8ec8[lVar19 * 0x11 + 5] == (longlong ******)0x0) {
              iVar15 = *(int *)(local_150 + 4 + lVar19 * 0x10) - auVar1._8_4_;
              iVar39 = -iVar15;
              if (iVar39 < 0) {
                iVar39 = iVar15;
              }
              iVar30 = *(int *)(local_150 + lVar19 * 0x10) - auVar1._4_4_;
              iVar15 = -iVar30;
              if (iVar15 < 0) {
                iVar15 = iVar30;
              }
              iVar39 = iVar15 * 100 + iVar39;
              if (iVar39 < iVar29) {
                iVar29 = iVar39;
                iVar40 = iVar45;
              }
            }
            iVar45 = iVar45 + 1;
          } while ((ulonglong)(longlong)iVar45 < uVar20);
        }
        if (-1 < iVar40) {
          if (iVar34 < 0) {
            lVar46 = FUN_140053cb0(local_183,-iVar34);
            *(undefined1 *)(lVar46 + -1) = 0x2d;
            lVar46 = lVar46 + -1;
          }
          else {
            lVar46 = FUN_140053cb0(local_183,iVar34);
          }
          FUN_140053d10(&local_258,lVar46,local_183);
          ppppppplVar22 = (longlong *******)FUN_14002fd20(&local_138,"Monitor",&local_258);
          ppppppplVar38 = ppppppplVar38 + (longlong)iVar40 * 0x11 + 3;
          if (ppppppplVar38 != ppppppplVar22) {
            FUN_140017240(ppppppplVar38);
            pppppplVar21 = ppppppplVar22[1];
            *ppppppplVar38 = *ppppppplVar22;
            ppppppplVar38[1] = pppppplVar21;
            *(undefined1 (*) [16])(ppppppplVar38 + 2) = *(undefined1 (*) [16])(ppppppplVar22 + 2);
            ppppppplVar22[2] = (longlong ******)0x0;
            ppppppplVar22[3] = (longlong ******)0xf;
            *(undefined1 *)ppppppplVar22 = 0;
          }
          FUN_140017240(&local_138);
          FUN_140017240(&local_258);
          puVar18 = (undefined8 *)local_230;
          puVar37 = &local_200;
          *(int *)(local_1d0 + (longlong)iVar40 * 4) = iVar34;
LAB_1401300f9:
          auVar53._0_8_ = FUN_140130b20(local_118,puVar37,puVar18);
          auVar53._8_8_ = extraout_XMM0_Qb_01;
          lVar46 = local_100[0];
          pauVar48 = local_1f0;
          ppppppplVar38 = DAT_1404e8ec8;
        }
      }
      goto LAB_140130111;
    }
    goto LAB_14013015a;
  }
LAB_14012effa:
  if (local_c8 != 0) goto LAB_14012f008;
  goto LAB_1401306b0;
  while (iVar29 = iVar29 + 1, (ulonglong)(longlong)iVar29 < (ulonglong)(lVar42 - lVar51 >> 2)) {
LAB_14012f897:
    if (*(int *)(lVar51 + (longlong)iVar29 * 4) ==
        *(int *)((longlong)ppppppplVar38 + (lVar46 * 0x22 + 5) * 4)) {
      *(int *)(local_150 + 0xc + lVar46 * 0x10) = iVar29;
      *(int *)(local_150 + 4 + lVar46 * 0x10) = iVar29 - *(int *)(local_168._0_8_ + lVar19 * 4);
      break;
    }
  }
LAB_14012f8c8:
  iVar34 = iVar34 + 1;
  ppppppplVar38 = (longlong *******)local_198;
  if ((ulonglong)(((longlong)DAT_1404e8ed0 - (longlong)DAT_1404e8ec8 >> 3) * -0xf0f0f0f0f0f0f0f) <=
      (ulonglong)(longlong)iVar34) goto LAB_14012f8fa;
  goto LAB_14012f810;
LAB_14012fff9:
  local_res8 = CONCAT44((int)(local_res8 >> 0x20),iVar39);
  iVar34 = 0;
  uVar49 = ((longlong)DAT_1404e8ed0 - (longlong)ppppppplVar38 >> 3) * -0xf0f0f0f0f0f0f0f;
  if (uVar49 != 0) {
    do {
      lVar19 = (longlong)iVar34;
      if (ppppppplVar38[lVar19 * 0x11 + 5] == (longlong ******)0x0) {
        if (iVar39 < 0) {
          lVar46 = FUN_140053cb0(local_21b,-iVar39);
          *(undefined1 *)(lVar46 + -1) = 0x2d;
          lVar46 = lVar46 + -1;
        }
        else {
          lVar46 = FUN_140053cb0(local_21b,uVar20);
        }
        FUN_140053d10(&local_258,lVar46,local_21b);
        ppppppplVar22 = (longlong *******)FUN_14002fd20(&local_138,"Monitor",&local_258);
        ppppppplVar38 = ppppppplVar38 + lVar19 * 0x11 + 3;
        if (ppppppplVar38 != ppppppplVar22) {
          FUN_140017240(ppppppplVar38);
          pppppplVar21 = ppppppplVar22[1];
          *ppppppplVar38 = *ppppppplVar22;
          ppppppplVar38[1] = pppppplVar21;
          *(undefined1 (*) [16])(ppppppplVar38 + 2) = *(undefined1 (*) [16])(ppppppplVar22 + 2);
          ppppppplVar22[2] = (longlong ******)0x0;
          ppppppplVar22[3] = (longlong ******)0xf;
          *(undefined1 *)ppppppplVar22 = 0;
        }
        FUN_140017240(&local_138);
        FUN_140017240(&local_258);
        puVar18 = &local_res8;
        puVar37 = (undefined8 *)local_1b8;
        *(int *)(local_1d0 + lVar19 * 4) = iVar39;
        goto LAB_1401300f9;
      }
      iVar34 = iVar34 + 1;
    } while ((ulonglong)(longlong)iVar34 < uVar49);
  }
LAB_140130111:
  iVar44 = iVar44 + -1;
  pppppplVar21 = (longlong ******)local_res10;
  if (iVar44 == 0) goto code_r0x000140130122;
  goto LAB_14012fd51;
code_r0x000140130122:
  if (pauVar48 != (undefined1 (*) [16])0x0) {
    FUN_140133930(auVar53._0_8_,pauVar48,
                  ((longlong)local_1e0 - (longlong)pauVar48 >> 2) * -0x3333333333333333);
  }
LAB_14013015a:
  DAT_1404e8df8 = DAT_1404e8df8 | 0x10;
  lVar46 = _Xtime_get_ticks();
  iVar39 = 0;
  lVar46 = lVar46 + SUB168(SEXT816(-0x29406b2a1a85bd43) * SEXT816(lVar46),8);
  if (((longlong)DAT_1404e8ed0 - (longlong)DAT_1404e8ec8 >> 3) * -0xf0f0f0f0f0f0f0f != 0) {
    do {
      lVar19 = local_150;
      lVar42 = (longlong)iVar39;
      ppppppplVar38 = DAT_1404e8ec8 + lVar42 * 0x11 + 7;
      if ((longlong ******)0xf < DAT_1404e8ec8[lVar42 * 0x11 + 10]) {
        ppppppplVar38 = (longlong *******)*ppppppplVar38;
      }
      lVar51 = FUN_140086de0(&DAT_1404e7f20,ppppppplVar38,
                             (longlong)DAT_1404e8ec8[lVar42 * 0x11 + 9] + (longlong)ppppppplVar38);
      pppppplVar21 = uStack_250;
      if (*(char *)(lVar51 + 8) != '\a') {
        uStack_250 = (longlong ******)CONCAT71(uStack_250._1_7_,7);
        uStack_250._4_4_ = SUB84(pppppplVar21,4);
        uStack_250 = (longlong ******)
                     (CONCAT44(uStack_250._4_4_,(uint)uStack_250) & 0xfffffffffffffeff);
        local_248 = (longlong *****)0x0;
        uStack_240 = 0;
        local_238 = 0;
        pppppplVar21 = (longlong ******)FUN_14028af20(0x10);
        *pppppplVar21 = (longlong *****)0x0;
        pppppplVar21[1] = (longlong *****)0x0;
        ppppplVar24 = (longlong *****)FUN_14028af20(0x58);
        *ppppplVar24 = (longlong ****)ppppplVar24;
        ppppplVar24[1] = (longlong ****)ppppplVar24;
        ppppplVar24[2] = (longlong ****)ppppplVar24;
        *(undefined2 *)(ppppplVar24 + 3) = 0x101;
        *pppppplVar21 = ppppplVar24;
        local_258 = pppppplVar21;
        FUN_140085610(lVar51,&local_258);
        FUN_140085440(&local_258);
      }
      pppppplVar21 = uStack_250;
      uStack_250 = (longlong ******)CONCAT71(uStack_250._1_7_,1);
      uStack_250._4_4_ = SUB84(pppppplVar21,4);
      uStack_250 = (longlong ******)
                   (CONCAT44(uStack_250._4_4_,(uint)uStack_250) & 0xfffffffffffffeff);
      local_258 = (longlong ******)(longlong)*(int *)(local_1d0 + lVar42 * 4);
      local_248 = (longlong *****)0x0;
      uStack_240 = 0;
      local_238 = 0;
      uVar25 = FUN_140086de0(lVar51,"location","");
      FUN_1400856e0(&local_258,uVar25);
      FUN_140085440(&local_258);
      lVar26 = FUN_140087490(lVar51,"timestamp","");
      if ((lVar26 == 0) ||
         (lVar26 = FUN_140086de0(lVar51,"timestamp",""), 2 < *(byte *)(lVar26 + 8) - 1)) {
        uVar20 = (ulonglong)uStack_250;
        uStack_250 = (longlong ******)CONCAT71(uStack_250._1_7_,2);
        uStack_250._4_4_ = SUB84(uVar20,4);
        uStack_250 = (longlong ******)
                     (CONCAT44(uStack_250._4_4_,(uint)uStack_250) & 0xfffffffffffffeff);
        local_238 = 0;
        local_248 = (longlong *****)0x0;
        uStack_240 = 0;
        local_258 = (longlong ******)((lVar46 >> 0x17) - (lVar46 >> 0x3f));
        uVar25 = FUN_140086de0(lVar51,"timestamp","");
        FUN_1400856e0(&local_258,uVar25);
        FUN_140086d30(&local_258);
        ppppplVar24 = local_248;
        if (local_248 != (longlong *****)0x0) {
          FUN_140017240((longlong)local_248 + 0x40);
          FUN_140017240((longlong)ppppplVar24 + 0x20);
          FUN_140017240(ppppplVar24);
          thunk_FUN_14028af80(ppppplVar24,0x60);
        }
      }
      uVar20 = (ulonglong)uStack_250;
      local_258 = (longlong ******)(longlong)*(int *)(lVar19 + 8 + lVar42 * 0x10);
      uStack_250 = (longlong ******)CONCAT71(uStack_250._1_7_,1);
      uStack_250._4_4_ = SUB84(uVar20,4);
      uStack_250 = (longlong ******)
                   (CONCAT44(uStack_250._4_4_,(uint)uStack_250) & 0xfffffffffffffeff);
      local_248 = (longlong *****)0x0;
      uStack_240 = 0;
      local_238 = 0;
      uVar25 = FUN_140086de0(lVar51,&DAT_14048aca4,&DAT_14048aca8);
      FUN_1400856e0(&local_258,uVar25);
      FUN_140085440(&local_258);
      iVar44 = *(int *)(lVar19 + 0xc + lVar42 * 0x10);
      uStack_250 = (longlong ******)CONCAT71(uStack_250._1_7_,1);
      uVar11 = (uint)uStack_250 & 0xfffffeff;
      plVar27 = (longlong *)FUN_140086de0(lVar51,&DAT_14048ac9c,&DAT_14048aca0);
      lVar26 = plVar27[1];
      *(uint *)(plVar27 + 1) = uVar11;
      uStack_250 = (longlong ******)CONCAT44(uStack_250._4_4_,(int)lVar26);
      local_258 = (longlong ******)*plVar27;
      *plVar27 = (longlong)iVar44;
      lVar26 = plVar27[2];
      plVar27[2] = 0;
      local_238 = plVar27[4];
      uStack_240 = plVar27[3];
      plVar27[3] = 0;
      plVar27[4] = 0;
      local_248 = (longlong *****)lVar26;
      FUN_140086d30(&local_258);
      if (lVar26 != 0) {
        FUN_140017240(lVar26 + 0x40);
        FUN_140017240(lVar26 + 0x20);
        FUN_140017240(lVar26);
        thunk_FUN_14028af80(lVar26,0x60);
      }
      uVar25 = uStack_250;
      local_258 = (longlong ******)(longlong)*(int *)(lVar19 + lVar42 * 0x10);
      uStack_250 = (longlong ******)CONCAT71(uStack_250._1_7_,1);
      uStack_250._4_4_ = SUB84(uVar25,4);
      uStack_250 = (longlong ******)
                   (CONCAT44(uStack_250._4_4_,(uint)uStack_250) & 0xfffffffffffffeff);
      local_248 = (longlong *****)0x0;
      uStack_240 = 0;
      local_238 = 0;
      uVar25 = FUN_140086de0(lVar51,&DAT_14048ac94,&DAT_14048ac98);
      FUN_1400856e0(&local_258,uVar25);
      FUN_140085440(&local_258);
      uVar20 = (ulonglong)uStack_250;
      local_258 = (longlong ******)(longlong)*(int *)(lVar19 + 4 + lVar42 * 0x10);
      uStack_250 = (longlong ******)CONCAT71(uStack_250._1_7_,1);
      uStack_250._4_4_ = SUB84(uVar20,4);
      uStack_250 = (longlong ******)
                   (CONCAT44(uStack_250._4_4_,(uint)uStack_250) & 0xfffffffffffffeff);
      local_248 = (longlong *****)0x0;
      uStack_240 = 0;
      local_238 = 0;
      uVar25 = FUN_140086de0(lVar51,&DAT_14048acb8,&DAT_14048acbc);
      FUN_1400856e0(&local_258,uVar25);
      FUN_140085440(&local_258);
      iVar39 = iVar39 + 1;
    } while ((ulonglong)(longlong)iVar39 <
             (ulonglong)
             (((longlong)DAT_1404e8ed0 - (longlong)DAT_1404e8ec8 >> 3) * -0xf0f0f0f0f0f0f0f));
  }
  if (local_168._0_8_ != 0) {
    uVar20 = (local_158 - local_168._0_8_ >> 2) * 4;
    lVar46 = local_168._0_8_;
    if (0xfff < uVar20) {
      lVar46 = *(longlong *)(local_168._0_8_ + -8);
      if (0x1f < (local_168._0_8_ - lVar46) - 8U) goto LAB_1401307b5;
      uVar20 = uVar20 + 0x27;
    }
    thunk_FUN_14028af80(lVar46,uVar20);
    local_168 = ZEXT816(0);
    local_158 = 0;
  }
  lVar19 = lStack_210;
  lVar46 = local_218;
  if (local_218 != 0) {
    for (; lVar46 != lVar19; lVar46 = lVar46 + 0x18) {
      FUN_140031b80(lVar46);
    }
    uVar20 = (local_208 - local_218 >> 3) * 8;
    lVar46 = local_218;
    if (0xfff < uVar20) {
      lVar46 = *(longlong *)(local_218 + -8);
      if (0x1f < (local_218 - lVar46) - 8U) goto LAB_1401307b5;
      uVar20 = uVar20 + 0x27;
    }
    thunk_FUN_14028af80(lVar46,uVar20);
    local_208 = 0;
    local_218 = 0;
    lStack_210 = 0;
  }
  if (local_res20 != (longlong *)0x0) {
    uVar20 = ((longlong)local_1d8 - (longlong)local_res20 >> 2) * 4;
    plVar27 = local_res20;
    if (0xfff < uVar20) {
      if (0x1f < (ulonglong)((longlong)local_res20 + (-8 - local_res20[-1]))) goto LAB_1401307b5;
      uVar20 = uVar20 + 0x27;
      plVar27 = (longlong *)local_res20[-1];
    }
    thunk_FUN_14028af80(plVar27,uVar20);
  }
  if (local_150 != 0) {
    uVar20 = local_140 - local_150 & 0xfffffffffffffff0;
    lVar46 = local_150;
    if (0xfff < uVar20) {
      lVar46 = *(longlong *)(local_150 + -8);
      if (0x1f < (local_150 - lVar46) - 8U) goto LAB_1401307b5;
      uVar20 = uVar20 + 0x27;
    }
    thunk_FUN_14028af80(lVar46,uVar20);
  }
LAB_1401306b0:
  if (local_1d0 != 0) {
    uVar20 = (local_1c0 - local_1d0 >> 2) * 4;
    lVar46 = local_1d0;
    if (0xfff < uVar20) {
      lVar46 = *(longlong *)(local_1d0 + -8);
      if (0x1f < (local_1d0 - lVar46) - 8U) {
LAB_1401307b5:
        pcVar4 = (code *)swi(0x29);
        (*pcVar4)(5);
        puVar43 = auStack_270;
LAB_1401307bc:
                    /* WARNING: Subroutine does not return */
        *(undefined **)(puVar43 + -8) = &UNK_1401307c1;
        FUN_1400172e0();
      }
      uVar20 = uVar20 + 0x27;
    }
    thunk_FUN_14028af80(lVar46,uVar20);
    local_1c0 = 0;
    local_1d0 = 0;
    uStack_1c8 = 0;
  }
  FUN_14000d9e0(local_c0);
  FUN_140049340(&local_d0);
  FUN_14000d9e0(local_100);
  FUN_140049340(local_110);
  ppppppplVar38 = DAT_1404e8ed0;
LAB_14013073a:
  if ((DAT_1404e8ec0 != (HWND)0x0) && (DAT_1404e8ec8 != ppppppplVar38)) {
    FUN_140132bc0();
    BVar16 = GetWindowRect(DAT_1404e8ec0,(LPRECT)&local_200);
    ppppppplVar38 = DAT_1404e8ec8;
    if (BVar16 != 0) {
      *DAT_1404e8ec8 = (longlong ******)0x0;
      ppppppplVar38[2] = (longlong ******)0x0;
      *(int *)(ppppppplVar38 + 1) = local_1f8 - (int)local_200;
      *(int *)((longlong)ppppppplVar38 + 0xc) = local_1f4 - local_200._4_4_;
    }
  }
  return;
}

