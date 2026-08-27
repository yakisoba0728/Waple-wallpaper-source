// Function: FUN_140307050
// Addr: 140307050
// Size: 72 bytes


undefined8 FUN_140307050(undefined8 param_1,uint param_2,longlong param_3)

{
  undefined8 uVar1;
  uint uVar2;
  ulonglong uVar3;
  
  uVar1 = FUN_140313fd0();
  if (((int)uVar1 == 0) && (uVar3 = 0, param_2 != 0)) {
    while (*(int *)(param_3 + uVar3 * 4) == 0) {
      uVar2 = (int)uVar3 + 1;
      uVar3 = (ulonglong)uVar2;
      if (param_2 <= uVar2) {
        return uVar1;
      }
    }
    uVar1 = 0xfffffffe;
  }
  return uVar1;
}

