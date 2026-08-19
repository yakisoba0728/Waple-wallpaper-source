// Function: FUN_140419ac0
// Addr: 140419ac0
// Size: 4 bytes


undefined4 FUN_140419ac0(char *param_1,uint param_2)

{
  uint uVar1;
  ulonglong uVar2;
  char acStackX_8 [32];
  
  if (((param_1 == (char *)0x0) || (param_2 == 0)) || (*param_1 == '\0')) {
    return 0;
  }
  uVar2 = 0;
  if (param_2 < 5) {
    if (param_2 != 0) goto code_r0x000140419af7;
  }
  else {
    param_2 = 4;
code_r0x000140419af7:
    do {
      if (param_1[uVar2] == '\0') break;
      acStackX_8[uVar2] = param_1[uVar2];
      uVar1 = (int)uVar2 + 1;
      uVar2 = (ulonglong)uVar1;
    } while (uVar1 < param_2);
    if (3 < (uint)uVar2) goto code_r0x000140419b27;
  }
  func_0x000140421870(acStackX_8 + uVar2,0x20,4 - (int)uVar2);
code_r0x000140419b27:
  return CONCAT31(CONCAT21(CONCAT11(acStackX_8[0],acStackX_8[1]),acStackX_8[2]),acStackX_8[3]);
}

