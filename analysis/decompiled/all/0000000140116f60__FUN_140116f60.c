// Function: FUN_140116f60
// Addr: 140116f60
// Size: 125 bytes


undefined8 * FUN_140116f60(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  
  puVar2 = (undefined8 *)FUN_14028af20(0x28);
  *puVar2 = &PTR_FUN_140489768;
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  puVar2[4] = 7;
  *(undefined2 *)(puVar2 + 1) = 0;
  lVar1 = *(longlong *)(param_1 + 8);
  if (puVar2 != (undefined8 *)(lVar1 + 0x70)) {
    plVar3 = (longlong *)(lVar1 + 0x78);
    if (7 < *(ulonglong *)(lVar1 + 0x90)) {
      plVar3 = (longlong *)*plVar3;
    }
    FUN_140016ae0(puVar2 + 1,plVar3,*(undefined8 *)(lVar1 + 0x88));
  }
  return puVar2;
}

