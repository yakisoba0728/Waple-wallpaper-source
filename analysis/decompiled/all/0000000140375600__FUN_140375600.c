// Function: FUN_140375600
// Addr: 140375600
// Size: 342 bytes


ulonglong FUN_140375600(int *param_1,longlong param_2)

{
  uint uVar1;
  char *pcVar2;
  ulonglong uVar3;
  uint uVar4;
  char *pcVar5;
  int iVar6;
  ulonglong uVar7;
  char cVar8;
  ulonglong uVar9;
  
  uVar7 = (ulonglong)(uint)param_1[6];
  param_2 = param_2 + 4;
  pcVar5 = "OUT-OF-RANGE";
  uVar9 = param_2 - *(longlong *)(param_1 + 2);
  pcVar2 = "OUT-OF-RANGE";
  if (uVar9 <= uVar7) {
    pcVar2 = "OK";
  }
  iVar6 = 0;
  uVar3 = FUN_1402fc370("SANITIZE",param_2,0,1,*param_1 + 1,0,"check_point [%p] in [%p..%p] -> %s",
                        param_2,*(longlong *)(param_1 + 2),*(undefined8 *)(param_1 + 4),pcVar2);
  if ((uVar9 <= uVar7) && (uVar4 = param_1[0xe] + 1, uVar4 < 0x3fffffff)) {
    uVar1 = uVar4 * 4;
    if (((ulonglong)(uint)param_1[6] < (ulonglong)(param_2 - *(longlong *)(param_1 + 2))) ||
       (((uint)(param_1[4] - (int)param_2) < uVar1 ||
        (param_1[7] = param_1[7] + uVar4 * -4, param_1[7] <= iVar6)))) {
      cVar8 = '\0';
    }
    else {
      cVar8 = '\x01';
    }
    if (cVar8 != '\0') {
      pcVar5 = "OK";
    }
    uVar7 = 1;
    uVar3 = FUN_1402fc370("SANITIZE",param_2,0,1,*param_1 + 1,0,
                          "check_range [%p..%p] (%u bytes) in [%p..%p] -> %s",param_2,
                          (ulonglong)uVar1 + param_2,uVar1,*(longlong *)(param_1 + 2),
                          *(undefined8 *)(param_1 + 4),pcVar5);
    if (cVar8 != '\0') {
      return uVar7 & 0xff;
    }
  }
  return uVar3 & 0xffffffffffffff00;
}

