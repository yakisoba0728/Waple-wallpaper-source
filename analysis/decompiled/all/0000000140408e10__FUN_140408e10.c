// Function: FUN_140408e10
// Addr: 140408e10
// Size: 370 bytes


ulonglong FUN_140408e10(byte *param_1,int *param_2)

{
  char *pcVar1;
  ulonglong uVar2;
  byte *pbVar3;
  uint uVar4;
  ulonglong uVar5;
  char cVar6;
  ulonglong uVar7;
  
  pbVar3 = param_1 + 4;
  pcVar1 = "OUT-OF-RANGE";
  uVar7 = (longlong)pbVar3 - *(longlong *)(param_2 + 2);
  uVar5 = (ulonglong)(uint)param_2[6];
  if (uVar7 <= uVar5) {
    pcVar1 = "OK";
  }
  uVar2 = FUN_1402fc370("SANITIZE",pbVar3,0,1,*param_2 + 1,0,"check_point [%p] in [%p..%p] -> %s",
                        pbVar3,*(longlong *)(param_2 + 2),*(undefined8 *)(param_2 + 4),pcVar1);
  if (uVar7 <= uVar5) {
    uVar2 = 0;
    uVar4 = (uint)param_1[1] * 0x10000 + (uint)param_1[2] * 0x100 + (uint)*param_1 * 0x1000000 +
            (uint)param_1[3];
    if (uVar4 < 0x33333333) {
      if ((((ulonglong)(uint)param_2[6] < (ulonglong)((longlong)pbVar3 - *(longlong *)(param_2 + 2))
           ) || ((uint)(param_2[4] - (int)pbVar3) < uVar4 * 5)) ||
         (param_2[7] = param_2[7] + uVar4 * -5, param_2[7] < 1)) {
        cVar6 = '\0';
      }
      else {
        cVar6 = '\x01';
      }
      uVar5 = 1;
      uVar2 = FUN_1402fc370("SANITIZE");
      if (cVar6 != '\0') {
        return uVar5 & 0xff;
      }
    }
  }
  return uVar2 & 0xffffffffffffff00;
}

