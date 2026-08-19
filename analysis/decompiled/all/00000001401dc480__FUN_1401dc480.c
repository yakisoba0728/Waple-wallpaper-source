// Function: FUN_1401dc480
// Addr: 1401dc480
// Size: 60 bytes


void FUN_1401dc480(longlong param_1,undefined8 *param_2,longlong param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x18);
  puVar2 = *(undefined8 **)(lVar1 + param_3 * 0x10);
  if (*(undefined8 **)(lVar1 + 8 + param_3 * 0x10) != param_2) {
    if (puVar2 == param_2) {
      *(undefined8 *)(lVar1 + param_3 * 0x10) = *param_2;
    }
    return;
  }
  if (puVar2 == param_2) {
    uVar3 = *(undefined8 *)(param_1 + 8);
    *(undefined8 *)(lVar1 + param_3 * 0x10) = uVar3;
    *(undefined8 *)(lVar1 + 8 + param_3 * 0x10) = uVar3;
    return;
  }
  *(undefined8 *)(lVar1 + 8 + param_3 * 0x10) = param_2[1];
  return;
}

