// Function: FUN_1400356e0
// Addr: 1400356e0
// Size: 1678 bytes


undefined1 *
FUN_1400356e0(undefined8 param_1,undefined1 *param_2,undefined1 *param_3,longlong param_4,
             byte param_5,char *param_6,ulonglong param_7,char param_8)

{
  char cVar1;
  int iVar2;
  longlong *plVar3;
  byte *pbVar4;
  bool bVar5;
  code *pcVar6;
  char cVar7;
  byte bVar8;
  byte bVar9;
  uint uVar10;
  ulonglong uVar11;
  undefined8 *puVar12;
  longlong *plVar13;
  longlong lVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  undefined1 *puVar17;
  undefined1 uVar18;
  char *pcVar19;
  byte *pbVar20;
  undefined *puVar21;
  ulonglong uVar22;
  longlong lVar23;
  byte *******pppppppbVar24;
  undefined1 auStack_b8 [8];
  undefined1 auStack_b0 [24];
  undefined8 local_98;
  byte local_90;
  undefined1 local_88 [8];
  longlong *local_80;
  byte ******local_78 [2];
  ulonglong local_68;
  ulonglong local_60;
  char local_58;
  undefined7 uStack_57;
  undefined8 local_48;
  ulonglong local_40;
  
  uVar16 = param_7;
  pcVar19 = param_6;
  puVar17 = auStack_b8;
  if ((param_7 == 0) || ((*param_6 - 0x2bU & 0xfd) != 0)) {
    uVar22 = 0;
    uVar15 = 2;
    lVar14 = 1;
  }
  else {
    uVar22 = 1;
    uVar15 = 3;
    lVar14 = 2;
  }
  if ((*(uint *)(param_4 + 0x18) & 0x3000) == 0x3000) {
    puVar21 = &DAT_140473fc0;
    bVar5 = uVar15 <= param_7;
    param_7 = uVar22;
    if (((bVar5) && (param_6[uVar22] == '0')) && ((param_6[lVar14] + 0xa8U & 0xdf) == 0)) {
      param_7 = uVar15;
    }
  }
  else {
    puVar21 = &DAT_140473fbc;
    param_7 = uVar22;
  }
  uVar22 = param_7;
  uVar11 = FUN_1402ca5f0(param_6,puVar21);
  param_6._0_1_ = 0x2e;
  param_6._1_1_ = 0;
  puVar12 = (undefined8 *)FUN_1402ca9c0();
  param_6._0_1_ = *(undefined1 *)*puVar12;
  uVar15 = FUN_1402ca5f0(pcVar19,&param_6);
  plVar3 = *(longlong **)(*(longlong *)(param_4 + 0x40) + 8);
  local_80 = plVar3;
  (**(code **)(*plVar3 + 8))(plVar3);
  plVar13 = (longlong *)FUN_140013d40(local_88);
  puVar12 = (undefined8 *)(**(code **)(*plVar3 + 0x10))(plVar3);
  if (puVar12 != (undefined8 *)0x0) {
    (**(code **)*puVar12)(puVar12,1);
  }
  FUN_140016940(local_78,uVar16,0);
  pppppppbVar24 = local_78;
  if (0xf < local_60) {
    pppppppbVar24 = (byte *******)local_78[0];
  }
  (**(code **)(*plVar13 + 0x38))(plVar13,pcVar19,pcVar19 + uVar16,pppppppbVar24);
  plVar3 = *(longlong **)(*(longlong *)(param_4 + 0x40) + 8);
  local_80 = plVar3;
  (**(code **)(*plVar3 + 8))(plVar3);
  plVar13 = (longlong *)FUN_140035d70(local_88);
  puVar12 = (undefined8 *)(**(code **)(*plVar3 + 0x10))(plVar3);
  if (puVar12 != (undefined8 *)0x0) {
    (**(code **)*puVar12)(puVar12,1);
  }
  (**(code **)(*plVar13 + 0x28))(plVar13,&local_58);
  bVar8 = (**(code **)(*plVar13 + 0x20))(plVar13);
  if (uVar15 != uVar16) {
    bVar9 = (**(code **)(*plVar13 + 0x18))(plVar13);
    pppppppbVar24 = local_78;
    if (0xf < local_60) {
      pppppppbVar24 = (byte *******)local_78[0];
    }
    *(byte *)((longlong)pppppppbVar24 + uVar15) = bVar9;
  }
  cVar7 = param_8;
  if (param_8 != '\0') {
    if (uVar15 == uVar16) {
      uVar15 = uVar11;
    }
    pcVar19 = &local_58;
    if (0xf < local_40) {
      pcVar19 = (char *)CONCAT71(uStack_57,local_58);
    }
    cVar1 = *pcVar19;
    while (((cVar1 != '\x7f' && (cVar1 = *pcVar19, '\0' < cVar1)) &&
           ((ulonglong)(longlong)cVar1 < uVar15 - uVar22))) {
      uVar15 = uVar15 - (longlong)cVar1;
      if (local_68 < uVar15) goto LAB_140035d69;
      if (local_60 == local_68) {
        local_98 = 1;
        local_90 = bVar8;
        FUN_140038ce0(local_78,1,cVar7,uVar15);
      }
      else {
        pppppppbVar24 = local_78;
        if (0xf < local_60) {
          pppppppbVar24 = (byte *******)local_78[0];
        }
        lVar14 = local_68 - uVar15;
        pbVar20 = (byte *)((longlong)pppppppbVar24 + uVar15);
        local_68 = local_68 + 1;
        FUN_1404210f0(pbVar20 + 1,pbVar20,lVar14 + 1);
        *pbVar20 = bVar8;
      }
      if ('\0' < pcVar19[1]) {
        pcVar19 = pcVar19 + 1;
      }
      cVar1 = *pcVar19;
    }
  }
  uVar15 = local_68;
  uVar16 = *(ulonglong *)(param_4 + 0x28);
  if (((longlong)uVar16 < 1) || (uVar16 <= local_68)) {
    lVar14 = 0;
  }
  else {
    lVar14 = uVar16 - local_68;
  }
  uVar10 = *(uint *)(param_4 + 0x18) & 0x1c0;
  if (uVar10 == 0x40) {
    pppppppbVar24 = local_78;
    if (0xf < local_60) {
      pppppppbVar24 = (byte *******)local_78[0];
    }
    uVar18 = *param_3;
    plVar3 = *(longlong **)(param_3 + 8);
    for (uVar16 = param_7; uVar16 != 0; uVar16 = uVar16 - 1) {
      if (plVar3 == (longlong *)0x0) {
LAB_140035bbe:
        uVar18 = 1;
      }
      else {
        bVar8 = *(byte *)pppppppbVar24;
        if (*(longlong *)plVar3[8] == 0) {
LAB_140035bad:
          uVar10 = (**(code **)(*plVar3 + 0x18))(plVar3,bVar8);
        }
        else {
          iVar2 = *(int *)plVar3[0xb];
          if (iVar2 < 1) goto LAB_140035bad;
          *(int *)plVar3[0xb] = iVar2 + -1;
          pbVar20 = *(byte **)plVar3[8];
          *(byte **)plVar3[8] = pbVar20 + 1;
          uVar10 = (uint)bVar8;
          *pbVar20 = bVar8;
        }
        if (uVar10 == 0xffffffff) goto LAB_140035bbe;
      }
      pppppppbVar24 = (byte *******)((longlong)pppppppbVar24 + 1);
    }
  }
  else {
    uVar18 = *param_3;
    plVar3 = *(longlong **)(param_3 + 8);
    if (uVar10 == 0x100) {
      pppppppbVar24 = local_78;
      uVar16 = param_7;
      if (0xf < local_60) {
        pppppppbVar24 = (byte *******)local_78[0];
      }
      for (; uVar16 != 0; uVar16 = uVar16 - 1) {
        if (plVar3 == (longlong *)0x0) {
LAB_140035aea:
          uVar18 = 1;
        }
        else {
          bVar8 = *(byte *)pppppppbVar24;
          if (*(longlong *)plVar3[8] == 0) {
LAB_140035ad9:
            uVar10 = (**(code **)(*plVar3 + 0x18))(plVar3,bVar8);
          }
          else {
            iVar2 = *(int *)plVar3[0xb];
            if (iVar2 < 1) goto LAB_140035ad9;
            *(int *)plVar3[0xb] = iVar2 + -1;
            pbVar20 = *(byte **)plVar3[8];
            *(byte **)plVar3[8] = pbVar20 + 1;
            uVar10 = (uint)bVar8;
            *pbVar20 = bVar8;
          }
          if (uVar10 == 0xffffffff) goto LAB_140035aea;
        }
        pppppppbVar24 = (byte *******)((longlong)pppppppbVar24 + 1);
      }
      for (; lVar14 != 0; lVar14 = lVar14 + -1) {
        if (plVar3 == (longlong *)0x0) {
LAB_140035b44:
          uVar18 = 1;
        }
        else {
          if (*(longlong *)plVar3[8] == 0) {
LAB_140035b33:
            uVar10 = (**(code **)(*plVar3 + 0x18))(plVar3,param_5);
          }
          else {
            iVar2 = *(int *)plVar3[0xb];
            if (iVar2 < 1) goto LAB_140035b33;
            *(int *)plVar3[0xb] = iVar2 + -1;
            pbVar20 = *(byte **)plVar3[8];
            *(byte **)plVar3[8] = pbVar20 + 1;
            uVar10 = (uint)param_5;
            *pbVar20 = param_5;
          }
          if (uVar10 == 0xffffffff) goto LAB_140035b44;
        }
      }
      lVar14 = 0;
    }
    else {
      for (; lVar14 != 0; lVar14 = lVar14 + -1) {
        if (plVar3 == (longlong *)0x0) {
LAB_140035a04:
          uVar18 = 1;
        }
        else {
          if (*(longlong *)plVar3[8] == 0) {
LAB_1400359f3:
            uVar10 = (**(code **)(*plVar3 + 0x18))(plVar3,param_5);
          }
          else {
            iVar2 = *(int *)plVar3[0xb];
            if (iVar2 < 1) goto LAB_1400359f3;
            *(int *)plVar3[0xb] = iVar2 + -1;
            pbVar20 = *(byte **)plVar3[8];
            *(byte **)plVar3[8] = pbVar20 + 1;
            uVar10 = (uint)param_5;
            *pbVar20 = param_5;
          }
          if (uVar10 == 0xffffffff) goto LAB_140035a04;
        }
      }
      lVar14 = 0;
      pppppppbVar24 = local_78;
      uVar16 = param_7;
      if (0xf < local_60) {
        pppppppbVar24 = (byte *******)local_78[0];
      }
      for (; uVar16 != 0; uVar16 = uVar16 - 1) {
        if (plVar3 == (longlong *)0x0) {
LAB_140035a77:
          uVar18 = 1;
        }
        else {
          bVar8 = *(byte *)pppppppbVar24;
          if (*(longlong *)plVar3[8] == 0) {
LAB_140035a66:
            uVar10 = (**(code **)(*plVar3 + 0x18))(plVar3,bVar8);
          }
          else {
            iVar2 = *(int *)plVar3[0xb];
            if (iVar2 < 1) goto LAB_140035a66;
            *(int *)plVar3[0xb] = iVar2 + -1;
            pbVar20 = *(byte **)plVar3[8];
            *(byte **)plVar3[8] = pbVar20 + 1;
            uVar10 = (uint)bVar8;
            *pbVar20 = bVar8;
          }
          if (uVar10 == 0xffffffff) goto LAB_140035a77;
        }
        pppppppbVar24 = (byte *******)((longlong)pppppppbVar24 + 1);
      }
    }
  }
  pppppppbVar24 = local_78;
  if (0xf < local_60) {
    pppppppbVar24 = (byte *******)local_78[0];
  }
  pbVar20 = (byte *)((longlong)pppppppbVar24 + param_7);
  plVar3 = *(longlong **)(param_3 + 8);
  for (lVar23 = uVar15 - param_7; lVar23 != 0; lVar23 = lVar23 + -1) {
    if (plVar3 == (longlong *)0x0) {
LAB_140035c38:
      uVar18 = 1;
    }
    else {
      bVar8 = *pbVar20;
      if (*(longlong *)plVar3[8] == 0) {
LAB_140035c27:
        uVar10 = (**(code **)(*plVar3 + 0x18))(plVar3,bVar8);
      }
      else {
        iVar2 = *(int *)plVar3[0xb];
        if (iVar2 < 1) goto LAB_140035c27;
        *(int *)plVar3[0xb] = iVar2 + -1;
        pbVar4 = *(byte **)plVar3[8];
        *(byte **)plVar3[8] = pbVar4 + 1;
        uVar10 = (uint)bVar8;
        *pbVar4 = bVar8;
      }
      if (uVar10 == 0xffffffff) goto LAB_140035c38;
    }
    pbVar20 = pbVar20 + 1;
  }
  *(undefined8 *)(param_4 + 0x28) = 0;
  for (; lVar14 != 0; lVar14 = lVar14 + -1) {
    if (plVar3 == (longlong *)0x0) {
LAB_140035c97:
      uVar18 = 1;
    }
    else {
      if (*(longlong *)plVar3[8] == 0) {
LAB_140035c86:
        uVar10 = (**(code **)(*plVar3 + 0x18))(plVar3,param_5);
      }
      else {
        iVar2 = *(int *)plVar3[0xb];
        if (iVar2 < 1) goto LAB_140035c86;
        *(int *)plVar3[0xb] = iVar2 + -1;
        pbVar20 = *(byte **)plVar3[8];
        *(byte **)plVar3[8] = pbVar20 + 1;
        uVar10 = (uint)param_5;
        *pbVar20 = param_5;
      }
      if (uVar10 == 0xffffffff) goto LAB_140035c97;
    }
  }
  *(undefined4 *)(param_2 + 1) = *(undefined4 *)(param_3 + 1);
  *(undefined2 *)(param_2 + 5) = *(undefined2 *)(param_3 + 5);
  param_2[7] = param_3[7];
  *param_2 = uVar18;
  *(longlong **)(param_2 + 8) = plVar3;
  if (0xf < local_40) {
    lVar23 = CONCAT71(uStack_57,local_58);
    uVar16 = local_40 + 1;
    lVar14 = lVar23;
    if (0xfff < uVar16) {
      lVar14 = *(longlong *)(lVar23 + -8);
      if (0x1f < (lVar23 - lVar14) - 8U) goto LAB_140035d62;
      uVar16 = local_40 + 0x28;
    }
    thunk_FUN_14028af80(lVar14,uVar16);
  }
  local_48 = 0;
  local_40 = 0xf;
  local_58 = '\0';
  if (0xf < local_60) {
    uVar16 = local_60 + 1;
    pppppppbVar24 = (byte *******)local_78[0];
    if (0xfff < uVar16) {
      pppppppbVar24 = (byte *******)local_78[0][-1];
      if ((byte *)0x1f < (byte *)((longlong)local_78[0] + (-8 - (longlong)pppppppbVar24))) {
LAB_140035d62:
        pcVar6 = (code *)swi(0x29);
        (*pcVar6)(5);
        puVar17 = auStack_b0;
LAB_140035d69:
                    /* WARNING: Subroutine does not return */
        *(undefined **)(puVar17 + -8) = &UNK_140035d6e;
        FUN_140012940();
      }
      uVar16 = local_60 + 0x28;
    }
    thunk_FUN_14028af80(pppppppbVar24,uVar16);
  }
  return param_2;
}

