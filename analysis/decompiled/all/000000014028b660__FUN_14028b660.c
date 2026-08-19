// Function: FUN_14028b660
// Addr: 14028b660
// Size: 208 bytes


ulonglong FUN_14028b660(void)

{
  bool bVar1;
  char cVar2;
  byte bVar3;
  undefined2 uVar4;
  int iVar5;
  uint uVar6;
  longlong *plVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  ulonglong unaff_RBX;
  
  cVar2 = FUN_14028b300(1);
  if (cVar2 == '\0') {
    FUN_14028bcc0(7);
  }
  else {
    bVar1 = false;
    bVar3 = FUN_14028b2b0();
    unaff_RBX = (ulonglong)bVar3;
    if (DAT_1404e3b10 != 1) {
      if (DAT_1404e3b10 == 0) {
        DAT_1404e3b10 = 1;
        iVar5 = FUN_1402d2110(&DAT_140426e20,&DAT_140426e60);
        if (iVar5 != 0) {
          return 0xff;
        }
        FUN_1402d20d8(&DAT_140426be0,&DAT_140426e08);
        DAT_1404e3b10 = 2;
      }
      else {
        bVar1 = true;
      }
      func_0x00014028b480(unaff_RBX);
      plVar7 = (longlong *)FUN_14028bf30();
      if ((*plVar7 != 0) && (cVar2 = FUN_14028b3e0(plVar7), cVar2 != '\0')) {
        (*(code *)PTR_FUN_140426bb8)(0,2,0);
      }
      plVar7 = (longlong *)func_0x00014028bf40();
      if ((*plVar7 != 0) && (cVar2 = FUN_14028b3e0(plVar7), cVar2 != '\0')) {
        func_0x0001402d1078(*plVar7);
      }
      uVar4 = func_0x00014028bcd0();
      uVar8 = func_0x0001402d2064();
      uVar6 = func_0x00014000a2f0(0x1400000d0,0,uVar8,uVar4);
      unaff_RBX = (ulonglong)uVar6;
      cVar2 = func_0x00014028bd40();
      if (cVar2 != '\0') {
        if (!bVar1) {
          func_0x0001402d105c();
        }
        func_0x00014028b4b0(1,0);
        return unaff_RBX;
      }
      goto code_r0x00014028b7c4;
    }
  }
  FUN_14028bcc0(7);
code_r0x00014028b7c4:
  FUN_1402d10b4(unaff_RBX & 0xffffffff);
  uVar9 = func_0x0001402d106c(unaff_RBX & 0xffffffff);
  return uVar9;
}

