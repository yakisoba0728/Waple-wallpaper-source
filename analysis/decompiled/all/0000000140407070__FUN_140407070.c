// Function: FUN_140407070
// Addr: 140407070
// Size: 334 bytes


ulonglong FUN_140407070(byte *param_1,int *param_2)

{
  char *pcVar1;
  ulonglong uVar2;
  int iVar3;
  byte *pbVar4;
  int iVar5;
  ulonglong uVar6;
  char cVar7;
  ulonglong uVar8;
  
  pbVar4 = param_1 + 2;
  pcVar1 = "OUT-OF-RANGE";
  uVar8 = (longlong)pbVar4 - *(longlong *)(param_2 + 2);
  uVar6 = (ulonglong)(uint)param_2[6];
  if (uVar8 <= uVar6) {
    pcVar1 = "OK";
  }
  iVar5 = 0;
  uVar2 = FUN_1402fc370("SANITIZE",pbVar4,0,1,*param_2 + 1,0,"check_point [%p] in [%p..%p] -> %s",
                        pbVar4,*(longlong *)(param_2 + 2),*(undefined8 *)(param_2 + 4),pcVar1);
  if (uVar8 <= uVar6) {
    iVar3 = (uint)*param_1 * 0x100 + (uint)param_1[1];
    if ((((ulonglong)(uint)param_2[6] < (ulonglong)((longlong)pbVar4 - *(longlong *)(param_2 + 2)))
        || ((uint)(param_2[4] - (int)pbVar4) < (uint)(iVar3 * 3))) ||
       (param_2[7] = param_2[7] + iVar3 * -3, param_2[7] <= iVar5)) {
      cVar7 = '\0';
    }
    else {
      cVar7 = '\x01';
    }
    uVar6 = 1;
    uVar2 = FUN_1402fc370("SANITIZE");
    if (cVar7 != '\0') {
      return uVar6 & 0xff;
    }
  }
  return uVar2 & 0xffffffffffffff00;
}

