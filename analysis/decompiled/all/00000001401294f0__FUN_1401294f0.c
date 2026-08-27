// Function: FUN_1401294f0
// Addr: 1401294f0
// Size: 205 bytes


void FUN_1401294f0(longlong param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  BOOL BVar4;
  int iVar5;
  
  iVar5 = 1;
  LOCK();
  iVar3 = *(int *)(param_1 + 0x140);
  *(int *)(param_1 + 0x140) = 1;
  UNLOCK();
  do {
    if (iVar3 == 0) {
      iVar3 = *(int *)(param_1 + 0x144);
      iVar5 = *(int *)(param_1 + 0x148);
      iVar1 = *(int *)(param_1 + 0x14c);
      iVar2 = *(int *)(param_1 + 0x150);
      *(undefined4 *)(param_1 + 0x140) = 0;
      BVar4 = IsWindow(*(HWND *)(param_1 + 0x158));
      if (BVar4 != 0) {
        SetWindowPos(*(HWND *)(param_1 + 0x158),(HWND)0x0,iVar3,iVar5,iVar1 - iVar3,iVar2 - iVar5,
                     0x4314);
      }
      return;
    }
    iVar3 = *(int *)(param_1 + 0x140);
    while (iVar3 != 0) {
      iVar3 = iVar5;
      if (iVar5 == 0) {
LAB_140129539:
        iVar5 = iVar5 * 2;
      }
      else {
        do {
          iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
        if (iVar5 < 0x40) goto LAB_140129539;
        iVar5 = 0x40;
      }
      iVar3 = *(int *)(param_1 + 0x140);
    }
    LOCK();
    iVar3 = *(int *)(param_1 + 0x140);
    *(int *)(param_1 + 0x140) = 1;
    UNLOCK();
  } while( true );
}

