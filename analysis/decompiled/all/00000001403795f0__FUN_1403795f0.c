// Function: FUN_1403795f0
// Addr: 1403795f0
// Size: 626 bytes


ulonglong FUN_1403795f0(longlong param_1,int *param_2)

{
  longlong lVar1;
  uint uVar2;
  char cVar3;
  char *pcVar4;
  char *pcVar5;
  int iVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  
  cVar3 = *(char *)(param_1 + 4);
  if (cVar3 == '\0') {
    uVar7 = FUN_1404089d0(param_1 + 6);
    return uVar7;
  }
  if (cVar3 == '\x01') {
    lVar1 = param_1 + 0x10;
    pcVar4 = "OUT-OF-RANGE";
    uVar7 = (ulonglong)(uint)param_2[6];
    uVar8 = lVar1 - *(longlong *)(param_2 + 2);
    if (uVar8 <= uVar7) {
      pcVar4 = "OK";
    }
    FUN_1402fc370("SANITIZE",lVar1,0,1,*param_2 + 1,0,"check_point [%p] in [%p..%p] -> %s",lVar1,
                  *(longlong *)(param_2 + 2),*(undefined8 *)(param_2 + 4),pcVar4);
    if ((uVar7 < uVar8) || (cVar3 = FUN_140400c40(param_1 + 6,param_2), cVar3 == '\0')) {
      return 0;
    }
  }
  else {
    if (cVar3 == '\x02') {
      uVar7 = FUN_1403fcaa0();
      return uVar7;
    }
    if (cVar3 == '\x03') {
      pcVar5 = "OUT-OF-RANGE";
      uVar7 = (ulonglong)(uint)param_2[6];
      pcVar4 = "OUT-OF-RANGE";
      lVar1 = param_1 + 0xc;
      uVar8 = lVar1 - *(longlong *)(param_2 + 2);
      if (uVar8 <= uVar7) {
        pcVar4 = "OK";
      }
      iVar6 = 0;
      FUN_1402fc370("SANITIZE",lVar1,0,1,*param_2 + 1,0,"check_point [%p] in [%p..%p] -> %s",lVar1,
                    *(longlong *)(param_2 + 2),*(undefined8 *)(param_2 + 4),pcVar4);
      if (uVar8 <= uVar7) {
        uVar2 = (uint)*(byte *)(param_1 + 10) * (uint)*(byte *)(param_1 + 9) +
                ((uint)*(byte *)(param_1 + 7) + (uint)*(byte *)(param_1 + 6) * 0x100 +
                (uint)*(byte *)(param_1 + 8)) * 2;
        if ((((ulonglong)(uint)param_2[6] < (ulonglong)(lVar1 - *(longlong *)(param_2 + 2))) ||
            ((uint)(param_2[4] - (int)lVar1) < uVar2)) ||
           (param_2[7] = param_2[7] - uVar2, param_2[7] <= iVar6)) {
          cVar3 = '\0';
        }
        else {
          cVar3 = '\x01';
        }
        if (cVar3 != '\0') {
          pcVar5 = "OK";
        }
        uVar7 = 1;
        FUN_1402fc370("SANITIZE",lVar1,0,1,*param_2 + 1,0,
                      "check_range [%p..%p] (%u bytes) in [%p..%p] -> %s",lVar1,
                      (ulonglong)uVar2 + lVar1,uVar2,*(longlong *)(param_2 + 2),
                      *(undefined8 *)(param_2 + 4),pcVar5);
        if (cVar3 != '\0') {
          return uVar7 & 0xff;
        }
      }
      return 0;
    }
  }
  return 1;
}

