// Function: FUN_140399720
// Addr: 140399720
// Size: 67 bytes


longlong FUN_140399720(longlong param_1,int param_2)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = param_2;
  while (iVar1 != 0) {
    iVar1 = iVar1 + -1;
    lVar2 = param_1;
    if (param_1 == -1) {
      lVar2 = 0;
    }
    *(int *)(lVar2 + 4) = *(int *)(lVar2 + 4) - *(int *)(lVar2 + 8);
  }
  FUN_1403995b0(param_1 + 0x10,param_2);
  return param_1;
}

