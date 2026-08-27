// Function: FUN_1402fa6a0
// Addr: 1402fa6a0
// Size: 207 bytes


undefined4 FUN_1402fa6a0(longlong param_1,longlong param_2)

{
  code *pcVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  
  if (param_2 == 0) {
    return 6;
  }
  if (param_1 != 0) {
    uVar2 = 6;
    if (((*(uint *)(param_1 + 8) & 0x100) != 0) &&
       (lVar3 = *(longlong *)(*(longlong *)(param_1 + 0xd0) + 0x28), lVar3 != -2)) {
      if (lVar3 == 0) {
        pcVar1 = *(code **)(**(longlong **)(param_1 + 0x90) + 0x30);
        if (pcVar1 != (code *)0x0) {
          lVar3 = (*pcVar1)(*(longlong **)(param_1 + 0x90),"multi-masters");
        }
        lVar4 = -2;
        if (lVar3 != 0) {
          lVar4 = lVar3;
        }
        *(longlong *)(*(longlong *)(param_1 + 0xd0) + 0x28) = lVar4;
        if (lVar3 == 0) {
          return 6;
        }
      }
      if (*(code **)(lVar3 + 0x20) != (code *)0x0) {
        uVar2 = (**(code **)(lVar3 + 0x20))(param_1,param_2);
      }
    }
    return uVar2;
  }
  return 0x23;
}

