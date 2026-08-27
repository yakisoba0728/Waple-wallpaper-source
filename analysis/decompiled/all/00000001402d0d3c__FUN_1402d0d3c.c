// Function: FUN_1402d0d3c
// Addr: 1402d0d3c
// Size: 186 bytes


/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

void FUN_1402d0d3c(undefined8 *param_1)

{
  byte bVar1;
  undefined *puVar2;
  
  if (DAT_1404e4460 != '\0') {
    return;
  }
  LOCK();
  DAT_1404e4450 = 1;
  UNLOCK();
  if (*(int *)*param_1 == 0) {
    if (DAT_1404e4458 != DAT_1404dc040) {
      bVar1 = (byte)DAT_1404dc040 & 0x3f;
      (*(code *)((DAT_1404dc040 ^ DAT_1404e4458) >> bVar1 |
                (DAT_1404dc040 ^ DAT_1404e4458) << 0x40 - bVar1))(0,0,0);
    }
    puVar2 = &DAT_1404e4598;
  }
  else {
    if (*(int *)*param_1 != 1) goto LAB_1402d0dab;
    puVar2 = &DAT_1404e45b0;
  }
  FUN_1402d1cd4(puVar2);
LAB_1402d0dab:
  if (*(int *)*param_1 == 0) {
    FUN_1402d2008(&DAT_140426db8,&DAT_140426dd8);
  }
  FUN_1402d2008(&DAT_140426de0,&DAT_140426de8);
  if (*(int *)param_1[1] == 0) {
    DAT_1404e4460 = '\x01';
    *(undefined1 *)param_1[2] = 1;
  }
  return;
}

