// Function: FUN_1400982d0
// Addr: 1400982d0
// Size: 124 bytes


ulonglong FUN_1400982d0(undefined8 param_1)

{
  int iVar1;
  ulonglong uVar2;
  uint uVar3;
  
  uVar2 = 0;
  do {
    iVar1 = FUN_1402c10d0(param_1,(&PTR_s_english_140478d78)[uVar2 * 4]);
    if (iVar1 == 0) {
      return uVar2;
    }
    uVar3 = (int)uVar2 + 1;
    uVar2 = (ulonglong)uVar3;
  } while ((int)uVar3 < 0x24);
  iVar1 = FUN_1402c10d0(param_1,"latam");
  uVar2 = 0;
  if (iVar1 == 0) {
    uVar2 = 0x14;
  }
  return uVar2;
}

