// Function: FUN_1404ab8b8
// Addr: 1404ab8b8
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404ab8b8(char *param_1)

{
  undefined4 uVar1;
  undefined8 in_RAX;
  undefined1 unaff_BL;
  undefined6 unaff_0000001a;
  uint *unaff_RSI;
  
  *unaff_RSI = *unaff_RSI ^ 0xf;
  *param_1 = *param_1 + (char)((ulonglong)in_RAX >> 8);
  uVar1 = LocalDescriptorTableRegister();
  *(undefined4 *)(CONCAT62(unaff_0000001a,CONCAT11(0x4a,unaff_BL)) + 0x6f000f36) = uVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

