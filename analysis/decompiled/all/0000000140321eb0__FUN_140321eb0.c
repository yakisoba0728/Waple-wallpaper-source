// Function: FUN_140321eb0
// Addr: 140321eb0
// Size: 75 bytes


ulonglong FUN_140321eb0(longlong *param_1)

{
  code *pcVar1;
  longlong lVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  undefined8 uStackX_8;
  
  puVar3 = *(undefined8 **)(*param_1 + 0x1d8);
  lVar2 = func_0x0001402f04f0(*(undefined8 *)(*(longlong *)(*param_1 + 0x90) + 8),"pshinter");
  if ((((lVar2 != 0) && (puVar3 != (undefined8 *)0x0)) &&
      (pcVar1 = (code *)*puVar3, pcVar1 != (code *)0x0)) &&
     (puVar3 = (undefined8 *)(*pcVar1)(lVar2), puVar3 != (undefined8 *)0x0)) {
    lVar2 = *param_1;
    uVar4 = (*(code *)*puVar3)(*(undefined8 *)(lVar2 + 0x98),
                               (longlong)*(int *)(lVar2 + 4) * 0xfc + *(longlong *)(lVar2 + 0x1b8),
                               &uStackX_8);
    if ((int)uVar4 != 0) {
      return uVar4;
    }
    *(undefined8 *)param_1[7] = uStackX_8;
    return uVar4 & 0xffffffff;
  }
  return 0;
}

