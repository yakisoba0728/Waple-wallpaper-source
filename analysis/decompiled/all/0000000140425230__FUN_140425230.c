// Function: FUN_140425230
// Addr: 140425230
// Size: 4 bytes


void FUN_140425230(void)

{
  longlong *plVar1;
  int iVar2;
  undefined4 uVar3;
  
  func_0x00014000dab0(0x1404e8508);
  func_0x00014015a7d0(0x1404e84f8);
  func_0x00014000dab0(0x1404e84c8);
  plVar1 = plRam00000001404e84b8;
  *(undefined8 *)plRam00000001404e84b8[1] = 0;
  if (*plVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140017310(*plVar1 + 0x68);
  }
  if ((plRam00000001404e84b8 != (longlong *)0x0) &&
     (iVar2 = (*DAT_1404264b8)(DAT_1404e4fa0,0,plRam00000001404e84b8), iVar2 == 0)) {
    uVar3 = (*DAT_1404266a8)();
    func_0x0001402caec4(uVar3);
                    /* WARNING: Subroutine does not return */
    FUN_1402cb004();
  }
  return;
}

