// Function: FUN_14024f340
// Addr: 14024f340
// Size: 204 bytes


longlong * FUN_14024f340(longlong param_1,longlong *param_2,longlong *param_3)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  
  lVar1 = *(longlong *)(param_1 + 0x18);
  uVar4 = *(ulonglong *)(param_1 + 0x30) &
          (((((ulonglong)*(byte *)(param_3 + 2) ^ 0xcbf29ce484222325) * 0x100000001b3 ^
            (ulonglong)*(byte *)((longlong)param_3 + 0x11)) * 0x100000001b3 ^
           (ulonglong)*(byte *)((longlong)param_3 + 0x12)) * 0x100000001b3 ^
          (ulonglong)*(byte *)((longlong)param_3 + 0x13)) * 0x100000001b3;
  plVar2 = *(longlong **)(lVar1 + uVar4 * 0x10);
  if (*(longlong **)(lVar1 + 8 + uVar4 * 0x10) == param_3) {
    if (plVar2 == param_3) {
      uVar3 = *(undefined8 *)(param_1 + 8);
      *(undefined8 *)(lVar1 + uVar4 * 0x10) = uVar3;
      *(undefined8 *)(lVar1 + 8 + uVar4 * 0x10) = uVar3;
    }
    else {
      *(longlong *)(lVar1 + 8 + uVar4 * 0x10) = param_3[1];
    }
  }
  else if (plVar2 == param_3) {
    *(longlong *)(lVar1 + uVar4 * 0x10) = *param_3;
  }
  lVar1 = *param_3;
  *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -1;
  *(longlong *)param_3[1] = lVar1;
  *(longlong *)(lVar1 + 8) = param_3[1];
  thunk_FUN_14028af80(param_3,0x18);
  *param_2 = lVar1;
  return param_2;
}

