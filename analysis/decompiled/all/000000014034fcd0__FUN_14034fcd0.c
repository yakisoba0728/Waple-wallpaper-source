// Function: FUN_14034fcd0
// Addr: 14034fcd0
// Size: 681 bytes


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int FUN_14034fcd0(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  ulonglong uVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  int *piVar10;
  undefined1 auStack_40d8 [32];
  ulonglong local_40b8;
  int local_40a8;
  undefined4 local_40a4;
  undefined1 local_4028 [16344];
  undefined8 local_50;
  undefined4 local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_1404dc040 ^ (ulonglong)auStack_40d8;
  iVar1 = param_1[3];
  iVar7 = 0;
  iVar6 = param_1[1];
  local_50 = 0x7fffffff;
  local_40b8 = (ulonglong)(iVar1 - iVar6);
  bVar3 = false;
  *(undefined8 **)(param_1 + 0xe) = &local_50;
  *(undefined1 **)(param_1 + 0x10) = local_4028;
  local_48 = 0;
  local_40 = 0;
  if (0x55 < local_40b8) {
    uVar4 = (local_40b8 + 0x54) / 0x55;
    local_40b8 = ((local_40b8 - 1) + uVar4) / uVar4;
  }
  if (iVar6 < iVar1) {
    do {
      param_1[6] = iVar6;
      iVar8 = iVar6 + (int)local_40b8;
      iVar7 = iVar8;
      if (iVar1 <= iVar8) {
        iVar7 = iVar1;
      }
      param_1[7] = iVar7;
      param_1[8] = iVar7 - iVar6;
      local_40a4 = *param_1;
      local_40a8 = param_1[2];
      piVar9 = &local_40a8;
      do {
        iVar6 = param_1[8];
        piVar10 = piVar9 + 1;
        iVar1 = *piVar10;
        iVar7 = 0;
        iVar2 = *piVar9;
        param_1[4] = iVar1;
        param_1[5] = iVar2;
        if (0 < iVar6) {
          do {
            lVar5 = (longlong)iVar7;
            iVar7 = iVar7 + 1;
            *(undefined8 *)(*(longlong *)(param_1 + 0x10) + lVar5 * 8) =
                 *(undefined8 *)(param_1 + 0xe);
            iVar6 = param_1[8];
          } while (iVar7 < iVar6);
        }
        param_1[9] = 0;
        *(undefined8 *)(param_1 + 10) = *(undefined8 *)(param_1 + 0xe);
        *(undefined1 **)(param_1 + 0xc) = local_4028 + (((longlong)iVar6 * 8 + 0x17U) / 0x18) * 0x18
        ;
        if (bVar3) {
          FUN_1402fc370();
          iVar7 = FUN_1402f27a0(param_1 + 0x14,&PTR_FUN_140451820);
          FUN_1402fc370();
        }
        else {
          iVar7 = FUN_1402f27a0(param_1 + 0x14,&PTR_FUN_140451820);
        }
        if (iVar7 == 0) {
          if (*(longlong *)(param_1 + 0x22) == 0) {
            FUN_140350750(param_1);
            piVar10 = piVar9 + -1;
          }
          else {
            FUN_1403509a0();
            piVar10 = piVar9 + -1;
          }
        }
        else {
          if (iVar7 != 0x62) goto LAB_14034ff3b;
          iVar6 = iVar2 - iVar1 >> 1;
          if (iVar6 == 0) {
            iVar7 = 0x62;
            goto LAB_14034ff3b;
          }
          piVar9[2] = iVar1;
          *piVar10 = iVar1 + iVar6;
        }
        bVar3 = true;
        piVar9 = piVar10;
      } while (&local_40a8 <= piVar10);
      iVar1 = param_1[3];
      iVar6 = iVar8;
    } while (iVar8 < iVar1);
  }
LAB_14034ff3b:
  *(undefined8 *)(param_1 + 0xe) = 0;
  *(undefined8 *)(param_1 + 0xc) = 0;
  *(undefined8 *)(param_1 + 10) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  return iVar7;
}

