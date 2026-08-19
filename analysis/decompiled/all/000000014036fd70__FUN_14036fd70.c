// Function: FUN_14036fd70
// Addr: 14036fd70
// Size: 384 bytes


void FUN_14036fd70(byte *param_1,char *param_2,int param_3)

{
  undefined4 *puVar1;
  ulonglong uVar2;
  int iVar3;
  byte *pbVar4;
  byte *pbVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  
  switch((uint)*param_1 * 0x100 + (uint)param_1[1]) {
  case 0:
    func_0x0001403a3420(param_2,0,param_3 + -1);
    break;
  case 1:
  case 3:
  case 5:
  case 7:
  case 9:
    break;
  case 2:
    pbVar5 = param_1 + 2;
    uVar9 = FUN_1403cbf00(pbVar5);
    uVar6 = 0;
    if (uVar9 != 0) {
      do {
        uVar7 = FUN_1403cbf00(pbVar5);
        if (uVar6 < uVar7) {
          pbVar4 = pbVar5 + (ulonglong)(((uint)param_1[3] + (uint)*pbVar5 * 0x100) * uVar6) + 10;
        }
        else {
          pbVar4 = (byte *)&DAT_14045dde0;
        }
        iVar8 = (uint)pbVar4[3] + (uint)pbVar4[2] * 0x100;
        if (iVar8 != 0xffff) {
          func_0x0001403a3420(param_2,iVar8,(uint)*pbVar4 * 0x100 + (uint)pbVar4[1]);
        }
        uVar6 = uVar6 + 1;
      } while (uVar6 < uVar9);
    }
    break;
  case 4:
    pbVar5 = param_1 + 2;
    uVar9 = FUN_1403cbf00(pbVar5);
    uVar6 = 0;
    if (uVar9 != 0) {
      do {
        uVar7 = FUN_1403cbf00(pbVar5);
        if (uVar6 < uVar7) {
          pbVar4 = pbVar5 + (ulonglong)(((uint)param_1[3] + (uint)*pbVar5 * 0x100) * uVar6) + 10;
        }
        else {
          pbVar4 = (byte *)&DAT_14045dde0;
        }
        iVar8 = (uint)pbVar4[2] * 0x100 + (uint)pbVar4[3];
        if (iVar8 != 0xffff) {
          func_0x0001403a3420(param_2,iVar8,(uint)pbVar4[1] + (uint)*pbVar4 * 0x100);
        }
        uVar6 = uVar6 + 1;
      } while (uVar6 < uVar9);
    }
    break;
  case 6:
    uVar9 = (uint)param_1[4] * 0x100 + (uint)param_1[5];
    if (uVar9 != 0) {
      uVar7 = 0;
      uVar2 = (ulonglong)(((uint)param_1[3] + (uint)param_1[2] * 0x100) * (uVar9 - 1));
      uVar6 = (uint)((uint)param_1[uVar2 + 0xc] * 0x100 + (uint)param_1[uVar2 + 0xd] == 0xffff);
      if (uVar9 != uVar6) {
        do {
          iVar8 = (uint)param_1[4] * 0x100 + (uint)param_1[5];
          if ((iVar8 == 0) ||
             (uVar2 = (ulonglong)(((uint)param_1[2] * 0x100 + (uint)param_1[3]) * (iVar8 + -1)),
             iVar8 - (uint)((uint)param_1[uVar2 + 0xc] * 0x100 + (uint)param_1[uVar2 + 0xd] ==
                           0xffff) <= uVar7)) {
            pbVar5 = (byte *)&DAT_14045dde0;
          }
          else {
            pbVar5 = param_1 + (ulonglong)(((uint)param_1[2] * 0x100 + (uint)param_1[3]) * uVar7) +
                               0xc;
          }
          uVar10 = (uint)pbVar5[1] + (uint)*pbVar5 * 0x100;
          if ((uVar10 != 0xffff) && (*param_2 != '\0')) {
            param_2[4] = -1;
            param_2[5] = -1;
            param_2[6] = -1;
            param_2[7] = -1;
            puVar1 = (undefined4 *)FUN_1403ed630(param_2,uVar10,1);
            if (puVar1 != (undefined4 *)0x0) {
              uVar2 = (ulonglong)(uVar10 >> 6 & 7);
              *(ulonglong *)(puVar1 + uVar2 * 2 + 2) =
                   *(ulonglong *)(puVar1 + uVar2 * 2 + 2) | 1L << (ulonglong)(uVar10 & 0x3f);
              *puVar1 = 0xffffffff;
            }
          }
          uVar7 = uVar7 + 1;
        } while (uVar7 < uVar9 - uVar6);
      }
    }
    break;
  case 8:
    iVar8 = (uint)param_1[4] * 0x100 + (uint)param_1[5];
    if ((iVar8 != 0) && (iVar3 = (uint)param_1[3] + (uint)param_1[2] * 0x100, iVar3 != 0xffff)) {
      func_0x0001403a3420(param_2,iVar3,iVar8 + -1 + iVar3);
    }
    break;
  case 10:
    iVar8 = (uint)param_1[6] * 0x100 + (uint)param_1[7];
    if ((iVar8 != 0) && (iVar3 = (uint)param_1[4] * 0x100 + (uint)param_1[5], iVar3 != 0xffff)) {
      func_0x0001403a3420(param_2,iVar3,iVar8 + -1 + iVar3);
    }
    break;
  default:
    goto switchD_14036fdb2_default;
  }
switchD_14036fdb2_default:
  return;
}

