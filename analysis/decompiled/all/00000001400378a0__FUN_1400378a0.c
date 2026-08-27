// Function: FUN_1400378a0
// Addr: 1400378a0
// Size: 1559 bytes


undefined1 *
FUN_1400378a0(undefined8 param_1,undefined1 *param_2,undefined1 *param_3,ulonglong param_4,
             byte param_5,char *param_6,ulonglong param_7)

{
  char cVar1;
  int iVar2;
  longlong *plVar3;
  byte *pbVar4;
  code *pcVar5;
  byte bVar6;
  uint uVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  longlong lVar10;
  byte *******pppppppbVar11;
  ulonglong uVar12;
  undefined1 *puVar13;
  undefined1 uVar14;
  char *pcVar15;
  byte *pbVar16;
  ulonglong uVar17;
  longlong lVar18;
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
  
  pcVar15 = param_6;
  puVar13 = auStack_b8;
  if ((param_7 == 0) || ((*param_6 - 0x2bU & 0xfd) != 0)) {
    uVar17 = 0;
    uVar12 = 2;
    lVar10 = 1;
  }
  else {
    uVar17 = 1;
    uVar12 = 3;
    lVar10 = 2;
  }
  if (((((*(uint *)(param_4 + 0x18) & 0xe00) == 0x800) && (uVar12 <= param_7)) &&
      (param_6[uVar17] == '0')) && ((param_6[lVar10] + 0xa8U & 0xdf) == 0)) {
    uVar17 = uVar12;
  }
  param_6 = (char *)uVar17;
  plVar3 = *(longlong **)(*(longlong *)(param_4 + 0x40) + 8);
  local_80 = plVar3;
  (**(code **)(*plVar3 + 8))(plVar3);
  plVar8 = (longlong *)FUN_140013d40(local_88);
  puVar9 = (undefined8 *)(**(code **)(*plVar3 + 0x10))(plVar3);
  if (puVar9 != (undefined8 *)0x0) {
    (**(code **)*puVar9)(puVar9,1);
  }
  FUN_140016940(local_78,param_7,0);
  pppppppbVar11 = local_78;
  if (0xf < local_60) {
    pppppppbVar11 = (byte *******)local_78[0];
  }
  (**(code **)(*plVar8 + 0x38))(plVar8,pcVar15,pcVar15 + param_7,pppppppbVar11);
  plVar3 = *(longlong **)(*(longlong *)(param_4 + 0x40) + 8);
  local_80 = plVar3;
  (**(code **)(*plVar3 + 8))(plVar3);
  plVar8 = (longlong *)FUN_140035d70(local_88);
  puVar9 = (undefined8 *)(**(code **)(*plVar3 + 0x10))(plVar3);
  if (puVar9 != (undefined8 *)0x0) {
    (**(code **)*puVar9)(puVar9,1);
  }
  (**(code **)(*plVar8 + 0x28))(plVar8,&local_58);
  pcVar15 = &local_58;
  if (0xf < local_40) {
    pcVar15 = (char *)CONCAT71(uStack_57,local_58);
  }
  if ((byte)(*pcVar15 - 1U) < 0x7e) {
    bVar6 = (**(code **)(*plVar8 + 0x20))(plVar8);
    cVar1 = *pcVar15;
    while (((cVar1 != '\x7f' && (cVar1 = *pcVar15, '\0' < cVar1)) &&
           ((ulonglong)(longlong)cVar1 < param_7 - (longlong)param_6))) {
      param_7 = param_7 - (longlong)cVar1;
      if (local_68 < param_7) goto LAB_140037eb2;
      if (local_60 == local_68) {
        local_98 = 1;
        local_90 = bVar6;
        FUN_140038ce0(local_78,1,param_4 & 0xff,param_7);
      }
      else {
        pppppppbVar11 = local_78;
        if (0xf < local_60) {
          pppppppbVar11 = (byte *******)local_78[0];
        }
        lVar10 = local_68 - param_7;
        pbVar16 = (byte *)((longlong)pppppppbVar11 + param_7);
        local_68 = local_68 + 1;
        FUN_1404210f0(pbVar16 + 1,pbVar16,lVar10 + 1);
        *pbVar16 = bVar6;
      }
      if ('\0' < pcVar15[1]) {
        pcVar15 = pcVar15 + 1;
      }
      cVar1 = *pcVar15;
    }
  }
  uVar12 = local_68;
  uVar17 = *(ulonglong *)(param_4 + 0x28);
  if (((longlong)uVar17 < 1) || (uVar17 <= local_68)) {
    lVar10 = 0;
  }
  else {
    lVar10 = uVar17 - local_68;
  }
  uVar7 = *(uint *)(param_4 + 0x18) & 0x1c0;
  uVar14 = *param_3;
  plVar3 = *(longlong **)(param_3 + 8);
  if (uVar7 == 0x40) {
    pppppppbVar11 = local_78;
    uVar17 = (ulonglong)param_6;
    if (0xf < local_60) {
      pppppppbVar11 = (byte *******)local_78[0];
    }
    for (; uVar17 != 0; uVar17 = uVar17 - 1) {
      if (plVar3 == (longlong *)0x0) {
LAB_140037d08:
        uVar14 = 1;
      }
      else {
        bVar6 = *(byte *)pppppppbVar11;
        if (*(longlong *)plVar3[8] == 0) {
LAB_140037cf7:
          uVar7 = (**(code **)(*plVar3 + 0x18))(plVar3,bVar6);
        }
        else {
          iVar2 = *(int *)plVar3[0xb];
          if (iVar2 < 1) goto LAB_140037cf7;
          *(int *)plVar3[0xb] = iVar2 + -1;
          pbVar16 = *(byte **)plVar3[8];
          *(byte **)plVar3[8] = pbVar16 + 1;
          uVar7 = (uint)bVar6;
          *pbVar16 = bVar6;
        }
        if (uVar7 == 0xffffffff) goto LAB_140037d08;
      }
      pppppppbVar11 = (byte *******)((longlong)pppppppbVar11 + 1);
    }
  }
  else if (uVar7 == 0x100) {
    pppppppbVar11 = local_78;
    uVar17 = (ulonglong)param_6;
    if (0xf < local_60) {
      pppppppbVar11 = (byte *******)local_78[0];
    }
    for (; uVar17 != 0; uVar17 = uVar17 - 1) {
      if (plVar3 == (longlong *)0x0) {
LAB_140037c3e:
        uVar14 = 1;
      }
      else {
        bVar6 = *(byte *)pppppppbVar11;
        if (*(longlong *)plVar3[8] == 0) {
LAB_140037c2d:
          uVar7 = (**(code **)(*plVar3 + 0x18))(plVar3,bVar6);
        }
        else {
          iVar2 = *(int *)plVar3[0xb];
          if (iVar2 < 1) goto LAB_140037c2d;
          *(int *)plVar3[0xb] = iVar2 + -1;
          pbVar16 = *(byte **)plVar3[8];
          *(byte **)plVar3[8] = pbVar16 + 1;
          uVar7 = (uint)bVar6;
          *pbVar16 = bVar6;
        }
        if (uVar7 == 0xffffffff) goto LAB_140037c3e;
      }
      pppppppbVar11 = (byte *******)((longlong)pppppppbVar11 + 1);
    }
    for (; lVar10 != 0; lVar10 = lVar10 + -1) {
      if (plVar3 == (longlong *)0x0) {
LAB_140037c94:
        uVar14 = 1;
      }
      else {
        if (*(longlong *)plVar3[8] == 0) {
LAB_140037c83:
          uVar7 = (**(code **)(*plVar3 + 0x18))(plVar3,param_5);
        }
        else {
          iVar2 = *(int *)plVar3[0xb];
          if (iVar2 < 1) goto LAB_140037c83;
          *(int *)plVar3[0xb] = iVar2 + -1;
          pbVar16 = *(byte **)plVar3[8];
          *(byte **)plVar3[8] = pbVar16 + 1;
          uVar7 = (uint)param_5;
          *pbVar16 = param_5;
        }
        if (uVar7 == 0xffffffff) goto LAB_140037c94;
      }
    }
    lVar10 = 0;
  }
  else {
    for (; lVar10 != 0; lVar10 = lVar10 + -1) {
      if (plVar3 == (longlong *)0x0) {
LAB_140037b5b:
        uVar14 = 1;
      }
      else {
        if (*(longlong *)plVar3[8] == 0) {
LAB_140037b4a:
          uVar7 = (**(code **)(*plVar3 + 0x18))(plVar3,param_5);
        }
        else {
          iVar2 = *(int *)plVar3[0xb];
          if (iVar2 < 1) goto LAB_140037b4a;
          *(int *)plVar3[0xb] = iVar2 + -1;
          pbVar16 = *(byte **)plVar3[8];
          *(byte **)plVar3[8] = pbVar16 + 1;
          uVar7 = (uint)param_5;
          *pbVar16 = param_5;
        }
        if (uVar7 == 0xffffffff) goto LAB_140037b5b;
      }
    }
    lVar10 = 0;
    pppppppbVar11 = local_78;
    uVar17 = (ulonglong)param_6;
    if (0xf < local_60) {
      pppppppbVar11 = (byte *******)local_78[0];
    }
    for (; uVar17 != 0; uVar17 = uVar17 - 1) {
      if (plVar3 == (longlong *)0x0) {
LAB_140037bcb:
        uVar14 = 1;
      }
      else {
        bVar6 = *(byte *)pppppppbVar11;
        if (*(longlong *)plVar3[8] == 0) {
LAB_140037bba:
          uVar7 = (**(code **)(*plVar3 + 0x18))(plVar3,bVar6);
        }
        else {
          iVar2 = *(int *)plVar3[0xb];
          if (iVar2 < 1) goto LAB_140037bba;
          *(int *)plVar3[0xb] = iVar2 + -1;
          pbVar16 = *(byte **)plVar3[8];
          *(byte **)plVar3[8] = pbVar16 + 1;
          uVar7 = (uint)bVar6;
          *pbVar16 = bVar6;
        }
        if (uVar7 == 0xffffffff) goto LAB_140037bcb;
      }
      pppppppbVar11 = (byte *******)((longlong)pppppppbVar11 + 1);
    }
  }
  pppppppbVar11 = local_78;
  if (0xf < local_60) {
    pppppppbVar11 = (byte *******)local_78[0];
  }
  pbVar16 = (byte *)((longlong)pppppppbVar11 + (longlong)param_6);
  plVar3 = *(longlong **)(param_3 + 8);
  for (lVar18 = uVar12 - (longlong)param_6; lVar18 != 0; lVar18 = lVar18 + -1) {
    if (plVar3 == (longlong *)0x0) {
LAB_140037d7e:
      uVar14 = 1;
    }
    else {
      bVar6 = *pbVar16;
      if (*(longlong *)plVar3[8] == 0) {
LAB_140037d6d:
        uVar7 = (**(code **)(*plVar3 + 0x18))(plVar3,bVar6);
      }
      else {
        iVar2 = *(int *)plVar3[0xb];
        if (iVar2 < 1) goto LAB_140037d6d;
        *(int *)plVar3[0xb] = iVar2 + -1;
        pbVar4 = *(byte **)plVar3[8];
        *(byte **)plVar3[8] = pbVar4 + 1;
        uVar7 = (uint)bVar6;
        *pbVar4 = bVar6;
      }
      if (uVar7 == 0xffffffff) goto LAB_140037d7e;
    }
    pbVar16 = pbVar16 + 1;
  }
  *(undefined8 *)(param_4 + 0x28) = 0;
  for (; lVar10 != 0; lVar10 = lVar10 + -1) {
    if (plVar3 == (longlong *)0x0) {
LAB_140037de3:
      uVar14 = 1;
    }
    else {
      if (*(longlong *)plVar3[8] == 0) {
LAB_140037dd2:
        uVar7 = (**(code **)(*plVar3 + 0x18))(plVar3,param_5);
      }
      else {
        iVar2 = *(int *)plVar3[0xb];
        if (iVar2 < 1) goto LAB_140037dd2;
        *(int *)plVar3[0xb] = iVar2 + -1;
        pbVar16 = *(byte **)plVar3[8];
        *(byte **)plVar3[8] = pbVar16 + 1;
        uVar7 = (uint)param_5;
        *pbVar16 = param_5;
      }
      if (uVar7 == 0xffffffff) goto LAB_140037de3;
    }
  }
  *(undefined4 *)(param_2 + 1) = *(undefined4 *)(param_3 + 1);
  *(undefined2 *)(param_2 + 5) = *(undefined2 *)(param_3 + 5);
  param_2[7] = param_3[7];
  *param_2 = uVar14;
  *(longlong **)(param_2 + 8) = plVar3;
  if (0xf < local_40) {
    lVar18 = CONCAT71(uStack_57,local_58);
    uVar17 = local_40 + 1;
    lVar10 = lVar18;
    if (0xfff < uVar17) {
      lVar10 = *(longlong *)(lVar18 + -8);
      if (0x1f < (lVar18 - lVar10) - 8U) goto LAB_140037eab;
      uVar17 = local_40 + 0x28;
    }
    thunk_FUN_14028af80(lVar10,uVar17);
  }
  local_48 = 0;
  local_40 = 0xf;
  local_58 = '\0';
  if (0xf < local_60) {
    uVar17 = local_60 + 1;
    pppppppbVar11 = (byte *******)local_78[0];
    if (0xfff < uVar17) {
      pppppppbVar11 = (byte *******)local_78[0][-1];
      if ((byte *)0x1f < (byte *)((longlong)local_78[0] + (-8 - (longlong)pppppppbVar11))) {
LAB_140037eab:
        pcVar5 = (code *)swi(0x29);
        (*pcVar5)(5);
        puVar13 = auStack_b0;
LAB_140037eb2:
                    /* WARNING: Subroutine does not return */
        *(undefined **)(puVar13 + -8) = &UNK_140037eb7;
        FUN_140012940();
      }
      uVar17 = local_60 + 0x28;
    }
    thunk_FUN_14028af80(pppppppbVar11,uVar17);
  }
  return param_2;
}

