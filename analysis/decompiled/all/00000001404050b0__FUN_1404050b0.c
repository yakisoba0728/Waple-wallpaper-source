// Function: FUN_1404050b0
// Addr: 1404050b0
// Size: 238 bytes


undefined8 FUN_1404050b0(longlong param_1,int *param_2)

{
  longlong lVar1;
  char cVar2;
  char *pcVar3;
  uint uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  pcVar3 = "OUT-OF-RANGE";
  lVar1 = param_1 + 8;
  uVar6 = lVar1 - *(longlong *)(param_2 + 2);
  uVar5 = (ulonglong)(uint)param_2[6];
  if (uVar6 <= uVar5) {
    pcVar3 = "OK";
  }
  FUN_1402fc370("SANITIZE",lVar1,0,1,*param_2 + 1,0,"check_point [%p] in [%p..%p] -> %s",lVar1,
                *(longlong *)(param_2 + 2),*(undefined8 *)(param_2 + 4),pcVar3);
  if ((uVar6 <= uVar5) && (cVar2 = FUN_1404094a0(param_1 + 1,param_2,param_1), cVar2 != '\0')) {
    uVar4 = (uint)*(byte *)(param_1 + 2) * 0x100 + (uint)*(byte *)(param_1 + 1) * 0x10000 +
            (uint)*(byte *)(param_1 + 3);
    if ((uVar4 != 0) && (cVar2 = FUN_14038bbb0((ulonglong)uVar4 + param_1,param_2), cVar2 == '\0'))
    {
      return 0;
    }
    return 1;
  }
  return 0;
}

