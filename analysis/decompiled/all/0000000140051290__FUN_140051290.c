// Function: FUN_140051290
// Addr: 140051290
// Size: 1942 bytes


void FUN_140051290(longlong param_1,undefined8 *param_2,uint param_3,int *param_4)

{
  short *psVar1;
  code *pcVar2;
  undefined1 auVar3 [16];
  bool bVar4;
  char cVar5;
  char cVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  int *piVar10;
  undefined **ppuVar11;
  undefined8 uVar12;
  longlong lVar13;
  short *psVar14;
  short *psVar15;
  int extraout_var;
  short *psVar16;
  undefined8 uVar17;
  short sVar18;
  longlong *plVar19;
  undefined8 *puVar20;
  longlong lVar21;
  ulonglong uVar22;
  undefined4 uVar23;
  uint local_a8;
  undefined4 uStack_a4;
  int local_a0;
  int local_98;
  int iStack_94;
  int local_90;
  undefined4 local_88;
  int iStack_84;
  longlong *local_80;
  longlong local_68 [4];
  undefined1 local_48 [32];
  
  uVar23 = 3;
  uVar7 = 3;
  if ((param_3 & 0x300) != 0) {
    uVar7 = 6;
  }
  FUN_14003b6c0(param_1,&local_a8,uVar7);
  if (local_a0 != 0) {
    *param_4 = local_a0;
    param_4[1] = iStack_84;
    *(undefined ***)(param_4 + 2) = &PTR_PTR_1404df530;
    return;
  }
  if ((param_3 & 0x2200) != 0) {
    uVar23 = 6;
  }
  piVar10 = (int *)FUN_14003b970(&local_88,param_2,uVar23);
  iStack_94 = piVar10[1];
  iVar8 = *piVar10;
  uVar17 = *(undefined8 *)piVar10;
  iVar9 = piVar10[2];
  if ((iVar9 != 0) && ((iVar8 - 1U & 0xfffffff7) != 0)) {
    param_4[1] = iStack_84;
    ppuVar11 = &PTR_PTR_1404df530;
    *param_4 = iVar9;
    goto LAB_140051a02;
  }
  local_98 = iVar8;
  cVar5 = FUN_140050d70(uVar17);
  if (cVar5 == '\0') {
LAB_1400513b7:
    uVar12 = CONCAT44(uStack_a4,local_a8);
    cVar5 = FUN_140050d20(uVar12);
    iVar9 = (int)uVar12;
    if ((cVar5 == '\0') || (iVar9 == 10)) {
      cVar5 = '\0';
    }
    else {
      cVar5 = '\x01';
    }
    cVar6 = FUN_140050d20(uVar17);
    if ((cVar6 == '\0') || (iVar8 == 10)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (cVar5 != '\0' || bVar4) {
LAB_1400519ef:
      *param_4 = 0x82;
    }
    else if (iVar9 == 3) {
      if (iVar8 == 2) goto LAB_140051406;
LAB_1400517d6:
      if ((param_3 >> 0xd & 1) == 0) {
        puVar20 = param_2;
        if (7 < (ulonglong)param_2[3]) {
          puVar20 = (undefined8 *)*param_2;
        }
        FUN_14028fc60(puVar20);
        *param_4 = extraout_var;
        param_4[1] = iStack_84;
        *(undefined ***)(param_4 + 2) = &PTR_PTR_1404df530;
        if (extraout_var != 0) {
          return;
        }
        if ((param_3 & 0x1010) == 0x1000) {
          return;
        }
        FUN_14003b1c0(&local_88,param_1 + 0x20,param_4);
        iVar8 = iStack_84;
        if (*param_4 == 0) {
          local_a8 = param_3 & 0x10;
          do {
            lVar13 = CONCAT44(iStack_84,local_88);
            if (lVar13 == 0) break;
            if (local_a8 == 0) {
              FUN_14003b6c0(lVar13,&local_98,uVar7);
              if (local_90 != 0) {
                *param_4 = local_90;
                param_4[1] = iStack_84;
                *(undefined ***)(param_4 + 2) = &PTR_PTR_1404df530;
                break;
              }
              if (local_98 != 3) goto LAB_140051889;
            }
            else {
LAB_140051889:
              if (*(ulonglong *)(lVar13 + 0x38) < 8) {
                lVar21 = lVar13 + 0x20;
              }
              else {
                lVar21 = *(longlong *)(lVar13 + 0x20);
              }
              psVar14 = (short *)(lVar21 + *(longlong *)(lVar13 + 0x30) * 2);
              psVar15 = psVar14;
              for (psVar16 = (short *)FUN_140015e90(lVar21,psVar14); psVar16 != psVar14;
                  psVar16 = psVar16 + 1) {
                if ((*psVar16 != 0x5c) && (*psVar16 != 0x2f)) goto LAB_1400518d0;
              }
LAB_1400518ed:
              local_68[2] = 0;
              local_68[3] = 0;
              local_68[0] = 0;
              local_68[1] = 0;
              FUN_140016170(local_68,psVar15,(longlong)psVar14 - (longlong)psVar15 >> 1);
              uVar17 = FUN_140051140(local_48,param_2,local_68);
              FUN_140051290(lVar13,uVar17,param_3,param_4);
              FUN_140016770(local_48);
              if (7 < (ulonglong)local_68[3]) {
                uVar22 = local_68[3] * 2 + 2;
                lVar13 = local_68[0];
                if (0xfff < uVar22) {
                  lVar13 = *(longlong *)(local_68[0] + -8);
                  if (0x1f < (local_68[0] - lVar13) - 8U) {
                    pcVar2 = (code *)swi(0x29);
                    (*pcVar2)(5);
                    goto LAB_1400519ef;
                  }
                  uVar22 = local_68[3] * 2 + 0x29;
                }
                thunk_FUN_14028af80(lVar13,uVar22);
              }
              if (*param_4 != 0) break;
            }
            iVar9 = FUN_14003b5f0(&local_88);
            *param_4 = iVar9;
            param_4[1] = iVar8;
            *(undefined ***)(param_4 + 2) = &PTR_PTR_1404df530;
          } while (iVar9 == 0);
        }
        if (local_80 == (longlong *)0x0) {
          return;
        }
        LOCK();
        plVar19 = local_80 + 1;
        lVar13 = *plVar19;
        *(int *)plVar19 = (int)*plVar19 + -1;
        UNLOCK();
        if ((int)lVar13 != 1) {
          return;
        }
        (**(code **)*local_80)(local_80);
        LOCK();
        piVar10 = (int *)((longlong)local_80 + 0xc);
        iVar8 = *piVar10;
        *piVar10 = *piVar10 + -1;
        UNLOCK();
        if (iVar8 != 1) {
          return;
        }
        (**(code **)(*local_80 + 8))(local_80);
        return;
      }
      *param_4 = 0x15;
    }
    else {
      if (iVar9 == 10) {
        if ((param_3 >> 9 & 1) != 0) {
          return;
        }
        cVar5 = FUN_140050d70(uVar17);
        if (cVar5 != '\0') {
          return;
        }
        plVar19 = (longlong *)(param_1 + 0x20);
        if (7 < *(ulonglong *)(param_1 + 0x38)) {
          plVar19 = (longlong *)*plVar19;
        }
        iVar8 = FUN_140290580(&local_a8,plVar19,0x80,0x2200000);
        if (iVar8 != 0) {
          FUN_14028f760(CONCAT44(uStack_a4,local_a8));
          param_4[1] = iStack_84;
          ppuVar11 = &PTR_PTR_1404df530;
          *param_4 = iVar8;
          goto LAB_140051a02;
        }
        lVar13 = FUN_14028b480(0x4000,&PTR_140426e20);
        if (lVar13 == 0) {
          FUN_14028f760();
          param_4[1] = iStack_84;
          ppuVar11 = &PTR_PTR_1404df530;
          *param_4 = 8;
          goto LAB_140051a02;
        }
        iVar8 = FUN_1402906a0(CONCAT44(uStack_a4,local_a8),lVar13,0x4000);
        if (iVar8 == 0) {
          FUN_14028f760(CONCAT44(uStack_a4,local_a8));
          puVar20 = param_2;
          if (7 < (ulonglong)param_2[3]) {
            puVar20 = (undefined8 *)*param_2;
          }
          uVar17 = FUN_14028fc60(puVar20);
          iVar8 = (int)((ulonglong)uVar17 >> 0x20);
          if (iVar8 == 0) {
            if ((char)uVar17 == '\0') {
              thunk_FUN_14028af80(lVar13);
              param_4[1] = iStack_84;
              ppuVar11 = &PTR_PTR_1404df530;
              *param_4 = 0xb7;
              goto LAB_140051a02;
            }
            if (7 < (ulonglong)param_2[3]) {
              param_2 = (undefined8 *)*param_2;
            }
            iVar8 = FUN_140290580(&local_98,param_2,0x100,0x2000000);
            if (iVar8 == 0) {
              iVar8 = FUN_140290af0(CONCAT44(iStack_94,local_98),lVar13);
              if (iVar8 != 0) {
                FUN_14028f760(CONCAT44(iStack_94,local_98));
                goto joined_r0x0001400515a0;
              }
              FUN_14028f760(CONCAT44(iStack_94,local_98));
            }
            else {
              FUN_14028f760();
joined_r0x0001400515a0:
              if (param_2 != (undefined8 *)0x0) {
                FUN_1402906f0(param_2);
              }
            }
            thunk_FUN_14028af80(lVar13);
            param_4[1] = iStack_84;
            ppuVar11 = &PTR_PTR_1404df530;
            *param_4 = iVar8;
            goto LAB_140051a02;
          }
        }
        else {
          FUN_14028f760(CONCAT44(uStack_a4,local_a8));
        }
        thunk_FUN_14028af80(lVar13);
        param_4[1] = iStack_84;
        ppuVar11 = &PTR_PTR_1404df530;
        *param_4 = iVar8;
        goto LAB_140051a02;
      }
      if (iVar9 == 4) {
        if ((param_3 >> 9 & 1) != 0) {
          return;
        }
        cVar5 = FUN_140050d70(uVar17);
        if (cVar5 == '\0') {
          iVar8 = FUN_140050dc0(param_1 + 0x20,param_2);
          *param_4 = iVar8;
          param_4[1] = iStack_84;
          *(undefined ***)(param_4 + 2) = &PTR_PTR_1404df530;
          return;
        }
        goto LAB_1400519ef;
      }
      if (iVar9 != 2) {
        if (iVar9 != 3) {
          return;
        }
        goto LAB_1400517d6;
      }
      if ((param_3 >> 0xc & 1) != 0) {
        return;
      }
      plVar19 = (longlong *)(param_1 + 0x20);
      if ((param_3 >> 0xd & 1) == 0) {
        if ((param_3 >> 0xe & 1) == 0) {
          if (iVar8 == 3) {
            uVar17 = FUN_140053c10(plVar19,&local_88);
            uVar17 = FUN_140051140(local_68,param_2,uVar17);
            FUN_140050f20(plVar19,uVar17,param_3,param_4);
            FUN_140016770(local_68);
            FUN_140016770(&local_88);
            return;
          }
          FUN_140050f20(plVar19,param_2,param_3,param_4);
          return;
        }
        if (7 < *(ulonglong *)(param_1 + 0x38)) {
          plVar19 = (longlong *)*plVar19;
        }
        if (7 < (ulonglong)param_2[3]) {
          param_2 = (undefined8 *)*param_2;
        }
        iVar8 = FUN_14028fd40(param_2,plVar19);
        *param_4 = iVar8;
        param_4[1] = iStack_84;
        ppuVar11 = &PTR_PTR_1404df530;
        goto LAB_140051a02;
      }
      auVar3._8_8_ = 0;
      auVar3._0_8_ = *(longlong *)(param_1 + 0x30) + 1;
      uVar17 = SUB168(ZEXT816(2) * auVar3,0);
      if (SUB168(ZEXT816(2) * auVar3,8) != 0) {
        uVar17 = 0xffffffffffffffff;
      }
      psVar14 = (short *)FUN_14028b480(uVar17,&PTR_140426e20);
      if (psVar14 != (short *)0x0) {
        if (7 < *(ulonglong *)(param_1 + 0x38)) {
          plVar19 = (longlong *)*plVar19;
        }
        psVar15 = (short *)FUN_140015e90(plVar19,(short *)((longlong)plVar19 +
                                                          *(longlong *)(param_1 + 0x30) * 2));
        psVar16 = psVar14;
        for (; plVar19 != (longlong *)psVar15; plVar19 = (longlong *)((longlong)plVar19 + 2)) {
          sVar18 = *(short *)plVar19;
          if ((sVar18 == 0x5c) || (sVar18 == 0x2f)) {
            sVar18 = 0x5c;
          }
          *psVar16 = sVar18;
          psVar16 = psVar16 + 1;
        }
        do {
          sVar18 = *psVar15;
          if ((sVar18 == 0x5c) || (sVar18 == 0x2f)) {
            *psVar16 = 0x5c;
            for (; (psVar15[1] == 0x5c || (psVar15[1] == 0x2f)); psVar15 = psVar15 + 1) {
            }
          }
          else {
            *psVar16 = sVar18;
            if (sVar18 == 0) {
              if (7 < (ulonglong)param_2[3]) {
                param_2 = (undefined8 *)*param_2;
              }
              iVar8 = FUN_14028fd70(param_2,psVar14);
              *param_4 = iVar8;
              param_4[1] = iStack_84;
              *(undefined ***)(param_4 + 2) = &PTR_PTR_1404df530;
              thunk_FUN_14028af80(psVar14);
              return;
            }
          }
          psVar16 = psVar16 + 1;
          psVar15 = psVar15 + 1;
        } while( true );
      }
      *param_4 = 0xc;
    }
  }
  else {
    puVar20 = param_2;
    if (7 < (ulonglong)param_2[3]) {
      puVar20 = (undefined8 *)*param_2;
    }
    plVar19 = (longlong *)(param_1 + 0x20);
    if (7 < *(ulonglong *)(param_1 + 0x38)) {
      plVar19 = (longlong *)*plVar19;
    }
    uVar12 = FUN_14028fea0(plVar19,puVar20);
    param_4[1] = iStack_84;
    iVar9 = (int)((ulonglong)uVar12 >> 0x20);
    *param_4 = iVar9;
    *(undefined ***)(param_4 + 2) = &PTR_PTR_1404df530;
    if ((char)uVar12 == '\0') {
      if (iVar9 != 0) {
        return;
      }
      goto LAB_1400513b7;
    }
LAB_140051406:
    *param_4 = 0x11;
  }
  param_4[1] = iStack_84;
  ppuVar11 = &PTR_vftable_1404df520;
LAB_140051a02:
  *(undefined ***)(param_4 + 2) = ppuVar11;
  return;
LAB_1400518d0:
  psVar1 = psVar15 + -1;
  if (psVar15[-1] == 0x5c) goto LAB_1400518ed;
  if ((psVar15[-1] == 0x2f) || (psVar15 = psVar1, psVar16 == psVar1)) goto LAB_1400518ed;
  goto LAB_1400518d0;
}

