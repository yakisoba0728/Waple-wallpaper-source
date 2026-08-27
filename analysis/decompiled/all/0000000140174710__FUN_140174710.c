// Function: FUN_140174710
// Addr: 140174710
// Size: 847 bytes


ulonglong FUN_140174710(longlong param_1,char *param_2,undefined8 param_3,undefined8 param_4,
                       undefined8 param_5)

{
  code *pcVar1;
  char cVar2;
  byte bVar3;
  int iVar4;
  size_t sVar5;
  longlong *plVar6;
  longlong lVar7;
  char *****pppppcVar8;
  undefined8 *****pppppuVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  bool bVar12;
  undefined8 ****local_108;
  undefined8 uStack_100;
  longlong local_f8;
  ulonglong local_f0;
  ulonglong local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  ulonglong local_d0;
  char ****local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  ulonglong local_b0;
  ulonglong local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  ulonglong local_90;
  longlong local_88 [9];
  
  local_f0 = 0xf;
  local_f8 = 0;
  local_d8 = 0;
  uStack_100 = 0;
  local_108 = (undefined8 *****)0x0;
  uStack_e0 = 0;
  local_e8 = 0;
  uStack_c0 = 0;
  local_c8 = (char ****)0x0;
  uStack_a0 = 0;
  local_a8 = 0;
  local_d0 = 0xf;
  local_b8 = 0;
  local_b0 = 0xf;
  local_98 = 0;
  local_90 = 0xf;
  local_88[0] = 0;
  local_88[1] = 0;
  local_88[2] = 0;
  local_88[3] = 0;
  sVar5 = strlen(param_2);
  FUN_140017480(local_88,param_2,sVar5);
  cVar2 = FUN_1401708c0(local_88,&local_108);
  if (0xf < (ulonglong)local_88[3]) {
    uVar10 = local_88[3] + 1;
    lVar7 = local_88[0];
    if (0xfff < uVar10) {
      lVar7 = *(longlong *)(local_88[0] + -8);
      if (0x1f < (local_88[0] - lVar7) - 8U) goto LAB_140174a57;
      uVar10 = local_88[3] + 0x28;
    }
    thunk_FUN_14028af80(lVar7,uVar10);
  }
  if (cVar2 == '\0') {
    bVar3 = 0;
  }
  else {
    pppppuVar9 = &local_108;
    if (0xf < local_f0) {
      pppppuVar9 = (undefined8 *****)local_108;
    }
    plVar6 = *(longlong **)(*(longlong *)(param_1 + 8) + 0x158);
    lVar7 = *plVar6;
    if (local_f8 == 3) {
      iVar4 = memcmp(pppppuVar9,&DAT_14048ddf8,3);
      bVar12 = iVar4 == 0;
    }
    else {
      bVar12 = false;
    }
    pppppcVar8 = &local_c8;
    if (0xf < local_b0) {
      pppppcVar8 = (char *****)local_c8;
    }
    bVar3 = (**(code **)(lVar7 + 0x110))(plVar6,pppppcVar8,bVar12,param_3,param_4,param_5);
    if (bVar3 == 0) {
      lVar7 = *(longlong *)(param_1 + 0x148);
      pppppcVar8 = &local_c8;
      if (0xf < local_b0) {
        pppppcVar8 = (char *****)local_c8;
      }
      local_88[6] = 0;
      local_88[4] = 0;
      local_88[5] = 0;
      local_88[7] = 0;
      sVar5 = strlen((char *)pppppcVar8);
      FUN_140017480(local_88 + 4,pppppcVar8,sVar5);
      plVar6 = (longlong *)FUN_1400f92e0(lVar7 + 200,local_88,local_88 + 4);
      lVar7 = *plVar6;
      sVar5 = strlen(param_2);
      FUN_14000f880(lVar7 + 0x30,param_2,sVar5);
      if (0xf < (ulonglong)local_88[7]) {
        uVar10 = local_88[7] + 1;
        lVar7 = local_88[4];
        if (0xfff < uVar10) {
          lVar7 = *(longlong *)(local_88[4] + -8);
          if (0x1f < (local_88[4] - lVar7) - 8U) goto LAB_140174a57;
          uVar10 = local_88[7] + 0x28;
        }
        thunk_FUN_14028af80(lVar7,uVar10);
      }
    }
  }
  if (0xf < local_90) {
    uVar11 = local_90 + 1;
    uVar10 = local_a8;
    if (0xfff < uVar11) {
      uVar10 = *(ulonglong *)(local_a8 - 8);
      if (0x1f < (local_a8 - uVar10) - 8) goto LAB_140174a57;
      uVar11 = local_90 + 0x28;
    }
    thunk_FUN_14028af80(uVar10,uVar11);
  }
  local_98 = 0;
  local_90 = 0xf;
  local_a8 = local_a8 & 0xffffffffffffff00;
  if (0xf < local_b0) {
    uVar10 = local_b0 + 1;
    pppppcVar8 = (char *****)local_c8;
    if (0xfff < uVar10) {
      pppppcVar8 = (char *****)local_c8[-1];
      if ((char *)0x1f < (char *)((longlong)local_c8 + (-8 - (longlong)pppppcVar8)))
      goto LAB_140174a57;
      uVar10 = local_b0 + 0x28;
    }
    thunk_FUN_14028af80(pppppcVar8,uVar10);
  }
  local_b8 = 0;
  local_b0 = 0xf;
  local_c8 = (char ****)((ulonglong)local_c8 & 0xffffffffffffff00);
  if (0xf < local_d0) {
    uVar11 = local_d0 + 1;
    uVar10 = local_e8;
    if (0xfff < uVar11) {
      uVar10 = *(ulonglong *)(local_e8 - 8);
      if (0x1f < (local_e8 - uVar10) - 8) goto LAB_140174a57;
      uVar11 = local_d0 + 0x28;
    }
    thunk_FUN_14028af80(uVar10,uVar11);
  }
  local_d8 = 0;
  local_d0 = 0xf;
  local_e8 = local_e8 & 0xffffffffffffff00;
  if (0xf < local_f0) {
    uVar10 = local_f0 + 1;
    pppppuVar9 = (undefined8 *****)local_108;
    if (0xfff < uVar10) {
      pppppuVar9 = (undefined8 *****)local_108[-1];
      if (0x1f < (ulonglong)((longlong)local_108 + (-8 - (longlong)pppppuVar9))) {
LAB_140174a57:
        pcVar1 = (code *)swi(0x29);
        (*pcVar1)(5);
        pcVar1 = (code *)swi(3);
        uVar10 = (*pcVar1)();
        return uVar10;
      }
      uVar10 = local_f0 + 0x28;
    }
    thunk_FUN_14028af80(pppppuVar9,uVar10);
  }
  return (ulonglong)bVar3;
}

