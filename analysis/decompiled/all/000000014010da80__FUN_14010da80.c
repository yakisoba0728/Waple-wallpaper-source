// Function: FUN_14010da80
// Addr: 14010da80
// Size: 18 bytes


bool FUN_14010da80(undefined8 param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  int iVar3;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  undefined8 uStack_10;
  
  local_48 = 0;
  uStack_40 = 0;
  uStack_38 = 0;
  uStack_30 = 0;
  uStack_28 = 0;
  uStack_20 = 0;
  uStack_18 = 0;
  uStack_10 = 0;
  (*DAT_140426a90)(0,&local_48,0x20);
  lVar1 = (*DAT_1404269a8)(param_1,L"WallpaperEngineParent");
  iVar3 = FUN_1402c1390(&local_48,L"SysListView32");
  if (iVar3 == 0) {
    uVar2 = (*DAT_1404268d0)(param_1);
    (*DAT_140426a90)(uVar2,&local_48,0x20);
    iVar3 = FUN_1402c1390(&local_48,L"SHELLDLL_DefView");
    return iVar3 == 0;
  }
  if (lVar1 != 1) {
    iVar3 = FUN_1402c1390(&local_48,L"SHELLDLL_DefView");
    if (iVar3 != 0) {
      iVar3 = FUN_1402c1390(&local_48,L"Progman");
      return iVar3 == 0;
    }
  }
  return true;
}

