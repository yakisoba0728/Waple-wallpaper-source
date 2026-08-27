// Function: FUN_140404e10
// Addr: 140404e10
// Size: 179 bytes


undefined8 FUN_140404e10(longlong param_1,int *param_2)

{
  longlong lVar1;
  char cVar2;
  char *pcVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  pcVar3 = "OUT-OF-RANGE";
  lVar1 = param_1 + 0xc;
  uVar5 = lVar1 - *(longlong *)(param_2 + 2);
  uVar4 = (ulonglong)(uint)param_2[6];
  if (uVar5 <= uVar4) {
    pcVar3 = "OK";
  }
  FUN_1402fc370("SANITIZE",lVar1,0,1,*param_2 + 1,0,"check_point [%p] in [%p..%p] -> %s",lVar1,
                *(longlong *)(param_2 + 2),*(undefined8 *)(param_2 + 4),pcVar3);
  if (uVar5 <= uVar4) {
    cVar2 = FUN_140408cb0(param_1 + 4,param_2);
    if (cVar2 != '\0') {
      return 1;
    }
  }
  return 0;
}

