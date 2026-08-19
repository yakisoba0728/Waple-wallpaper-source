// Function: FUN_140386510
// Addr: 140386510
// Size: 186 bytes


ulonglong FUN_140386510(byte *param_1,longlong param_2,uint param_3,undefined8 param_4)

{
  byte bVar1;
  char cVar2;
  ulonglong uVar3;
  int iVar4;
  byte *pbVar5;
  uint uVar6;
  
  iVar4 = (uint)*param_1 * 0x100 + (uint)param_1[1];
  if (iVar4 == 1) {
    if ((uint)param_1[2] * 0x100 + (uint)param_1[3] < param_3) {
      iVar4 = *(int *)(param_2 + (ulonglong)CONCAT11(param_1[2],param_1[3]) * 4);
    }
    else {
      iVar4 = 0;
    }
    if (((short)((ushort)param_1[4] * 0x100 + (ushort)param_1[5]) <= iVar4) &&
       (iVar4 <= (short)((ushort)param_1[6] * 0x100 + (ushort)param_1[7]))) {
      return 1;
    }
    uVar3 = 0;
  }
  else {
    if (iVar4 == 2) {
                    /* WARNING: Subroutine does not return */
      FUN_140399470(param_4,(uint)param_1[5] * 0x10000 + (uint)param_1[6] * 0x100 +
                            (uint)param_1[4] * 0x1000000 + (uint)param_1[7],0);
    }
    if (iVar4 == 3) {
      bVar1 = param_1[2];
      uVar3 = 0;
      if (bVar1 != 0) {
        do {
          uVar6 = (uint)param_1[uVar3 * 3 + 5] +
                  (uint)param_1[uVar3 * 3 + 3] * 0x10000 + (uint)param_1[uVar3 * 3 + 4] * 0x100;
          if (uVar6 == 0) {
            pbVar5 = (byte *)&DAT_14045dde0;
          }
          else {
            pbVar5 = param_1 + uVar6;
          }
          cVar2 = FUN_140386510(pbVar5,param_2,param_3,param_4);
          if (cVar2 == '\0') goto UNWIND_INFO_1403865a9_UnwindCodes_51__UnwindOpCode;
          uVar6 = (int)uVar3 + 1;
          uVar3 = (ulonglong)uVar6;
        } while (uVar6 < bVar1);
      }
code_r0x000140386672:
      uVar3 = 1;
    }
    else {
      if (iVar4 == 4) {
        bVar1 = param_1[2];
        uVar3 = 0;
        if (bVar1 != 0) {
          do {
            uVar6 = (uint)param_1[uVar3 * 3 + 5] +
                    (uint)param_1[uVar3 * 3 + 3] * 0x10000 + (uint)param_1[uVar3 * 3 + 4] * 0x100;
            if (uVar6 == 0) {
              pbVar5 = (byte *)&DAT_14045dde0;
            }
            else {
              pbVar5 = param_1 + uVar6;
            }
            cVar2 = FUN_140386510(pbVar5,param_2,param_3,param_4);
            if (cVar2 != '\0') goto code_r0x000140386672;
            uVar6 = (int)uVar3 + 1;
            uVar3 = (ulonglong)uVar6;
          } while (uVar6 < bVar1);
        }
      }
      else if (iVar4 == 5) {
        uVar6 = (uint)param_1[3] * 0x100 + (uint)param_1[2] * 0x10000 + (uint)param_1[4];
        if (uVar6 == 0) {
          param_1 = (byte *)&DAT_14045dde0;
        }
        else {
          param_1 = param_1 + uVar6;
        }
        uVar3 = FUN_140386510(param_1,param_2);
        return uVar3 ^ 1;
      }
UNWIND_INFO_1403865a9_UnwindCodes_51__UnwindOpCode:
      uVar3 = 0;
    }
  }
  return uVar3;
}

