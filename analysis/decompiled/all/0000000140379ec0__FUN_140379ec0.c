// Function: FUN_140379ec0
// Addr: 140379ec0
// Size: 481 bytes


ulonglong FUN_140379ec0(byte *param_1,int *param_2)

{
  byte *pbVar1;
  char cVar2;
  char *pcVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  
  pbVar1 = param_1 + 2;
  uVar7 = (ulonglong)(uint)param_2[6];
  pcVar3 = "OUT-OF-RANGE";
  uVar6 = 1;
  uVar8 = (longlong)pbVar1 - *(longlong *)(param_2 + 2);
  if (uVar8 <= uVar7) {
    pcVar3 = "OK";
  }
  FUN_1402fc370("SANITIZE",pbVar1,0,1,*param_2 + 1,0,"check_point [%p] in [%p..%p] -> %s",pbVar1,
                *(longlong *)(param_2 + 2),*(undefined8 *)(param_2 + 4),pcVar3);
  if (uVar8 <= uVar7) {
    if ((uint)*param_1 * 0x100 + (uint)param_1[1] != (int)uVar6) {
      return uVar6 & 0xff;
    }
    cVar2 = FUN_1404093d0(pbVar1,param_2,param_1);
    if ((cVar2 != '\0') &&
       ((uVar4 = (uint)param_1[3] + (uint)*pbVar1 * 0x100, uVar4 == 0 ||
        (cVar2 = FUN_140374b40(param_2,param_1 + uVar4), cVar2 != '\0')))) {
      if (*(char *)((longlong)param_2 + 0x3d) != '\0') {
        uVar6 = FUN_140407b60(param_1 + 4,param_2);
        return uVar6;
      }
      cVar2 = FUN_140407b60(param_1 + 4,param_2);
      if (cVar2 != '\0') {
        uVar6 = 0;
        uVar4 = (uint)param_1[5] + (uint)param_1[4] * 0x100;
        if (uVar4 != 0) {
          do {
            pbVar1 = param_1 + uVar6 * 4 + 6;
            cVar2 = FUN_1404093d0(pbVar1,param_2,param_1);
            if (((cVar2 == '\0') ||
                (((uVar5 = (uint)pbVar1[1] + (uint)*pbVar1 * 0x100, uVar5 != 0 &&
                  (cVar2 = FUN_140400fb0(param_1 + uVar5,param_2), cVar2 == '\0')) ||
                 (cVar2 = FUN_1404093d0(pbVar1 + 2,param_2,param_1), cVar2 == '\0')))) ||
               ((uVar5 = (uint)pbVar1[3] + (uint)pbVar1[2] * 0x100, uVar5 != 0 &&
                (cVar2 = FUN_140400fb0(param_1 + uVar5,param_2), cVar2 == '\0')))) {
              return 0;
            }
            uVar5 = (int)uVar6 + 1;
            uVar6 = (ulonglong)uVar5;
          } while (uVar5 < uVar4);
        }
        return 1;
      }
    }
  }
  return 0;
}

