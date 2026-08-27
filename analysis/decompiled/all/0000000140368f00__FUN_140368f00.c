// Function: FUN_140368f00
// Addr: 140368f00
// Size: 686 bytes


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140368f00(undefined4 *param_1,undefined8 *param_2,longlong param_3,undefined8 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined4 *puVar5;
  undefined8 *puVar6;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined4 *local_68;
  undefined8 *local_60;
  undefined4 *puStack_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_1404dc040 ^ (ulonglong)auStack_98;
  lVar4 = (longlong)param_2 - (longlong)param_1;
  while( true ) {
    if (lVar4 < 0x318) {
      FUN_140362f90(param_1,param_2,param_4);
      return;
    }
    lVar4 = (longlong)param_2 - (longlong)param_1;
    if (param_3 < 1) break;
    puVar5 = param_1 + (lVar4 / 0x18 >> 1) * 6;
    lVar4 = ((longlong)(param_2 + -3) - (longlong)param_1) / 0x18;
    local_68 = puVar5;
    if (lVar4 < 0x29) {
      FUN_140364b10(param_1,puVar5,param_2 + -3,param_4);
    }
    else {
      lVar4 = lVar4 + 1 >> 3;
      FUN_140364b10(param_1,param_1 + lVar4 * 6,param_1 + lVar4 * 0xc,param_4);
      FUN_140364b10(puVar5 + lVar4 * -6,puVar5,puVar5 + lVar4 * 6,param_4);
      puVar6 = param_2 + -3;
      FUN_140364b10(puVar6 + lVar4 * -6,puVar6 + lVar4 * -3,puVar6,param_4);
      puVar5 = local_68;
      FUN_140364b10(param_1 + lVar4 * 6,local_68,puVar6 + lVar4 * -3,param_4);
    }
    local_78 = param_4;
    FUN_140365d90(&local_60,param_1,puVar5,param_2);
    puVar5 = puStack_58;
    puVar6 = local_60;
    param_3 = (param_3 >> 1) + (param_3 >> 2);
    lVar4 = ((longlong)param_2 - (longlong)puStack_58) / 6 +
            ((longlong)param_2 - (longlong)puStack_58 >> 0x3f);
    if (((longlong)local_60 - (longlong)param_1) / 0x18 < (lVar4 >> 2) - (lVar4 >> 0x3f)) {
      FUN_140368f00(param_1,local_60,param_3,param_4);
      puVar6 = param_2;
      param_1 = puVar5;
    }
    else {
      FUN_140368f00(puStack_58,param_2,param_3,param_4);
    }
    lVar4 = (longlong)puVar6 - (longlong)param_1;
    param_2 = puVar6;
  }
  FUN_140363970(param_1,param_2,param_4);
  while (0x2f < lVar4) {
    puVar6 = param_2 + -3;
    if (1 < ((longlong)param_2 - (longlong)param_1) / 0x18) {
      local_60 = (undefined8 *)*puVar6;
      puStack_58 = (undefined4 *)param_2[-2];
      local_50 = param_2[-1];
      uVar1 = param_1[1];
      uVar2 = param_1[2];
      uVar3 = param_1[3];
      *(undefined4 *)puVar6 = *param_1;
      *(undefined4 *)((longlong)param_2 + -0x14) = uVar1;
      *(undefined4 *)(param_2 + -2) = uVar2;
      *(undefined4 *)((longlong)param_2 + -0xc) = uVar3;
      param_2[-1] = *(undefined8 *)(param_1 + 4);
      local_78 = param_4;
      FUN_140367c60(param_1,0,((longlong)puVar6 - (longlong)param_1) / 0x18,&local_60);
    }
    param_2 = puVar6;
    lVar4 = (longlong)puVar6 - (longlong)param_1;
  }
  return;
}

