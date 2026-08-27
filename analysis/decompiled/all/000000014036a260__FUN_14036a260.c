// Function: FUN_14036a260
// Addr: 14036a260
// Size: 690 bytes


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14036a260(undefined4 *param_1,undefined8 *param_2,longlong param_3,undefined8 param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  undefined4 *puVar6;
  undefined8 *puVar7;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined4 *local_68;
  undefined8 *local_60;
  undefined4 *puStack_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_1404dc040 ^ (ulonglong)auStack_98;
  lVar5 = (longlong)param_2 - (longlong)param_1;
  while( true ) {
    if (lVar5 < 0x294) {
      FUN_140363330(param_1,param_2,param_4);
      return;
    }
    lVar5 = (longlong)param_2 - (longlong)param_1;
    if (param_3 < 1) break;
    puVar6 = param_1 + (lVar5 / 0x14 >> 1) * 5;
    lVar5 = (((longlong)param_2 + -0x14) - (longlong)param_1) / 0x14;
    local_68 = puVar6;
    if (lVar5 < 0x29) {
      FUN_140365130(param_1,puVar6,(undefined4 *)((longlong)param_2 + -0x14),param_4);
    }
    else {
      lVar5 = lVar5 + 1 >> 3;
      FUN_140365130(param_1,param_1 + lVar5 * 5,param_1 + lVar5 * 10,param_4);
      FUN_140365130(puVar6 + lVar5 * -5,puVar6,puVar6 + lVar5 * 5,param_4);
      puVar1 = (undefined4 *)((longlong)param_2 + -0x14);
      FUN_140365130(puVar1 + lVar5 * -10,puVar1 + lVar5 * -5,puVar1,param_4);
      puVar6 = local_68;
      FUN_140365130(param_1 + lVar5 * 5,local_68,puVar1 + lVar5 * -5,param_4);
    }
    local_78 = param_4;
    FUN_1403672a0(&local_60,param_1,puVar6,param_2);
    puVar6 = puStack_58;
    puVar7 = local_60;
    param_3 = (param_3 >> 1) + (param_3 >> 2);
    if (((longlong)local_60 - (longlong)param_1) / 0x14 <
        ((longlong)param_2 - (longlong)puStack_58) / 0x14) {
      FUN_14036a260(param_1,local_60,param_3,param_4);
      puVar7 = param_2;
      param_1 = puVar6;
    }
    else {
      FUN_14036a260(puStack_58,param_2,param_3,param_4);
    }
    lVar5 = (longlong)puVar7 - (longlong)param_1;
    param_2 = puVar7;
  }
  FUN_1403643f0(param_1,param_2,param_4);
  while (0x27 < lVar5) {
    puVar7 = (undefined8 *)((longlong)param_2 + -0x14);
    if (1 < ((longlong)param_2 - (longlong)param_1) / 0x14) {
      local_50 = *(undefined4 *)((longlong)param_2 + -4);
      local_60 = (undefined8 *)*puVar7;
      puStack_58 = *(undefined4 **)((longlong)param_2 + -0xc);
      uVar2 = param_1[1];
      uVar3 = param_1[2];
      uVar4 = param_1[3];
      *(undefined4 *)puVar7 = *param_1;
      *(undefined4 *)(param_2 + -2) = uVar2;
      *(undefined4 *)((longlong)param_2 + -0xc) = uVar3;
      *(undefined4 *)(param_2 + -1) = uVar4;
      *(undefined4 *)((longlong)param_2 + -4) = param_1[4];
      local_78 = param_4;
      FUN_140368550(param_1,0,((longlong)puVar7 - (longlong)param_1) / 0x14,&local_60);
    }
    param_2 = puVar7;
    lVar5 = (longlong)puVar7 - (longlong)param_1;
  }
  return;
}

