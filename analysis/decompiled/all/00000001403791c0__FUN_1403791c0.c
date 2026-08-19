// Function: FUN_1403791c0
// Addr: 1403791c0
// Size: 41 bytes


undefined8 FUN_1403791c0(longlong param_1,int *param_2)

{
  longlong lVar1;
  char cVar2;
  char *pcVar3;
  longlong lStackX_8;
  
  cVar2 = *(char *)(param_1 + 3);
  if (cVar2 == '\0') {
    lStackX_8 = param_1 + 8;
    pcVar3 = "OUT-OF-RANGE";
    param_1 = param_1 + 0x10;
    if ((ulonglong)(param_1 - *(longlong *)(param_2 + 2)) <= (ulonglong)(uint)param_2[6]) {
      pcVar3 = "OK";
    }
                    /* WARNING: Subroutine does not return */
    FUN_1402fc440("SANITIZE",param_1,0,1,*param_2 + 1,0,"check_point [%p] in [%p..%p] -> %s",param_1
                  ,*(longlong *)(param_2 + 2),*(undefined8 *)(param_2 + 4),pcVar3);
  }
  if (cVar2 == '\x01') {
    lVar1 = param_1 + 8;
    cVar2 = func_0x0001404008f0(lVar1,param_2,&lStackX_8);
    if (cVar2 == '\0') {
      return 0;
    }
    cVar2 = func_0x0001404094a0(param_1 + 0x10,param_2,lVar1);
    if (cVar2 != '\0') {
      cVar2 = func_0x00014038bb20((ulonglong)*(byte *)(param_1 + 0x11) +
                                  (ulonglong)*(byte *)(param_1 + 0x10) * 0x100 + lVar1,param_2,0);
      if (cVar2 != '\0') {
        return 1;
      }
    }
    return 0;
  }
  if (cVar2 == '\x02') {
    param_1 = param_1 + 0x16;
    pcVar3 = "OUT-OF-RANGE";
    if ((ulonglong)(param_1 - *(longlong *)(param_2 + 2)) <= (ulonglong)(uint)param_2[6]) {
      pcVar3 = "OK";
    }
                    /* WARNING: Subroutine does not return */
    FUN_1402fc440("SANITIZE",param_1,0,1,*param_2 + 1,0,"check_point [%p] in [%p..%p] -> %s",param_1
                  ,*(longlong *)(param_2 + 2),*(undefined8 *)(param_2 + 4),pcVar3);
  }
  if (cVar2 != '\x04') {
    if (cVar2 == '\x05') {
      param_1 = param_1 + 0x12;
      pcVar3 = "OUT-OF-RANGE";
      if ((ulonglong)(param_1 - *(longlong *)(param_2 + 2)) <= (ulonglong)(uint)param_2[6]) {
        pcVar3 = "OK";
      }
                    /* WARNING: Subroutine does not return */
      FUN_1402fc440("SANITIZE",param_1,0,1,*param_2 + 1,0,"check_point [%p] in [%p..%p] -> %s",
                    param_1,*(longlong *)(param_2 + 2),*(undefined8 *)(param_2 + 4),pcVar3);
    }
    return 1;
  }
  param_1 = param_1 + 10;
  pcVar3 = "OUT-OF-RANGE";
  if ((ulonglong)(param_1 - *(longlong *)(param_2 + 2)) <= (ulonglong)(uint)param_2[6]) {
    pcVar3 = "OK";
  }
                    /* WARNING: Subroutine does not return */
  FUN_1402fc440("SANITIZE",param_1,0,1,*param_2 + 1,0,"check_point [%p] in [%p..%p] -> %s",param_1,
                *(longlong *)(param_2 + 2),*(undefined8 *)(param_2 + 4),pcVar3);
}

