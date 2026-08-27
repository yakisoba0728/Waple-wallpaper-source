// Function: FUN_1404045b0
// Addr: 1404045b0
// Size: 179 bytes


undefined8 FUN_1404045b0(longlong param_1,int *param_2)

{
  longlong lVar1;
  char cVar2;
  char *pcVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  pcVar3 = "OUT-OF-RANGE";
  lVar1 = param_1 + 6;
  uVar5 = lVar1 - *(longlong *)(param_2 + 2);
  uVar4 = (ulonglong)(uint)param_2[6];
  if (uVar5 <= uVar4) {
    pcVar3 = "OK";
  }
  FUN_1402fc370("SANITIZE",lVar1,0,1,*param_2 + 1,0,"check_point [%p] in [%p..%p] -> %s",lVar1,
                *(longlong *)(param_2 + 2),*(undefined8 *)(param_2 + 4),pcVar3);
  if (uVar5 <= uVar4) {
    cVar2 = FUN_1404078b0(param_1 + 4,param_2);
    if (cVar2 != '\0') {
      return 1;
    }
  }
  return 0;
}

