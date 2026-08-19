// Function: FUN_1403bd130
// Addr: 1403bd130
// Size: 96 bytes


ulonglong FUN_1403bd130(ulonglong *param_1,undefined8 param_2,byte *param_3)

{
  byte *pbVar1;
  byte bVar2;
  byte *pbVar3;
  uint uVar4;
  
  pbVar3 = (byte *)*param_1;
  pbVar1 = pbVar3 + 1;
  if (pbVar1 <= param_3) {
    *param_1 = (ulonglong)pbVar1;
    bVar2 = *pbVar3;
    uVar4 = (uint)bVar2;
    if ((char)bVar2 < '\0') {
      if (param_3 < pbVar3 + 2) goto LAB_1403bd252;
      *param_1 = (ulonglong)(pbVar3 + 2);
      uVar4 = (bVar2 & 0x7f) << 8 | (uint)*pbVar1;
    }
                    /* WARNING: Subroutine does not return */
    FUN_1403a4650(param_2,uVar4,0);
  }
LAB_1403bd252:
  return (ulonglong)pbVar1 & 0xffffffffffffff00;
}

