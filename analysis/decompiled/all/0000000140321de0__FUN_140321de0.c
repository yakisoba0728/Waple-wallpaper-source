// Function: FUN_140321de0
// Addr: 140321de0
// Size: 157 bytes


ulonglong FUN_140321de0(longlong *param_1)

{
  code *pcVar1;
  longlong lVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  undefined8 local_res8;
  
  puVar3 = *(undefined8 **)(*param_1 + 0x1d8);
  lVar2 = FUN_1402f0420(*(undefined8 *)(*(longlong *)(*param_1 + 0x90) + 8),"pshinter");
  if ((((lVar2 != 0) && (puVar3 != (undefined8 *)0x0)) &&
      (pcVar1 = (code *)*puVar3, pcVar1 != (code *)0x0)) &&
     (puVar3 = (undefined8 *)(*pcVar1)(lVar2), puVar3 != (undefined8 *)0x0)) {
    lVar2 = *param_1;
    uVar4 = (*(code *)*puVar3)(*(undefined8 *)(lVar2 + 0x98),
                               (longlong)*(int *)(lVar2 + 4) * 0xfc + *(longlong *)(lVar2 + 0x1b8),
                               &local_res8);
    if ((int)uVar4 != 0) {
      return uVar4;
    }
    *(undefined8 *)param_1[7] = local_res8;
    return uVar4 & 0xffffffff;
  }
  return 0;
}

