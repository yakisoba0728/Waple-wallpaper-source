// Function: FUN_140341580
// Addr: 140341580
// Size: 112 bytes


ulonglong FUN_140341580(longlong param_1,int *param_2)

{
  uint uVar1;
  ulonglong uVar2;
  
  if (*param_2 == -1) {
    return 0;
  }
  if ((*(char *)(param_1 + 0x28) != '\0') && (*(int *)(param_1 + 0x2c) == *param_2)) {
    FUN_14034c700();
    if (*(char *)(param_1 + 0x28) != '\0') {
      uVar1 = *(uint *)(param_1 + 0x30);
      *param_2 = *(int *)(param_1 + 0x2c);
      return (ulonglong)uVar1;
    }
    return 0;
  }
  uVar2 = FUN_14034c520(param_1,param_2,1);
  return uVar2;
}

