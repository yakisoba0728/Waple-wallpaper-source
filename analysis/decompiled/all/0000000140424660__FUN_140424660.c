// Function: FUN_140424660
// Addr: 140424660
// Size: 11 bytes


void FUN_140424660(void)

{
  longlong *plVar1;
  int iVar2;
  undefined4 uVar3;
  
  func_0x000140030db0(&DAT_1404e8cc8);
  plVar1 = DAT_1404e8cb8;
  *(undefined8 *)DAT_1404e8cb8[1] = 0;
  if (*plVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140017310(*plVar1 + 0x58);
  }
  if ((DAT_1404e8cb8 != (longlong *)0x0) &&
     (iVar2 = (*DAT_1404264b8)(DAT_1404e4fa0,0,DAT_1404e8cb8), iVar2 == 0)) {
    uVar3 = (*DAT_1404266a8)();
    func_0x0001402caec4(uVar3);
                    /* WARNING: Subroutine does not return */
    FUN_1402cb004();
  }
  return;
}

