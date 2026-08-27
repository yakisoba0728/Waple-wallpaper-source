// Function: FUN_14003ef00
// Addr: 14003ef00
// Size: 171 bytes


undefined1 FUN_14003ef00(longlong param_1)

{
  undefined8 *puVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined4 local_res8 [2];
  
  puVar1 = *(undefined8 **)(param_1 + 8);
  local_res8[0] = 7;
  if (puVar1 == *(undefined8 **)(param_1 + 0x10)) {
    FUN_14004c600(param_1,puVar1,local_res8);
  }
  else {
    *(undefined1 *)(puVar1 + 1) = 7;
    *(uint *)(puVar1 + 1) = *(uint *)(puVar1 + 1) & 0xfffffeff;
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1[4] = 0;
    plVar2 = (longlong *)FUN_14028af20(0x10);
    *plVar2 = 0;
    plVar2[1] = 0;
    lVar3 = FUN_14028af20(0x58);
    *(longlong *)lVar3 = lVar3;
    *(longlong *)(lVar3 + 8) = lVar3;
    *(longlong *)(lVar3 + 0x10) = lVar3;
    *(undefined2 *)(lVar3 + 0x18) = 0x101;
    *plVar2 = lVar3;
    *puVar1 = plVar2;
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x28;
  }
  FUN_14004ac00(param_1 + 0x18);
  return 1;
}

