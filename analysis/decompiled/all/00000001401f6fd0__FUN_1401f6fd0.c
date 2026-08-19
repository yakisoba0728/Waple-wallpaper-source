// Function: FUN_1401f6fd0
// Addr: 1401f6fd0
// Size: 44 bytes


void FUN_1401f6fd0(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  longlong *plVar3;
  char cVar4;
  longlong lVar5;
  
  uVar1 = *(uint *)(param_1 + 0x310);
  *(uint *)(param_1 + 0x310) = uVar1 & 0xf7ffffff;
  if (((uVar1 >> 0x1e & 1) == 0) && (-1 < (int)uVar1)) {
    *(uint *)(param_1 + 0x310) = uVar1 & 0xf7ffffff | 0x40000000;
    lVar2 = *(longlong *)(param_1 + 0x2c8);
    for (lVar5 = *(longlong *)(param_1 + 0x2c0); lVar5 != lVar2; lVar5 = lVar5 + 0x38) {
      if ((*(longlong *)(lVar5 + 0x28) != 0) &&
         (cVar4 = (**(code **)(**(longlong **)(*(longlong *)(param_1 + 200) + 0x158) + 0xa0))(),
         cVar4 != '\0')) {
        plVar3 = *(longlong **)(*(longlong *)(param_1 + 200) + 0x158);
        (**(code **)(*plVar3 + 0xc0))(plVar3,*(undefined8 *)(lVar5 + 0x28));
      }
    }
  }
  return;
}

