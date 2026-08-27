// Function: FUN_14007a7e0
// Addr: 14007a7e0
// Size: 137 bytes


longlong * FUN_14007a7e0(longlong param_1,longlong *param_2,longlong param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar1 = *(longlong *)(param_1 + 8);
  lVar4 = param_3;
  lVar3 = param_3;
  while (lVar2 = lVar3 + 0x48, lVar2 != lVar1) {
    FUN_14000de40(lVar4,lVar2);
    *(undefined4 *)(lVar4 + 0x20) = *(undefined4 *)(lVar3 + 0x68);
    FUN_14000de40(lVar4 + 0x28,lVar3 + 0x70);
    lVar4 = lVar4 + 0x48;
    lVar3 = lVar2;
  }
  lVar1 = *(longlong *)(param_1 + 8);
  FUN_140017240(lVar1 + -0x20);
  FUN_140017240(lVar1 + -0x48);
  *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + -0x48;
  *param_2 = param_3;
  return param_2;
}

