// Function: FUN_1401a8db0
// Addr: 1401a8db0
// Size: 260 bytes


/* WARNING: Removing unreachable block (ram,0x0001401a8e07) */

ulonglong FUN_1401a8db0(longlong *param_1,ulonglong *param_2)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong lVar4;
  bool bVar5;
  
  uVar2 = *param_2;
  if (uVar2 != param_2[1]) {
    param_2[1] = uVar2;
  }
  if ((*(uint *)(param_1 + 1) & 0xff) != 6) {
    return uVar2 & 0xffffffffffffff00;
  }
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 == (undefined8 *)0x0) {
    lVar3 = 0;
  }
  else {
    lVar3 = *(longlong *)*puVar1;
  }
  bVar5 = (longlong *)*param_1 == (longlong *)0x0;
  if (bVar5) {
    lVar4 = 0;
  }
  else {
    lVar4 = *(longlong *)*param_1;
  }
  if (puVar1 != (undefined8 *)0x0) {
    bVar5 = lVar3 == lVar4;
  }
  if (!bVar5) {
    uVar2 = func_0x000140087560(lVar3 + 0x30,"value","");
    return uVar2;
  }
  return CONCAT71((int7)(param_2[1] >> 8),*param_2 != param_2[1]);
}

