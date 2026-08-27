// Function: FUN_140405290
// Addr: 140405290
// Size: 134 bytes


bool FUN_140405290(longlong param_1,int *param_2)

{
  char *pcVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  param_1 = param_1 + 5;
  uVar3 = (ulonglong)(uint)param_2[6];
  pcVar1 = "OUT-OF-RANGE";
  uVar2 = param_1 - *(longlong *)(param_2 + 2);
  if (uVar2 <= uVar3) {
    pcVar1 = "OK";
  }
  FUN_1402fc370("SANITIZE",param_1,0,1,*param_2 + 1,0,"check_point [%p] in [%p..%p] -> %s",param_1,
                *(longlong *)(param_2 + 2),*(undefined8 *)(param_2 + 4),pcVar1);
  return uVar2 <= uVar3;
}

