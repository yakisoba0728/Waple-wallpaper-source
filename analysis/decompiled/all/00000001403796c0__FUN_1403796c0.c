// Function: FUN_1403796c0
// Addr: 1403796c0
// Size: 242 bytes


undefined8 FUN_1403796c0(longlong param_1,int *param_2)

{
  byte bVar1;
  int iVar2;
  char *pcVar3;
  undefined8 uVar4;
  
  bVar1 = *(byte *)(param_1 + 4);
  if (bVar1 == 0) {
    uVar4 = FUN_140408aa0(param_1 + 6);
    return uVar4;
  }
  if (bVar1 != 1) {
    iVar2 = bVar1 - 2;
    if (iVar2 == 0) {
      uVar4 = func_0x0001403fcb70();
    }
    else {
      if (iVar2 == 1) {
        pcVar3 = "OUT-OF-RANGE";
        param_1 = param_1 + 0xc;
        if ((ulonglong)(param_1 - *(longlong *)(param_2 + 2)) <= (ulonglong)(uint)param_2[6]) {
          pcVar3 = "OK";
        }
                    /* WARNING: Subroutine does not return */
        FUN_1402fc440("SANITIZE",param_1,0,1,*param_2 + 1,0,"check_point [%p] in [%p..%p] -> %s",
                      param_1,*(longlong *)(param_2 + 2),*(undefined8 *)(param_2 + 4),pcVar3);
      }
      uVar4 = CONCAT71((uint7)(uint3)((uint)iVar2 >> 8),1);
    }
    return uVar4;
  }
  param_1 = param_1 + 0x10;
  pcVar3 = "OUT-OF-RANGE";
  if ((ulonglong)(param_1 - *(longlong *)(param_2 + 2)) <= (ulonglong)(uint)param_2[6]) {
    pcVar3 = "OK";
  }
                    /* WARNING: Subroutine does not return */
  FUN_1402fc440("SANITIZE",param_1,0,1,*param_2 + 1,0,"check_point [%p] in [%p..%p] -> %s",param_1,
                *(longlong *)(param_2 + 2),*(undefined8 *)(param_2 + 4),pcVar3);
}

