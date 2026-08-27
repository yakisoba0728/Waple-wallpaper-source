// Function: FUN_14028b590
// Addr: 14028b590
// Size: 346 bytes


uint FUN_14028b590(void)

{
  bool bVar1;
  char cVar2;
  byte bVar3;
  undefined2 uVar4;
  int iVar5;
  longlong *plVar6;
  undefined8 uVar7;
  uint unaff_EBX;
  
  cVar2 = FUN_14028b230(1);
  if (cVar2 == '\0') {
    FUN_14028bbf0(7);
  }
  else {
    bVar1 = false;
    bVar3 = FUN_14028b1e0();
    unaff_EBX = (uint)bVar3;
    if (DAT_1404e3a40 != 1) {
      if (DAT_1404e3a40 == 0) {
        DAT_1404e3a40 = 1;
        iVar5 = FUN_1402d2040(&DAT_140426d50,&DAT_140426d90);
        if (iVar5 != 0) {
          return 0xff;
        }
        FUN_1402d2008(&DAT_140426b10,&DAT_140426d38);
        DAT_1404e3a40 = 2;
      }
      else {
        bVar1 = true;
      }
      FUN_14028b3b0(unaff_EBX);
      plVar6 = (longlong *)FUN_14028be60();
      if ((*plVar6 != 0) && (cVar2 = FUN_14028b310(plVar6), cVar2 != '\0')) {
        (*(code *)PTR__guard_dispatch_icall_140426ae8)(0,2,0);
      }
      plVar6 = (longlong *)FUN_14028be70();
      if ((*plVar6 != 0) && (cVar2 = FUN_14028b310(plVar6), cVar2 != '\0')) {
        FUN_1402d0fa8(*plVar6);
      }
      uVar4 = FUN_14028bc00();
      uVar7 = FUN_1402d1f94();
      unaff_EBX = FUN_14000a220(&IMAGE_DOS_HEADER_140000000,0,uVar7,uVar4);
      cVar2 = FUN_14028bc70();
      if (cVar2 != '\0') {
        if (!bVar1) {
          FUN_1402d0f8c();
        }
        FUN_14028b3e0(1,0);
        return unaff_EBX;
      }
      goto LAB_14028b6f4;
    }
  }
  FUN_14028bbf0(7);
LAB_14028b6f4:
  FUN_1402d0fe4(unaff_EBX);
                    /* WARNING: Subroutine does not return */
  FUN_1402d0f9c(unaff_EBX);
}

