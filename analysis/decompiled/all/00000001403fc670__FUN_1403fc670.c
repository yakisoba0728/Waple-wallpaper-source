// Function: FUN_1403fc670
// Addr: 1403fc670
// Size: 606 bytes


undefined8 FUN_1403fc670(byte *param_1,int *param_2)

{
  byte *pbVar1;
  char cVar2;
  char *pcVar3;
  uint uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  pbVar1 = param_1 + 4;
  uVar5 = (ulonglong)(uint)param_2[6];
  pcVar3 = "OUT-OF-RANGE";
  uVar6 = (longlong)pbVar1 - *(longlong *)(param_2 + 2);
  if (uVar6 <= uVar5) {
    pcVar3 = "OK";
  }
  FUN_1402fc370("SANITIZE",pbVar1,0,1,*param_2 + 1,0,"check_point [%p] in [%p..%p] -> %s",pbVar1,
                *(longlong *)(param_2 + 2),*(undefined8 *)(param_2 + 4),pcVar3);
  if ((uVar6 <= uVar5) && (cVar2 = FUN_1404093d0(pbVar1,param_2,param_1), cVar2 != '\0')) {
    uVar4 = (uint)param_1[5] + (uint)*pbVar1 * 0x100;
    if ((uVar4 != 0) && (cVar2 = FUN_140374830(param_2,param_1 + uVar4), cVar2 == '\0')) {
      return 0;
    }
    cVar2 = FUN_1404093d0(param_1 + 6,param_2,param_1);
    if (cVar2 != '\0') {
      uVar4 = (uint)param_1[6] * 0x100 + (uint)param_1[7];
      if ((uVar4 != 0) && (cVar2 = FUN_140374680(param_2,param_1 + uVar4), cVar2 == '\0')) {
        return 0;
      }
      cVar2 = FUN_1404093d0(param_1 + 8,param_2,param_1);
      if (cVar2 != '\0') {
        uVar4 = (uint)param_1[8] * 0x100 + (uint)param_1[9];
        if ((uVar4 != 0) && (cVar2 = FUN_140374d40(param_2,param_1 + uVar4), cVar2 == '\0')) {
          return 0;
        }
        cVar2 = FUN_1404093d0(param_1 + 10,param_2,param_1);
        if (cVar2 != '\0') {
          uVar4 = (uint)param_1[0xb] + (uint)param_1[10] * 0x100;
          if ((uVar4 != 0) && (cVar2 = FUN_140374830(param_2,param_1 + uVar4), cVar2 == '\0')) {
            return 0;
          }
          if (0x10001 < (((uint)*param_1 * 0x100 + (uint)param_1[1]) * 0x100 + (uint)param_1[2]) *
                        0x100 + (uint)param_1[3]) {
            cVar2 = FUN_1404093d0(param_1 + 0xc,param_2,param_1);
            if (cVar2 == '\0') {
              return 0;
            }
            uVar4 = (uint)param_1[0xd] + (uint)param_1[0xc] * 0x100;
            if ((uVar4 != 0) && (cVar2 = FUN_140375100(param_2,param_1 + uVar4), cVar2 == '\0')) {
              return 0;
            }
          }
          if (0x10002 < (((uint)*param_1 * 0x100 + (uint)param_1[1]) * 0x100 + (uint)param_1[2]) *
                        0x100 + (uint)param_1[3]) {
            cVar2 = FUN_140409580(param_1 + 0xe,param_2,param_1);
            if (cVar2 == '\0') {
              return 0;
            }
            uVar4 = (uint)param_1[0xf] * 0x10000 + (uint)param_1[0x10] * 0x100 +
                    (uint)param_1[0xe] * 0x1000000 + (uint)param_1[0x11];
            if ((uVar4 != 0) && (cVar2 = FUN_140404130(param_1 + uVar4,param_2), cVar2 == '\0')) {
              return 0;
            }
          }
          return 1;
        }
      }
    }
  }
  return 0;
}

