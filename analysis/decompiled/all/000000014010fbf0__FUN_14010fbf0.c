// Function: FUN_14010fbf0
// Addr: 14010fbf0
// Size: 81 bytes


void FUN_14010fbf0(longlong param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 1;
  LOCK();
  iVar1 = *(int *)(param_1 + 0x140);
  *(int *)(param_1 + 0x140) = 1;
  UNLOCK();
  do {
    if (iVar1 == 0) {
      *(undefined4 *)(param_1 + 0x140) = 0;
      (*DAT_140426950)(*(undefined8 *)(param_1 + 0x1c8),1,*(int *)(param_1 + 0x144),
                       *(int *)(param_1 + 0x148),
                       *(int *)(param_1 + 0x14c) - *(int *)(param_1 + 0x144),
                       *(int *)(param_1 + 0x150) - *(int *)(param_1 + 0x148),0x431c);
      return;
    }
    iVar1 = *(int *)(param_1 + 0x140);
    while (iVar1 != 0) {
      iVar1 = iVar2;
      if (iVar2 == 0) {
LAB_14010fc39:
        iVar2 = iVar2 * 2;
      }
      else {
        do {
          iVar1 = iVar1 + -1;
        } while (iVar1 != 0);
        if (iVar2 < 0x40) goto LAB_14010fc39;
        iVar2 = 0x40;
      }
      iVar1 = *(int *)(param_1 + 0x140);
    }
    LOCK();
    iVar1 = *(int *)(param_1 + 0x140);
    *(int *)(param_1 + 0x140) = 1;
    UNLOCK();
  } while( true );
}

