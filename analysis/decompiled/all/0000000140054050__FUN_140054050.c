// Function: FUN_140054050
// Addr: 140054050
// Size: 476 bytes


longlong * FUN_140054050(undefined8 *param_1,longlong *param_2)

{
  code *pcVar1;
  int iVar2;
  short *psVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined8 ******ppppppuVar6;
  char ******ppppppcVar7;
  short *psVar8;
  ulonglong uVar9;
  short *psVar10;
  char ******ppppppcVar11;
  undefined8 *puVar12;
  char ******ppppppcVar13;
  longlong lVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  char *****local_98;
  undefined8 uStack_90;
  ulonglong local_88;
  ulonglong uStack_80;
  undefined8 *****local_78;
  undefined8 uStack_70;
  ulonglong local_68;
  ulonglong local_60;
  char *****local_58;
  longlong lStack_50;
  undefined8 local_48;
  undefined8 local_40;
  char *****local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  
  puVar12 = param_1;
  if (7 < (ulonglong)param_1[3]) {
    puVar12 = (undefined8 *)*param_1;
  }
  psVar10 = (short *)((longlong)puVar12 + param_1[2] * 2);
  psVar8 = psVar10;
  for (psVar3 = (short *)FUN_140015f60(puVar12); psVar3 != psVar8; psVar3 = psVar3 + 1) {
    if ((*psVar3 != 0x5c) && (*psVar3 != 0x2f)) goto LAB_1400540b0;
  }
LAB_1400540cf:
  psVar3 = (short *)func_0x00014028f010(psVar10);
  if ((psVar10 == psVar3) || (psVar8 = psVar3 + -1, psVar10 == psVar8)) {
LAB_14005411f:
    psVar8 = psVar3;
  }
  else {
    if (*psVar8 != 0x2e) {
      for (psVar8 = psVar3 + -2; psVar10 != psVar8; psVar8 = psVar8 + -1) {
        if (*psVar8 == 0x2e) goto LAB_140054122;
      }
      goto LAB_14005411f;
    }
    if ((psVar10 == psVar3 + -2) && (psVar3[-2] == 0x2e)) goto LAB_14005411f;
  }
LAB_140054122:
  local_58 = (char *****)0x0;
  lStack_50 = 0;
  local_48 = 0;
  local_40 = 0;
  FUN_140016240(&local_58,psVar8,(longlong)psVar3 - (longlong)psVar8 >> 1);
  local_68 = 0;
  ppppppcVar7 = &local_58;
  if (7 < local_40) {
    ppppppcVar7 = (char ******)local_58;
  }
  local_60 = 0;
  local_78 = (undefined8 ******)0x0;
  uStack_70 = 0;
  uVar4 = FUN_1402d6b70(ppppppcVar7);
  FUN_140016240(&local_78,ppppppcVar7,uVar4);
  if (local_68 == 0) {
UNWIND_INFO_140054232:
    local_88 = 0;
    uStack_90 = 0;
    local_98 = (char *****)0x0;
    uStack_80 = 0xf;
  }
  else {
    ppppppuVar6 = &local_78;
    if (7 < local_60) {
      ppppppuVar6 = (undefined8 ******)local_78;
    }
    iVar2 = (*DAT_140426608)(0xfde9,0,ppppppuVar6,local_68 & 0xffffffff,0,0,0,0);
    if (iVar2 < 1) goto UNWIND_INFO_140054232;
    FUN_140016a10(&local_38,(longlong)iVar2,0);
    ppppppcVar7 = &local_38;
    if (0xf < uStack_20) {
      ppppppcVar7 = (char ******)local_38;
    }
    ppppppuVar6 = &local_78;
    if (7 < local_60) {
      ppppppuVar6 = (undefined8 ******)local_78;
    }
    (*DAT_140426608)(0xfde9,0,ppppppuVar6,local_68 & 0xffffffff,ppppppcVar7,iVar2,0,0);
    local_88 = local_28;
    uStack_80 = uStack_20;
    local_98 = local_38;
    uStack_90 = uStack_30;
  }
  if (7 < local_60) {
    uVar9 = local_60 * 2 + 2;
    ppppppuVar6 = (undefined8 ******)local_78;
    if (0xfff < uVar9) {
      ppppppuVar6 = (undefined8 ******)local_78[-1];
      if (0x1f < (ulonglong)((longlong)local_78 + (-8 - (longlong)ppppppuVar6)))
      goto code_r0x000140054478;
      uVar9 = local_60 * 2 + 0x29;
    }
    func_0x00014028b040(ppppppuVar6,uVar9);
  }
  local_68 = 0;
  local_60 = 7;
  local_78 = (undefined8 *****)((ulonglong)local_78 & 0xffffffffffff0000);
  if (7 < local_40) {
    uVar9 = local_40 * 2 + 2;
    ppppppcVar7 = (char ******)local_58;
    if (0xfff < uVar9) {
      ppppppcVar7 = (char ******)local_58[-1];
      if ((char *)0x1f < (char *)((longlong)local_58 + (-8 - (longlong)ppppppcVar7)))
      goto code_r0x000140054478;
      uVar9 = local_40 * 2 + 0x29;
    }
    func_0x00014028b040(ppppppcVar7,uVar9);
  }
  ppppppcVar7 = &local_98;
  if (0xf < uStack_80) {
    ppppppcVar7 = (char ******)local_98;
  }
  ppppppcVar11 = (char ******)((longlong)ppppppcVar7 + local_88);
  ppppppcVar13 = &local_98;
  if (0xf < uStack_80) {
    ppppppcVar13 = (char ******)local_98;
  }
  for (; ppppppcVar13 != ppppppcVar11; ppppppcVar13 = (char ******)((longlong)ppppppcVar13 + 1)) {
    iVar2 = tolower((int)*(char *)ppppppcVar13);
    *(char *)ppppppcVar7 = (char)iVar2;
    ppppppcVar7 = (char ******)((longlong)ppppppcVar7 + 1);
  }
  if (local_88 == 0) {
code_r0x000140054408:
    local_28 = 0;
    uStack_30 = 0;
    local_38 = (char *****)0x0;
    lVar14 = 0;
    uStack_20 = 7;
    local_28._0_4_ = 0;
    local_28._4_4_ = 0;
    uStack_20._0_4_ = 7;
    uStack_20._4_4_ = 0;
    uVar15 = (undefined4)local_28;
    uVar16 = local_28._4_4_;
    uVar17 = (undefined4)uStack_20;
    uVar18 = uStack_20._4_4_;
    ppppppcVar7 = (char ******)local_38;
  }
  else {
    ppppppcVar7 = &local_98;
    if (0xf < uStack_80) {
      ppppppcVar7 = (char ******)local_98;
    }
    iVar2 = (*DAT_140426748)(0xfde9,0,ppppppcVar7,local_88 & 0xffffffff,0,0);
    if (iVar2 < 1) goto code_r0x000140054408;
    local_48 = 0;
    local_40 = 0;
    local_58 = (char *****)0x0;
    lStack_50 = 0;
    FUN_1400168b0(&local_58,0,(longlong)iVar2);
    ppppppcVar7 = &local_58;
    if (7 < local_40) {
      ppppppcVar7 = (char ******)local_58;
    }
    ppppppcVar13 = &local_98;
    if (0xf < uStack_80) {
      ppppppcVar13 = (char ******)local_98;
    }
    (*DAT_140426748)(0xfde9,0,ppppppcVar13,local_88 & 0xffffffff,ppppppcVar7,iVar2);
    uVar15 = (undefined4)local_48;
    uVar16 = local_48._4_4_;
    uVar17 = (undefined4)local_40;
    uVar18 = local_40._4_4_;
    ppppppcVar7 = (char ******)local_58;
    lVar14 = lStack_50;
  }
  *param_2 = (longlong)ppppppcVar7;
  param_2[1] = lVar14;
  *(undefined4 *)(param_2 + 2) = uVar15;
  *(undefined4 *)((longlong)param_2 + 0x14) = uVar16;
  *(undefined4 *)(param_2 + 3) = uVar17;
  *(undefined4 *)((longlong)param_2 + 0x1c) = uVar18;
  if (0xf < uStack_80) {
    uVar9 = uStack_80 + 1;
    ppppppcVar7 = (char ******)local_98;
    if (0xfff < uVar9) {
      ppppppcVar7 = (char ******)local_98[-1];
      if ((char *)0x1f < (char *)((longlong)local_98 + (-8 - (longlong)ppppppcVar7))) {
code_r0x000140054478:
        pcVar1 = (code *)swi(0x29);
        (*pcVar1)(5);
        pcVar1 = (code *)swi(3);
        plVar5 = (longlong *)(*pcVar1)();
        return plVar5;
      }
      uVar9 = uStack_80 + 0x28;
    }
    func_0x00014028b040(ppppppcVar7,uVar9);
  }
  return param_2;
LAB_1400540b0:
  psVar8 = psVar10 + -1;
  if (psVar10[-1] == 0x5c) goto LAB_1400540cf;
  if ((psVar10[-1] == 0x2f) || (psVar10 = psVar8, psVar3 == psVar8)) goto LAB_1400540cf;
  goto LAB_1400540b0;
}

