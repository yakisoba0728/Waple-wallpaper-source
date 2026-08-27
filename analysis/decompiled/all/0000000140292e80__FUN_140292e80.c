// Function: FUN_140292e80
// Addr: 140292e80
// Size: 159 bytes


undefined8 * FUN_140292e80(undefined8 *param_1,undefined8 *param_2)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  
  uVar3 = *param_2;
  uVar4 = param_2[1];
  *param_2 = 0;
  param_2[1] = 0;
  *param_1 = uVar3;
  lVar5 = param_1[1];
  param_1[1] = uVar4;
  if (lVar5 != 0) {
    LOCK();
    piVar1 = (int *)(lVar5 + 8);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (*(code *)PTR__guard_dispatch_icall_140426ae8)(lVar5);
      LOCK();
      piVar1 = (int *)(lVar5 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (*(code *)PTR__guard_dispatch_icall_140426ae8)(lVar5);
      }
    }
  }
  return param_1;
}

