// Function: FUN_140370360
// Addr: 140370360
// Size: 1227 bytes


void FUN_140370360(byte *param_1,char *param_2,uint param_3,longlong param_4)

{
  byte bVar1;
  undefined4 *puVar2;
  uint uVar3;
  ulonglong uVar4;
  int iVar5;
  uint uVar6;
  byte *pbVar7;
  byte *pbVar8;
  ulonglong uVar9;
  uint uVar10;
  uint uVar11;
  
  switch((uint)*param_1 * 0x100 + (uint)param_1[1]) {
  case 0:
    uVar11 = 0;
    if (param_3 != 0) {
      uVar9 = 0;
      do {
        uVar3 = (uint)param_1[uVar9 * 2 + 3] + (uint)param_1[uVar9 * 2 + 2] * 0x100;
        if ((((*(ulonglong *)(param_4 + 8 + (ulonglong)(uVar3 >> 6 & 7) * 8) >> (uVar3 & 0x3f) & 1)
              != 0) && (*param_2 != '\0')) && (uVar11 != 0xffffffff)) {
          param_2[4] = -1;
          param_2[5] = -1;
          param_2[6] = -1;
          param_2[7] = -1;
          puVar2 = (undefined4 *)FUN_1403ed560(param_2,uVar11,1);
          if (puVar2 != (undefined4 *)0x0) {
            uVar4 = (ulonglong)((uint)(uVar9 >> 6) & 7);
            *(ulonglong *)(puVar2 + uVar4 * 2 + 2) =
                 *(ulonglong *)(puVar2 + uVar4 * 2 + 2) | 1L << ((uint)uVar9 & 0x3f);
            *puVar2 = 0xffffffff;
          }
        }
        uVar11 = uVar11 + 1;
        uVar9 = uVar9 + 1;
      } while (uVar11 < param_3);
    }
    break;
  case 1:
  case 3:
  case 5:
  case 7:
  case 9:
    break;
  case 2:
    pbVar8 = param_1 + 2;
    uVar11 = FUN_1403cbe30(pbVar8);
    uVar3 = 0;
    if (uVar11 != 0) {
      do {
        uVar6 = FUN_1403cbe30(pbVar8);
        if (uVar3 < uVar6) {
          pbVar7 = pbVar8 + (ulonglong)(((uint)*pbVar8 * 0x100 + (uint)param_1[3]) * uVar3) + 10;
        }
        else {
          pbVar7 = (byte *)&DAT_14045dd10;
        }
        iVar5 = (uint)pbVar7[2] * 0x100 + (uint)pbVar7[3];
        if ((iVar5 != 0xffff) &&
           (uVar6 = (uint)pbVar7[5] + (uint)pbVar7[4] * 0x100,
           (*(ulonglong *)(param_4 + 8 + (ulonglong)(uVar6 >> 6 & 7) * 8) >> (uVar6 & 0x3f) & 1) !=
           0)) {
          FUN_1403a3350(param_2,iVar5,(uint)*pbVar7 * 0x100 + (uint)pbVar7[1]);
        }
        uVar3 = uVar3 + 1;
      } while (uVar3 < uVar11);
    }
    break;
  case 4:
    FUN_140370860(param_1,param_2,param_4);
    break;
  case 6:
    pbVar8 = param_1 + 2;
    uVar11 = (uint)param_1[4] * 0x100 + (uint)param_1[5];
    if (uVar11 != 0) {
      uVar6 = 0;
      uVar9 = (ulonglong)(((uint)*pbVar8 * 0x100 + (uint)param_1[3]) * (uVar11 - 1));
      uVar3 = (uint)((uint)pbVar8[uVar9 + 0xb] + (uint)pbVar8[uVar9 + 10] * 0x100 == 0xffff);
      if (uVar11 != uVar3) {
        do {
          iVar5 = (uint)param_1[4] * 0x100 + (uint)param_1[5];
          if ((iVar5 == 0) ||
             (uVar9 = (ulonglong)(((uint)*pbVar8 * 0x100 + (uint)param_1[3]) * (iVar5 + -1)),
             iVar5 - (uint)((uint)pbVar8[uVar9 + 0xb] + (uint)pbVar8[uVar9 + 10] * 0x100 == 0xffff)
             <= uVar6)) {
            pbVar7 = (byte *)&DAT_14045dd10;
          }
          else {
            pbVar7 = pbVar8 + (ulonglong)(((uint)*pbVar8 * 0x100 + (uint)param_1[3]) * uVar6) + 10;
          }
          iVar5 = (uint)pbVar7[1] + (uint)*pbVar7 * 0x100;
          if ((iVar5 != 0xffff) &&
             (uVar10 = (uint)pbVar7[3] + (uint)pbVar7[2] * 0x100,
             (*(ulonglong *)(param_4 + 8 + (ulonglong)(uVar10 >> 6 & 7) * 8) >> (uVar10 & 0x3f) & 1)
             != 0)) {
            FUN_1403a2a90(param_2,iVar5);
          }
          uVar6 = uVar6 + 1;
        } while (uVar6 < uVar11 - uVar3);
      }
    }
    break;
  case 8:
    iVar5 = (uint)param_1[4] * 0x100 + (uint)param_1[5];
    if (((iVar5 != 0) && ((uint)param_1[2] * 0x100 + (uint)param_1[3] != 0xffff)) &&
       (uVar9 = 0, iVar5 != 0)) {
      do {
        uVar11 = (uint)param_1[uVar9 * 2 + 7] + (uint)param_1[uVar9 * 2 + 6] * 0x100;
        if ((((*(ulonglong *)(param_4 + 8 + (ulonglong)(uVar11 >> 6 & 7) * 8) >> (uVar11 & 0x3f) & 1
              ) != 0) && (*param_2 != '\0')) &&
           (uVar11 = (uint)param_1[3] + (uint)param_1[2] * 0x100 + (int)uVar9, uVar11 != 0xffffffff)
           ) {
          param_2[4] = -1;
          param_2[5] = -1;
          param_2[6] = -1;
          param_2[7] = -1;
          puVar2 = (undefined4 *)FUN_1403ed560(param_2,uVar11,1);
          if (puVar2 != (undefined4 *)0x0) {
            uVar4 = (ulonglong)(uVar11 >> 6 & 7);
            *(ulonglong *)(puVar2 + uVar4 * 2 + 2) =
                 *(ulonglong *)(puVar2 + uVar4 * 2 + 2) | 1L << (uVar11 & 0x3f);
            *puVar2 = 0xffffffff;
          }
        }
        uVar11 = (int)uVar9 + 1;
        uVar9 = (ulonglong)uVar11;
      } while (uVar11 < (uint)param_1[4] * 0x100 + (uint)param_1[5]);
    }
    break;
  case 10:
    iVar5 = (uint)param_1[6] * 0x100 + (uint)param_1[7];
    if ((iVar5 != 0) && ((uint)param_1[4] * 0x100 + (uint)param_1[5] != 0xffff)) {
      pbVar8 = param_1 + 8;
      uVar11 = 0;
      if (iVar5 != 0) {
        do {
          uVar6 = 0;
          uVar3 = 0;
          uVar10 = (uint)param_1[2] * 0x100 + (uint)param_1[3];
          if (uVar10 != 0) {
            do {
              bVar1 = *pbVar8;
              uVar3 = uVar3 + 1;
              pbVar8 = pbVar8 + 1;
              uVar6 = uVar6 << 8 | (uint)bVar1;
            } while (uVar3 < uVar10);
          }
          if ((((*(ulonglong *)(param_4 + 8 + (ulonglong)(uVar6 >> 6 & 7) * 8) >> (uVar6 & 0x3f) & 1
                ) != 0) && (*param_2 != '\0')) &&
             (uVar3 = (uint)param_1[5] + (uint)param_1[4] * 0x100 + uVar11, uVar3 != 0xffffffff)) {
            param_2[4] = -1;
            param_2[5] = -1;
            param_2[6] = -1;
            param_2[7] = -1;
            puVar2 = (undefined4 *)
                     FUN_1403ed560(param_2,uVar3,CONCAT71((uint7)(uint3)(uVar10 >> 8),1));
            if (puVar2 != (undefined4 *)0x0) {
              uVar9 = (ulonglong)(uVar3 >> 6 & 7);
              *(ulonglong *)(puVar2 + uVar9 * 2 + 2) =
                   *(ulonglong *)(puVar2 + uVar9 * 2 + 2) | 1L << (uVar3 & 0x3f);
              *puVar2 = 0xffffffff;
            }
          }
          uVar11 = uVar11 + 1;
        } while (uVar11 < (uint)param_1[6] * 0x100 + (uint)param_1[7]);
      }
    }
    break;
  default:
    goto switchD_1403703ab_default;
  }
switchD_1403703ab_default:
  return;
}

