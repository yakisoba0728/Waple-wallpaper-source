// Function: FUN_140293510
// Addr: 140293510
// Size: 154 bytes


void FUN_140293510(undefined8 *param_1,undefined8 *param_2)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  if (param_2[1] != 0) {
    LOCK();
    piVar1 = (int *)(param_2[1] + 8);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  uVar3 = param_2[1];
  *param_1 = *param_2;
  lVar4 = param_1[1];
  param_1[1] = uVar3;
  if (lVar4 != 0) {
    LOCK();
    piVar1 = (int *)(lVar4 + 8);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (*(code *)PTR__guard_dispatch_icall_140426ae8)(lVar4);
      LOCK();
      piVar1 = (int *)(lVar4 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (*(code *)PTR__guard_dispatch_icall_140426ae8)(lVar4);
      }
    }
  }
  return;
}

