// Function: FUN_14033c030
// Addr: 14033c030
// Size: 207 bytes


ulonglong FUN_14033c030(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  ushort *puVar1;
  longlong lVar2;
  ulonglong uVar3;
  uint uVar4;
  
  if (*(char *)(param_1 + 0x58) != '\0') {
    return 0;
  }
  puVar1 = *(ushort **)(param_1 + 0x28);
  *(undefined1 *)(param_1 + 0x58) = 1;
  if (puVar1 == (ushort *)0x0) {
    return 3;
  }
  if (*(char *)(param_1 + 0x59) == '\0') {
    *puVar1 = *puVar1 + 1;
    uVar3 = FUN_1403314c0(param_1,param_2,param_3);
    return uVar3;
  }
  lVar2 = *(longlong *)(param_1 + 0x18);
  if (*(uint *)(lVar2 + 0xc) < *(ushort *)(lVar2 + 0x60) + 1 + (uint)*(ushort *)(lVar2 + 0x18)) {
    uVar4 = FUN_1402f0870(lVar2,0,1);
    if (uVar4 != 0) goto LAB_14033c0d3;
  }
  else {
    uVar4 = 0;
  }
  if (*puVar1 != 0) {
    *(ushort *)(*(longlong *)(puVar1 + 0xc) + -2 + (ulonglong)*puVar1 * 2) = puVar1[1] - 1;
  }
  *puVar1 = *puVar1 + 1;
LAB_14033c0d3:
  if (uVar4 == 0) {
    uVar3 = FUN_1403314c0(param_1,param_2,param_3);
  }
  else {
    uVar3 = (ulonglong)uVar4;
  }
  return uVar3;
}

