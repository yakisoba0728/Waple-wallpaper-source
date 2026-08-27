// Function: FUN_14001cc50
// Addr: 14001cc50
// Size: 1142 bytes


void FUN_14001cc50(char param_1)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  longlong *plVar9;
  undefined8 *puVar10;
  ulonglong uVar11;
  uint uVar12;
  undefined4 *unaff_RSI;
  undefined4 *unaff_RDI;
  undefined8 *puVar13;
  undefined8 local_98;
  undefined8 local_90;
  undefined4 local_88;
  undefined8 local_80;
  longlong *local_78;
  uint local_70;
  longlong local_68;
  undefined8 uStack_60;
  longlong local_58;
  longlong *local_50;
  uint local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  
  local_48 = CONCAT31(local_48._1_3_,7);
  local_48 = local_48 & 0xfffffeff;
  local_30 = 0;
  local_40 = 0;
  uStack_38 = 0;
  plVar4 = (longlong *)FUN_14028af20(0x10);
  *plVar4 = 0;
  plVar4[1] = 0;
  lVar5 = FUN_14028af20(0x58);
  *(longlong *)lVar5 = lVar5;
  *(longlong *)(lVar5 + 8) = lVar5;
  *(longlong *)(lVar5 + 0x10) = lVar5;
  *(undefined2 *)(lVar5 + 0x18) = 0x101;
  *plVar4 = lVar5;
  local_50 = plVar4;
  uVar6 = FUN_140086de0(&local_50,"wallpaperconfig","");
  local_70 = CONCAT31(local_70._1_3_,7);
  local_70 = local_70 & 0xfffffeff;
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  plVar4 = (longlong *)FUN_14028af20(0x10);
  *plVar4 = 0;
  plVar4[1] = 0;
  lVar5 = FUN_14028af20(0x58);
  *(longlong *)lVar5 = lVar5;
  *(longlong *)(lVar5 + 8) = lVar5;
  *(longlong *)(lVar5 + 0x10) = lVar5;
  *(undefined2 *)(lVar5 + 0x18) = 0x101;
  *plVar4 = lVar5;
  local_78 = plVar4;
  FUN_140085610(uVar6,&local_78);
  plVar4 = local_78;
  switch((undefined1)local_70) {
  case 0:
  case 1:
  case 2:
  case 3:
  case 5:
    break;
  case 4:
    if ((local_70 >> 8 & 1) != 0) {
      thunk_FUN_1402d9040(local_78);
    }
    break;
  case 6:
  case 7:
    if (local_78 != (longlong *)0x0) {
      FUN_140088e40(local_78);
      thunk_FUN_14028af80(plVar4,0x10);
    }
    break;
  default:
    FID_conflict__assert(L"false",L"D:\\dev\\we\\windows\\src\\json\\src\\json_value.cpp",0x434);
  }
  lVar5 = local_68;
  if (local_68 != 0) {
    FUN_140017240(local_68 + 0x40);
    FUN_140017240(lVar5 + 0x20);
    FUN_140017240(lVar5);
    thunk_FUN_14028af80(lVar5,0x60);
  }
  puVar3 = DAT_1404e5330;
  for (puVar10 = (undefined8 *)*DAT_1404e5330; puVar10 != puVar3; puVar10 = (undefined8 *)*puVar10)
  {
    if (puVar10[6] != 0) {
      puVar13 = puVar10 + 2;
      uVar7 = FUN_14001c0a0(&local_78,puVar10[6],puVar13);
      if (0xf < (ulonglong)puVar10[5]) {
        puVar13 = (undefined8 *)*puVar13;
      }
      uVar8 = FUN_140086de0(uVar6,puVar13,puVar10[4] + (longlong)puVar13);
      FUN_140085610(uVar8,uVar7);
      FUN_140085440(&local_78);
    }
  }
  local_70._1_3_ = (undefined3)(local_70 >> 8);
  local_70 = CONCAT31(local_70._1_3_,5);
  uVar11 = (ulonglong)local_78 >> 8;
  local_78 = (longlong *)CONCAT71((int7)uVar11,param_1);
  uVar12 = local_70 & 0xfffffeff;
  plVar9 = (longlong *)FUN_140086de0(&local_50,"reloadMonitors","");
  local_70 = *(uint *)(plVar9 + 1);
  *(uint *)(plVar9 + 1) = uVar12;
  plVar4 = (longlong *)*plVar9;
  *plVar9 = (longlong)local_78;
  lVar5 = plVar9[2];
  plVar9[2] = 0;
  uStack_60 = plVar9[3];
  local_58 = plVar9[4];
  plVar9[3] = 0;
  plVar9[4] = 0;
  local_78 = plVar4;
  local_68 = lVar5;
  FUN_140086d30(&local_78);
  if (lVar5 != 0) {
    FUN_140017240(lVar5 + 0x40);
    FUN_140017240(lVar5 + 0x20);
    FUN_140017240(lVar5);
    thunk_FUN_14028af80(lVar5,0x60);
  }
  if (param_1 != '\0') {
    local_70 = (local_70 >> 8 & 0xfffffe) << 8;
    local_58 = 0;
    local_68 = 0;
    uStack_60 = 0;
    uVar6 = FUN_140086de0(&DAT_1404df5e8,"general","");
    lVar5 = FUN_140087490(uVar6,&DAT_1404737fc,&DAT_140473800);
    if (lVar5 != 0) {
      uVar6 = FUN_140086de0(uVar6,&DAT_1404737fc,&DAT_140473800);
      FUN_140085520(&local_78,uVar6);
    }
    uVar6 = FUN_140086de0(&local_78,"monitormap","");
    uVar7 = FUN_140086de0(&local_50,"reloadMonitorMap","");
    FUN_140085520(uVar7,uVar6);
    FUN_140085440(&local_78);
  }
  puVar10 = (undefined8 *)FUN_140004d00(&local_78,&local_50,0);
  local_90 = 0;
  local_88 = 0;
  uVar11 = puVar10[2];
  local_98 = 0x72;
  local_80 = 0;
  if (uVar11 != 0) {
    local_88 = (int)uVar11;
    uVar6 = thunk_FUN_14028af20(uVar11 & 0xffffffff);
    if (0xf < (ulonglong)puVar10[3]) {
      puVar10 = (undefined8 *)*puVar10;
    }
    local_80 = uVar6;
    FUN_1404210f0(uVar6,puVar10,uVar11 & 0xffffffff);
    local_98 = CONCAT44((int)uVar11,(undefined4)local_98);
    local_90 = uVar6;
  }
  uVar6 = local_90;
  if (0xf < uStack_60) {
    uVar11 = uStack_60 + 1;
    plVar4 = local_78;
    if (0xfff < uVar11) {
      plVar4 = (longlong *)local_78[-1];
      if (0x1f < (ulonglong)((longlong)local_78 + (-8 - (longlong)plVar4))) {
        lVar5 = 5;
        pcVar2 = (code *)swi(0x29);
        (*pcVar2)();
        *unaff_RDI = *unaff_RSI;
        pcVar2 = (code *)swi(1);
        (*pcVar2)();
        pcVar2 = (code *)swi(1);
        (*pcVar2)();
        pcVar2 = (code *)swi(1);
        (*pcVar2)();
        pcVar2 = (code *)swi(1);
        (*pcVar2)();
        pcVar1 = (char *)((longlong)&uStack_60 + lVar5 * 8 + 2);
        *pcVar1 = *pcVar1 + (char)((ulonglong)lVar5 >> 8);
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      uVar11 = uStack_60 + 0x28;
    }
    thunk_FUN_14028af80(plVar4,uVar11);
  }
  if (DAT_1404e64d0 != -1) {
    FUN_1400182d0(&DAT_1404e64d0,&local_98);
  }
  thunk_FUN_14028af80(uVar6);
  FUN_140085440(&local_50);
  return;
}

