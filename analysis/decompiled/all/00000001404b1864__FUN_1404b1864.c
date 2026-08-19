// Function: FUN_1404b1864
// Addr: 1404b1864
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b1864(void)

{
  undefined4 uVar1;
  undefined8 in_RAX;
  char *pcVar2;
  undefined4 unaff_ESP;
  undefined4 unaff_00000024;
  longlong unaff_RSI;
  char in_CF;
  
  pcVar2 = (char *)CONCAT62((int6)((ulonglong)in_RAX >> 0x10),CONCAT11(-in_CF,(char)in_RAX));
  *pcVar2 = *pcVar2 + (char)in_RAX + (in_CF != '\0');
  uVar1 = LocalDescriptorTableRegister();
  *(undefined4 *)(CONCAT44(unaff_00000024,unaff_ESP) + unaff_RSI * 2) = uVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

