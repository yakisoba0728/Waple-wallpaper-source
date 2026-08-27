// Function: FUN_1402f04b0
// Addr: 1402f04b0
// Size: 153 bytes


undefined8 FUN_1402f04b0(longlong param_1,char *param_2)

{
  uint uVar1;
  int iVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  
  if ((param_1 != 0) && (param_2 != (char *)0x0)) {
    uVar1 = *(uint *)(param_1 + 0x14);
    for (puVar3 = (undefined8 *)(param_1 + 0x18); plVar4 = (longlong *)0x0,
        puVar3 < (undefined8 *)(param_1 + ((ulonglong)uVar1 + 3) * 8); puVar3 = puVar3 + 1) {
      plVar4 = (longlong *)*puVar3;
      iVar2 = strcmp(*(char **)(*plVar4 + 8),param_2);
      if (iVar2 == 0) break;
    }
    if (plVar4 != (longlong *)0x0) {
      return *(undefined8 *)(*plVar4 + 0x18);
    }
  }
  return 0;
}

