// Function: FUN_1402d17cc
// Addr: 1402d17cc
// Size: 186 bytes


undefined8 FUN_1402d17cc(void)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong *plVar4;
  
  plVar4 = DAT_1404e4578;
  if (DAT_1404e4578 == (longlong *)0x0) {
LAB_1402d17ef:
    uVar2 = 0xffffffff;
  }
  else {
    for (; *plVar4 != 0; plVar4 = plVar4 + 1) {
      iVar1 = FUN_1402dcb78(0,0,*plVar4,0xffffffff,0,0);
      if (iVar1 == 0) goto LAB_1402d17ef;
      lVar3 = _calloc_base((longlong)iVar1);
      if (lVar3 == 0) {
        lVar3 = 0;
LAB_1402d187c:
        FUN_1402d9040(lVar3);
        goto LAB_1402d17ef;
      }
      iVar1 = FUN_1402dcb78(0,0,*plVar4,0xffffffff,lVar3,iVar1);
      if (iVar1 == 0) goto LAB_1402d187c;
      thunk_FUN_1402e3c0c();
      FUN_1402d9040();
    }
    uVar2 = 0;
  }
  return uVar2;
}

