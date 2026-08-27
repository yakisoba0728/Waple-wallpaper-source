// Function: FUN_140370860
// Addr: 140370860
// Size: 370 bytes


void FUN_140370860(longlong param_1,char *param_2,longlong param_3)

{
  byte *pbVar1;
  uint uVar2;
  uint uVar3;
  undefined4 *puVar4;
  ulonglong uVar5;
  uint uVar6;
  uint uVar7;
  byte *pbVar8;
  longlong lVar9;
  
  pbVar1 = (byte *)(param_1 + 2);
  uVar2 = FUN_1403cbe30(pbVar1);
  uVar7 = 0;
  if (uVar2 != 0) {
    do {
      uVar3 = FUN_1403cbe30(pbVar1);
      if (uVar7 < uVar3) {
        pbVar8 = pbVar1 + (ulonglong)
                          (((uint)*pbVar1 * 0x100 + (uint)*(byte *)(param_1 + 3)) * uVar7) + 10;
      }
      else {
        pbVar8 = (byte *)&DAT_14045dd10;
      }
      uVar3 = (uint)pbVar8[2] * 0x100 + (uint)pbVar8[3];
      if ((uVar3 != 0xffff) &&
         (lVar9 = (ulonglong)pbVar8[4] * 0x100 + (ulonglong)pbVar8[5] + param_1,
         uVar3 <= (uint)*pbVar8 * 0x100 + (uint)pbVar8[1])) {
        do {
          uVar5 = (ulonglong)((uVar3 + (uint)pbVar8[2] * -0x100) - (uint)pbVar8[3]);
          uVar6 = (uint)*(byte *)(lVar9 + uVar5 * 2) * 0x100 +
                  (uint)*(byte *)(lVar9 + 1 + uVar5 * 2);
          if (((*(ulonglong *)(param_3 + 8 + (ulonglong)(uVar6 >> 6 & 7) * 8) >> (uVar6 & 0x3f) & 1)
               != 0) && ((*param_2 != '\0' && (uVar3 != 0xffffffff)))) {
            param_2[4] = -1;
            param_2[5] = -1;
            param_2[6] = -1;
            param_2[7] = -1;
            puVar4 = (undefined4 *)FUN_1403ed560(param_2,uVar3,1);
            if (puVar4 != (undefined4 *)0x0) {
              uVar5 = (ulonglong)(uVar3 >> 6 & 7);
              *(ulonglong *)(puVar4 + uVar5 * 2 + 2) =
                   *(ulonglong *)(puVar4 + uVar5 * 2 + 2) | 1L << (ulonglong)(uVar3 & 0x3f);
              *puVar4 = 0xffffffff;
            }
          }
          uVar3 = uVar3 + 1;
        } while (uVar3 <= (uint)*pbVar8 * 0x100 + (uint)pbVar8[1]);
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 < uVar2);
  }
  return;
}

