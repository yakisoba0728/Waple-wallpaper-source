// Function: FUN_1403c89b0
// Addr: 1403c89b0
// Size: 328 bytes


undefined8 * FUN_1403c89b0(undefined1 *param_1,uint param_2,int *param_3)

{
  longlong lVar1;
  longlong lVar2;
  byte *pbVar3;
  uint uVar4;
  ulonglong uVar5;
  uint uVar6;
  ulonglong uVar7;
  undefined8 *puVar8;
  ulonglong uVar9;
  
  uVar7 = 0;
  uVar5 = (ulonglong)param_2;
  puVar8 = &DAT_14045dd10;
  lVar1 = (ulonglong)(byte)param_1[7] +
          ((ulonglong)(byte)param_1[6] + (ulonglong)CONCAT11(param_1[4],param_1[5]) * 0x100) * 0x100
  ;
  uVar9 = (ulonglong)CONCAT11(param_1[lVar1 + 0x18],param_1[lVar1 + 0x19]);
  lVar2 = uVar9 + lVar1;
  uVar4 = (uint)(byte)param_1[uVar9 + lVar1] * 0x100 + 1 + (uint)(byte)param_1[lVar2 + 1];
  if (uVar4 != 0) {
    do {
      if ((uint)CONCAT11(param_1[uVar9 + lVar1],param_1[uVar9 + lVar1 + 1]) < (uint)uVar7) {
        pbVar3 = (byte *)&DAT_14045dd10;
      }
      else {
        pbVar3 = param_1 + uVar7 * 8 + lVar2 + 2;
      }
      if (((uint)pbVar3[1] * 0x10000 + (uint)pbVar3[2] * 0x100 + (uint)*pbVar3 * 0x1000000 +
           (uint)pbVar3[3] == 0x73666e74) &&
         (param_2 < (uint)pbVar3[4] * 0x100 + 1 + (uint)pbVar3[5])) {
        lVar1 = (ulonglong)pbVar3[6] * 0x100 + (ulonglong)pbVar3[7] + lVar2;
        puVar8 = (undefined8 *)
                 (param_1 +
                 (ulonglong)(byte)param_1[3] + 4 +
                 (((ulonglong)CONCAT11(*param_1,param_1[1]) +
                  (ulonglong)(byte)param_1[uVar5 * 0xc + lVar1 + 5]) * 0x100 +
                  (ulonglong)(byte)param_1[uVar5 * 0xc + lVar1 + 6] + (ulonglong)(byte)param_1[2]) *
                 0x100 + (ulonglong)(byte)param_1[uVar5 * 0xc + lVar1 + 7]);
        break;
      }
      uVar6 = (uint)uVar7 + 1;
      uVar7 = (ulonglong)uVar6;
    } while (uVar6 < uVar4);
  }
  if (param_3 != (int *)0x0) {
    *param_3 = (int)puVar8 - (int)param_1;
  }
  return puVar8;
}

