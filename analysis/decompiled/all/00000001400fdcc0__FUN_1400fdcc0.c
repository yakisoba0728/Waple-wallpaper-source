// Function: FUN_1400fdcc0
// Addr: 1400fdcc0
// Size: 113 bytes


undefined8 * FUN_1400fdcc0(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 1;
  LOCK();
  iVar3 = *(int *)(param_1 + 0x140);
  *(int *)(param_1 + 0x140) = 1;
  UNLOCK();
  do {
    if (iVar3 == 0) {
      uVar1 = *(undefined8 *)(param_1 + 0x14c);
      *param_2 = *(undefined8 *)(param_1 + 0x144);
      param_2[1] = uVar1;
      *(undefined4 *)(param_1 + 0x140) = 0;
      return param_2;
    }
    iVar3 = *(int *)(param_1 + 0x140);
    while (iVar3 != 0) {
      iVar3 = iVar2;
      if (iVar2 == 0) {
LAB_1400fdcfd:
        iVar2 = iVar2 * 2;
      }
      else {
        do {
          iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
        if (iVar2 < 0x40) goto LAB_1400fdcfd;
        iVar2 = 0x40;
      }
      iVar3 = *(int *)(param_1 + 0x140);
    }
    LOCK();
    iVar3 = *(int *)(param_1 + 0x140);
    *(int *)(param_1 + 0x140) = 1;
    UNLOCK();
  } while( true );
}

