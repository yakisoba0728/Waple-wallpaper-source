// Function: FUN_140261020
// Addr: 140261020
// Size: 11 bytes


ulonglong FUN_140261020(undefined8 param_1)

{
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  
  uVar3 = 0;
  do {
    iVar1 = FUN_140421e50((&PTR_PTR_140484f50)[uVar3],param_1);
    if (iVar1 == 0) {
      return uVar3;
    }
    uVar2 = (int)uVar3 + 1;
    uVar3 = (ulonglong)uVar2;
  } while ((int)uVar2 < 0x14);
  return 0x15;
}

