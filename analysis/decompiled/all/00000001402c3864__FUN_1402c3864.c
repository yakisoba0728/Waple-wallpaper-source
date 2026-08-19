// Function: FUN_1402c3864
// Addr: 1402c3864
// Size: 76 bytes


void FUN_1402c3864(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  undefined1 auStack_4b8 [32];
  undefined8 uStack_498;
  undefined8 uStack_490;
  undefined8 uStack_488;
  undefined8 uStack_480;
  undefined4 uStack_478;
  undefined1 uStack_474;
  undefined4 uStack_470;
  undefined4 uStack_46c;
  undefined4 uStack_468;
  undefined2 uStack_460;
  undefined4 uStack_450;
  undefined1 uStack_44c;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined4 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_1404dc110 ^ (ulonglong)auStack_4b8;
  uVar1 = param_1[1];
  uVar2 = *(undefined8 *)*param_1;
  uVar3 = FUN_1402db8ac(uVar2);
  uStack_480 = *(undefined8 *)param_1[4];
  uStack_38 = *(undefined8 *)*param_1;
  uStack_488 = *(undefined8 *)param_1[3];
  uStack_498 = *(undefined8 *)param_1[2];
  uStack_490 = param_1[1];
  uStack_478 = 0;
  uStack_470 = 0;
  uStack_46c = 0;
  uStack_468 = 0;
  uStack_460 = 0;
  uStack_450 = 0;
  uStack_30 = 0;
  uStack_474 = 0;
  uStack_44c = 0;
  uStack_48 = 0;
  uStack_40 = 0;
  func_0x0001402c3c28(&uStack_498);
  FUN_1402d9110(uStack_40);
  uStack_40 = 0;
  func_0x0001402db974(uVar3,uVar2,uVar1);
  func_0x0001402ed2f0(local_28 ^ (ulonglong)auStack_4b8);
  return;
}

