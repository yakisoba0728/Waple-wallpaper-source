// Function: FUN_140051360
// Addr: 140051360
// Size: 1779 bytes


void FUN_140051360(longlong param_1,undefined8 *param_2,uint param_3,int *param_4)

{
  short *psVar1;
  undefined1 auVar2 [16];
  bool bVar3;
  char cVar4;
  char cVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  undefined **ppuVar10;
  undefined8 uVar11;
  longlong lVar12;
  short *psVar13;
  short *psVar14;
  int extraout_var;
  short *psVar15;
  undefined8 uVar16;
  short sVar17;
  longlong *plVar18;
  undefined8 *puVar19;
  longlong lVar20;
  undefined4 uVar21;
  uint local_a8;
  undefined4 uStack_a4;
  int local_a0;
  int local_98;
  int iStack_94;
  int local_90;
  undefined4 local_88;
  int iStack_84;
  longlong *local_80;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined1 local_48 [32];
  
  uVar21 = 3;
  uVar6 = 3;
  if ((param_3 & 0x300) != 0) {
    uVar6 = 6;
  }
  FUN_14003b790(param_1,&local_a8,uVar6);
  if (local_a0 != 0) {
    *param_4 = local_a0;
    param_4[1] = iStack_84;
    *(undefined ***)(param_4 + 2) = &PTR_DAT_1404df600;
    return;
  }
  if ((param_3 & 0x2200) != 0) {
    uVar21 = 6;
  }
  piVar9 = (int *)func_0x00014003ba40(&local_88,param_2,uVar21);
  iStack_94 = piVar9[1];
  iVar7 = *piVar9;
  uVar16 = *(undefined8 *)piVar9;
  iVar8 = piVar9[2];
  if ((iVar8 != 0) && ((iVar7 - 1U & 0xfffffff7) != 0)) {
    param_4[1] = iStack_84;
    ppuVar10 = &PTR_DAT_1404df600;
    *param_4 = iVar8;
    goto LAB_140051ad2;
  }
  local_98 = iVar7;
  cVar4 = FUN_140050e40(uVar16);
  if (cVar4 == '\0') {
LAB_140051487:
    uVar11 = CONCAT44(uStack_a4,local_a8);
    cVar4 = FUN_140050df0(uVar11);
    iVar8 = (int)uVar11;
    if ((cVar4 == '\0') || (iVar8 == 10)) {
      cVar4 = '\0';
    }
    else {
      cVar4 = '\x01';
    }
    cVar5 = FUN_140050df0(uVar16);
    if ((cVar5 == '\0') || (iVar7 == 10)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (cVar4 != '\0' || bVar3) {
LAB_140051abf:
      *param_4 = 0x82;
    }
    else if (iVar8 == 3) {
      if (iVar7 == 2) goto LAB_1400514d6;
LAB_1400518a6:
      if ((param_3 >> 0xd & 1) == 0) {
        puVar19 = param_2;
        if (7 < (ulonglong)param_2[3]) {
          puVar19 = (undefined8 *)*param_2;
        }
        FUN_14028fd30(puVar19);
        *param_4 = extraout_var;
        param_4[1] = iStack_84;
        *(undefined ***)(param_4 + 2) = &PTR_DAT_1404df600;
        if (extraout_var != 0) {
          return;
        }
        if ((param_3 & 0x1010) == 0x1000) {
          return;
        }
        FUN_14003b290(&local_88,param_1 + 0x20,param_4);
        iVar7 = iStack_84;
        if (*param_4 == 0) {
          local_a8 = param_3 & 0x10;
          do {
            lVar12 = CONCAT44(iStack_84,local_88);
            if (lVar12 == 0) break;
            if (local_a8 != 0) {
LAB_140051959:
              if (*(ulonglong *)(lVar12 + 0x38) < 8) {
                lVar20 = lVar12 + 0x20;
              }
              else {
                lVar20 = *(longlong *)(lVar12 + 0x20);
              }
              psVar13 = (short *)(lVar20 + *(longlong *)(lVar12 + 0x30) * 2);
              psVar14 = psVar13;
              psVar15 = (short *)FUN_140015f60(lVar20,psVar13);
              goto joined_r0x000140051980;
            }
            FUN_14003b790(lVar12,&local_98,uVar6);
            if (local_90 != 0) {
              *param_4 = local_90;
              param_4[1] = iStack_84;
              *(undefined ***)(param_4 + 2) = &PTR_DAT_1404df600;
              break;
            }
            if (local_98 != 3) goto LAB_140051959;
            iVar8 = func_0x00014003b6c0(&local_88);
            *param_4 = iVar8;
            param_4[1] = iVar7;
            *(undefined ***)(param_4 + 2) = &PTR_DAT_1404df600;
          } while (iVar8 == 0);
        }
        if (local_80 == (longlong *)0x0) {
          return;
        }
        LOCK();
        plVar18 = local_80 + 1;
        lVar12 = *plVar18;
        *(int *)plVar18 = (int)*plVar18 + -1;
        UNLOCK();
        if ((int)lVar12 != 1) {
          return;
        }
        (**(code **)*local_80)(local_80);
        LOCK();
        piVar9 = (int *)((longlong)local_80 + 0xc);
        iVar7 = *piVar9;
        *piVar9 = *piVar9 + -1;
        UNLOCK();
        if (iVar7 != 1) {
          return;
        }
        (**(code **)(*local_80 + 8))(local_80);
        return;
      }
      *param_4 = 0x15;
    }
    else {
      if (iVar8 == 10) {
        if ((param_3 >> 9 & 1) != 0) {
          return;
        }
        cVar4 = FUN_140050e40(uVar16);
        if (cVar4 != '\0') {
          return;
        }
        plVar18 = (longlong *)(param_1 + 0x20);
        if (7 < *(ulonglong *)(param_1 + 0x38)) {
          plVar18 = (longlong *)*plVar18;
        }
        iVar7 = func_0x000140290650(&local_a8,plVar18,0x80,0x2200000);
        if (iVar7 == 0) {
          lVar12 = FUN_14028b550(0x4000,&DAT_140426ef0);
          if (lVar12 == 0) {
            FUN_14028f830();
            param_4[1] = iStack_84;
            ppuVar10 = &PTR_DAT_1404df600;
            *param_4 = 8;
            goto LAB_140051ad2;
          }
          iVar7 = func_0x000140290770(CONCAT44(uStack_a4,local_a8),lVar12,0x4000);
          if (iVar7 != 0) {
            FUN_14028f830(CONCAT44(uStack_a4,local_a8));
LAB_1400515a4:
            func_0x00014028b040(lVar12);
            return;
          }
          FUN_14028f830(CONCAT44(uStack_a4,local_a8));
          puVar19 = param_2;
          if (7 < (ulonglong)param_2[3]) {
            puVar19 = (undefined8 *)*param_2;
          }
          uVar16 = FUN_14028fd30(puVar19);
          if ((int)((ulonglong)uVar16 >> 0x20) != 0) goto LAB_1400515a4;
          if ((char)uVar16 == '\0') {
            func_0x00014028b040(lVar12);
            return;
          }
          if (7 < (ulonglong)param_2[3]) {
            param_2 = (undefined8 *)*param_2;
          }
          iVar7 = func_0x000140290650(&local_98,param_2,0x100,0x2000000);
          if (iVar7 == 0) {
            iVar7 = FUN_140290bc0(CONCAT44(iStack_94,local_98),lVar12);
            if (iVar7 == 0) {
              FUN_14028f830(CONCAT44(iStack_94,local_98));
              goto LAB_14005167a;
            }
            FUN_14028f830(CONCAT44(iStack_94,local_98));
          }
          else {
            FUN_14028f830();
          }
          if (param_2 != (undefined8 *)0x0) {
            FUN_1402907c0(param_2);
          }
LAB_14005167a:
          func_0x00014028b040(lVar12);
          return;
        }
        FUN_14028f830(CONCAT44(uStack_a4,local_a8));
        param_4[1] = iStack_84;
        ppuVar10 = &PTR_DAT_1404df600;
        *param_4 = iVar7;
        goto LAB_140051ad2;
      }
      if (iVar8 == 4) {
        if ((param_3 >> 9 & 1) != 0) {
          return;
        }
        cVar4 = FUN_140050e40(uVar16);
        if (cVar4 == '\0') {
          iVar7 = FUN_140050e90(param_1 + 0x20,param_2);
          *param_4 = iVar7;
          param_4[1] = iStack_84;
          *(undefined ***)(param_4 + 2) = &PTR_DAT_1404df600;
          return;
        }
        goto LAB_140051abf;
      }
      if (iVar8 != 2) {
        if (iVar8 != 3) {
          return;
        }
        goto LAB_1400518a6;
      }
      if ((param_3 >> 0xc & 1) != 0) {
        return;
      }
      plVar18 = (longlong *)(param_1 + 0x20);
      if ((param_3 >> 0xd & 1) == 0) {
        if ((param_3 >> 0xe & 1) == 0) {
          if (iVar7 != 3) {
            FUN_140050ff0(plVar18,param_2,param_3,param_4);
            return;
          }
          uVar16 = FUN_140053ce0(plVar18,&local_88);
          uVar16 = FUN_140051210(&local_68,param_2,uVar16);
          FUN_140050ff0(plVar18,uVar16,param_3,param_4);
                    /* WARNING: Subroutine does not return */
          FUN_140016840(&local_68);
        }
        if (7 < *(ulonglong *)(param_1 + 0x38)) {
          plVar18 = (longlong *)*plVar18;
        }
        if (7 < (ulonglong)param_2[3]) {
          param_2 = (undefined8 *)*param_2;
        }
        iVar7 = func_0x00014028fe10(param_2,plVar18);
        *param_4 = iVar7;
        param_4[1] = iStack_84;
        ppuVar10 = &PTR_DAT_1404df600;
        goto LAB_140051ad2;
      }
      auVar2._8_8_ = 0;
      auVar2._0_8_ = *(longlong *)(param_1 + 0x30) + 1;
      uVar16 = SUB168(ZEXT816(2) * auVar2,0);
      if (SUB168(ZEXT816(2) * auVar2,8) != 0) {
        uVar16 = 0xffffffffffffffff;
      }
      psVar13 = (short *)FUN_14028b550(uVar16,&DAT_140426ef0);
      if (psVar13 != (short *)0x0) {
        if (7 < *(ulonglong *)(param_1 + 0x38)) {
          plVar18 = (longlong *)*plVar18;
        }
        psVar14 = (short *)FUN_140015f60(plVar18,(short *)((longlong)plVar18 +
                                                          *(longlong *)(param_1 + 0x30) * 2));
        psVar15 = psVar13;
        for (; plVar18 != (longlong *)psVar14; plVar18 = (longlong *)((longlong)plVar18 + 2)) {
          sVar17 = *(short *)plVar18;
          if ((sVar17 == 0x5c) || (sVar17 == 0x2f)) {
            sVar17 = 0x5c;
          }
          *psVar15 = sVar17;
          psVar15 = psVar15 + 1;
        }
        do {
          sVar17 = *psVar14;
          if ((sVar17 == 0x5c) || (sVar17 == 0x2f)) {
            *psVar15 = 0x5c;
            for (; (psVar14[1] == 0x5c || (psVar14[1] == 0x2f)); psVar14 = psVar14 + 1) {
            }
          }
          else {
            *psVar15 = sVar17;
            if (sVar17 == 0) {
              if (7 < (ulonglong)param_2[3]) {
                param_2 = (undefined8 *)*param_2;
              }
              iVar7 = FUN_14028fe40(param_2,psVar13);
              *param_4 = iVar7;
              param_4[1] = iStack_84;
              *(undefined ***)(param_4 + 2) = &PTR_DAT_1404df600;
              func_0x00014028b040(psVar13);
              return;
            }
          }
          psVar15 = psVar15 + 1;
          psVar14 = psVar14 + 1;
        } while( true );
      }
      *param_4 = 0xc;
    }
  }
  else {
    puVar19 = param_2;
    if (7 < (ulonglong)param_2[3]) {
      puVar19 = (undefined8 *)*param_2;
    }
    plVar18 = (longlong *)(param_1 + 0x20);
    if (7 < *(ulonglong *)(param_1 + 0x38)) {
      plVar18 = (longlong *)*plVar18;
    }
    uVar11 = FUN_14028ff70(plVar18,puVar19);
    param_4[1] = iStack_84;
    iVar8 = (int)((ulonglong)uVar11 >> 0x20);
    *param_4 = iVar8;
    *(undefined ***)(param_4 + 2) = &PTR_DAT_1404df600;
    if ((char)uVar11 == '\0') {
      if (iVar8 != 0) {
        return;
      }
      goto LAB_140051487;
    }
LAB_1400514d6:
    *param_4 = 0x11;
  }
  param_4[1] = iStack_84;
  ppuVar10 = &PTR_DAT_1404df5f0;
LAB_140051ad2:
  *(undefined ***)(param_4 + 2) = ppuVar10;
  return;
joined_r0x000140051980:
  if (psVar15 == psVar13) goto LAB_1400519bd;
  if ((*psVar15 != 0x5c) && (*psVar15 != 0x2f)) goto LAB_1400519a0;
  psVar15 = psVar15 + 1;
  goto joined_r0x000140051980;
LAB_1400519a0:
  psVar1 = psVar14 + -1;
  if (psVar14[-1] == 0x5c) {
LAB_1400519bd:
    local_58 = 0;
    local_50 = 0;
    local_68 = 0;
    uStack_60 = 0;
    FUN_140016240(&local_68,psVar14,(longlong)psVar13 - (longlong)psVar14 >> 1);
    uVar16 = FUN_140051210(local_48,param_2,&local_68);
    FUN_140051360(lVar12,uVar16,param_3,param_4);
                    /* WARNING: Subroutine does not return */
    FUN_140016840(local_48);
  }
  if ((psVar14[-1] == 0x2f) || (psVar14 = psVar1, psVar15 == psVar1)) goto LAB_1400519bd;
  goto LAB_1400519a0;
}

