// Function: FUN_1403621e0
// Addr: 1403621e0
// Size: 201 bytes


undefined8 * FUN_1403621e0(longlong param_1,int param_2,int *param_3)

{
  char cVar1;
  char *pcVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  if (param_2 != 0) {
    uVar4 = (ulonglong)(uint)param_3[6];
    pcVar2 = "OUT-OF-RANGE";
    puVar3 = (undefined8 *)(param_2 + param_1);
    uVar5 = (longlong)puVar3 - *(longlong *)(param_3 + 2);
    if (uVar5 <= uVar4) {
      pcVar2 = "OK";
    }
    FUN_1402fc370("SANITIZE",puVar3,0,1,*param_3 + 1,0,"check_point [%p] in [%p..%p] -> %s",puVar3,
                  *(longlong *)(param_3 + 2),*(undefined8 *)(param_3 + 4),pcVar2);
    if (uVar5 <= uVar4) {
      cVar1 = FUN_1403fb470(puVar3,param_3);
      if (cVar1 == '\0') {
        puVar3 = &DAT_14045dd10;
      }
      return puVar3;
    }
  }
  return &DAT_14045dd10;
}

