// Function: FUN_1401f1670
// Addr: 1401f1670
// Size: 129 bytes


undefined4 * FUN_1401f1670(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  for (; param_1 != param_2; param_1 = param_1 + 0xc) {
    *param_3 = *param_1;
    *(undefined8 *)(param_3 + 2) = *(undefined8 *)(param_1 + 2);
    *(undefined1 *)(param_3 + 4) = *(undefined1 *)(param_1 + 4);
    *(undefined1 *)((longlong)param_3 + 0x11) = *(undefined1 *)((longlong)param_1 + 0x11);
    param_3[5] = param_1[5];
    uVar1 = *(undefined8 *)(param_1 + 10);
    uVar2 = *(undefined8 *)(param_1 + 8);
    uVar3 = *(undefined8 *)(param_1 + 6);
    *(undefined8 *)(param_1 + 10) = 0;
    *(undefined8 *)(param_1 + 8) = 0;
    *(undefined8 *)(param_1 + 6) = 0;
    *(undefined8 *)(param_3 + 6) = uVar3;
    *(undefined8 *)(param_3 + 8) = uVar2;
    *(undefined8 *)(param_3 + 10) = uVar1;
    param_3 = param_3 + 0xc;
  }
  return param_3;
}

