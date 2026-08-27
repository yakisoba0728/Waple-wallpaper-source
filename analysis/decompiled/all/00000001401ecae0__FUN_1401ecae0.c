// Function: FUN_1401ecae0
// Addr: 1401ecae0
// Size: 53 bytes


char * FUN_1401ecae0(longlong param_1)

{
  uint uVar1;
  char *pcVar2;
  
  uVar1 = (**(code **)(**(longlong **)(*(longlong *)(param_1 + 200) + 0x1510) + 0x40))();
  pcVar2 = "materials/util/effectpassthrough.json";
  if (2 < uVar1) {
    pcVar2 = "materials/util/effectpassthrough_4.json";
  }
  return pcVar2;
}

