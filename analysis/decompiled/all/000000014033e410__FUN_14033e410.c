// Function: FUN_14033e410
// Addr: 14033e410
// Size: 503 bytes


ulonglong FUN_14033e410(uint *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  uint *puVar2;
  undefined8 uVar3;
  byte bVar4;
  uint uVar5;
  longlong lVar6;
  byte *pbVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  byte *pbVar10;
  ulonglong uVar11;
  uint uVar12;
  uint uVar13;
  ulonglong uVar14;
  uint uVar15;
  byte *pbVar16;
  uint uVar17;
  
  uVar14 = 0;
  uVar15 = *param_1 - 1;
  if (*param_1 <= uVar15) {
    return 0;
  }
  do {
    uVar17 = uVar15 - 1;
    if (uVar17 < uVar15) {
      lVar6 = *(longlong *)(param_1 + 2);
      pbVar7 = *(byte **)(lVar6 + 8 + (ulonglong)uVar15 * 0x18);
      uVar13 = *(uint *)(lVar6 + (ulonglong)uVar15 * 0x18);
      uVar12 = uVar17;
      do {
        pbVar16 = *(byte **)(lVar6 + 8 + (ulonglong)uVar12 * 0x18);
        uVar5 = *(uint *)(lVar6 + (ulonglong)uVar12 * 0x18);
        pbVar10 = pbVar7;
        if (uVar13 < uVar5) {
          uVar5 = uVar13;
        }
        for (; 7 < uVar5; uVar5 = uVar5 - 8) {
          if ((*pbVar10 & *pbVar16) != 0) goto LAB_14033e4eb;
          pbVar16 = pbVar16 + 1;
          pbVar10 = pbVar10 + 1;
        }
        if ((uVar5 != 0) && ((*pbVar10 & ~(byte)(0xff >> ((byte)uVar5 & 0x1f)) & *pbVar16) != 0)) {
LAB_14033e4eb:
          uVar13 = uVar15;
          if (uVar15 < uVar12) {
            uVar13 = uVar12;
            uVar12 = uVar15;
          }
          if ((uVar12 < uVar13) && (uVar13 < *param_1)) {
            uVar14 = 0;
            uVar15 = *(uint *)(lVar6 + (ulonglong)uVar13 * 0x18);
            puVar1 = (undefined8 *)(lVar6 + (ulonglong)uVar13 * 0x18);
            if (uVar15 != 0) {
              puVar2 = (uint *)(lVar6 + (ulonglong)uVar12 * 0x18);
              if (*(uint *)(lVar6 + (ulonglong)uVar12 * 0x18) < uVar15) {
                uVar11 = FUN_14033e2b0(puVar2,uVar15,param_2);
                uVar14 = uVar11 & 0xffffffff;
                if ((int)uVar11 != 0) {
                  return uVar11;
                }
                *puVar2 = uVar15;
              }
              pbVar7 = (byte *)puVar1[1];
              pbVar16 = *(byte **)(puVar2 + 2);
              for (uVar15 = uVar15 + 7 >> 3; uVar15 != 0; uVar15 = uVar15 - 1) {
                bVar4 = *pbVar7;
                pbVar7 = pbVar7 + 1;
                *pbVar16 = *pbVar16 | bVar4;
                pbVar16 = pbVar16 + 1;
              }
            }
            *(undefined4 *)puVar1 = 0;
            *(undefined4 *)(puVar1 + 2) = 0;
            uVar11 = (ulonglong)(*param_1 + ~uVar13);
            if (*param_1 + ~uVar13 != 0) {
              uVar8 = *puVar1;
              uVar9 = puVar1[1];
              uVar3 = puVar1[2];
              FUN_1404210f0(puVar1,puVar1 + 3,uVar11 * 0x18);
              puVar1[uVar11 * 3] = uVar8;
              (puVar1 + uVar11 * 3)[1] = uVar9;
              puVar1[uVar11 * 3 + 2] = uVar3;
            }
            *param_1 = *param_1 - 1;
          }
          else {
            uVar14 = 0;
          }
          break;
        }
        uVar12 = uVar12 - 1;
      } while (uVar12 < uVar15);
    }
    uVar15 = uVar17;
    if (*param_1 <= uVar17) {
      return uVar14;
    }
  } while( true );
}

