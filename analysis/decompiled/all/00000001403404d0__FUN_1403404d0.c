// Function: FUN_1403404d0
// Addr: 1403404d0
// Size: 397 bytes


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1403404d0(undefined8 *param_1,uint param_2,uint param_3,longlong param_4)

{
  uint uVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  undefined1 auStack_118 [32];
  undefined8 local_f8;
  uint local_e8;
  longlong local_e0;
  undefined8 *local_d8;
  int local_c8 [32];
  ulonglong local_48;
  
  if (0 < (int)param_3) {
    local_48 = DAT_1404dc040 ^ (ulonglong)auStack_118;
    iVar10 = 0;
    local_e8 = param_2;
    local_e0 = param_4;
    local_d8 = param_1;
    do {
      lVar2 = local_e0;
      iVar7 = 0;
      if (param_3 < 0x11) {
        iVar6 = param_3 * 2;
        uVar9 = param_3;
        if (0 < iVar6) goto LAB_140340550;
      }
      else {
        iVar6 = 0x20;
        uVar9 = 0x10;
LAB_140340550:
        do {
          lVar4 = (longlong)iVar7;
          iVar10 = iVar10 + *(int *)(lVar4 * 4 + lVar2);
          iVar3 = FUN_1402f4b60(iVar10);
          iVar7 = iVar7 + 1;
          local_c8[lVar4] = iVar3 >> 0x10;
        } while (iVar7 < iVar6);
        iVar7 = 0;
        do {
          iVar3 = iVar7 + 2;
          local_c8[(longlong)iVar7 + 1] = local_c8[(longlong)iVar7 + 1] - local_c8[iVar7];
          param_1 = local_d8;
          iVar7 = iVar3;
        } while (iVar3 < iVar6);
      }
      if (*(int *)(param_1 + 1) == 0) {
        piVar5 = local_c8;
        uVar1 = 1;
        if (local_e8 < 2) {
          uVar1 = local_e8;
        }
        for (uVar8 = uVar9; 0 < (int)uVar8; uVar8 = uVar8 - 1) {
          local_f8 = 0;
          iVar7 = FUN_14033d3c0(param_1 + (ulonglong)uVar1 * 6 + 3,*piVar5,piVar5[1],*param_1);
          if (iVar7 != 0) {
            *(int *)(param_1 + 1) = iVar7;
            break;
          }
          piVar5 = piVar5 + 2;
        }
      }
      param_3 = param_3 - uVar9;
    } while (0 < (int)param_3);
  }
  return;
}

