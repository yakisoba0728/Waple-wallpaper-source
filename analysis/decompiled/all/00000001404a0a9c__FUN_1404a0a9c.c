// Function: FUN_1404a0a9c
// Addr: 1404a0a9c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404a0ad2) overlaps instruction at (ram,0x0001404a0acf)
    */

void FUN_1404a0a9c(char *param_1,undefined8 param_2)

{
  char cVar1;
  int in_EAX;
  char *pcVar2;
  longlong lVar3;
  char cVar4;
  undefined1 unaff_BL;
  char unaff_BH;
  undefined6 unaff_0000001a;
  char unaff_SPL;
  longlong unaff_RSI;
  longlong unaff_RDI;
  
  cVar4 = (char)param_2;
  pcVar2 = (char *)(ulonglong)(in_EAX + 0xc0000664U);
  if (in_EAX + 0xc0000664U == 0) {
    pcVar2 = (char *)0x21004a09;
  }
  else {
    cVar4 = cVar4 + unaff_BH;
    if (cVar4 == '\0') {
      *param_1 = *param_1 + unaff_SPL;
    }
    else {
      pcVar2[0x21004a09] = pcVar2[0x21004a09] + unaff_BH;
    }
  }
  *pcVar2 = *pcVar2 + (char)pcVar2;
  cVar1 = (char)pcVar2 * '\x02';
  lVar3 = CONCAT71((int7)((ulonglong)pcVar2 >> 8),cVar1);
  if (cVar1 == '\0') {
    lVar3 = 0x21004a09;
  }
  else if ((char)(cVar4 + unaff_BH) == '\0') {
    *param_1 = *param_1 + unaff_SPL;
  }
  else {
    *(char *)(lVar3 + 0x21004a09) = *(char *)(lVar3 + 0x21004a09) + unaff_BH;
  }
  *(char *)(lVar3 * 2) = *(char *)(lVar3 * 2) + (char)lVar3;
  *(char *)(unaff_RDI + lVar3) = *(char *)(unaff_RDI + lVar3) + (char)((ulonglong)param_2 >> 8);
  *(char *)(unaff_RSI + lVar3) = *(char *)(unaff_RSI + lVar3) + (char)((ulonglong)lVar3 >> 8);
  pcVar2 = (char *)(CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + lVar3);
  *pcVar2 = '\0';
  if (*pcVar2 == '\0') {
    *param_1 = *param_1 + unaff_SPL;
  }
  *(char *)(lVar3 + 0x21004a09) = *(char *)(lVar3 + 0x21004a09) + unaff_BH;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

