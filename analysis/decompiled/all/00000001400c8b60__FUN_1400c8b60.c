// Function: FUN_1400c8b60
// Addr: 1400c8b60
// Size: 767 bytes


void FUN_1400c8b60(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  code *pcVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  char *pcVar8;
  longlong *plVar9;
  undefined8 local_138;
  undefined8 local_130;
  undefined4 local_128;
  ulonglong local_120;
  longlong local_118 [7];
  longlong *local_e0;
  longlong local_d8 [7];
  longlong *local_a0;
  undefined **local_98;
  longlong local_90;
  undefined ***local_60;
  undefined1 local_58 [40];
  
  uVar4 = FUN_140005ee0(&local_138);
  uVar4 = FUN_140005d20(uVar4,&DAT_140473850);
  uVar4 = FUN_140005c80(uVar4,L"winrtutil64.exe");
  FUN_140016600(local_58,uVar4);
  FUN_140016770(&local_138);
  local_98 = &PTR_FUN_140485f70;
  local_60 = &local_98;
  plVar9 = (longlong *)(param_1 + 0x6f8);
  local_e0 = (longlong *)0x0;
  local_90 = param_1;
  local_e0 = (longlong *)FUN_1400cd030(&local_98,local_118);
  plVar1 = (longlong *)(param_1 + 0x730);
  if ((local_e0 != local_118) && (plVar2 = (longlong *)*plVar1, plVar2 != plVar9)) {
    *plVar1 = (longlong)local_e0;
    local_e0 = plVar2;
    goto LAB_1400c8d08;
  }
  local_a0 = (longlong *)0x0;
  if (local_e0 != (longlong *)0x0) {
    plVar2 = local_e0;
    if (local_e0 == local_118) {
      local_a0 = (longlong *)(**(code **)(*local_e0 + 8))(local_e0,local_d8);
      if (local_e0 == (longlong *)0x0) goto LAB_1400c8c75;
      (**(code **)(*local_e0 + 0x20))
                (local_e0,CONCAT71((int7)((ulonglong)local_118 >> 8),local_e0 != local_118));
      plVar2 = local_a0;
    }
    local_a0 = plVar2;
    local_e0 = (longlong *)0x0;
  }
LAB_1400c8c75:
  plVar2 = (longlong *)*plVar1;
  if (plVar2 != (longlong *)0x0) {
    if (plVar2 == plVar9) {
      local_e0 = (longlong *)(**(code **)(*plVar2 + 8))(plVar2,local_118);
      plVar2 = (longlong *)*plVar1;
      if (plVar2 == (longlong *)0x0) goto LAB_1400c8cc8;
      (**(code **)(*plVar2 + 0x20))(plVar2,plVar2 != plVar9);
      plVar2 = local_e0;
    }
    local_e0 = plVar2;
    *plVar1 = 0;
  }
LAB_1400c8cc8:
  if (local_a0 != (longlong *)0x0) {
    if (local_a0 == local_d8) {
      lVar5 = (**(code **)(*local_a0 + 8))(local_a0,plVar9);
      *plVar1 = lVar5;
      if (local_a0 != (longlong *)0x0) {
        (**(code **)(*local_a0 + 0x20))
                  (local_a0,CONCAT71((int7)((ulonglong)local_d8 >> 8),local_a0 != local_d8));
      }
    }
    else {
      *plVar1 = (longlong)local_a0;
    }
  }
LAB_1400c8d08:
  if (local_e0 != (longlong *)0x0) {
    (**(code **)(*local_e0 + 0x20))
              (local_e0,CONCAT71((int7)((ulonglong)local_118 >> 8),local_e0 != local_118));
  }
  if (local_60 != (undefined ***)0x0) {
    (*(code *)(*local_60)[4])
              (local_60,CONCAT71((int7)((ulonglong)&local_98 >> 8),local_60 != &local_98));
  }
  pcVar8 = "__WPXProviderAPIMediaControlPID";
  if ((*(byte *)(param_1 + 0xb60) & 2) != 0) {
    pcVar8 = "__WPXProviderAPIMediaControlSSPID";
  }
  puVar6 = (undefined8 *)FUN_140018ce0(local_58,&local_138);
  if (0xf < (ulonglong)puVar6[3]) {
    puVar6 = (undefined8 *)*puVar6;
  }
  FUN_1400832c0(param_1 + 0x668,puVar6,"-mediainterface",pcVar8);
  if (0xf < local_120) {
    uVar7 = local_120 + 1;
    lVar5 = local_138;
    if (0xfff < uVar7) {
      lVar5 = *(longlong *)(local_138 + -8);
      if (0x1f < (local_138 - lVar5) - 8U) {
        pcVar3 = (code *)swi(0x29);
        (*pcVar3)(5);
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      uVar7 = local_120 + 0x28;
    }
    thunk_FUN_14028af80(lVar5,uVar7);
  }
  uVar7 = *(ulonglong *)(param_1 + 0xb78);
  local_138 = 6;
  local_130 = 0;
  local_128 = 0;
  local_120 = 0;
  if (uVar7 != 0) {
    plVar9 = (longlong *)(param_1 + 0xb68);
    local_128 = (int)uVar7;
    uVar4 = thunk_FUN_14028af20(uVar7 & 0xffffffff);
    if (0xf < *(ulonglong *)(param_1 + 0xb80)) {
      plVar9 = (longlong *)*plVar9;
    }
    local_120 = uVar4;
    FUN_1404210f0(uVar4,plVar9,uVar7 & 0xffffffff);
    local_138 = CONCAT44((int)uVar7,(undefined4)local_138);
    local_130 = uVar4;
  }
  uVar4 = local_130;
  FUN_1400182d0(param_1 + 0x668,&local_138);
  thunk_FUN_14028af80(uVar4);
  FUN_140016770(local_58);
  return;
}

