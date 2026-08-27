// Function: FUN_140402090
// Addr: 140402090
// Size: 526 bytes


ulonglong FUN_140402090(longlong param_1,undefined8 param_2)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  byte bVar4;
  byte bVar5;
  ushort uVar6;
  ulonglong uVar7;
  uint uVar8;
  ulonglong uVar9;
  byte *pbVar10;
  
  puVar1 = (undefined1 *)(param_1 + 2);
  uVar7 = FUN_1404078b0(puVar1);
  if ((char)uVar7 != '\0') {
    uVar2 = *puVar1;
    uVar9 = 0;
    uVar3 = *(undefined1 *)(param_1 + 3);
    if (CONCAT11(uVar2,uVar3) != 0) {
      do {
        uVar7 = FUN_1404093d0(puVar1 + uVar9 * 2 + 2,param_2,param_1);
        if (((char)uVar7 == '\0') ||
           ((uVar8 = (uint)(byte)puVar1[uVar9 * 2 + 3] + (uint)(byte)puVar1[uVar9 * 2 + 2] * 0x100,
            uVar8 != 0 &&
            (uVar7 = FUN_140374b40(param_2,(ulonglong)uVar8 + param_1), (char)uVar7 == '\0'))))
        goto LAB_14040228f;
        uVar8 = (int)uVar9 + 1;
        uVar9 = (ulonglong)uVar8;
      } while (uVar8 < CONCAT11(uVar2,uVar3));
      uVar2 = *puVar1;
      uVar3 = *(undefined1 *)(param_1 + 3);
    }
    uVar6 = CONCAT11(uVar2,uVar3);
    pbVar10 = puVar1 + (ulonglong)uVar6 * 2 + 2;
    uVar7 = FUN_1404078b0(pbVar10,param_2);
    if ((char)uVar7 != '\0') {
      bVar4 = *pbVar10;
      uVar9 = 0;
      bVar5 = puVar1[(ulonglong)uVar6 * 2 + 3];
      if (CONCAT11(bVar4,bVar5) != 0) {
        do {
          uVar7 = FUN_1404093d0(pbVar10 + uVar9 * 2 + 2,param_2,param_1);
          if (((char)uVar7 == '\0') ||
             ((uVar8 = (uint)pbVar10[uVar9 * 2 + 3] + (uint)pbVar10[uVar9 * 2 + 2] * 0x100,
              uVar8 != 0 &&
              (uVar7 = FUN_140374b40(param_2,(ulonglong)uVar8 + param_1), (char)uVar7 == '\0'))))
          goto LAB_14040228f;
          uVar8 = (int)uVar9 + 1;
          uVar9 = (ulonglong)uVar8;
        } while (uVar8 < CONCAT11(bVar4,bVar5));
        bVar4 = *pbVar10;
        bVar5 = puVar1[(ulonglong)uVar6 * 2 + 3];
      }
      uVar8 = (uint)bVar5 + (uint)bVar4 * 0x100;
      uVar7 = (ulonglong)uVar8;
      if (uVar8 != 0) {
        pbVar10 = pbVar10 + (uVar8 * 2 + 2);
        uVar7 = FUN_1404078b0(pbVar10,param_2);
        if ((char)uVar7 != '\0') {
          bVar4 = *pbVar10;
          uVar9 = 0;
          bVar5 = pbVar10[1];
          if (CONCAT11(bVar4,bVar5) != 0) {
            do {
              uVar7 = FUN_1404093d0(pbVar10 + uVar9 * 2 + 2,param_2,param_1);
              if (((char)uVar7 == '\0') ||
                 ((uVar8 = (uint)pbVar10[uVar9 * 2 + 3] + (uint)pbVar10[uVar9 * 2 + 2] * 0x100,
                  uVar8 != 0 &&
                  (uVar7 = FUN_140374b40(param_2,(ulonglong)uVar8 + param_1), (char)uVar7 == '\0')))
                 ) goto LAB_14040228f;
              uVar8 = (int)uVar9 + 1;
              uVar9 = (ulonglong)uVar8;
            } while (uVar8 < CONCAT11(bVar4,bVar5));
            bVar5 = pbVar10[1];
            bVar4 = *pbVar10;
          }
          uVar7 = FUN_140407b60(pbVar10 + ((ulonglong)bVar4 * 0x100 + (ulonglong)bVar5 + 1) * 2,
                                param_2);
          return uVar7;
        }
      }
    }
  }
LAB_14040228f:
  return uVar7 & 0xffffffffffffff00;
}

