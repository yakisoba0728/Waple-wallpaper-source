// Function: FUN_1402827a0
// Addr: 1402827a0
// Size: 170 bytes


void FUN_1402827a0(longlong param_1)

{
  ulonglong uVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  longlong lVar4;
  code *pcVar5;
  longlong *plVar6;
  
  if (*(longlong *)(param_1 + 8) == 0) {
    return;
  }
  plVar2 = *(longlong **)(param_1 + 0x20);
  for (plVar6 = *(longlong **)(param_1 + 0x18); plVar6 != plVar2; plVar6 = plVar6 + 1) {
    puVar3 = (undefined8 *)*plVar6;
    if (puVar3 != (undefined8 *)0x0) {
      (**(code **)*puVar3)(puVar3,1);
    }
  }
  uVar1 = *(longlong *)(param_1 + 0x10) * 8;
  if (0xfff < uVar1) {
    lVar4 = *(longlong *)(*(longlong *)(param_1 + 8) + -8);
    if ((*(longlong *)(param_1 + 8) - lVar4) - 8U < 0x20) {
      thunk_FUN_14028af80(lVar4,uVar1 + 0x27);
      return;
    }
    pcVar5 = (code *)swi(0x29);
    (*pcVar5)(5);
  }
  thunk_FUN_14028af80();
  return;
}

