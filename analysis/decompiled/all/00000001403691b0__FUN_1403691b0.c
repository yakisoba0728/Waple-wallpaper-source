// Function: FUN_1403691b0
// Addr: 1403691b0
// Size: 535 bytes


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1403691b0(undefined4 *param_1,undefined8 *param_2,longlong param_3,undefined8 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  ulonglong uVar5;
  undefined4 *puVar6;
  undefined8 *puVar7;
  longlong lVar8;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 *local_58;
  undefined8 *local_50;
  undefined4 *puStack_48;
  ulonglong local_40;
  
  local_40 = DAT_1404dc040 ^ (ulonglong)auStack_88;
  uVar5 = (longlong)param_2 - (longlong)param_1;
  while( true ) {
    if ((longlong)(uVar5 & 0xfffffffffffffff0) < 0x201) {
      FUN_140363180(param_1,param_2,param_4);
      return;
    }
    uVar5 = (longlong)param_2 - (longlong)param_1;
    if (param_3 < 1) break;
    local_58 = param_1 + ((longlong)uVar5 >> 5) * 4;
    puVar7 = param_2 + -2;
    lVar8 = (longlong)puVar7 - (longlong)param_1 >> 4;
    puVar6 = param_1;
    if (0x28 < lVar8) {
      lVar8 = lVar8 + 1 >> 3;
      puVar6 = param_1 + lVar8 * 4;
      FUN_140364c60(param_1,puVar6,param_1 + lVar8 * 8,param_4);
      FUN_140364c60(local_58 + lVar8 * -4,local_58,local_58 + lVar8 * 4,param_4);
      puVar7 = puVar7 + lVar8 * -2;
      FUN_140364c60(param_2 + -2 + lVar8 * -4,puVar7,param_2 + -2,param_4);
    }
    puVar4 = local_58;
    FUN_140364c60(puVar6,local_58,puVar7,param_4);
    local_68 = param_4;
    FUN_1403661f0(&local_50,param_1,puVar4,param_2);
    puVar6 = puStack_48;
    puVar7 = local_50;
    param_3 = (param_3 >> 1) + (param_3 >> 2);
    if ((longlong)((longlong)local_50 - (longlong)param_1 & 0xfffffffffffffff0U) <
        (longlong)((longlong)param_2 - (longlong)puStack_48 & 0xfffffffffffffff0U)) {
      FUN_1403691b0(param_1,local_50,param_3,param_4);
      puVar7 = param_2;
      param_1 = puVar6;
    }
    else {
      FUN_1403691b0(puStack_48,param_2,param_3,param_4);
    }
    uVar5 = (longlong)puVar7 - (longlong)param_1;
    param_2 = puVar7;
  }
  FUN_140363c30(param_1,param_2,param_4);
  while (0x1f < (longlong)(uVar5 & 0xfffffffffffffff0)) {
    puVar7 = param_2 + -2;
    if (0x1f < (longlong)((longlong)param_2 - (longlong)param_1 & 0xfffffffffffffff0U)) {
      local_50 = (undefined8 *)*puVar7;
      puStack_48 = (undefined4 *)param_2[-1];
      uVar1 = param_1[1];
      uVar2 = param_1[2];
      uVar3 = param_1[3];
      *(undefined4 *)puVar7 = *param_1;
      *(undefined4 *)((longlong)param_2 + -0xc) = uVar1;
      *(undefined4 *)(param_2 + -1) = uVar2;
      *(undefined4 *)((longlong)param_2 + -4) = uVar3;
      local_68 = param_4;
      FUN_140367e30(param_1,0,(longlong)puVar7 - (longlong)param_1 >> 4,&local_50);
    }
    param_2 = puVar7;
    uVar5 = (longlong)puVar7 - (longlong)param_1;
  }
  return;
}

