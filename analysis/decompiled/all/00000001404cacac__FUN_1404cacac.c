// Function: FUN_1404cacac
// Addr: 1404cacac
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404cacac(char *param_1,undefined8 param_2)

{
  char *pcVar1;
  char cVar2;
  char cVar3;
  ulonglong in_RAX;
  char unaff_BL;
  undefined7 unaff_00000019;
  char *unaff_RSI;
  longlong unaff_RDI;
  bool in_ZF;
  char in_SF;
  char in_OF;
  char *unaff_retaddr;
  
  if (in_ZF || in_OF != in_SF) {
    uRam0000000021004cab = CONCAT31(uRam0000000021004cab._1_3_,(char)uRam0000000021004cab + -0x55);
    unaff_RSI[0x2a] = unaff_RSI[0x2a] + unaff_BL;
    in_RAX = (ulonglong)(uRam0000000021004cab ^ 0x21004cab);
    if (0 < (int)(uRam0000000021004cab ^ 0x21004cab)) goto code_r0x0001404cace8;
    *unaff_RSI = *unaff_RSI + -0x55;
    cVar3 = (char)uRam0000000021004cab;
    cVar2 = (char)uRam0000000021004cab + -0x55;
    uRam0000000021004cab = CONCAT31(uRam0000000021004cab._1_3_,cVar2);
    if (cVar2 != '\0') {
      uRam0000000021004cab = CONCAT31(uRam0000000021004cab._1_3_,cVar3 + 'V');
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    cRam0000000021004cd5 = cRam0000000021004cd5 + -0x55;
    in_RAX = (ulonglong)(uRam0000000021004cab ^ 0x21004cab);
  }
  cVar2 = *(char *)CONCAT71(unaff_00000019,unaff_BL);
  param_1[0x4c] = param_1[0x4c] + (char)param_1;
  *param_1 = *param_1 + (char)(in_RAX >> 8);
  *(char *)(in_RAX * 2) = *(char *)(in_RAX * 2) + (char)in_RAX;
  param_1[in_RAX] = param_1[in_RAX] + ((char)((ulonglong)param_2 >> 8) - cVar2);
  unaff_RSI = unaff_retaddr;
code_r0x0001404cace8:
  *(char *)(unaff_RDI + in_RAX) = *(char *)(unaff_RDI + in_RAX) + (char)(in_RAX >> 8);
  pcVar1 = (char *)(CONCAT71((int7)((ulonglong)unaff_RSI >> 8),
                             (char)unaff_RSI - *(char *)CONCAT71(unaff_00000019,unaff_BL)) + 0x2a);
  *pcVar1 = *pcVar1 + unaff_BL;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

