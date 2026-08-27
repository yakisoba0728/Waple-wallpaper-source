// Function: FUN_1403114e0
// Addr: 1403114e0
// Size: 370 bytes


longlong FUN_1403114e0(longlong param_1,uint *param_2)

{
  undefined8 uVar1;
  byte bVar2;
  byte bVar3;
  longlong lVar4;
  byte *pbVar5;
  byte *pbVar6;
  uint uVar7;
  uint uVar8;
  ulonglong uVar9;
  short sVar10;
  uint uVar11;
  int local_res8 [2];
  
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  *param_2 = 0;
  bVar2 = FUN_1402f51e0();
  uVar8 = (uint)bVar2;
  if (bVar2 == 0) {
    return -1;
  }
  if ((char)bVar2 < '\0') {
    bVar3 = FUN_1402f51e0(param_1);
    uVar8 = (bVar2 & 0x7f) << 8 | (uint)bVar3;
  }
  lVar4 = FUN_1402f7ff0(uVar1,2,0,uVar8,0,local_res8);
  if (local_res8[0] == 0) {
    pbVar6 = *(byte **)(param_1 + 0x38);
    sVar10 = 0;
    uVar9 = 0;
    if (uVar8 != 0) {
      do {
        if (*(byte **)(param_1 + 0x40) <= pbVar6) {
LAB_140311643:
          FUN_1402f7f90(uVar1,lVar4);
          goto LAB_14031164e;
        }
        pbVar5 = pbVar6 + 1;
        uVar11 = uVar8 - (int)uVar9;
        uVar7 = (*pbVar6 & 0x7f) + 1;
        if (uVar7 <= uVar11) {
          uVar11 = uVar7;
        }
        uVar7 = (int)*(byte **)(param_1 + 0x40) - (int)pbVar5;
        if ((char)*pbVar6 < '\0') {
          if (uVar7 < uVar11 * 2) goto LAB_140311643;
          uVar7 = 0;
          pbVar6 = pbVar5;
          if (uVar11 != 0) {
            do {
              pbVar6 = pbVar5 + 2;
              uVar7 = uVar7 + 1;
              sVar10 = sVar10 + CONCAT11(*pbVar5,pbVar5[1]);
              *(short *)(lVar4 + uVar9 * 2) = sVar10;
              uVar9 = (ulonglong)((int)uVar9 + 1);
              pbVar5 = pbVar6;
            } while (uVar7 < uVar11);
          }
        }
        else {
          if (uVar7 < uVar11) goto LAB_140311643;
          uVar7 = 0;
          pbVar6 = pbVar5;
          if (uVar11 != 0) {
            do {
              uVar7 = uVar7 + 1;
              sVar10 = sVar10 + (ushort)*pbVar6;
              pbVar6 = pbVar6 + 1;
              *(short *)(lVar4 + uVar9 * 2) = sVar10;
              uVar9 = (ulonglong)((int)uVar9 + 1);
            } while (uVar7 < uVar11);
          }
        }
      } while ((uint)uVar9 < uVar8);
    }
    *(byte **)(param_1 + 0x38) = pbVar6;
    *param_2 = uVar8;
  }
  else {
LAB_14031164e:
    lVar4 = 0;
  }
  return lVar4;
}

