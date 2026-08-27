// Function: FUN_140401950
// Addr: 140401950
// Size: 711 bytes


undefined8 FUN_140401950(byte *param_1,int *param_2)

{
  byte *pbVar1;
  char cVar2;
  char *pcVar3;
  uint uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  pbVar1 = param_1 + 0xe;
  uVar5 = (ulonglong)(uint)param_2[6];
  pcVar3 = "OUT-OF-RANGE";
  uVar6 = (longlong)pbVar1 - *(longlong *)(param_2 + 2);
  if (uVar6 <= uVar5) {
    pcVar3 = "OK";
  }
  FUN_1402fc370("SANITIZE",pbVar1,0,1,*param_2 + 1,0,"check_point [%p] in [%p..%p] -> %s",pbVar1,
                *(longlong *)(param_2 + 2),*(undefined8 *)(param_2 + 4),pcVar3);
  if (((uVar6 <= uVar5) &&
      (cVar2 = FUN_140409840(param_1 + (ulonglong)param_1[7] +
                                       ((ulonglong)param_1[6] +
                                       (ulonglong)CONCAT11(param_1[4],param_1[5]) * 0x100) * 0x100,
                             param_2,(uint)param_1[3] + (uint)param_1[2] * 0x100), cVar2 != '\0'))
     && (cVar2 = FUN_140409750(param_1 + (ulonglong)param_1[0xb] +
                                         ((ulonglong)param_1[10] +
                                         (ulonglong)CONCAT11(param_1[8],param_1[9]) * 0x100) * 0x100
                               ,param_2,(uint)param_1[0xd] + (uint)param_1[0xc] * 0x100),
        cVar2 != '\0')) {
    if ((uint)*param_1 * 0x100 + (uint)param_1[1] == 0) {
      return 1;
    }
    cVar2 = FUN_140409580(pbVar1,param_2,param_1);
    if (cVar2 != '\0') {
      uVar4 = (uint)param_1[0xf] * 0x10000 + (uint)param_1[0x10] * 0x100 + (uint)*pbVar1 * 0x1000000
              + (uint)param_1[0x11];
      if ((uVar4 != 0) && (cVar2 = FUN_1404015d0(param_1 + uVar4,param_2), cVar2 == '\0')) {
        return 0;
      }
      cVar2 = FUN_140409580(param_1 + 0x12,param_2,param_1);
      if (cVar2 != '\0') {
        uVar4 = (uint)param_1[0x13] * 0x10000 + (uint)param_1[0x14] * 0x100 +
                (uint)param_1[0x12] * 0x1000000 + (uint)param_1[0x15];
        if ((uVar4 != 0) && (cVar2 = FUN_140374c40(param_2,param_1 + uVar4), cVar2 == '\0')) {
          return 0;
        }
        cVar2 = FUN_140409580(param_1 + 0x16,param_2,param_1);
        if (cVar2 != '\0') {
          uVar4 = (uint)param_1[0x17] * 0x10000 + (uint)param_1[0x18] * 0x100 +
                  (uint)param_1[0x16] * 0x1000000 + (uint)param_1[0x19];
          if ((uVar4 != 0) && (cVar2 = FUN_140402530(param_1 + uVar4,param_2), cVar2 == '\0')) {
            return 0;
          }
          cVar2 = FUN_140409580(param_1 + 0x1a,param_2,param_1);
          if (cVar2 != '\0') {
            uVar4 = (uint)param_1[0x1b] * 0x10000 + (uint)param_1[0x1c] * 0x100 +
                    (uint)param_1[0x1a] * 0x1000000 + (uint)param_1[0x1d];
            if ((uVar4 != 0) && (cVar2 = FUN_140403310(param_1 + uVar4,param_2), cVar2 == '\0')) {
              return 0;
            }
            cVar2 = FUN_140409580(param_1 + 0x1e,param_2,param_1);
            if (cVar2 != '\0') {
              uVar4 = (uint)param_1[0x1f] * 0x10000 + (uint)param_1[0x20] * 0x100 +
                      (uint)param_1[0x1e] * 0x1000000 + (uint)param_1[0x21];
              if ((uVar4 != 0) && (cVar2 = FUN_140404130(param_1 + uVar4,param_2), cVar2 == '\0')) {
                return 0;
              }
              return 1;
            }
          }
        }
      }
    }
  }
  return 0;
}

