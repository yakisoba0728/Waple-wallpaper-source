// Function: FUN_140094070
// Addr: 140094070
// Size: 1241 bytes


longlong *
FUN_140094070(undefined8 param_1,longlong *param_2,longlong *param_3,longlong *param_4,
             longlong *param_5,uint *param_6,undefined1 *param_7)

{
  undefined2 *puVar1;
  longlong *plVar2;
  longlong **pplVar3;
  code *pcVar4;
  longlong lVar5;
  uint *puVar6;
  undefined2 uVar7;
  int iVar8;
  uint uVar9;
  longlong *plVar10;
  undefined8 *puVar11;
  longlong ****pppplVar12;
  longlong ***ppplVar13;
  longlong *plVar14;
  undefined8 ****ppppuVar15;
  ulonglong uVar16;
  longlong *plVar17;
  longlong ****pppplVar18;
  undefined1 *puVar19;
  undefined1 *puVar20;
  longlong *plVar21;
  undefined1 auStack_d8 [8];
  undefined1 auStack_d0 [24];
  longlong *local_b8;
  undefined8 ***local_a8;
  longlong ***local_a0;
  longlong *local_98;
  ulonglong local_90;
  longlong ***local_88;
  undefined8 uStack_80;
  longlong *local_78;
  longlong *local_70;
  undefined8 **local_68 [5];
  
  puVar6 = param_6;
  puVar20 = auStack_d8;
  pppplVar18 = *(longlong *****)(param_5[8] + 8);
  ppplVar13 = *pppplVar18;
  plVar10 = param_5;
  local_a0 = (longlong ***)pppplVar18;
  if ((*(uint *)(param_5 + 3) & 0x4000) == 0) {
LAB_140094471:
    pplVar3 = ppplVar13[1];
    *(undefined8 *)(puVar20 + -8) = 0x140094474;
    (*(code *)pplVar3)();
    lVar5 = plVar10[3];
    *(undefined8 *****)(puVar20 + 0x20) = &local_a8;
    *(undefined8 *)(puVar20 + -8) = 0x140094490;
    uVar7 = FUN_140094550(local_68,param_3,param_4,(int)lVar5);
    pplVar3 = (*pppplVar18)[2];
    *(undefined8 *)(puVar20 + -8) = 0x14009449c;
    puVar11 = (undefined8 *)(*(code *)pplVar3)(pppplVar18);
    if (puVar11 != (undefined8 *)0x0) {
      pcVar4 = *(code **)*puVar11;
      *(undefined8 *)(puVar20 + -8) = 0x1400944af;
      (*pcVar4)(puVar11,1);
    }
    puVar19 = puVar20;
    if ((char)uVar7 < '\0') {
      *param_7 = 0;
      *puVar6 = 2;
    }
    else {
      *(undefined8 *)(puVar20 + -8) = 0x1400944dc;
      uVar9 = FUN_140292770(local_68,&local_a8,(int)(char)uVar7,&param_5);
      *param_7 = uVar9 != 0;
      if (((local_a8 == local_68) || ((int)param_5 != 0 || (char)((ushort)uVar7 >> 8) != '\0')) ||
         (1 < uVar9)) {
        *puVar6 = 2;
      }
    }
  }
  else {
    (*(code *)ppplVar13[1])(pppplVar18);
    plVar10 = (longlong *)FUN_140035d70(&local_a8);
    param_5 = plVar10;
    puVar11 = (undefined8 *)(*(code *)(*pppplVar18)[2])(pppplVar18);
    if (puVar11 != (undefined8 *)0x0) {
      (**(code **)*puVar11)(puVar11,1);
    }
    local_78 = (longlong *)0x1;
    local_70 = (longlong *)0xf;
    uStack_80 = 0;
    local_88 = (longlong ***)0x0;
    (**(code **)(*plVar10 + 0x30))(plVar10,&local_a8);
    plVar21 = local_78;
    plVar10 = local_98;
    ppppuVar15 = &local_a8;
    if (0xf < local_90) {
      ppppuVar15 = (undefined8 ****)local_a8;
    }
    if ((longlong *)((longlong)local_70 - (longlong)local_78) < local_98) {
      local_b8 = local_98;
      FUN_140053110(&local_88,local_98,(ulonglong)param_5 & 0xff);
    }
    else {
      pppplVar18 = &local_88;
      if ((longlong *)0xf < local_70) {
        pppplVar18 = (longlong ****)local_88;
      }
      puVar19 = (undefined1 *)((longlong)pppplVar18 + (longlong)local_78);
      local_78 = (longlong *)((longlong)local_98 + (longlong)local_78);
      FUN_1404210f0(puVar19,ppppuVar15,local_98);
      ((undefined1 *)((longlong)plVar10 + (longlong)pppplVar18))[(longlong)plVar21] = 0;
    }
    if (0xf < local_90) {
      uVar16 = local_90 + 1;
      ppppuVar15 = (undefined8 ****)local_a8;
      if (uVar16 < 0x1000) {
LAB_1400941b5:
        thunk_FUN_14028af80(ppppuVar15,uVar16);
        goto LAB_1400941ba;
      }
      ppppuVar15 = (undefined8 ****)local_a8[-1];
      if ((ulonglong)((longlong)local_a8 + (-8 - (longlong)ppppuVar15)) < 0x20) {
        uVar16 = local_90 + 0x28;
        goto LAB_1400941b5;
      }
LAB_14009446a:
      pcVar4 = (code *)swi(0x29);
      ppplVar13 = (longlong ***)(*pcVar4)(5);
      puVar20 = auStack_d0;
      param_2 = plVar21;
      goto LAB_140094471;
    }
LAB_1400941ba:
    plVar17 = local_70;
    plVar10 = local_78;
    if (local_78 < local_70) {
      pppplVar12 = &local_88;
      if ((longlong *)0xf < local_70) {
        pppplVar12 = (longlong ****)local_88;
      }
      puVar1 = (undefined2 *)((longlong)pppplVar12 + (longlong)local_78);
      local_78 = (longlong *)((longlong)local_78 + 1);
      *puVar1 = 0;
    }
    else {
      plVar21 = (longlong *)0x7fffffffffffffff;
      if (local_78 == (longlong *)0x7fffffffffffffff) {
                    /* WARNING: Subroutine does not return */
        FUN_1400172e0();
      }
      plVar14 = (longlong *)((ulonglong)((longlong)local_78 + 1) | 0xf);
      if ((plVar14 < (longlong *)0x8000000000000000) &&
         (local_70 <= (longlong *)(0x7fffffffffffffff - ((ulonglong)local_70 >> 1)))) {
        plVar2 = (longlong *)(((ulonglong)local_70 >> 1) + (longlong)local_70);
        plVar21 = plVar14;
        if (plVar14 < plVar2) {
          plVar21 = plVar2;
        }
        plVar2 = (longlong *)((longlong)plVar21 + 1);
        if (plVar2 == (longlong *)0x0) {
          pppplVar18 = (longlong ****)0x0;
        }
        else {
          if ((longlong *)0xfff < plVar2) {
            plVar14 = plVar21 + 5;
            if (plVar14 <= plVar2) {
                    /* WARNING: Subroutine does not return */
              FUN_140017370();
            }
            goto LAB_14009425f;
          }
          pppplVar18 = (longlong ****)FUN_14028af20(plVar2);
        }
      }
      else {
        plVar14 = (longlong *)0x8000000000000027;
LAB_14009425f:
        ppplVar13 = (longlong ***)FUN_14028af20(plVar14);
        if (ppplVar13 == (longlong ***)0x0) goto LAB_14009446a;
        pppplVar18 = (longlong ****)((longlong)ppplVar13 + 0x27U & 0xffffffffffffffe0);
        pppplVar18[-1] = ppplVar13;
      }
      ppplVar13 = local_88;
      local_78 = (longlong *)((longlong)plVar10 + 1);
      local_70 = plVar21;
      if (plVar17 < &DAT_00000010) {
        FUN_1404210f0(pppplVar18,&local_88,plVar10);
        *(undefined2 *)((longlong)pppplVar18 + (longlong)plVar10) = 0;
        local_88 = (longlong ***)pppplVar18;
      }
      else {
        FUN_1404210f0(pppplVar18,local_88,plVar10);
        *(undefined2 *)((longlong)pppplVar18 + (longlong)plVar10) = 0;
        if ((undefined1 *)((longlong)plVar17 + 1) < (undefined1 *)0x1000) {
          thunk_FUN_14028af80(ppplVar13);
          local_88 = (longlong ***)pppplVar18;
        }
        else {
          plVar21 = (longlong *)((longlong)ppplVar13 + (-8 - (longlong)ppplVar13[-1]));
          if ((longlong *)0x1f < plVar21) goto LAB_14009446a;
          thunk_FUN_14028af80(ppplVar13[-1],plVar17 + 5);
          local_88 = (longlong ***)pppplVar18;
        }
      }
    }
    (**(code **)(*param_5 + 0x38))(param_5,&local_a8);
    plVar21 = local_78;
    ppppuVar15 = &local_a8;
    if (0xf < local_90) {
      ppppuVar15 = (undefined8 ****)local_a8;
    }
    if ((longlong *)((longlong)local_70 - (longlong)local_78) < local_98) {
      local_b8 = local_98;
      FUN_140053110(&local_88,local_98,(ulonglong)param_5 & 0xff);
    }
    else {
      pppplVar18 = &local_88;
      if ((longlong *)0xf < local_70) {
        pppplVar18 = (longlong ****)local_88;
      }
      puVar19 = (undefined1 *)((longlong)pppplVar18 + (longlong)local_78);
      local_78 = (longlong *)((longlong)local_98 + (longlong)local_78);
      FUN_1404210f0(puVar19,ppppuVar15,local_98);
      ((undefined1 *)((longlong)local_98 + (longlong)pppplVar18))[(longlong)plVar21] = 0;
    }
    plVar10 = local_98;
    if (0xf < local_90) {
      uVar16 = local_90 + 1;
      ppppuVar15 = (undefined8 ****)local_a8;
      if (0xfff < uVar16) {
        ppppuVar15 = (undefined8 ****)local_a8[-1];
        if (0x1f < (ulonglong)((longlong)local_a8 + (-8 - (longlong)ppppuVar15)))
        goto LAB_14009446a;
        uVar16 = local_90 + 0x28;
      }
      thunk_FUN_14028af80(ppppuVar15,uVar16);
    }
    local_b8 = (longlong *)CONCAT71(local_b8._1_7_,1);
    pppplVar12 = &local_88;
    if ((longlong *)0xf < local_70) {
      pppplVar12 = (longlong ****)local_88;
    }
    iVar8 = FUN_140096ed0(param_3,param_4,2,pppplVar12);
    if (iVar8 == 0) {
      *param_7 = 0;
    }
    else if (iVar8 == 1) {
      *param_7 = 1;
    }
    else {
      *param_7 = 0;
      *puVar6 = 2;
    }
    puVar19 = auStack_d8;
    if ((longlong *)0xf < local_70) {
      plVar17 = (longlong *)((longlong)local_70 + 1);
      pppplVar12 = (longlong ****)local_88;
      if ((longlong *)0xfff < plVar17) {
        pppplVar12 = (longlong ****)local_88[-1];
        if (0x1f < (ulonglong)((longlong)local_88 + (-8 - (longlong)pppplVar12)))
        goto LAB_14009446a;
        plVar17 = local_70 + 5;
      }
      thunk_FUN_14028af80(pppplVar12,plVar17);
      puVar19 = auStack_d8;
    }
  }
  if ((char)param_3[1] == '\0') {
    *(undefined8 *)(puVar19 + -8) = 0x14009443f;
    FUN_140097500(param_3);
  }
  if ((char)param_4[1] == '\0') {
    *(undefined8 *)(puVar19 + -8) = 0x14009444f;
    FUN_140097500(param_4);
  }
  if (*param_3 == 0) {
    if (*param_4 != 0) goto LAB_140094520;
  }
  else if (*param_4 == 0) goto LAB_140094520;
  *puVar6 = *puVar6 | 1;
LAB_140094520:
  lVar5 = param_3[1];
  *param_2 = *param_3;
  param_2[1] = lVar5;
  return param_2;
}

