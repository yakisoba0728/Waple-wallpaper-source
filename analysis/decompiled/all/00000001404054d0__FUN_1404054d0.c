// Function: FUN_1404054d0
// Addr: 1404054d0
// Size: 398 bytes


ulonglong FUN_1404054d0(longlong param_1,undefined8 param_2)

{
  byte *pbVar1;
  byte bVar2;
  byte bVar3;
  ushort uVar4;
  ulonglong uVar5;
  uint uVar6;
  uint uVar7;
  ulonglong uVar8;
  byte *pbVar9;
  
  uVar5 = FUN_1404093d0(param_1 + 2,param_2,param_1);
  if (((char)uVar5 != '\0') &&
     ((uVar6 = (uint)*(byte *)(param_1 + 3) + (uint)*(byte *)(param_1 + 2) * 0x100, uVar6 == 0 ||
      (uVar5 = FUN_140374b40(param_2,(ulonglong)uVar6 + param_1), (char)uVar5 != '\0')))) {
    pbVar1 = (byte *)(param_1 + 4);
    uVar5 = FUN_1404078b0(pbVar1,param_2);
    if ((char)uVar5 != '\0') {
      uVar8 = 0;
      uVar6 = (uint)*pbVar1 * 0x100 + (uint)*(byte *)(param_1 + 5);
      if (uVar6 != 0) {
        do {
          uVar5 = FUN_1404093d0(pbVar1 + uVar8 * 2 + 2,param_2,param_1);
          if (((char)uVar5 == '\0') ||
             ((uVar7 = (uint)pbVar1[uVar8 * 2 + 3] + (uint)pbVar1[uVar8 * 2 + 2] * 0x100, uVar7 != 0
              && (uVar5 = FUN_140374b40(param_2,(ulonglong)uVar7 + param_1), (char)uVar5 == '\0'))))
          goto LAB_14040564f;
          uVar7 = (int)uVar8 + 1;
          uVar8 = (ulonglong)uVar7;
        } while (uVar7 < uVar6);
      }
      uVar4 = CONCAT11(*pbVar1,*(undefined1 *)(param_1 + 5));
      pbVar9 = pbVar1 + (ulonglong)uVar4 * 2 + 2;
      uVar5 = FUN_1404078b0(pbVar9,param_2);
      if ((char)uVar5 != '\0') {
        bVar2 = *pbVar9;
        uVar8 = 0;
        bVar3 = pbVar1[(ulonglong)uVar4 * 2 + 3];
        if (CONCAT11(bVar2,bVar3) != 0) {
          do {
            uVar5 = FUN_1404093d0(pbVar9 + uVar8 * 2 + 2,param_2,param_1);
            if (((char)uVar5 == '\0') ||
               ((uVar6 = (uint)pbVar9[uVar8 * 2 + 3] + (uint)pbVar9[uVar8 * 2 + 2] * 0x100,
                uVar6 != 0 &&
                (uVar5 = FUN_140374b40(param_2,(ulonglong)uVar6 + param_1), (char)uVar5 == '\0'))))
            goto LAB_14040564f;
            uVar6 = (int)uVar8 + 1;
            uVar8 = (ulonglong)uVar6;
          } while (uVar6 < CONCAT11(bVar2,bVar3));
          bVar3 = pbVar1[(ulonglong)uVar4 * 2 + 3];
          bVar2 = *pbVar9;
        }
        uVar5 = FUN_1404078b0(pbVar9 + ((ulonglong)bVar2 * 0x100 + (ulonglong)bVar3 + 1) * 2,param_2
                             );
        return uVar5;
      }
    }
  }
LAB_14040564f:
  return uVar5 & 0xffffffffffffff00;
}

