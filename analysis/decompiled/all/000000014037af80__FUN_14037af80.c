// Function: FUN_14037af80
// Addr: 14037af80
// Size: 595 bytes


undefined8 FUN_14037af80(longlong param_1,int *param_2,undefined4 param_3)

{
  undefined8 uVar1;
  char *pcVar2;
  
  switch(param_3) {
  case 1:
    uVar1 = FUN_14037b440(param_1);
    break;
  case 2:
    param_1 = param_1 + 2;
    pcVar2 = "OUT-OF-RANGE";
    if ((ulonglong)(param_1 - *(longlong *)(param_2 + 2)) <= (ulonglong)(uint)param_2[6]) {
      pcVar2 = "OK";
    }
                    /* WARNING: Subroutine does not return */
    FUN_1402fc440("SANITIZE",param_1,0,1,*param_2 + 1,0,"check_point [%p] in [%p..%p] -> %s",param_1
                  ,*(longlong *)(param_2 + 2),*(undefined8 *)(param_2 + 4),pcVar2);
  case 3:
    uVar1 = FUN_140379f90(param_1);
    break;
  case 4:
    param_1 = param_1 + 2;
    pcVar2 = "OUT-OF-RANGE";
    if ((ulonglong)(param_1 - *(longlong *)(param_2 + 2)) <= (ulonglong)(uint)param_2[6]) {
      pcVar2 = "OK";
    }
                    /* WARNING: Subroutine does not return */
    FUN_1402fc440("SANITIZE",param_1,0,1,*param_2 + 1,0,"check_point [%p] in [%p..%p] -> %s",param_1
                  ,*(longlong *)(param_2 + 2),*(undefined8 *)(param_2 + 4),pcVar2);
  case 5:
    param_1 = param_1 + 2;
    pcVar2 = "OUT-OF-RANGE";
    if ((ulonglong)(param_1 - *(longlong *)(param_2 + 2)) <= (ulonglong)(uint)param_2[6]) {
      pcVar2 = "OK";
    }
                    /* WARNING: Subroutine does not return */
    FUN_1402fc440("SANITIZE",param_1,0,1,*param_2 + 1,0,"check_point [%p] in [%p..%p] -> %s",param_1
                  ,*(longlong *)(param_2 + 2),*(undefined8 *)(param_2 + 4),pcVar2);
  case 6:
    param_1 = param_1 + 2;
    pcVar2 = "OUT-OF-RANGE";
    if ((ulonglong)(param_1 - *(longlong *)(param_2 + 2)) <= (ulonglong)(uint)param_2[6]) {
      pcVar2 = "OK";
    }
                    /* WARNING: Subroutine does not return */
    FUN_1402fc440("SANITIZE",param_1,0,1,*param_2 + 1,0,"check_point [%p] in [%p..%p] -> %s",param_1
                  ,*(longlong *)(param_2 + 2),*(undefined8 *)(param_2 + 4),pcVar2);
  case 7:
    uVar1 = func_0x000140379ce0(param_1);
    break;
  case 8:
    uVar1 = FUN_140379940(param_1);
    break;
  case 9:
    pcVar2 = "OUT-OF-RANGE";
    param_1 = param_1 + 2;
    if ((ulonglong)(param_1 - *(longlong *)(param_2 + 2)) <= (ulonglong)(uint)param_2[6]) {
      pcVar2 = "OK";
    }
                    /* WARNING: Subroutine does not return */
    FUN_1402fc440("SANITIZE",param_1,0,1,*param_2 + 1,0,"check_point [%p] in [%p..%p] -> %s",param_1
                  ,*(longlong *)(param_2 + 2),*(undefined8 *)(param_2 + 4),pcVar2);
  default:
    uVar1 = 1;
  }
  return uVar1;
}

