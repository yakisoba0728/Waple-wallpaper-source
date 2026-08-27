// Function: FUN_1403fbca0
// Addr: 1403fbca0
// Size: 379 bytes


undefined8 FUN_1403fbca0(longlong param_1,undefined8 param_2)

{
  byte *pbVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  
  cVar2 = FUN_1404093d0(param_1 + 2,param_2,param_1);
  if (cVar2 != '\0') {
    uVar3 = (uint)*(byte *)(param_1 + 3) + (uint)*(byte *)(param_1 + 2) * 0x100;
    if ((uVar3 != 0) && (cVar2 = FUN_140374b40(param_2,(ulonglong)uVar3 + param_1), cVar2 == '\0'))
    {
      return 0;
    }
    cVar2 = FUN_1404093d0(param_1 + 4,param_2,param_1);
    if (cVar2 != '\0') {
      uVar3 = (uint)*(byte *)(param_1 + 5) + (uint)*(byte *)(param_1 + 4) * 0x100;
      if ((uVar3 != 0) && (cVar2 = FUN_140374830(param_2,(ulonglong)uVar3 + param_1), cVar2 == '\0')
         ) {
        return 0;
      }
      cVar2 = FUN_1404093d0(param_1 + 6,param_2,param_1);
      if (cVar2 != '\0') {
        uVar3 = (uint)*(byte *)(param_1 + 7) + (uint)*(byte *)(param_1 + 6) * 0x100;
        if ((uVar3 != 0) &&
           (cVar2 = FUN_140374830(param_2,(ulonglong)uVar3 + param_1), cVar2 == '\0')) {
          return 0;
        }
        cVar2 = FUN_1404093d0(param_1 + 8,param_2,param_1);
        if (cVar2 != '\0') {
          uVar3 = (uint)*(byte *)(param_1 + 9) + (uint)*(byte *)(param_1 + 8) * 0x100;
          if ((uVar3 != 0) &&
             (cVar2 = FUN_140374830(param_2,(ulonglong)uVar3 + param_1), cVar2 == '\0')) {
            return 0;
          }
          cVar2 = FUN_1404078b0(param_1 + 10,param_2);
          if (cVar2 != '\0') {
            uVar5 = 0;
            uVar3 = (uint)*(byte *)(param_1 + 0xb) + (uint)*(byte *)(param_1 + 10) * 0x100;
            if (uVar3 != 0) {
              do {
                pbVar1 = (byte *)(param_1 + 0xc + uVar5 * 2);
                cVar2 = FUN_1404093d0(pbVar1,param_2,param_1);
                if (cVar2 == '\0') {
                  return 0;
                }
                uVar4 = (uint)pbVar1[1] + (uint)*pbVar1 * 0x100;
                if ((uVar4 != 0) &&
                   (cVar2 = FUN_140373790(param_2,(ulonglong)uVar4 + param_1), cVar2 == '\0')) {
                  return 0;
                }
                uVar4 = (int)uVar5 + 1;
                uVar5 = (ulonglong)uVar4;
              } while (uVar4 < uVar3);
            }
            return 1;
          }
        }
      }
    }
  }
  return 0;
}

