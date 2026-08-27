// Function: FUN_1402611f0
// Addr: 1402611f0
// Size: 94 bytes


ulonglong FUN_1402611f0(char *param_1)

{
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  
  uVar3 = 0;
  do {
    iVar1 = strcmp((&PTR_s_setcolor_140484d90)[uVar3],param_1);
    if (iVar1 == 0) {
      return uVar3;
    }
    uVar2 = (int)uVar3 + 1;
    uVar3 = (ulonglong)uVar2;
  } while ((int)uVar2 < 0xe);
  return 0xf;
}

