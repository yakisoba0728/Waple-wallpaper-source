// Function: FUN_140406190
// Addr: 140406190
// Size: 570 bytes


undefined8 FUN_140406190(byte *param_1,int *param_2)

{
  byte *pbVar1;
  char cVar2;
  char *pcVar3;
  uint uVar4;
  int iVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  pbVar1 = param_1 + 4;
  uVar6 = (ulonglong)(uint)param_2[6];
  pcVar3 = "OUT-OF-RANGE";
  iVar5 = 1;
  uVar7 = (longlong)pbVar1 - *(longlong *)(param_2 + 2);
  if (uVar7 <= uVar6) {
    pcVar3 = "OK";
  }
  FUN_1402fc370("SANITIZE",pbVar1,0,1,*param_2 + 1,0,"check_point [%p] in [%p..%p] -> %s",pbVar1,
                *(longlong *)(param_2 + 2),*(undefined8 *)(param_2 + 4),pcVar3);
  if (((uVar7 <= uVar6) && ((uint)*param_1 * 0x100 + (uint)param_1[1] == iVar5)) &&
     (cVar2 = FUN_140409580(pbVar1,param_2,param_1), cVar2 != '\0')) {
    uVar4 = (uint)param_1[5] * 0x10000 + (uint)param_1[6] * 0x100 + (uint)*pbVar1 * 0x1000000 +
            (uint)param_1[7];
    if ((uVar4 != 0) && (cVar2 = FUN_140374b40(param_2,param_1 + uVar4), cVar2 == '\0')) {
      return 0;
    }
    cVar2 = FUN_140409580(param_1 + 8,param_2,param_1);
    if (cVar2 != '\0') {
      uVar4 = (uint)param_1[9] * 0x10000 + (uint)param_1[10] * 0x100 + (uint)param_1[8] * 0x1000000
              + (uint)param_1[0xb];
      if ((uVar4 != 0) && (cVar2 = FUN_140404810(param_1 + uVar4,param_2), cVar2 == '\0')) {
        return 0;
      }
      cVar2 = FUN_140409580(param_1 + 0xc,param_2,param_1);
      if (cVar2 != '\0') {
        uVar4 = (uint)param_1[0xd] * 0x10000 + (uint)param_1[0xe] * 0x100 +
                (uint)param_1[0xc] * 0x1000000 + (uint)param_1[0xf];
        if ((uVar4 != 0) && (cVar2 = FUN_140374990(param_2,param_1 + uVar4), cVar2 == '\0')) {
          return 0;
        }
        cVar2 = FUN_140409580(param_1 + 0x10,param_2,param_1);
        if (cVar2 != '\0') {
          uVar4 = (uint)param_1[0x11] * 0x10000 + (uint)param_1[0x12] * 0x100 +
                  (uint)param_1[0x10] * 0x1000000 + (uint)param_1[0x13];
          if ((uVar4 != 0) && (cVar2 = FUN_1403fb470(param_1 + uVar4,param_2), cVar2 == '\0')) {
            return 0;
          }
          cVar2 = FUN_140409580(param_1 + 0x14,param_2,param_1);
          if (cVar2 != '\0') {
            uVar4 = (uint)param_1[0x15] * 0x10000 + (uint)param_1[0x16] * 0x100 +
                    (uint)param_1[0x14] * 0x1000000 + (uint)param_1[0x17];
            if ((uVar4 != 0) && (cVar2 = FUN_1403fb470(param_1 + uVar4,param_2), cVar2 == '\0')) {
              return 0;
            }
            return 1;
          }
        }
      }
    }
  }
  return 0;
}

