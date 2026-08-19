// Function: FUN_140037970
// Addr: 140037970
// Size: 1342 bytes


undefined1 *
FUN_140037970(undefined8 param_1,undefined1 *param_2,undefined1 *param_3,ulonglong param_4,
             byte param_5,char *param_6,ulonglong param_7)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  longlong *plVar4;
  byte *pbVar5;
  code *pcVar6;
  undefined1 uVar7;
  uint uVar8;
  longlong *plVar9;
  undefined8 *puVar10;
  longlong lVar11;
  byte *******pppppppbVar12;
  ulonglong uVar13;
  undefined1 *puVar14;
  char *pcVar15;
  ulonglong uVar16;
  longlong lVar17;
  byte *pbVar18;
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
  
  pcVar15 = param_6;
  puVar14 = auStack_b8;
  if ((param_7 == 0) || ((*param_6 - 0x2bU & 0xfd) != 0)) {
    uVar16 = 0;
    uVar13 = 2;
    lVar11 = 1;
  }
  else {
    uVar16 = 1;
    uVar13 = 3;
    lVar11 = 2;
  }
  if (((((*(uint *)(param_4 + 0x18) & 0xe00) == 0x800) && (uVar13 <= param_7)) &&
      (param_6[uVar16] == '0')) && ((param_6[lVar11] + 0xa8U & 0xdf) == 0)) {
    uVar16 = uVar13;
  }
  param_6 = (char *)uVar16;
  plVar4 = *(longlong **)(*(longlong *)(param_4 + 0x40) + 8);
  local_80 = plVar4;
  (**(code **)(*plVar4 + 8))(plVar4);
  plVar9 = (longlong *)FUN_140013e10(local_88);
  puVar10 = (undefined8 *)(**(code **)(*plVar4 + 0x10))(plVar4);
  if (puVar10 != (undefined8 *)0x0) {
    (**(code **)*puVar10)(puVar10,1);
  }
  FUN_140016a10(local_78,param_7,0);
  pppppppbVar12 = local_78;
  if (0xf < local_60) {
    pppppppbVar12 = (byte *******)local_78[0];
  }
  (**(code **)(*plVar9 + 0x38))(plVar9,pcVar15,pcVar15 + param_7,pppppppbVar12);
  plVar4 = *(longlong **)(*(longlong *)(param_4 + 0x40) + 8);
  local_80 = plVar4;
  (**(code **)(*plVar4 + 8))(plVar4);
  plVar9 = (longlong *)FUN_140035e40(local_88);
  puVar10 = (undefined8 *)(**(code **)(*plVar4 + 0x10))(plVar4);
  if (puVar10 != (undefined8 *)0x0) {
    (**(code **)*puVar10)(puVar10,1);
  }
  (**(code **)(*plVar9 + 0x28))(plVar9,&local_58);
  pcVar15 = &local_58;
  if (0xf < local_40) {
    pcVar15 = (char *)CONCAT71(uStack_57,local_58);
  }
  if ((byte)(*pcVar15 - 1U) < 0x7e) {
    uVar7 = (**(code **)(*plVar9 + 0x20))(plVar9);
    cVar1 = *pcVar15;
    while (((cVar1 != '\x7f' && (cVar1 = *pcVar15, '\0' < cVar1)) &&
           ((ulonglong)(longlong)cVar1 < param_7 - (longlong)param_6))) {
      param_7 = param_7 - (longlong)cVar1;
      if (local_68 < param_7) goto UNWIND_INFO_140037eb8_UnwindCodes_99__OffsetInProlog;
      if (local_60 != local_68) {
        pppppppbVar12 = local_78;
        if (0xf < local_60) {
          pppppppbVar12 = (byte *******)local_78[0];
        }
        lVar11 = local_68 - param_7;
        local_68 = local_68 + 1;
                    /* WARNING: Subroutine does not return */
        FUN_1404211c0((byte *)((longlong)pppppppbVar12 + param_7) + 1,
                      (byte *)((longlong)pppppppbVar12 + param_7),lVar11 + 1);
      }
      local_98 = 1;
      local_90 = uVar7;
      FUN_140038db0(local_78,1,param_4 & 0xff,param_7);
      if ('\0' < pcVar15[1]) {
        pcVar15 = pcVar15 + 1;
      }
      cVar1 = *pcVar15;
    }
  }
  uVar16 = *(ulonglong *)(param_4 + 0x28);
  if (((longlong)uVar16 < 1) || (uVar16 <= local_68)) {
    lVar11 = 0;
  }
  else {
    lVar11 = uVar16 - local_68;
  }
  uVar8 = *(uint *)(param_4 + 0x18) & 0x1c0;
  uVar7 = *param_3;
  plVar4 = *(longlong **)(param_3 + 8);
  if (uVar8 == 0x40) {
    pppppppbVar12 = local_78;
    uVar16 = (ulonglong)param_6;
    if (0xf < local_60) {
      pppppppbVar12 = (byte *******)local_78[0];
    }
    for (; uVar16 != 0; uVar16 = uVar16 - 1) {
      if (plVar4 == (longlong *)0x0) {
LAB_140037dd8:
        uVar7 = 1;
      }
      else {
        bVar2 = *(byte *)pppppppbVar12;
        if (*(longlong *)plVar4[8] == 0) {
LAB_140037dc7:
          uVar8 = (**(code **)(*plVar4 + 0x18))(plVar4,bVar2);
        }
        else {
          iVar3 = *(int *)plVar4[0xb];
          if (iVar3 < 1) goto LAB_140037dc7;
          *(int *)plVar4[0xb] = iVar3 + -1;
          pbVar18 = *(byte **)plVar4[8];
          *(byte **)plVar4[8] = pbVar18 + 1;
          uVar8 = (uint)bVar2;
          *pbVar18 = bVar2;
        }
        if (uVar8 == 0xffffffff) goto LAB_140037dd8;
      }
      pppppppbVar12 = (byte *******)((longlong)pppppppbVar12 + 1);
    }
  }
  else if (uVar8 == 0x100) {
    pppppppbVar12 = local_78;
    uVar16 = (ulonglong)param_6;
    if (0xf < local_60) {
      pppppppbVar12 = (byte *******)local_78[0];
    }
    for (; uVar16 != 0; uVar16 = uVar16 - 1) {
      if (plVar4 == (longlong *)0x0) {
LAB_140037d0e:
        uVar7 = 1;
      }
      else {
        bVar2 = *(byte *)pppppppbVar12;
        if (*(longlong *)plVar4[8] == 0) {
LAB_140037cfd:
          uVar8 = (**(code **)(*plVar4 + 0x18))(plVar4,bVar2);
        }
        else {
          iVar3 = *(int *)plVar4[0xb];
          if (iVar3 < 1) goto LAB_140037cfd;
          *(int *)plVar4[0xb] = iVar3 + -1;
          pbVar18 = *(byte **)plVar4[8];
          *(byte **)plVar4[8] = pbVar18 + 1;
          uVar8 = (uint)bVar2;
          *pbVar18 = bVar2;
        }
        if (uVar8 == 0xffffffff) goto LAB_140037d0e;
      }
      pppppppbVar12 = (byte *******)((longlong)pppppppbVar12 + 1);
    }
    for (; lVar11 != 0; lVar11 = lVar11 + -1) {
      if (plVar4 == (longlong *)0x0) {
LAB_140037d64:
        uVar7 = 1;
      }
      else {
        if (*(longlong *)plVar4[8] == 0) {
LAB_140037d53:
          uVar8 = (**(code **)(*plVar4 + 0x18))(plVar4,param_5);
        }
        else {
          iVar3 = *(int *)plVar4[0xb];
          if (iVar3 < 1) goto LAB_140037d53;
          *(int *)plVar4[0xb] = iVar3 + -1;
          pbVar18 = *(byte **)plVar4[8];
          *(byte **)plVar4[8] = pbVar18 + 1;
          uVar8 = (uint)param_5;
          *pbVar18 = param_5;
        }
        if (uVar8 == 0xffffffff) goto LAB_140037d64;
      }
    }
    lVar11 = 0;
  }
  else {
    for (; lVar11 != 0; lVar11 = lVar11 + -1) {
      if (plVar4 == (longlong *)0x0) {
LAB_140037c2b:
        uVar7 = 1;
      }
      else {
        if (*(longlong *)plVar4[8] == 0) {
LAB_140037c1a:
          uVar8 = (**(code **)(*plVar4 + 0x18))(plVar4,param_5);
        }
        else {
          iVar3 = *(int *)plVar4[0xb];
          if (iVar3 < 1) goto LAB_140037c1a;
          *(int *)plVar4[0xb] = iVar3 + -1;
          pbVar18 = *(byte **)plVar4[8];
          *(byte **)plVar4[8] = pbVar18 + 1;
          uVar8 = (uint)param_5;
          *pbVar18 = param_5;
        }
        if (uVar8 == 0xffffffff) goto LAB_140037c2b;
      }
    }
    lVar11 = 0;
    pppppppbVar12 = local_78;
    uVar16 = (ulonglong)param_6;
    if (0xf < local_60) {
      pppppppbVar12 = (byte *******)local_78[0];
    }
    for (; uVar16 != 0; uVar16 = uVar16 - 1) {
      if (plVar4 == (longlong *)0x0) {
LAB_140037c9b:
        uVar7 = 1;
      }
      else {
        bVar2 = *(byte *)pppppppbVar12;
        if (*(longlong *)plVar4[8] == 0) {
LAB_140037c8a:
          uVar8 = (**(code **)(*plVar4 + 0x18))(plVar4,bVar2);
        }
        else {
          iVar3 = *(int *)plVar4[0xb];
          if (iVar3 < 1) goto LAB_140037c8a;
          *(int *)plVar4[0xb] = iVar3 + -1;
          pbVar18 = *(byte **)plVar4[8];
          *(byte **)plVar4[8] = pbVar18 + 1;
          uVar8 = (uint)bVar2;
          *pbVar18 = bVar2;
        }
        if (uVar8 == 0xffffffff) goto LAB_140037c9b;
      }
      pppppppbVar12 = (byte *******)((longlong)pppppppbVar12 + 1);
    }
  }
  pppppppbVar12 = local_78;
  if (0xf < local_60) {
    pppppppbVar12 = (byte *******)local_78[0];
  }
  pbVar18 = (byte *)((longlong)pppppppbVar12 + (longlong)param_6);
  plVar4 = *(longlong **)(param_3 + 8);
  for (lVar17 = local_68 - (longlong)param_6; lVar17 != 0; lVar17 = lVar17 + -1) {
    if (plVar4 == (longlong *)0x0) {
LAB_140037e4e:
      uVar7 = 1;
    }
    else {
      bVar2 = *pbVar18;
      if (*(longlong *)plVar4[8] == 0) {
LAB_140037e3d:
        uVar8 = (**(code **)(*plVar4 + 0x18))(plVar4,bVar2);
      }
      else {
        iVar3 = *(int *)plVar4[0xb];
        if (iVar3 < 1) goto LAB_140037e3d;
        *(int *)plVar4[0xb] = iVar3 + -1;
        pbVar5 = *(byte **)plVar4[8];
        *(byte **)plVar4[8] = pbVar5 + 1;
        uVar8 = (uint)bVar2;
        *pbVar5 = bVar2;
      }
      if (uVar8 == 0xffffffff) goto LAB_140037e4e;
    }
    pbVar18 = pbVar18 + 1;
  }
  *(undefined8 *)(param_4 + 0x28) = 0;
  for (; lVar11 != 0; lVar11 = lVar11 + -1) {
    if (plVar4 == (longlong *)0x0) {
LAB_140037eb3:
      uVar7 = 1;
    }
    else {
      if (*(longlong *)plVar4[8] == 0) {
LAB_140037ea2:
        uVar8 = (**(code **)(*plVar4 + 0x18))(plVar4,param_5);
      }
      else {
        iVar3 = *(int *)plVar4[0xb];
        if (iVar3 < 1) goto LAB_140037ea2;
        *(int *)plVar4[0xb] = iVar3 + -1;
        pbVar18 = *(byte **)plVar4[8];
        *(byte **)plVar4[8] = pbVar18 + 1;
        uVar8 = (uint)param_5;
        *pbVar18 = param_5;
      }
      if (uVar8 == 0xffffffff) goto LAB_140037eb3;
    }
  }
  *(undefined4 *)(param_2 + 1) = *(undefined4 *)(param_3 + 1);
  *(undefined2 *)(param_2 + 5) = *(undefined2 *)(param_3 + 5);
  param_2[7] = param_3[7];
  *param_2 = uVar7;
  *(longlong **)(param_2 + 8) = plVar4;
  if (0xf < local_40) {
    lVar17 = CONCAT71(uStack_57,local_58);
    uVar16 = local_40 + 1;
    lVar11 = lVar17;
    if (0xfff < uVar16) {
      lVar11 = *(longlong *)(lVar17 + -8);
      if (0x1f < (lVar17 - lVar11) - 8U) goto code_r0x000140037f7b;
      uVar16 = local_40 + 0x28;
    }
    func_0x00014028b040(lVar11,uVar16);
  }
  uStack_48 = 0;
  local_40 = 0xf;
  local_58 = '\0';
  if (0xf < local_60) {
    uVar16 = local_60 + 1;
    pppppppbVar12 = (byte *******)local_78[0];
    if (0xfff < uVar16) {
      pppppppbVar12 = (byte *******)local_78[0][-1];
      if ((byte *)0x1f < (byte *)((longlong)local_78[0] + (-8 - (longlong)pppppppbVar12))) {
code_r0x000140037f7b:
        pcVar6 = (code *)swi(0x29);
        (*pcVar6)(5);
        puVar14 = auStack_b0;
UNWIND_INFO_140037eb8_UnwindCodes_99__OffsetInProlog:
                    /* WARNING: Subroutine does not return */
        *(undefined8 *)(puVar14 + -8) = 0x140037f87;
        FUN_140012a10();
      }
      uVar16 = local_60 + 0x28;
    }
    func_0x00014028b040(pppppppbVar12,uVar16);
  }
  return param_2;
}

