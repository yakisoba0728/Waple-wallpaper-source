// Function: FUN_14038bbe0
// Addr: 14038bbe0
// Size: 330 bytes


undefined8 FUN_14038bbe0(byte *param_1,undefined8 param_2)

{
  char cVar1;
  uint uVar2;
  
  cVar1 = FUN_1404093d0(param_1 + 4,param_2,param_1);
  if (cVar1 != '\0') {
    uVar2 = (uint)param_1[5] + (uint)param_1[4] * 0x100;
    if ((uVar2 != 0) && (cVar1 = FUN_140375360(param_2,param_1 + uVar2), cVar1 == '\0')) {
      return 0;
    }
    cVar1 = FUN_1404093d0(param_1 + 6,param_2,param_1);
    if (cVar1 != '\0') {
      uVar2 = (uint)param_1[7] + (uint)param_1[6] * 0x100;
      if ((uVar2 != 0) && (cVar1 = FUN_140373f40(param_2,param_1 + uVar2), cVar1 == '\0')) {
        return 0;
      }
      cVar1 = FUN_1404093d0(param_1 + 8,param_2,param_1);
      if (cVar1 != '\0') {
        uVar2 = (uint)param_1[9] + (uint)param_1[8] * 0x100;
        if ((uVar2 != 0) && (cVar1 = FUN_140373cc0(param_2,param_1 + uVar2), cVar1 == '\0')) {
          return 0;
        }
        if (0x10000 < (((uint)*param_1 * 0x100 + (uint)param_1[1]) * 0x100 + (uint)param_1[2]) *
                      0x100 + (uint)param_1[3]) {
          cVar1 = FUN_140409580(param_1 + 10,param_2,param_1);
          if (cVar1 == '\0') {
            return 0;
          }
          uVar2 = (uint)param_1[0xb] * 0x10000 + (uint)param_1[0xc] * 0x100 +
                  (uint)param_1[10] * 0x1000000 + (uint)param_1[0xd];
          if ((uVar2 != 0) && (cVar1 = FUN_140403d80(param_1 + uVar2,param_2), cVar1 == '\0')) {
            return 0;
          }
        }
        return 1;
      }
    }
  }
  return 0;
}

