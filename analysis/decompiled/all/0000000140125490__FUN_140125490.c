// Function: FUN_140125490
// Addr: 140125490
// Size: 126 bytes


void FUN_140125490(undefined8 param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  
  uVar4 = (*DAT_1404268d0)();
  iVar1 = (*DAT_140426af0)(uVar4);
  while (iVar1 != 0) {
    uVar2 = (*DAT_140426848)(uVar4,0);
    uVar3 = (*DAT_140426848)(param_1,0);
    (*DAT_140426938)(uVar3,uVar2,0);
    uVar4 = (*DAT_1404268d0)(uVar4);
    iVar1 = (*DAT_140426af0)(uVar4);
  }
  return;
}

