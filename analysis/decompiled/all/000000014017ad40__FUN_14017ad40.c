// Function: FUN_14017ad40
// Addr: 14017ad40
// Size: 88 bytes


longlong * FUN_14017ad40(longlong param_1,ulonglong param_2,longlong param_3,longlong *param_4)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  
  puVar1 = *(undefined8 **)(param_3 + 8);
  *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 1;
  *param_4 = param_3;
  param_4[1] = (longlong)puVar1;
  *puVar1 = param_4;
  *(longlong **)(param_3 + 8) = param_4;
  param_2 = *(ulonglong *)(param_1 + 0x30) & param_2;
  lVar2 = *(longlong *)(param_1 + 0x18);
  lVar3 = *(longlong *)(lVar2 + param_2 * 0x10);
  if (lVar3 == *(longlong *)(param_1 + 8)) {
    *(longlong **)(lVar2 + param_2 * 0x10) = param_4;
    *(longlong **)(lVar2 + 8 + param_2 * 0x10) = param_4;
    return param_4;
  }
  if (lVar3 == param_3) {
    *(longlong **)(lVar2 + param_2 * 0x10) = param_4;
    return param_4;
  }
  if (*(undefined8 **)(lVar2 + 8 + param_2 * 0x10) == puVar1) {
    *(longlong **)(lVar2 + 8 + param_2 * 0x10) = param_4;
  }
  return param_4;
}

