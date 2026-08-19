// Function: FUN_1404bb07c
// Addr: 1404bb07c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404bb07c(void)

{
  uint *puVar1;
  char *pcVar2;
  undefined1 in_AL;
  char in_AH;
  undefined6 in_register_00000002;
  uint unaff_ESP;
  undefined4 unaff_00000024;
  longlong unaff_RSI;
  
  puVar1 = (uint *)(unaff_RSI + CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)));
  *puVar1 = *puVar1 & unaff_ESP;
  pcVar2 = (char *)(CONCAT44(unaff_00000024,unaff_ESP) + unaff_RSI * 8);
  *pcVar2 = *pcVar2 + in_AH;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

