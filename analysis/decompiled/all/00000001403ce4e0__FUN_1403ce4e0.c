// Function: FUN_1403ce4e0
// Addr: 1403ce4e0
// Size: 370 bytes


int FUN_1403ce4e0(char *param_1,uint param_2,uint param_3,uint *param_4)

{
  char cVar1;
  ulonglong uVar2;
  uint uVar3;
  uint uVar4;
  
  cVar1 = *param_1;
  if (cVar1 == '\0') {
    if ((param_2 < param_3) && (param_2 != 0)) {
      return (uint)(byte)param_1[(ulonglong)(param_2 - 1) * 2 + 2] +
             (uint)(byte)param_1[(ulonglong)(param_2 - 1) * 2 + 1] * 0x100;
    }
  }
  else if (cVar1 == '\x01') {
    if (param_2 < param_3) {
      if ((param_4 == (uint *)0x0) || (uVar3 = param_4[1], param_2 < uVar3)) {
        uVar2 = 0;
        if (param_2 == 0) {
          return 0;
        }
        uVar3 = 1;
      }
      else {
        uVar2 = (ulonglong)*param_4;
      }
      param_2 = param_2 - uVar3;
      uVar4 = (uint)(byte)param_1[uVar2 * 3 + 3];
      if ((byte)param_1[uVar2 * 3 + 3] < param_2) {
        do {
          uVar2 = (ulonglong)((int)uVar2 + 1);
          uVar3 = uVar3 + uVar4 + 1;
          param_2 = param_2 - (uVar4 + 1);
          uVar4 = (uint)(byte)param_1[uVar2 * 3 + 3];
        } while (uVar4 < param_2);
      }
      if (param_4 != (uint *)0x0) {
        *param_4 = (uint)uVar2;
        param_4[1] = uVar3;
      }
      return (uint)(byte)param_1[uVar2 * 3 + 1] * 0x100 + param_2 + (byte)param_1[uVar2 * 3 + 2];
    }
  }
  else if ((cVar1 == '\x02') && (param_2 < param_3)) {
    if ((param_4 == (uint *)0x0) || (uVar3 = param_4[1], param_2 < uVar3)) {
      uVar2 = 0;
      if (param_2 == 0) {
        return 0;
      }
      uVar3 = 1;
    }
    else {
      uVar2 = (ulonglong)*param_4;
    }
    param_2 = param_2 - uVar3;
    uVar4 = (uint)(byte)param_1[uVar2 * 4 + 4] + (uint)(byte)param_1[uVar2 * 4 + 3] * 0x100;
    if (uVar4 < param_2) {
      do {
        uVar2 = (ulonglong)((int)uVar2 + 1);
        uVar3 = uVar3 + uVar4 + 1;
        param_2 = param_2 - (uVar4 + 1);
        uVar4 = (uint)(byte)param_1[uVar2 * 4 + 3] * 0x100 + (uint)(byte)param_1[uVar2 * 4 + 4];
      } while (uVar4 < param_2);
    }
    if (param_4 != (uint *)0x0) {
      *param_4 = (uint)uVar2;
      param_4[1] = uVar3;
    }
    return (uint)(byte)param_1[uVar2 * 4 + 1] * 0x100 + param_2 + (byte)param_1[uVar2 * 4 + 2];
  }
  return 0;
}

