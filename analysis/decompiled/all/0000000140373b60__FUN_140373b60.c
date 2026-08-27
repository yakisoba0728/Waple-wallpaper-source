// Function: FUN_140373b60
// Addr: 140373b60
// Size: 175 bytes


undefined8 FUN_140373b60(int *param_1,longlong param_2)

{
  char cVar1;
  char *pcVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  param_2 = param_2 + 2;
  uVar3 = (ulonglong)(uint)param_1[6];
  pcVar2 = "OUT-OF-RANGE";
  uVar4 = param_2 - *(longlong *)(param_1 + 2);
  if (uVar4 <= uVar3) {
    pcVar2 = "OK";
  }
  FUN_1402fc370("SANITIZE",param_2,0,1,*param_1 + 1,0,"check_point [%p] in [%p..%p] -> %s",param_2,
                *(longlong *)(param_1 + 2),*(undefined8 *)(param_1 + 4),pcVar2);
  if (uVar4 <= uVar3) {
    cVar1 = FUN_140409270(param_2,param_1);
    if (cVar1 != '\0') {
      return 1;
    }
  }
  return 0;
}

