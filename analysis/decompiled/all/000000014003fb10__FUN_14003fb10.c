// Function: FUN_14003fb10
// Addr: 14003fb10
// Size: 174 bytes


void FUN_14003fb10(undefined8 *param_1,undefined8 *param_2,longlong param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  
  uVar4 = 0;
  while( true ) {
    uVar1 = param_2[2];
    puVar5 = param_2;
    if (0xf < (ulonglong)param_2[3]) {
      puVar5 = (undefined8 *)*param_2;
    }
    uVar2 = param_1[2];
    puVar6 = param_1;
    if (0xf < (ulonglong)param_1[3]) {
      puVar6 = (undefined8 *)*param_1;
    }
    if (uVar2 < uVar1) {
      return;
    }
    if (uVar2 - uVar1 < uVar4) {
      return;
    }
    if (uVar1 != 0) {
      lVar3 = thunk_FUN_14028e750((longlong)puVar6 + uVar4,uVar2 + (longlong)puVar6,puVar5);
      if (lVar3 == uVar2 + (longlong)puVar6) {
        return;
      }
      uVar4 = lVar3 - (longlong)puVar6;
    }
    if (uVar4 == 0xffffffffffffffff) break;
    FUN_140049580(param_1,uVar4,param_2[2],param_3);
    uVar4 = uVar4 + *(longlong *)(param_3 + 0x10);
  }
  return;
}

