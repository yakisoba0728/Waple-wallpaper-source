// Function: FUN_14001e530
// Addr: 14001e530
// Size: 1065 bytes


/* WARNING: Restarted to delay deadcode elimination for space: stack */

int FUN_14001e530(char param_1)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  longlong *plVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined1 local_158 [8];
  char local_150;
  undefined **local_130 [7];
  undefined ***local_f8;
  undefined **local_f0 [7];
  undefined ***local_b8;
  undefined **local_b0 [7];
  undefined ***local_78;
  undefined **local_70 [7];
  undefined ***local_38;
  undefined1 local_30 [40];
  
  if (DAT_1404e8bb0 != (longlong *)0x0) {
    return 0;
  }
  plVar4 = (longlong *)FUN_14028af20(0xd0);
  FUN_1404217a0(plVar4 + 2,0,0xc0);
  *plVar4 = (longlong)&PTR_FUN_140475510;
  plVar4[1] = 0;
  FUN_140031950(plVar4 + 2);
  *(undefined4 *)(plVar4 + 10) = 0;
  plVar4[0xb] = 0;
  plVar4[0xc] = 0;
  plVar4[0xd] = 0;
  plVar4[0xe] = 0;
  plVar4[0xf] = 0;
  plVar4[0x10] = 0;
  plVar4[0x11] = 0;
  plVar4[0x12] = 0;
  plVar4[0x13] = 0;
  plVar4[0x14] = 0;
  plVar4[0x15] = 0;
  plVar4[0x16] = 0;
  plVar4[0x17] = 0;
  plVar4[0x18] = 0;
  plVar4[0x19] = 0;
  DAT_1404e8bb0 = plVar4;
  FUN_140084dd0(local_158,0);
  uVar5 = FUN_140086de0(&DAT_1404df5e8,"virtualdesktops","");
  FUN_140085520(local_158,uVar5);
  plVar4 = DAT_1404e8bb0;
  local_130[0] = &PTR_FUN_1404754d8;
  local_f8 = local_130;
  lVar6 = DAT_1404e8bb0[0x18];
  if (lVar6 == DAT_1404e8bb0[0x19]) {
    FUN_1401410a0(DAT_1404e8bb0 + 0x17,lVar6,local_130);
  }
  else {
    *(undefined8 *)(lVar6 + 0x38) = 0;
    if (local_f8 != (undefined ***)0x0) {
      uVar5 = (*(code *)PTR_FUN_1404754d8)(local_f8,lVar6);
      *(undefined8 *)(lVar6 + 0x38) = uVar5;
    }
    plVar4[0x18] = plVar4[0x18] + 0x40;
  }
  if (local_f8 != (undefined ***)0x0) {
    (*(code *)(*local_f8)[4])
              (local_f8,CONCAT71((int7)((ulonglong)local_130 >> 8),local_f8 != local_130));
    local_f8 = (undefined ***)0x0;
  }
  plVar4 = DAT_1404e8bb0;
  local_f0[0] = &PTR_FUN_1404754a8;
  local_b8 = local_f0;
  lVar6 = DAT_1404e8bb0[0xf];
  if (lVar6 == DAT_1404e8bb0[0x10]) {
    FUN_1401410a0(DAT_1404e8bb0 + 0xe,lVar6,local_f0);
  }
  else {
    *(undefined8 *)(lVar6 + 0x38) = 0;
    if (local_b8 != (undefined ***)0x0) {
      uVar5 = (*(code *)PTR_FUN_1404754a8)(local_b8,lVar6);
      *(undefined8 *)(lVar6 + 0x38) = uVar5;
    }
    plVar4[0xf] = plVar4[0xf] + 0x40;
  }
  if (local_b8 != (undefined ***)0x0) {
    (*(code *)(*local_b8)[4])
              (local_b8,CONCAT71((int7)((ulonglong)local_f0 >> 8),local_b8 != local_f0));
    local_b8 = (undefined ***)0x0;
  }
  plVar4 = DAT_1404e8bb0;
  local_b0[0] = &PTR_FUN_140475478;
  local_78 = local_b0;
  lVar6 = DAT_1404e8bb0[0x12];
  if (lVar6 == DAT_1404e8bb0[0x13]) {
    FUN_1401410a0(DAT_1404e8bb0 + 0x11,lVar6,local_b0);
  }
  else {
    *(undefined8 *)(lVar6 + 0x38) = 0;
    if (local_78 != (undefined ***)0x0) {
      uVar5 = (*(code *)PTR_FUN_140475478)(local_78,lVar6);
      *(undefined8 *)(lVar6 + 0x38) = uVar5;
    }
    plVar4[0x12] = plVar4[0x12] + 0x40;
  }
  if (local_78 != (undefined ***)0x0) {
    (*(code *)(*local_78)[4])
              (local_78,CONCAT71((int7)((ulonglong)local_b0 >> 8),local_78 != local_b0));
    local_78 = (undefined ***)0x0;
  }
  plVar4 = DAT_1404e8bb0;
  local_70[0] = &PTR_FUN_140475448;
  local_38 = local_70;
  lVar6 = DAT_1404e8bb0[0x15];
  if (lVar6 == DAT_1404e8bb0[0x16]) {
    FUN_1401410a0(DAT_1404e8bb0 + 0x14,lVar6,local_70);
  }
  else {
    *(undefined8 *)(lVar6 + 0x38) = 0;
    if (local_38 != (undefined ***)0x0) {
      uVar5 = (*(code *)PTR_FUN_140475448)(local_38,lVar6);
      *(undefined8 *)(lVar6 + 0x38) = uVar5;
    }
    plVar4[0x15] = plVar4[0x15] + 0x40;
  }
  if (local_38 != (undefined ***)0x0) {
    (*(code *)(*local_38)[4])
              (local_38,CONCAT71((int7)((ulonglong)local_70 >> 8),local_38 != local_70));
    local_38 = (undefined ***)0x0;
  }
  pcVar1 = *(code **)(*DAT_1404e8bb0 + 0x28);
  uVar5 = FUN_140085090(local_30,local_158);
  if (pcVar1 == FUN_14013d170) {
    iVar2 = FUN_14013d170();
  }
  else {
    iVar2 = (*pcVar1)(DAT_1404e8bb0,uVar5);
  }
  if (iVar2 == 0) {
    if (((ulonglong)((DAT_1404e8bb0[0xc] - DAT_1404e8bb0[0xb] >> 3) * -0x71c71c71c71c71c7) <=
         (ulonglong)(longlong)(int)DAT_1404e8bb0[10]) ||
       (iVar3 = *(int *)(DAT_1404e8bb0[0xb] + 0x40 + (longlong)(int)DAT_1404e8bb0[10] * 0x48),
       iVar3 < 0)) goto LAB_14001e92c;
  }
  else {
    if (DAT_1404e8bb0 != (longlong *)0x0) {
      (**(code **)*DAT_1404e8bb0)(DAT_1404e8bb0,1);
    }
    DAT_1404e8bb0 = (longlong *)0x0;
    if (((param_1 == '\0') || (local_150 != '\a')) ||
       (lVar6 = FUN_140086de0(local_158,"login",""), 2 < *(byte *)(lVar6 + 8) - 1))
    goto LAB_14001e92c;
    iVar3 = FUN_140085ee0(lVar6);
  }
  FUN_140045ab0(&PTR_s_wallpaperconfig_1404df5a0,iVar3);
  FUN_140042790(&PTR_s_wallpaperconfig_1404df5a0);
LAB_14001e92c:
  FUN_140085440(local_158);
  return iVar2;
}

