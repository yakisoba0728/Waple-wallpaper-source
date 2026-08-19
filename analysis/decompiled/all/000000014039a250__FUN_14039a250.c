// Function: FUN_14039a250
// Addr: 14039a250
// Size: 108 bytes


undefined8 FUN_14039a250(longlong param_1,uint param_2,uint param_3,undefined8 *param_4)

{
  uint *puVar1;
  int *piVar2;
  
  puVar1 = *(uint **)(param_1 + 0x28);
  if (((puVar1 == (uint *)0x0) || (param_2 < *puVar1)) || (puVar1[1] + *puVar1 <= param_2)) {
    for (puVar1 = (uint *)(param_1 + 0x30); puVar1 != (uint *)0x0; puVar1 = *(uint **)(puVar1 + 8))
    {
      if ((*puVar1 <= param_2) && (param_2 < *puVar1 + puVar1[1])) {
        *(uint **)(param_1 + 0x28) = puVar1;
        break;
      }
    }
  }
  func_0x00014039a310(param_1 + -8,param_2);
  for (; param_3 != 0; param_3 = param_3 - piVar2[1]) {
    piVar2 = *(int **)(param_1 + 0x28);
    if (param_3 < (uint)piVar2[1]) {
      func_0x00014039a310(param_1 + -8,*piVar2 + param_3);
    }
    else {
      *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(piVar2 + 8);
    }
    *(undefined8 *)(piVar2 + 4) = *param_4;
  }
  return 0;
}

