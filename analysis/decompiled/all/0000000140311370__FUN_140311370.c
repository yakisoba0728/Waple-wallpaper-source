// Function: FUN_140311370
// Addr: 140311370
// Size: 357 bytes


longlong FUN_140311370(longlong param_1,uint param_2)

{
  byte bVar1;
  undefined8 uVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  uint uVar6;
  byte *pbVar7;
  byte *pbVar8;
  int local_res8 [2];
  
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  lVar4 = FUN_1402f7ff0(uVar2,4,0,param_2,0,local_res8);
  if (local_res8[0] != 0) {
    return 0;
  }
  uVar5 = 0;
  pbVar7 = *(byte **)(param_1 + 0x38);
  if (param_2 != 0) {
    do {
      if (*(byte **)(param_1 + 0x40) <= pbVar7) goto LAB_1403114c6;
      bVar1 = *pbVar7;
      pbVar7 = pbVar7 + 1;
      uVar6 = param_2 - (int)uVar5;
      uVar3 = (bVar1 & 0x3f) + 1;
      if (uVar3 <= uVar6) {
        uVar6 = uVar3;
      }
      if ((char)bVar1 < '\0') {
        uVar3 = 0;
        if (uVar6 != 0) {
          FUN_1404217a0(lVar4 + uVar5 * 4,0,(ulonglong)uVar6 << 2);
          do {
            uVar5 = (ulonglong)((int)uVar5 + 1);
            uVar3 = uVar3 + 1;
          } while (uVar3 < uVar6);
        }
      }
      else {
        uVar3 = (int)*(byte **)(param_1 + 0x40) - (int)pbVar7;
        if ((bVar1 & 0x40) == 0) {
          if (uVar3 < uVar6) goto LAB_1403114c6;
          uVar3 = 0;
          if (uVar6 != 0) {
            do {
              bVar1 = *pbVar7;
              uVar3 = uVar3 + 1;
              pbVar7 = pbVar7 + 1;
              *(int *)(lVar4 + uVar5 * 4) = (int)(char)bVar1 << 0x10;
              uVar5 = (ulonglong)((int)uVar5 + 1);
            } while (uVar3 < uVar6);
          }
        }
        else {
          if (uVar3 < uVar6 * 2) {
LAB_1403114c6:
            FUN_1402f7f90(uVar2,lVar4);
            return 0;
          }
          uVar3 = 0;
          pbVar8 = pbVar7;
          if (uVar6 != 0) {
            do {
              pbVar7 = pbVar8 + 2;
              uVar3 = uVar3 + 1;
              *(uint *)(lVar4 + uVar5 * 4) =
                   ((int)(short)((ushort)*pbVar8 << 8) | (uint)pbVar8[1]) << 0x10;
              uVar5 = (ulonglong)((int)uVar5 + 1);
              pbVar8 = pbVar7;
            } while (uVar3 < uVar6);
          }
        }
      }
    } while ((uint)uVar5 < param_2);
  }
  *(byte **)(param_1 + 0x38) = pbVar7;
  return lVar4;
}

