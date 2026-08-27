// Function: FUN_1402ba760
// Addr: 1402ba760
// Size: 56 bytes


undefined8 FUN_1402ba760(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  lVar2 = FUN_1402bbec0();
  plVar1 = *(longlong **)(lVar2 + 0x58);
  while( true ) {
    if (plVar1 == (longlong *)0x0) {
      return 1;
    }
    if (*plVar1 == param_1) break;
    plVar1 = (longlong *)plVar1[1];
  }
  return 0;
}

