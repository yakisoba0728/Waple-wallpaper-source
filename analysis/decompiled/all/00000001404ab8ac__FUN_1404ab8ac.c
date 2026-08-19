// Function: FUN_1404ab8ac
// Addr: 1404ab8ac
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404ab8c3) overlaps instruction at (ram,0x0001404ab8c1)
    */

void FUN_1404ab8ac(char *param_1,undefined1 *param_2)

{
  undefined4 uVar1;
  uint in_EAX;
  uint uVar2;
  undefined1 unaff_BL;
  undefined1 unaff_BH;
  undefined6 unaff_0000001a;
  undefined2 unaff_SP;
  longlong unaff_RDI;
  
  uVar2 = in_EAX | 0x8000af4;
  if (uVar2 != 0) {
    *(char *)((ulonglong)uVar2 + 0x36) = *(char *)((ulonglong)uVar2 + 0x36) + (char)param_2;
    uVar1 = LocalDescriptorTableRegister();
    *(undefined4 *)(CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + -0x37fff0ca) = uVar1;
    *param_1 = *param_1 + (char)(uVar2 >> 8);
    uVar1 = LocalDescriptorTableRegister();
    *(undefined4 *)(CONCAT62(unaff_0000001a,CONCAT11(0x4a,unaff_BL)) + 0x6f000f36) = uVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  verw();
  LocalDescriptorTableRegister(unaff_SP);
  *param_1 = *param_1;
  *param_2 = *param_2;
  cRam0000000000000000 = cRam0000000000000000 + (char)param_1;
  in(0x11);
  *(char *)(unaff_RDI + 0x37) = *(char *)(unaff_RDI + 0x37) + (char)((ulonglong)param_1 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

