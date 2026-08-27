// Function: FUN_1402f0420
// Addr: 1402f0420
// Size: 137 bytes


longlong * FUN_1402f0420(longlong param_1,char *param_2)

{
  uint uVar1;
  longlong *plVar2;
  int iVar3;
  undefined8 *puVar4;
  
  if ((param_1 != 0) && (param_2 != (char *)0x0)) {
    puVar4 = (undefined8 *)(param_1 + 0x18);
    uVar1 = *(uint *)(param_1 + 0x14);
    while( true ) {
      if ((undefined8 *)(param_1 + ((ulonglong)uVar1 + 3) * 8) <= puVar4) {
        return (longlong *)0x0;
      }
      plVar2 = (longlong *)*puVar4;
      iVar3 = strcmp(*(char **)(*plVar2 + 8),param_2);
      if (iVar3 == 0) break;
      puVar4 = puVar4 + 1;
    }
    return plVar2;
  }
  return (longlong *)0x0;
}

