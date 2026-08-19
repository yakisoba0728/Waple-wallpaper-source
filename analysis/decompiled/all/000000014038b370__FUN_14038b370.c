// Function: FUN_14038b370
// Addr: 14038b370
// Size: 213 bytes


int * FUN_14038b370(int *param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  int *piVar2;
  char *pcVar3;
  int iVar4;
  
  if ((char)param_1[0xf] == '\0') {
    iVar4 = *(int *)(param_2 + 0x18);
    if (iVar4 == -1) {
      lVar1 = FUN_140398ae0(param_2 + 0x80);
      iVar4 = (uint)*(byte *)(lVar1 + 5) + (uint)*(byte *)(lVar1 + 4) * 0x100;
      if (iVar4 == 0) {
        iVar4 = 0;
      }
      *(int *)(param_2 + 0x18) = iVar4;
    }
    param_1[0xe] = iVar4;
    *(undefined1 *)(param_1 + 0xf) = 1;
  }
  if ((param_3 != 0) && (*(code **)(param_2 + 0x20) != (code *)0x0)) {
    piVar2 = (int *)(**(code **)(param_2 + 0x20))(param_2,param_3,*(undefined8 *)(param_2 + 0x28));
    if (piVar2 != (int *)0x0) goto LAB_14038b3e7;
  }
  piVar2 = (int *)&DAT_14045dde0;
LAB_14038b3e7:
  if (*piVar2 != 0) {
    LOCK();
    *piVar2 = *piVar2 + 1;
    UNLOCK();
  }
  *(int **)(param_1 + 0xc) = piVar2;
  *(undefined1 *)(param_1 + 10) = 0;
  FUN_14040c300(param_1,0,0);
  lVar1 = *(longlong *)(param_1 + 2);
  if (lVar1 == 0) {
    FUN_1403bf0c0(param_1);
    return piVar2;
  }
  pcVar3 = "OUT-OF-RANGE";
  if (3 < (uint)param_1[6]) {
    pcVar3 = "OK";
  }
                    /* WARNING: Subroutine does not return */
  FUN_1402fc440("SANITIZE",lVar1 + 4,0,1,*param_1 + 1,0,"check_point [%p] in [%p..%p] -> %s",
                lVar1 + 4,lVar1,*(undefined8 *)(param_1 + 4),pcVar3);
}

