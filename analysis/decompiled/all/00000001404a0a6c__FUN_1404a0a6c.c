// Function: FUN_1404a0a6c
// Addr: 1404a0a6c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404a0ad2) overlaps instruction at (ram,0x0001404a0acf)
    */

void FUN_1404a0a6c(char *param_1,undefined8 param_2)

{
  char *pcVar1;
  undefined8 in_RAX;
  longlong lVar2;
  undefined1 unaff_BL;
  char unaff_BH;
  undefined6 unaff_0000001a;
  char unaff_SPL;
  longlong unaff_RSI;
  longlong unaff_RDI;
  
  lVar2 = CONCAT71((int7)((ulonglong)in_RAX >> 8),uRam1000036f5e00036e);
  *(char *)(unaff_RDI + lVar2) = *(char *)(unaff_RDI + lVar2) + (char)((ulonglong)param_2 >> 8);
  *(char *)(unaff_RSI + lVar2) = *(char *)(unaff_RSI + lVar2) + (char)((ulonglong)in_RAX >> 8);
  pcVar1 = (char *)(CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + lVar2);
  *pcVar1 = '\0';
  if (*pcVar1 == '\0') {
    *param_1 = *param_1 + unaff_SPL;
  }
  *(char *)(lVar2 + 0x21004a09) = *(char *)(lVar2 + 0x21004a09) + unaff_BH;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

