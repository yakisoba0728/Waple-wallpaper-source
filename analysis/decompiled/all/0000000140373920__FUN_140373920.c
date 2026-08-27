// Function: FUN_140373920
// Addr: 140373920
// Size: 179 bytes


undefined8 FUN_140373920(int *param_1,longlong param_2)

{
  char cVar1;
  char *pcVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  pcVar2 = "OUT-OF-RANGE";
  uVar4 = (ulonglong)(uint)param_1[6];
  lVar3 = param_2 + 4;
  uVar5 = lVar3 - *(longlong *)(param_1 + 2);
  if (uVar5 <= uVar4) {
    pcVar2 = "OK";
  }
  FUN_1402fc370("SANITIZE",lVar3,0,1,*param_1 + 1,0,"check_point [%p] in [%p..%p] -> %s",lVar3,
                *(longlong *)(param_1 + 2),*(undefined8 *)(param_1 + 4),pcVar2);
  if (uVar5 <= uVar4) {
    cVar1 = FUN_1404078b0(param_2 + 2,param_1);
    if (cVar1 != '\0') {
      return 1;
    }
  }
  return 0;
}

