// Function: FUN_140065be0
// Addr: 140065be0
// Size: 240 bytes


undefined8 * FUN_140065be0(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  
  uVar1 = FUN_140086de0(&DAT_1404e6378,"selectedwallpapers","");
  puVar4 = param_3;
  if (0xf < (ulonglong)param_3[3]) {
    puVar4 = (undefined8 *)*param_3;
  }
  lVar2 = FUN_140087490(uVar1,puVar4,param_3[2] + (longlong)puVar4);
  if (lVar2 == 0) {
    *(undefined1 *)(param_2 + 1) = 7;
    *(uint *)(param_2 + 1) = *(uint *)(param_2 + 1) & 0xfffffeff;
    param_2[2] = 0;
    param_2[3] = 0;
    param_2[4] = 0;
    plVar3 = (longlong *)FUN_14028af20(0x10);
    *plVar3 = 0;
    plVar3[1] = 0;
    lVar2 = FUN_14028af20(0x58);
    *(longlong *)lVar2 = lVar2;
    *(longlong *)(lVar2 + 8) = lVar2;
    *(longlong *)(lVar2 + 0x10) = lVar2;
    *(undefined2 *)(lVar2 + 0x18) = 0x101;
    *plVar3 = lVar2;
    *param_2 = plVar3;
    return param_2;
  }
  puVar4 = param_3;
  if (0xf < (ulonglong)param_3[3]) {
    puVar4 = (undefined8 *)*param_3;
  }
  uVar1 = FUN_140086de0(uVar1,puVar4,param_3[2] + (longlong)puVar4);
  FUN_140085090(param_2,uVar1);
  return param_2;
}

