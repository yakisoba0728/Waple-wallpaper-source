// Function: FUN_140165bc0
// Addr: 140165bc0
// Size: 61 bytes


undefined4 FUN_140165bc0(uint param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  uint uVar4;
  
  uVar4 = 0;
  uVar3 = (ulonglong)param_1 / 5;
  uVar1 = (int)uVar3 * 5;
  if (param_1 == uVar1) {
    do {
      uVar4 = uVar4 + 1;
      uVar1 = (int)(uVar3 / 5) * 5;
      uVar2 = (uint)uVar3;
      uVar3 = uVar3 / 5;
    } while (uVar2 == uVar1);
  }
  return CONCAT31((int3)(uVar1 >> 8),param_2 <= uVar4);
}

