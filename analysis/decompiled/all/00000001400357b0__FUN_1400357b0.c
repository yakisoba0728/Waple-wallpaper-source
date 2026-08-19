// Function: FUN_1400357b0
// Addr: 1400357b0
// Size: 1467 bytes


undefined1 *
FUN_1400357b0(undefined8 param_1,undefined1 *param_2,undefined1 *param_3,longlong param_4,
             byte param_5,char *param_6,ulonglong param_7,char param_8)

{
  char cVar1;
  int iVar2;
  longlong *plVar3;
  byte *pbVar4;
  bool bVar5;
  code *pcVar6;
  char cVar7;
  undefined1 uVar8;
  byte bVar9;
  uint uVar10;
  ulonglong uVar11;
  undefined8 *puVar12;
  longlong *plVar13;
  longlong lVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  undefined1 *puVar17;
  char *pcVar18;
  undefined *puVar19;
  ulonglong uVar20;
  longlong lVar21;
  byte *******pppppppbVar22;
  byte *pbVar23;
  undefined1 auStack_b8 [8];
  undefined1 auStack_b0 [24];
  undefined8 local_98;
  undefined1 local_90;
  undefined1 local_88 [8];
  longlong *local_80;
  byte ******local_78 [2];
  ulonglong local_68;
  ulonglong local_60;
  char local_58;
  undefined7 uStack_57;
  undefined8 uStack_48;
  ulonglong local_40;
  
  uVar16 = param_7;
  pcVar18 = param_6;
  puVar17 = auStack_b8;
  if ((param_7 == 0) || ((*param_6 - 0x2bU & 0xfd) != 0)) {
    uVar20 = 0;
    uVar15 = 2;
    lVar14 = 1;
  }
  else {
    uVar20 = 1;
    uVar15 = 3;
    lVar14 = 2;
  }
  if ((*(uint *)(param_4 + 0x18) & 0x3000) == 0x3000) {
    puVar19 = &DAT_140474090;
    bVar5 = uVar15 <= param_7;
    param_7 = uVar20;
    if (((bVar5) && (param_6[uVar20] == '0')) && ((param_6[lVar14] + 0xa8U & 0xdf) == 0)) {
      param_7 = uVar15;
    }
  }
  else {
    puVar19 = &DAT_14047408c;
    param_7 = uVar20;
  }
  uVar20 = param_7;
  uVar11 = func_0x0001402ca6c0(param_6,puVar19);
  param_6._0_1_ = 0x2e;
  param_6._1_1_ = 0;
  puVar12 = (undefined8 *)FUN_1402caa90();
  param_6._0_1_ = *(undefined1 *)*puVar12;
  uVar15 = func_0x0001402ca6c0(pcVar18,&param_6);
  plVar3 = *(longlong **)(*(longlong *)(param_4 + 0x40) + 8);
  local_80 = plVar3;
  (**(code **)(*plVar3 + 8))(plVar3);
  plVar13 = (longlong *)FUN_140013e10(local_88);
  puVar12 = (undefined8 *)(**(code **)(*plVar3 + 0x10))(plVar3);
  if (puVar12 != (undefined8 *)0x0) {
    (**(code **)*puVar12)(puVar12,1);
  }
  FUN_140016a10(local_78,uVar16,0);
  pppppppbVar22 = local_78;
  if (0xf < local_60) {
    pppppppbVar22 = (byte *******)local_78[0];
  }
  (**(code **)(*plVar13 + 0x38))(plVar13,pcVar18,pcVar18 + uVar16,pppppppbVar22);
  plVar3 = *(longlong **)(*(longlong *)(param_4 + 0x40) + 8);
  local_80 = plVar3;
  (**(code **)(*plVar3 + 8))(plVar3);
  plVar13 = (longlong *)FUN_140035e40(local_88);
  puVar12 = (undefined8 *)(**(code **)(*plVar3 + 0x10))(plVar3);
  if (puVar12 != (undefined8 *)0x0) {
    (**(code **)*puVar12)(puVar12,1);
  }
  (**(code **)(*plVar13 + 0x28))(plVar13,&local_58);
  uVar8 = (**(code **)(*plVar13 + 0x20))(plVar13);
  if (uVar15 != uVar16) {
    bVar9 = (**(code **)(*plVar13 + 0x18))(plVar13);
    pppppppbVar22 = local_78;
    if (0xf < local_60) {
      pppppppbVar22 = (byte *******)local_78[0];
    }
    *(byte *)((longlong)pppppppbVar22 + uVar15) = bVar9;
  }
  cVar7 = param_8;
  if (param_8 != '\0') {
    if (uVar15 == uVar16) {
      uVar15 = uVar11;
    }
    pcVar18 = &local_58;
    if (0xf < local_40) {
      pcVar18 = (char *)CONCAT71(uStack_57,local_58);
    }
    cVar1 = *pcVar18;
    while (((cVar1 != '\x7f' && (cVar1 = *pcVar18, '\0' < cVar1)) &&
           ((ulonglong)(longlong)cVar1 < uVar15 - uVar20))) {
      uVar15 = uVar15 - (longlong)cVar1;
      if (local_68 < uVar15) goto LAB_140035e39;
      if (local_60 != local_68) {
        pppppppbVar22 = local_78;
        if (0xf < local_60) {
          pppppppbVar22 = (byte *******)local_78[0];
        }
        lVar14 = local_68 - uVar15;
        local_68 = local_68 + 1;
                    /* WARNING: Subroutine does not return */
        FUN_1404211c0((byte *)((longlong)pppppppbVar22 + uVar15) + 1,
                      (byte *)((longlong)pppppppbVar22 + uVar15),lVar14 + 1);
      }
      local_98 = 1;
      local_90 = uVar8;
      FUN_140038db0(local_78,1,cVar7,uVar15);
      if ('\0' < pcVar18[1]) {
        pcVar18 = pcVar18 + 1;
      }
      cVar1 = *pcVar18;
    }
  }
  uVar16 = *(ulonglong *)(param_4 + 0x28);
  if (((longlong)uVar16 < 1) || (uVar16 <= local_68)) {
    lVar14 = 0;
  }
  else {
    lVar14 = uVar16 - local_68;
  }
  uVar10 = *(uint *)(param_4 + 0x18) & 0x1c0;
  if (uVar10 == 0x40) {
    pppppppbVar22 = local_78;
    if (0xf < local_60) {
      pppppppbVar22 = (byte *******)local_78[0];
    }
    uVar8 = *param_3;
    plVar3 = *(longlong **)(param_3 + 8);
    for (uVar16 = param_7; uVar16 != 0; uVar16 = uVar16 - 1) {
      if (plVar3 == (longlong *)0x0) {
LAB_140035c8e:
        uVar8 = 1;
      }
      else {
        bVar9 = *(byte *)pppppppbVar22;
        if (*(longlong *)plVar3[8] == 0) {
LAB_140035c7d:
          uVar10 = (**(code **)(*plVar3 + 0x18))(plVar3,bVar9);
        }
        else {
          iVar2 = *(int *)plVar3[0xb];
          if (iVar2 < 1) goto LAB_140035c7d;
          *(int *)plVar3[0xb] = iVar2 + -1;
          pbVar23 = *(byte **)plVar3[8];
          *(byte **)plVar3[8] = pbVar23 + 1;
          uVar10 = (uint)bVar9;
          *pbVar23 = bVar9;
        }
        if (uVar10 == 0xffffffff) goto LAB_140035c8e;
      }
      pppppppbVar22 = (byte *******)((longlong)pppppppbVar22 + 1);
    }
  }
  else {
    uVar8 = *param_3;
    plVar3 = *(longlong **)(param_3 + 8);
    if (uVar10 == 0x100) {
      pppppppbVar22 = local_78;
      uVar16 = param_7;
      if (0xf < local_60) {
        pppppppbVar22 = (byte *******)local_78[0];
      }
      for (; uVar16 != 0; uVar16 = uVar16 - 1) {
        if (plVar3 == (longlong *)0x0) {
LAB_140035bba:
          uVar8 = 1;
        }
        else {
          bVar9 = *(byte *)pppppppbVar22;
          if (*(longlong *)plVar3[8] == 0) {
LAB_140035ba9:
            uVar10 = (**(code **)(*plVar3 + 0x18))(plVar3,bVar9);
          }
          else {
            iVar2 = *(int *)plVar3[0xb];
            if (iVar2 < 1) goto LAB_140035ba9;
            *(int *)plVar3[0xb] = iVar2 + -1;
            pbVar23 = *(byte **)plVar3[8];
            *(byte **)plVar3[8] = pbVar23 + 1;
            uVar10 = (uint)bVar9;
            *pbVar23 = bVar9;
          }
          if (uVar10 == 0xffffffff) goto LAB_140035bba;
        }
        pppppppbVar22 = (byte *******)((longlong)pppppppbVar22 + 1);
      }
      for (; lVar14 != 0; lVar14 = lVar14 + -1) {
        if (plVar3 == (longlong *)0x0) {
LAB_140035c14:
          uVar8 = 1;
        }
        else {
          if (*(longlong *)plVar3[8] == 0) {
LAB_140035c03:
            uVar10 = (**(code **)(*plVar3 + 0x18))(plVar3,param_5);
          }
          else {
            iVar2 = *(int *)plVar3[0xb];
            if (iVar2 < 1) goto LAB_140035c03;
            *(int *)plVar3[0xb] = iVar2 + -1;
            pbVar23 = *(byte **)plVar3[8];
            *(byte **)plVar3[8] = pbVar23 + 1;
            uVar10 = (uint)param_5;
            *pbVar23 = param_5;
          }
          if (uVar10 == 0xffffffff) goto LAB_140035c14;
        }
      }
      lVar14 = 0;
    }
    else {
      for (; lVar14 != 0; lVar14 = lVar14 + -1) {
        if (plVar3 == (longlong *)0x0) {
LAB_140035ad4:
          uVar8 = 1;
        }
        else {
          if (*(longlong *)plVar3[8] == 0) {
LAB_140035ac3:
            uVar10 = (**(code **)(*plVar3 + 0x18))(plVar3,param_5);
          }
          else {
            iVar2 = *(int *)plVar3[0xb];
            if (iVar2 < 1) goto LAB_140035ac3;
            *(int *)plVar3[0xb] = iVar2 + -1;
            pbVar23 = *(byte **)plVar3[8];
            *(byte **)plVar3[8] = pbVar23 + 1;
            uVar10 = (uint)param_5;
            *pbVar23 = param_5;
          }
          if (uVar10 == 0xffffffff) goto LAB_140035ad4;
        }
      }
      lVar14 = 0;
      pppppppbVar22 = local_78;
      uVar16 = param_7;
      if (0xf < local_60) {
        pppppppbVar22 = (byte *******)local_78[0];
      }
      for (; uVar16 != 0; uVar16 = uVar16 - 1) {
        if (plVar3 == (longlong *)0x0) {
LAB_140035b47:
          uVar8 = 1;
        }
        else {
          bVar9 = *(byte *)pppppppbVar22;
          if (*(longlong *)plVar3[8] == 0) {
LAB_140035b36:
            uVar10 = (**(code **)(*plVar3 + 0x18))(plVar3,bVar9);
          }
          else {
            iVar2 = *(int *)plVar3[0xb];
            if (iVar2 < 1) goto LAB_140035b36;
            *(int *)plVar3[0xb] = iVar2 + -1;
            pbVar23 = *(byte **)plVar3[8];
            *(byte **)plVar3[8] = pbVar23 + 1;
            uVar10 = (uint)bVar9;
            *pbVar23 = bVar9;
          }
          if (uVar10 == 0xffffffff) goto LAB_140035b47;
        }
        pppppppbVar22 = (byte *******)((longlong)pppppppbVar22 + 1);
      }
    }
  }
  pppppppbVar22 = local_78;
  if (0xf < local_60) {
    pppppppbVar22 = (byte *******)local_78[0];
  }
  pbVar23 = (byte *)((longlong)pppppppbVar22 + param_7);
  plVar3 = *(longlong **)(param_3 + 8);
  for (lVar21 = local_68 - param_7; lVar21 != 0; lVar21 = lVar21 + -1) {
    if (plVar3 == (longlong *)0x0) {
LAB_140035d08:
      uVar8 = 1;
    }
    else {
      bVar9 = *pbVar23;
      if (*(longlong *)plVar3[8] == 0) {
LAB_140035cf7:
        uVar10 = (**(code **)(*plVar3 + 0x18))(plVar3,bVar9);
      }
      else {
        iVar2 = *(int *)plVar3[0xb];
        if (iVar2 < 1) goto LAB_140035cf7;
        *(int *)plVar3[0xb] = iVar2 + -1;
        pbVar4 = *(byte **)plVar3[8];
        *(byte **)plVar3[8] = pbVar4 + 1;
        uVar10 = (uint)bVar9;
        *pbVar4 = bVar9;
      }
      if (uVar10 == 0xffffffff) goto LAB_140035d08;
    }
    pbVar23 = pbVar23 + 1;
  }
  *(undefined8 *)(param_4 + 0x28) = 0;
  for (; lVar14 != 0; lVar14 = lVar14 + -1) {
    if (plVar3 == (longlong *)0x0) {
LAB_140035d67:
      uVar8 = 1;
    }
    else {
      if (*(longlong *)plVar3[8] == 0) {
LAB_140035d56:
        uVar10 = (**(code **)(*plVar3 + 0x18))(plVar3,param_5);
      }
      else {
        iVar2 = *(int *)plVar3[0xb];
        if (iVar2 < 1) goto LAB_140035d56;
        *(int *)plVar3[0xb] = iVar2 + -1;
        pbVar23 = *(byte **)plVar3[8];
        *(byte **)plVar3[8] = pbVar23 + 1;
        uVar10 = (uint)param_5;
        *pbVar23 = param_5;
      }
      if (uVar10 == 0xffffffff) goto LAB_140035d67;
    }
  }
  *(undefined4 *)(param_2 + 1) = *(undefined4 *)(param_3 + 1);
  *(undefined2 *)(param_2 + 5) = *(undefined2 *)(param_3 + 5);
  param_2[7] = param_3[7];
  *param_2 = uVar8;
  *(longlong **)(param_2 + 8) = plVar3;
  if (0xf < local_40) {
    lVar21 = CONCAT71(uStack_57,local_58);
    uVar16 = local_40 + 1;
    lVar14 = lVar21;
    if (0xfff < uVar16) {
      lVar14 = *(longlong *)(lVar21 + -8);
      if (0x1f < (lVar21 - lVar14) - 8U) goto code_r0x000140035e32;
      uVar16 = local_40 + 0x28;
    }
    func_0x00014028b040(lVar14,uVar16);
  }
  uStack_48 = 0;
  local_40 = 0xf;
  local_58 = '\0';
  if (0xf < local_60) {
    uVar16 = local_60 + 1;
    pppppppbVar22 = (byte *******)local_78[0];
    if (0xfff < uVar16) {
      pppppppbVar22 = (byte *******)local_78[0][-1];
      if ((byte *)0x1f < (byte *)((longlong)local_78[0] + (-8 - (longlong)pppppppbVar22))) {
code_r0x000140035e32:
        pcVar6 = (code *)swi(0x29);
        (*pcVar6)(5);
        puVar17 = auStack_b0;
LAB_140035e39:
                    /* WARNING: Subroutine does not return */
        *(undefined **)(puVar17 + -8) = &UNK_140035e3e;
        FUN_140012a10();
      }
      uVar16 = local_60 + 0x28;
    }
    func_0x00014028b040(pppppppbVar22,uVar16);
  }
  return param_2;
}

