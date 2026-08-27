// Function: FUN_140260f50
// Addr: 140260f50
// Size: 94 bytes


ulonglong FUN_140260f50(char *param_1)

{
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  
  uVar3 = 0;
  do {
    iVar1 = strcmp((&PTR_s_lifetimefraction_140484e80)[uVar3],param_1);
    if (iVar1 == 0) {
      return uVar3;
    }
    uVar2 = (int)uVar3 + 1;
    uVar3 = (ulonglong)uVar2;
  } while ((int)uVar2 < 0x14);
  return 0x15;
}

