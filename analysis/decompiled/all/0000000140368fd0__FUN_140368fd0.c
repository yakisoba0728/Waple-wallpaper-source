// Function: FUN_140368fd0
// Addr: 140368fd0
// Size: 644 bytes


void FUN_140368fd0(undefined4 *param_1,undefined8 *param_2,longlong param_3,undefined8 param_4)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  undefined4 *puVar7;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined4 *local_68;
  undefined4 *local_60;
  undefined4 *puStack_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_1404dc110 ^ (ulonglong)auStack_98;
  lVar6 = (longlong)param_2 - (longlong)param_1;
  do {
    if (lVar6 < 0x318) {
      func_0x000140363060(param_1,param_2,param_4);
UNWIND_INFO_1403691ae_ExceptionHandler:
      func_0x0001402ed2f0(local_48 ^ (ulonglong)auStack_98);
      return;
    }
    lVar6 = (longlong)param_2 - (longlong)param_1;
    if (param_3 < 1) {
      FUN_140363a40(param_1,param_2,param_4);
      while (0x2f < lVar6) {
        puVar2 = (undefined8 *)((longlong)param_2 + -0x18);
        if (1 < ((longlong)param_2 - (longlong)param_1) / 0x18) {
          local_60 = (undefined4 *)*puVar2;
          puStack_58 = *(undefined4 **)((longlong)param_2 + -0x10);
          local_50 = *(undefined8 *)((longlong)param_2 + -8);
          uVar3 = param_1[1];
          uVar4 = param_1[2];
          uVar5 = param_1[3];
          *(undefined4 *)puVar2 = *param_1;
          *(undefined4 *)((longlong)param_2 + -0x14) = uVar3;
          *(undefined4 *)((longlong)param_2 + -0x10) = uVar4;
          *(undefined4 *)((longlong)param_2 + -0xc) = uVar5;
          *(undefined8 *)((longlong)param_2 + -8) = *(undefined8 *)(param_1 + 4);
          local_78 = param_4;
          FUN_140367d30(param_1,0,((longlong)puVar2 - (longlong)param_1) / 0x18,&local_60);
        }
        param_2 = puVar2;
        lVar6 = (longlong)puVar2 - (longlong)param_1;
      }
      goto UNWIND_INFO_1403691ae_ExceptionHandler;
    }
    puVar7 = param_1 + (lVar6 / 0x18 >> 1) * 6;
    lVar6 = (((longlong)param_2 + -0x18) - (longlong)param_1) / 0x18;
    local_68 = puVar7;
    if (lVar6 < 0x29) {
      func_0x000140364be0(param_1,puVar7,(undefined4 *)((longlong)param_2 + -0x18),param_4);
    }
    else {
      lVar6 = lVar6 + 1 >> 3;
      func_0x000140364be0(param_1,param_1 + lVar6 * 6,param_1 + lVar6 * 0xc,param_4);
      func_0x000140364be0(puVar7 + lVar6 * -6,puVar7,puVar7 + lVar6 * 6,param_4);
      puVar1 = (undefined4 *)((longlong)param_2 + -0x18);
      func_0x000140364be0(puVar1 + lVar6 * -0xc,puVar1 + lVar6 * -6,puVar1,param_4);
      puVar7 = local_68;
      func_0x000140364be0(param_1 + lVar6 * 6,local_68,puVar1 + lVar6 * -6,param_4);
    }
    local_78 = param_4;
    FUN_140365e60(&local_60,param_1,puVar7,param_2);
    puVar1 = puStack_58;
    puVar7 = local_60;
    param_3 = (param_3 >> 1) + (param_3 >> 2);
    lVar6 = ((longlong)param_2 - (longlong)puStack_58) / 6 +
            ((longlong)param_2 - (longlong)puStack_58 >> 0x3f);
    if (((longlong)local_60 - (longlong)param_1) / 0x18 < (lVar6 >> 2) - (lVar6 >> 0x3f)) {
      FUN_140368fd0(param_1,local_60,param_3,param_4);
      puVar7 = (undefined4 *)param_2;
      param_1 = puVar1;
    }
    else {
      FUN_140368fd0(puStack_58,param_2,param_3,param_4);
    }
    lVar6 = (longlong)puVar7 - (longlong)param_1;
    param_2 = (undefined8 *)puVar7;
  } while( true );
}

