// Function: FUN_1402d16ec
// Addr: 1402d16ec
// Size: 222 bytes


undefined8 FUN_1402d16ec(void)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong *plVar4;
  
  plVar4 = DAT_1404e4580;
  if (DAT_1404e4580 == (longlong *)0x0) {
LAB_1402d1715:
    uVar2 = 0xffffffff;
  }
  else {
    for (; *plVar4 != 0; plVar4 = plVar4 + 1) {
      iVar1 = FUN_1402dcc08(0,0,*plVar4,0xffffffff,0,0,0,0);
      if (iVar1 == 0) goto LAB_1402d1715;
      lVar3 = _calloc_base((longlong)iVar1);
      if (lVar3 == 0) {
        lVar3 = 0;
LAB_1402d17c0:
        FUN_1402d9040(lVar3);
        goto LAB_1402d1715;
      }
      iVar1 = FUN_1402dcc08(0,0,*plVar4,0xffffffff,lVar3,iVar1,0,0);
      if (iVar1 == 0) goto LAB_1402d17c0;
      thunk_FUN_1402e38b4();
      FUN_1402d9040();
    }
    uVar2 = 0;
  }
  return uVar2;
}

