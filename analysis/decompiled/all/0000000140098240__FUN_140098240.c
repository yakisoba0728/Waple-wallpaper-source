// Function: FUN_140098240
// Addr: 140098240
// Size: 97 bytes


ulonglong FUN_140098240(undefined8 param_1)

{
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  
  uVar3 = 0;
  do {
    iVar1 = FUN_1402c10d0(param_1,(&PTR_DAT_140478d70)[uVar3 * 4]);
    if (iVar1 == 0) {
      return uVar3;
    }
    uVar2 = (int)uVar3 + 1;
    uVar3 = (ulonglong)uVar2;
  } while ((int)uVar2 < 0x24);
  return 0;
}

