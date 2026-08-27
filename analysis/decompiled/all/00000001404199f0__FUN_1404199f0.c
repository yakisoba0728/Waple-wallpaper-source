// Function: FUN_1404199f0
// Addr: 1404199f0
// Size: 159 bytes


undefined4 FUN_1404199f0(char *param_1,uint param_2)

{
  uint uVar1;
  ulonglong uVar2;
  char local_res8 [32];
  
  if (((param_1 == (char *)0x0) || (param_2 == 0)) || (*param_1 == '\0')) {
    return 0;
  }
  uVar2 = 0;
  if (param_2 < 5) {
    if (param_2 != 0) goto LAB_140419a27;
  }
  else {
    param_2 = 4;
LAB_140419a27:
    do {
      if (param_1[uVar2] == '\0') break;
      local_res8[uVar2] = param_1[uVar2];
      uVar1 = (int)uVar2 + 1;
      uVar2 = (ulonglong)uVar1;
    } while (uVar1 < param_2);
    if (3 < (uint)uVar2) goto LAB_140419a57;
  }
  FUN_1404217a0(local_res8 + uVar2,0x20,4 - (int)uVar2);
LAB_140419a57:
  return CONCAT31(CONCAT21(CONCAT11(local_res8[0],local_res8[1]),local_res8[2]),local_res8[3]);
}

