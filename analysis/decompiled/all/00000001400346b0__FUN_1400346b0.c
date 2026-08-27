// Function: FUN_1400346b0
// Addr: 1400346b0
// Size: 832 bytes


ulonglong *
FUN_1400346b0(longlong *param_1,ulonglong *param_2,undefined4 *param_3,longlong param_4,byte param_5
             ,char param_6)

{
  byte bVar1;
  int iVar2;
  longlong *plVar3;
  byte *pbVar4;
  code *pcVar5;
  byte *pbVar6;
  uint uVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  ulonglong *puVar10;
  ulonglong uVar11;
  undefined1 uVar12;
  longlong lVar13;
  byte *pbVar14;
  undefined4 local_98;
  undefined4 uStack_94;
  longlong *plStack_90;
  ulonglong local_88;
  ulonglong uStack_80;
  byte local_78 [8];
  longlong *plStack_70;
  ulonglong local_68;
  ulonglong uStack_60;
  
  if ((*(uint *)(param_4 + 0x18) & 0x4000) == 0) {
    local_98 = *param_3;
    uStack_94 = param_3[1];
    plStack_90 = *(longlong **)(param_3 + 2);
    (**(code **)(*param_1 + 0x48))(local_98,param_2,&local_98,param_4,param_5,param_6);
    return param_2;
  }
  plVar3 = *(longlong **)(*(longlong *)(param_4 + 0x40) + 8);
  plStack_90 = plVar3;
  (**(code **)(*plVar3 + 8))(plVar3);
  plVar8 = (longlong *)FUN_140035d70(&local_98);
  puVar9 = (undefined8 *)(**(code **)(*plVar3 + 0x10))(plVar3);
  if (puVar9 != (undefined8 *)0x0) {
    (**(code **)*puVar9)(puVar9,1);
  }
  if (param_6 == '\0') {
    (**(code **)(*plVar8 + 0x30))(plVar8,&local_98);
  }
  else {
    (**(code **)(*plVar8 + 0x38))();
  }
  uVar11 = *(ulonglong *)(param_4 + 0x28);
  pbVar6 = (byte *)CONCAT44(uStack_94,local_98);
  local_68 = local_88;
  uStack_60 = uStack_80;
  plStack_70 = plStack_90;
  if (((longlong)uVar11 < 1) || (uVar11 <= local_88)) {
    lVar13 = 0;
  }
  else {
    lVar13 = uVar11 - local_88;
  }
  if ((*(uint *)(param_4 + 0x18) & 0x1c0) != 0x40) {
    uVar12 = *(undefined1 *)param_3;
    plVar3 = *(longlong **)(param_3 + 2);
    for (; lVar13 != 0; lVar13 = lVar13 + -1) {
      if (plVar3 == (longlong *)0x0) {
LAB_140034842:
        uVar12 = 1;
      }
      else {
        if (*(longlong *)plVar3[8] == 0) {
LAB_140034832:
          uVar7 = (**(code **)(*plVar3 + 0x18))(plVar3,param_5);
        }
        else {
          iVar2 = *(int *)plVar3[0xb];
          if (iVar2 < 1) goto LAB_140034832;
          *(int *)plVar3[0xb] = iVar2 + -1;
          pbVar14 = *(byte **)plVar3[8];
          *(byte **)plVar3[8] = pbVar14 + 1;
          uVar7 = (uint)param_5;
          *pbVar14 = param_5;
        }
        if (uVar7 == 0xffffffff) goto LAB_140034842;
      }
    }
    *(undefined1 *)param_3 = uVar12;
    lVar13 = 0;
  }
  uVar12 = *(undefined1 *)param_3;
  plVar3 = *(longlong **)(param_3 + 2);
  pbVar14 = local_78;
  uVar11 = local_88;
  if (0xf < uStack_80) {
    pbVar14 = pbVar6;
  }
  for (; uVar11 != 0; uVar11 = uVar11 - 1) {
    if (plVar3 == (longlong *)0x0) {
LAB_1400348e0:
      uVar12 = 1;
    }
    else {
      bVar1 = *pbVar14;
      if (*(longlong *)plVar3[8] == 0) {
LAB_1400348cf:
        uVar7 = (**(code **)(*plVar3 + 0x18))(plVar3,bVar1);
      }
      else {
        iVar2 = *(int *)plVar3[0xb];
        if (iVar2 < 1) goto LAB_1400348cf;
        *(int *)plVar3[0xb] = iVar2 + -1;
        pbVar4 = *(byte **)plVar3[8];
        *(byte **)plVar3[8] = pbVar4 + 1;
        uVar7 = (uint)bVar1;
        *pbVar4 = bVar1;
      }
      if (uVar7 == 0xffffffff) goto LAB_1400348e0;
    }
    pbVar14 = pbVar14 + 1;
  }
  *(undefined8 *)(param_4 + 0x28) = 0;
  do {
    if (lVar13 == 0) {
      *(undefined1 *)param_2 = uVar12;
      *(undefined4 *)((longlong)param_2 + 1) = *(undefined4 *)((longlong)param_3 + 1);
      *(undefined2 *)((longlong)param_2 + 5) = *(undefined2 *)((longlong)param_3 + 5);
      *(undefined1 *)((longlong)param_2 + 7) = *(undefined1 *)((longlong)param_3 + 7);
      param_2[1] = (ulonglong)plVar3;
      if (0xf < uStack_80) {
        uVar11 = uStack_80 + 1;
        pbVar14 = pbVar6;
        if (0xfff < uVar11) {
          pbVar14 = *(byte **)(pbVar6 + -8);
          if ((byte *)0x1f < pbVar6 + (-8 - (longlong)pbVar14)) {
            puVar10 = (ulonglong *)&DAT_00000005;
            pcVar5 = (code *)swi(0x29);
            (*pcVar5)();
            *puVar10 = uVar11;
            return puVar10;
          }
          uVar11 = uStack_80 + 0x28;
        }
        thunk_FUN_14028af80(pbVar14,uVar11);
      }
      return param_2;
    }
    if (plVar3 == (longlong *)0x0) {
LAB_140034952:
      uVar12 = 1;
    }
    else {
      if (*(longlong *)plVar3[8] == 0) {
LAB_140034942:
        uVar7 = (**(code **)(*plVar3 + 0x18))(plVar3,param_5);
      }
      else {
        iVar2 = *(int *)plVar3[0xb];
        if (iVar2 < 1) goto LAB_140034942;
        *(int *)plVar3[0xb] = iVar2 + -1;
        pbVar14 = *(byte **)plVar3[8];
        *(byte **)plVar3[8] = pbVar14 + 1;
        uVar7 = (uint)param_5;
        *pbVar14 = param_5;
      }
      if (uVar7 == 0xffffffff) goto LAB_140034952;
    }
    lVar13 = lVar13 + -1;
  } while( true );
}

