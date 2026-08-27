// Function: FUN_1403739e0
// Addr: 1403739e0
// Size: 179 bytes


undefined8 FUN_1403739e0(int *param_1,longlong param_2)

{
  char cVar1;
  char *pcVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  pcVar2 = "OUT-OF-RANGE";
  uVar4 = (ulonglong)(uint)param_1[6];
  lVar3 = param_2 + 3;
  uVar5 = lVar3 - *(longlong *)(param_1 + 2);
  if (uVar5 <= uVar4) {
    pcVar2 = "OK";
  }
  FUN_1402fc370("SANITIZE",lVar3,0,1,*param_1 + 1,0,"check_point [%p] in [%p..%p] -> %s",lVar3,
                *(longlong *)(param_1 + 2),*(undefined8 *)(param_1 + 4),pcVar2);
  if (uVar5 <= uVar4) {
    cVar1 = FUN_140407340(param_2 + 1,param_1);
    if (cVar1 != '\0') {
      return 1;
    }
  }
  return 0;
}

