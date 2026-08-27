// Function: FUN_140010cb0
// Addr: 140010cb0
// Size: 806 bytes


undefined8
FUN_140010cb0(longlong *param_1,undefined8 param_2,undefined4 *param_3,longlong param_4,
             short param_5,char param_6)

{
  int iVar1;
  longlong *plVar2;
  short *psVar3;
  code *pcVar4;
  short *psVar5;
  short sVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  ulonglong uVar10;
  longlong lVar11;
  undefined1 uVar12;
  short *psVar13;
  undefined4 local_a8;
  undefined4 uStack_a4;
  longlong *plStack_a0;
  ulonglong local_98;
  ulonglong uStack_90;
  short local_88 [4];
  longlong *plStack_80;
  ulonglong local_78;
  ulonglong uStack_70;
  
  if ((*(uint *)(param_4 + 0x18) & 0x4000) == 0) {
    local_a8 = *param_3;
    uStack_a4 = param_3[1];
    plStack_a0 = *(longlong **)(param_3 + 2);
    (**(code **)(*param_1 + 0x48))(local_a8,param_2,&local_a8,param_4,param_5,param_6);
    return param_2;
  }
  plVar2 = *(longlong **)(*(longlong *)(param_4 + 0x40) + 8);
  plStack_a0 = plVar2;
  (**(code **)(*plVar2 + 8))(plVar2);
  plVar7 = (longlong *)FUN_1400118f0(&local_a8);
  puVar8 = (undefined8 *)(**(code **)(*plVar2 + 0x10))(plVar2);
  if (puVar8 != (undefined8 *)0x0) {
    (**(code **)*puVar8)(puVar8,1);
  }
  if (param_6 == '\0') {
    (**(code **)(*plVar7 + 0x30))(plVar7,&local_a8);
  }
  else {
    (**(code **)(*plVar7 + 0x38))();
  }
  uVar10 = *(ulonglong *)(param_4 + 0x28);
  psVar5 = (short *)CONCAT44(uStack_a4,local_a8);
  local_78 = local_98;
  uStack_70 = uStack_90;
  plStack_80 = plStack_a0;
  if (((longlong)uVar10 < 1) || (uVar10 <= local_98)) {
    lVar11 = 0;
  }
  else {
    lVar11 = uVar10 - local_98;
  }
  if ((*(uint *)(param_4 + 0x18) & 0x1c0) != 0x40) {
    uVar12 = *(undefined1 *)param_3;
    plVar2 = *(longlong **)(param_3 + 2);
    for (; lVar11 != 0; lVar11 = lVar11 + -1) {
      if (plVar2 == (longlong *)0x0) {
LAB_140010e58:
        uVar12 = 1;
      }
      else {
        if (*(longlong *)plVar2[8] == 0) {
LAB_140010e45:
          sVar6 = (**(code **)(*plVar2 + 0x18))(plVar2,param_5);
        }
        else {
          iVar1 = *(int *)plVar2[0xb];
          if (iVar1 < 1) goto LAB_140010e45;
          *(int *)plVar2[0xb] = iVar1 + -1;
          psVar13 = *(short **)plVar2[8];
          *(short **)plVar2[8] = psVar13 + 1;
          *psVar13 = param_5;
          sVar6 = param_5;
        }
        if (sVar6 == -1) goto LAB_140010e58;
      }
    }
    *(undefined1 *)param_3 = uVar12;
    lVar11 = 0;
  }
  uVar12 = *(undefined1 *)param_3;
  plVar2 = *(longlong **)(param_3 + 2);
  psVar13 = local_88;
  uVar10 = local_98;
  if (7 < uStack_90) {
    psVar13 = psVar5;
  }
  do {
    if (uVar10 == 0) {
      *(undefined1 *)param_3 = uVar12;
      local_a8 = *param_3;
      uStack_a4 = param_3[1];
      plStack_a0 = *(longlong **)(param_3 + 2);
      *(undefined8 *)(param_4 + 0x28) = 0;
      FUN_1400120c0(param_1,param_2,&local_a8,param_5,lVar11);
      if (7 < uStack_90) {
        uVar10 = uStack_90 * 2 + 2;
        psVar13 = psVar5;
        if (0xfff < uVar10) {
          psVar13 = *(short **)(psVar5 + -4);
          if (0x1f < (ulonglong)((longlong)psVar5 + (-8 - (longlong)psVar13))) {
            pcVar4 = (code *)swi(0x29);
            (*pcVar4)(5);
            pcVar4 = (code *)swi(3);
            uVar9 = (*pcVar4)();
            return uVar9;
          }
          uVar10 = uStack_90 * 2 + 0x29;
        }
        thunk_FUN_14028af80(psVar13,uVar10);
      }
      return param_2;
    }
    if (plVar2 == (longlong *)0x0) {
LAB_140010efc:
      uVar12 = 1;
    }
    else {
      sVar6 = *psVar13;
      if (*(longlong *)plVar2[8] == 0) {
LAB_140010ee5:
        sVar6 = (**(code **)(*plVar2 + 0x18))(plVar2,sVar6);
      }
      else {
        iVar1 = *(int *)plVar2[0xb];
        if (iVar1 < 1) goto LAB_140010ee5;
        *(int *)plVar2[0xb] = iVar1 + -1;
        psVar3 = *(short **)plVar2[8];
        *(short **)plVar2[8] = psVar3 + 1;
        *psVar3 = sVar6;
      }
      if (sVar6 == -1) goto LAB_140010efc;
    }
    psVar13 = psVar13 + 1;
    uVar10 = uVar10 - 1;
  } while( true );
}

