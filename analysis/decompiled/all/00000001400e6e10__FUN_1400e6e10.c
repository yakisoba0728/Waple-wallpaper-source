// Function: FUN_1400e6e10
// Addr: 1400e6e10
// Size: 318 bytes


undefined8 * FUN_1400e6e10(longlong param_1,undefined8 *param_2,longlong param_3,longlong param_4)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined1 local_res10;
  ulonglong in_stack_ffffffffffffffc8;
  
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0xf;
  *(undefined1 *)param_2 = 0;
  uVar2 = 0;
  if (param_4 - param_3 != 0) {
    uVar3 = 0;
    uVar2 = param_4 - param_3;
    do {
      if (uVar3 < uVar2) {
        uVar4 = uVar2 - uVar3;
        if (param_2[3] - uVar3 < uVar4) {
          FUN_140016cc0(param_2,uVar4,local_res10,uVar4,
                        in_stack_ffffffffffffffc8 & 0xffffffffffffff00);
        }
        else {
          param_2[2] = uVar2;
          puVar1 = param_2;
          if (0xf < (ulonglong)param_2[3]) {
            puVar1 = (undefined8 *)*param_2;
          }
          FUN_1404217a0(uVar3 + (longlong)puVar1,0,uVar4);
          *(undefined1 *)(uVar4 + uVar3 + (longlong)puVar1) = 0;
        }
      }
      else {
        param_2[2] = uVar2;
        puVar1 = param_2;
        if (0xf < (ulonglong)param_2[3]) {
          puVar1 = (undefined8 *)*param_2;
        }
        *(undefined1 *)((longlong)puVar1 + uVar2) = 0;
      }
      puVar1 = param_2;
      if (0xf < (ulonglong)param_2[3]) {
        puVar1 = (undefined8 *)*param_2;
      }
      in_stack_ffffffffffffffc8 = param_1 + 0x10U;
      uVar2 = FUN_140293870(puVar1,param_2[2] + (longlong)puVar1,param_3,param_4,param_1 + 0x10U);
      if (uVar2 == 0xffffffffffffffff) {
        uVar2 = 0;
        break;
      }
      uVar3 = param_2[2];
    } while (uVar3 < uVar2);
  }
  FUN_140016ee0(param_2,uVar2,0);
  return param_2;
}

