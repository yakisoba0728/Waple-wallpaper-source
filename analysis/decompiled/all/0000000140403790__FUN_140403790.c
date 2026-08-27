// Function: FUN_140403790
// Addr: 140403790
// Size: 160 bytes


bool FUN_140403790(longlong param_1,int *param_2)

{
  char cVar1;
  char *pcVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  pcVar2 = "OUT-OF-RANGE";
  uVar4 = param_1 - *(longlong *)(param_2 + 2);
  uVar3 = (ulonglong)(uint)param_2[6];
  if (uVar4 <= uVar3) {
    pcVar2 = "OK";
  }
  FUN_1402fc370("SANITIZE",param_1,0,1,*param_2 + 1,0,"check_point [%p] in [%p..%p] -> %s",param_1,
                *(longlong *)(param_2 + 2),*(undefined8 *)(param_2 + 4),pcVar2);
  if (uVar4 <= uVar3) {
    cVar1 = FUN_14036f0c0(param_2);
    return cVar1 != '\0';
  }
  return false;
}

