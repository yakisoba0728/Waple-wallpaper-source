// Function: FUN_1401f58e0
// Addr: 1401f58e0
// Size: 155 bytes


void FUN_1401f58e0(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  char cVar3;
  longlong lVar4;
  
  *(uint *)(param_1 + 0x310) = *(uint *)(param_1 + 0x310) & 0x3fffffff;
  *(uint *)(param_1 + 0x310) = *(uint *)(param_1 + 0x310) | 0x80000000;
  *(undefined4 *)(param_1 + 0x2fc) = 0;
  lVar1 = *(longlong *)(param_1 + 0x2c8);
  for (lVar4 = *(longlong *)(param_1 + 0x2c0); lVar4 != lVar1; lVar4 = lVar4 + 0x38) {
    if ((*(longlong *)(lVar4 + 0x28) != 0) &&
       (cVar3 = (**(code **)(**(longlong **)(*(longlong *)(param_1 + 200) + 0x158) + 0xb0))(),
       cVar3 == '\0')) {
      plVar2 = *(longlong **)(*(longlong *)(param_1 + 200) + 0x158);
      (**(code **)(*plVar2 + 200))(plVar2,*(undefined8 *)(lVar4 + 0x28));
    }
  }
  return;
}

