// Function: FUN_140409110
// Addr: 140409110
// Size: 338 bytes


ulonglong FUN_140409110(byte *param_1,int *param_2)

{
  uint uVar1;
  char *pcVar2;
  ulonglong uVar3;
  byte *pbVar4;
  int iVar5;
  ulonglong uVar6;
  char cVar7;
  ulonglong uVar8;
  
  pbVar4 = param_1 + 2;
  pcVar2 = "OUT-OF-RANGE";
  uVar8 = (longlong)pbVar4 - *(longlong *)(param_2 + 2);
  uVar6 = (ulonglong)(uint)param_2[6];
  if (uVar8 <= uVar6) {
    pcVar2 = "OK";
  }
  iVar5 = 0;
  uVar3 = FUN_1402fc370("SANITIZE",pbVar4,0,1,*param_2 + 1,0,"check_point [%p] in [%p..%p] -> %s",
                        pbVar4,*(longlong *)(param_2 + 2),*(undefined8 *)(param_2 + 4),pcVar2);
  if (uVar8 <= uVar6) {
    uVar1 = ((uint)*param_1 * 0x100 + (uint)param_1[1]) * 8 + 8;
    if ((((ulonglong)(uint)param_2[6] < (ulonglong)((longlong)pbVar4 - *(longlong *)(param_2 + 2)))
        || ((uint)(param_2[4] - (int)pbVar4) < uVar1)) ||
       (param_2[7] = param_2[7] - uVar1, param_2[7] <= iVar5)) {
      cVar7 = '\0';
    }
    else {
      cVar7 = '\x01';
    }
    uVar6 = 1;
    uVar3 = FUN_1402fc370("SANITIZE");
    if (cVar7 != '\0') {
      return uVar6 & 0xff;
    }
  }
  return uVar3 & 0xffffffffffffff00;
}

