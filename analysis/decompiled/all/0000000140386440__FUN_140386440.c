// Function: FUN_140386440
// Addr: 140386440
// Size: 546 bytes


bool FUN_140386440(byte *param_1,longlong param_2,uint param_3,undefined8 param_4)

{
  byte bVar1;
  byte bVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  byte *pbVar6;
  uint uVar7;
  ulonglong uVar8;
  float fVar9;
  
  iVar5 = (uint)*param_1 * 0x100 + (uint)param_1[1];
  if (iVar5 == 1) {
    if ((uint)param_1[2] * 0x100 + (uint)param_1[3] < param_3) {
      iVar5 = *(int *)(param_2 + (ulonglong)CONCAT11(param_1[2],param_1[3]) * 4);
    }
    else {
      iVar5 = 0;
    }
    if (((short)((ushort)param_1[4] * 0x100 + (ushort)param_1[5]) <= iVar5) &&
       (iVar5 <= (short)((ushort)param_1[6] * 0x100 + (ushort)param_1[7]))) {
      return true;
    }
    bVar3 = false;
  }
  else if (iVar5 == 2) {
    bVar2 = param_1[2];
    bVar1 = param_1[3];
    fVar9 = (float)FUN_1403993a0(param_4,(uint)param_1[5] * 0x10000 + (uint)param_1[6] * 0x100 +
                                         (uint)param_1[4] * 0x1000000 + (uint)param_1[7],0);
    bVar3 = 0.0 < fVar9 + (float)(int)(short)((ushort)bVar1 + (ushort)bVar2 * 0x100);
  }
  else if (iVar5 == 3) {
    bVar2 = param_1[2];
    uVar8 = 0;
    if (bVar2 != 0) {
      do {
        uVar7 = (uint)param_1[uVar8 * 3 + 5] +
                (uint)param_1[uVar8 * 3 + 3] * 0x10000 + (uint)param_1[uVar8 * 3 + 4] * 0x100;
        if (uVar7 == 0) {
          pbVar6 = (byte *)&DAT_14045dd10;
        }
        else {
          pbVar6 = param_1 + uVar7;
        }
        cVar4 = FUN_140386440(pbVar6,param_2,param_3,param_4);
        if (cVar4 == '\0') goto LAB_140386544;
        uVar7 = (int)uVar8 + 1;
        uVar8 = (ulonglong)uVar7;
      } while (uVar7 < bVar2);
    }
LAB_1403865a2:
    bVar3 = true;
  }
  else {
    if (iVar5 == 4) {
      bVar2 = param_1[2];
      uVar8 = 0;
      if (bVar2 != 0) {
        do {
          uVar7 = (uint)param_1[uVar8 * 3 + 5] +
                  (uint)param_1[uVar8 * 3 + 3] * 0x10000 + (uint)param_1[uVar8 * 3 + 4] * 0x100;
          if (uVar7 == 0) {
            pbVar6 = (byte *)&DAT_14045dd10;
          }
          else {
            pbVar6 = param_1 + uVar7;
          }
          cVar4 = FUN_140386440(pbVar6,param_2,param_3,param_4);
          if (cVar4 != '\0') goto LAB_1403865a2;
          uVar7 = (int)uVar8 + 1;
          uVar8 = (ulonglong)uVar7;
        } while (uVar7 < bVar2);
      }
    }
    else if (iVar5 == 5) {
      uVar7 = (uint)param_1[3] * 0x100 + (uint)param_1[2] * 0x10000 + (uint)param_1[4];
      if (uVar7 == 0) {
        param_1 = (byte *)&DAT_14045dd10;
      }
      else {
        param_1 = param_1 + uVar7;
      }
      bVar2 = FUN_140386440(param_1,param_2);
      return (bool)(bVar2 ^ 1);
    }
LAB_140386544:
    bVar3 = false;
  }
  return bVar3;
}

