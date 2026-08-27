// Function: FUN_140348940
// Addr: 140348940
// Size: 465 bytes


ulonglong FUN_140348940(longlong *param_1,uint param_2)

{
  byte *pbVar1;
  longlong lVar2;
  longlong lVar3;
  ushort uVar4;
  ulonglong uVar5;
  byte *pbVar6;
  uint uVar7;
  undefined1 *puVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  undefined1 *puVar12;
  uint uVar13;
  uint local_res10 [2];
  
  if (0xffff < param_2) {
    return 0;
  }
  if ((*(byte *)(param_1 + 4) & 1) == 0) {
    local_res10[0] = param_2;
    uVar5 = FUN_14034cc80(param_1,local_res10,0);
    return uVar5;
  }
  lVar2 = param_1[3];
  uVar9 = (uint)(*(byte *)(lVar2 + 7) >> 1) | (uint)*(byte *)(lVar2 + 6) << 7;
  if (uVar9 == 0) {
    return 0;
  }
  uVar10 = 0;
  if (uVar9 != 0) {
    lVar3 = *param_1;
    uVar7 = 0;
    uVar5 = (ulonglong)(uVar9 * 2);
    puVar8 = (undefined1 *)(lVar2 + 0xe);
    puVar12 = (undefined1 *)(lVar2 + 0x10 + uVar5);
    while( true ) {
      uVar11 = (uint)CONCAT11(*puVar12,puVar12[1]);
      uVar10 = 0;
      if (param_2 < uVar11) break;
      if (param_2 <= CONCAT11(*puVar8,puVar8[1])) {
        pbVar6 = puVar12 + 2 + (uVar5 - 2);
        pbVar1 = pbVar6 + uVar5;
        uVar13 = (int)(short)((ushort)*pbVar6 << 8) | (uint)pbVar6[1];
        uVar4 = CONCAT11(*pbVar1,pbVar6[uVar5 + 1]);
        uVar10 = (uint)uVar4;
        if (((uVar7 < uVar9 - 1) || (uVar11 != 0xffff)) || (CONCAT11(*puVar8,puVar8[1]) != 0xffff))
        {
LAB_140348a77:
          if (uVar10 == 0xffff) goto LAB_140348a80;
          if (uVar4 != 0) {
            uVar5 = (ulonglong)(uVar10 + (param_2 - uVar11) * 2);
            if (CONCAT11(pbVar1[uVar5],pbVar1[uVar5 + 1]) == 0) {
              uVar10 = 0;
            }
            else {
              uVar9 = CONCAT11(pbVar1[uVar5],pbVar1[uVar5 + 1]) + uVar13 & 0xffff;
              uVar10 = 0;
              if (uVar9 < *(uint *)(lVar3 + 0x10)) {
                uVar10 = uVar9;
              }
            }
            break;
          }
        }
        else if (uVar4 != 0) {
          if (pbVar1 + (ulonglong)uVar10 + 2 <=
              (byte *)((ulonglong)*(uint *)(lVar3 + 0x298) + *(longlong *)(lVar3 + 0x290)))
          goto LAB_140348a77;
          uVar13 = 1;
        }
        uVar10 = uVar13 + param_2 & 0xffff;
        break;
      }
LAB_140348a80:
      uVar7 = uVar7 + 1;
      puVar8 = puVar8 + 2;
      puVar12 = puVar12 + 2;
      uVar10 = 0;
      if (uVar9 <= uVar7) break;
    }
  }
  return (ulonglong)uVar10;
}

