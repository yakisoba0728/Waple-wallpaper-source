// Function: FUN_140174a60
// Addr: 140174a60
// Size: 864 bytes


undefined1 FUN_140174a60(longlong param_1,char *param_2,longlong param_3)

{
  code *pcVar1;
  char cVar2;
  size_t sVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  undefined8 *puVar8;
  undefined1 uVar9;
  bool bVar10;
  undefined8 local_68;
  undefined8 uStack_60;
  longlong local_58;
  ulonglong local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  longlong local_38;
  ulonglong local_30;
  
  bVar10 = false;
  if (param_2 == (char *)0x0) {
    return 0;
  }
  sVar3 = strlen(param_2);
  if (param_3 == 0) {
    local_58 = 0;
    local_68 = (undefined8 *)0x0;
    uStack_60 = 0;
    local_50 = 0;
    FUN_140017480(&local_68,param_2,sVar3);
    puVar6 = &local_68;
    if (0xf < local_50) {
      puVar6 = local_68;
    }
    puVar8 = &local_68;
    if (0xf < local_50) {
      puVar8 = local_68;
    }
    lVar4 = FUN_140087490(param_1 + 0x10,puVar8,local_58 + (longlong)puVar6);
    if (0xf < local_50) {
      uVar7 = local_50 + 1;
      puVar6 = local_68;
      if (0xfff < uVar7) {
        puVar6 = (undefined8 *)local_68[-1];
        if ((ulonglong)((longlong)local_68 + (-8 - (longlong)puVar6)) < 0x20) {
          uVar7 = local_50 + 0x28;
          goto LAB_140174b33;
        }
        goto LAB_140174da0;
      }
LAB_140174b33:
      thunk_FUN_14028af80(puVar6,uVar7);
    }
    local_58 = 0;
    local_50 = 0xf;
    local_68 = (undefined8 *)((ulonglong)local_68 & 0xffffffffffffff00);
    if (lVar4 == 0) {
      return 0;
    }
    if (*(char *)(lVar4 + 8) != '\a') {
      return 0;
    }
    local_38 = 5;
    uStack_40 = 0;
    local_30 = 0xf;
    local_48 = (undefined8 *)(ulonglong)CONCAT14(s_value_140474508[4],s_value_140474508._0_4_);
    lVar4 = FUN_140087490(lVar4,&local_48,(longlong)&local_48 + 5);
    if (0xf < local_30) {
      uVar7 = local_30 + 1;
      puVar6 = local_48;
      if (0xfff < uVar7) {
        puVar6 = (undefined8 *)local_48[-1];
        if (0x1f < (ulonglong)((longlong)local_48 + (-8 - (longlong)puVar6))) goto LAB_140174da0;
        uVar7 = local_30 + 0x28;
      }
      thunk_FUN_14028af80(puVar6,uVar7);
    }
    local_38 = 0;
    local_30 = 0xf;
    local_48 = (undefined8 *)((ulonglong)local_48 & 0xffffffffffffff00);
    if (((lVar4 != 0) && (*(char *)(lVar4 + 8) == '\x05')) &&
       (cVar2 = FUN_140086300(lVar4), cVar2 != '\0')) {
      return 1;
    }
  }
  else {
    local_38 = 0;
    local_48 = (undefined8 *)0x0;
    uStack_40 = 0;
    local_30 = 0;
    FUN_140017480(&local_48,param_2,sVar3);
    puVar6 = &local_48;
    if (0xf < local_30) {
      puVar6 = local_48;
    }
    puVar8 = &local_48;
    if (0xf < local_30) {
      puVar8 = local_48;
    }
    lVar4 = FUN_140087490(param_1 + 0x10,puVar8,local_38 + (longlong)puVar6);
    if (0xf < local_30) {
      uVar7 = local_30 + 1;
      puVar6 = local_48;
      if (0xfff < uVar7) {
        puVar6 = (undefined8 *)local_48[-1];
        if (0x1f < (ulonglong)((longlong)local_48 + (-8 - (longlong)puVar6))) goto LAB_140174da0;
        uVar7 = local_30 + 0x28;
      }
      thunk_FUN_14028af80(puVar6,uVar7);
    }
    local_38 = 0;
    local_30 = 0xf;
    local_48 = (undefined8 *)((ulonglong)local_48 & 0xffffffffffffff00);
    if (lVar4 == 0) {
      return 0;
    }
    if (*(char *)(lVar4 + 8) != '\a') {
      return 0;
    }
    local_58 = 5;
    uStack_60 = 0;
    local_50 = 0xf;
    local_68 = (undefined8 *)(ulonglong)CONCAT14(s_value_140474508[4],s_value_140474508._0_4_);
    lVar4 = FUN_140087490(lVar4,&local_68,(longlong)&local_68 + 5);
    if (0xf < local_50) {
      uVar7 = local_50 + 1;
      puVar6 = local_68;
      if (0xfff < uVar7) {
        puVar6 = (undefined8 *)local_68[-1];
        if (0x1f < (ulonglong)((longlong)local_68 + (-8 - (longlong)puVar6))) goto LAB_140174da0;
        uVar7 = local_50 + 0x28;
      }
      thunk_FUN_14028af80(puVar6,uVar7);
    }
    local_58 = 0;
    local_50 = 0xf;
    local_68 = (undefined8 *)((ulonglong)local_68 & 0xffffffffffffff00);
    if (*(char *)(lVar4 + 8) == '\x04') {
      bVar10 = true;
      uVar5 = FUN_140085cc0(lVar4,&local_48);
      cVar2 = FUN_14000d010(uVar5,param_3);
      if (cVar2 == '\0') goto LAB_140174d5c;
      uVar9 = 1;
    }
    else {
LAB_140174d5c:
      uVar9 = 0;
    }
    if (!bVar10) {
      return uVar9;
    }
    if (local_30 < 0x10) {
      return uVar9;
    }
    uVar7 = local_30 + 1;
    puVar6 = local_48;
    if (uVar7 < 0x1000) {
LAB_140174d96:
      thunk_FUN_14028af80(puVar6,uVar7);
      return uVar9;
    }
    puVar6 = (undefined8 *)local_48[-1];
    if ((ulonglong)((longlong)local_48 + (-8 - (longlong)puVar6)) < 0x20) {
      uVar7 = local_30 + 0x28;
      goto LAB_140174d96;
    }
LAB_140174da0:
    pcVar1 = (code *)swi(0x29);
    (*pcVar1)(5);
  }
  return 0;
}

