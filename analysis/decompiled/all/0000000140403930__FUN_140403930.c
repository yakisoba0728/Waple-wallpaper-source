// Function: FUN_140403930
// Addr: 140403930
// Size: 635 bytes


ulonglong FUN_140403930(byte *param_1,int *param_2,uint param_3)

{
  byte *pbVar1;
  char cVar2;
  char *pcVar3;
  uint uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  if (param_3 == 0x73697a65) {
    pbVar1 = param_1 + 10;
    uVar7 = (ulonglong)(uint)param_2[6];
    pcVar3 = "OUT-OF-RANGE";
    uVar6 = (longlong)pbVar1 - *(longlong *)(param_2 + 2);
    uVar5 = 1;
    if (uVar6 <= uVar7) {
      pcVar3 = "OK";
    }
    FUN_1402fc370("SANITIZE",pbVar1,0,1,*param_2 + 1,0,"check_point [%p] in [%p..%p] -> %s",pbVar1,
                  *(longlong *)(param_2 + 2),*(undefined8 *)(param_2 + 4),pcVar3);
    if (((uVar6 <= uVar7) && (uVar4 = (uint)*param_1 * 0x100 + (uint)param_1[1], uVar4 != 0)) &&
       ((((uint)param_1[3] + (uint)param_1[2] * 0x100 == 0 &&
         ((((uint)param_1[4] * 0x100 + (uint)param_1[5] == 0 &&
           ((uint)param_1[6] * 0x100 + (uint)param_1[7] == 0)) &&
          ((uint)param_1[8] * 0x100 + (uint)param_1[9] == 0)))) ||
        ((((uint)param_1[6] * 0x100 + (uint)param_1[7] <= uVar4 &&
          (uVar4 <= (uint)param_1[8] * 0x100 + (uint)param_1[9])) &&
         ((uint)param_1[4] * 0x100 + (param_1[5] - 0x100) < 0x7f00)))))) {
      return uVar5 & 0xff;
    }
  }
  else {
    if ((param_3 & 0xffff0000) == 0x73730000) {
      param_1 = param_1 + 4;
      uVar5 = (ulonglong)(uint)param_2[6];
      pcVar3 = "OUT-OF-RANGE";
      uVar7 = (longlong)param_1 - *(longlong *)(param_2 + 2);
      if (uVar7 <= uVar5) {
        pcVar3 = "OK";
      }
      FUN_1402fc370("SANITIZE",param_1,0,1,*param_2 + 1,0,"check_point [%p] in [%p..%p] -> %s",
                    param_1,*(longlong *)(param_2 + 2),*(undefined8 *)(param_2 + 4),pcVar3);
      return (ulonglong)(uVar7 <= uVar5);
    }
    if ((param_3 & 0xffff0000) != 0x63760000) {
      return 1;
    }
    pbVar1 = param_1 + 0xe;
    uVar5 = (ulonglong)(uint)param_2[6];
    pcVar3 = "OUT-OF-RANGE";
    uVar7 = (longlong)pbVar1 - *(longlong *)(param_2 + 2);
    if (uVar7 <= uVar5) {
      pcVar3 = "OK";
    }
    FUN_1402fc370("SANITIZE",pbVar1,0,1,*param_2 + 1,0,"check_point [%p] in [%p..%p] -> %s",pbVar1,
                  *(longlong *)(param_2 + 2),*(undefined8 *)(param_2 + 4),pcVar3);
    if ((uVar7 <= uVar5) && (cVar2 = FUN_140407070(param_1 + 0xc,param_2), cVar2 != '\0')) {
      return 1;
    }
  }
  return 0;
}

