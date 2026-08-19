// Function: FUN_1404d59ac
// Addr: 1404d59ac
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404d59f7) overlaps instruction at (ram,0x0001404d59f6)
    */

void FUN_1404d59ac(char *param_1,undefined8 param_2,undefined8 param_3,char *param_4)

{
  char cVar1;
  char cVar4;
  int in_EAX;
  uint uVar2;
  undefined1 unaff_BL;
  char unaff_BH;
  undefined6 unaff_0000001a;
  char *unaff_RSI;
  char unaff_R12B;
  char *pcVar3;
  
  uVar2 = in_EAX + 0xe0000d34;
  pcVar3 = (char *)(ulonglong)uVar2;
  cVar1 = (char)uVar2;
  cVar4 = (char)(uVar2 >> 8);
  if ((int)uVar2 < 0) {
    *param_1 = *param_1 + (char)((ulonglong)param_2 >> 8);
    if ((POPCOUNT(*param_1) & 1U) != 0) {
      pcVar3[CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) * 2 + 0x21004d] =
           pcVar3[CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) * 2 + 0x21004d] + unaff_BH;
      *pcVar3 = *pcVar3 + cVar1;
      param_1 = param_1 + -1;
      if (param_1 == (char *)0x0 || *pcVar3 == '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      *param_1 = *param_1 + cVar4;
      *unaff_RSI = *unaff_RSI + cVar1;
      *pcVar3 = *pcVar3 + cVar1;
      do {
                    /* WARNING: Do nothing block with infinite loop */
      } while( true );
    }
  }
  else {
    *param_1 = *param_1 + cVar4;
  }
  *param_4 = *param_4 + unaff_R12B;
  *(char *)((longlong)pcVar3 * 2) = *(char *)((longlong)pcVar3 * 2) + cVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

