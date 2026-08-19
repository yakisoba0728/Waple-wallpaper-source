// Function: FUN_1404ce840
// Addr: 1404ce840
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404ce840(char *param_1,char *param_2)

{
  char cVar1;
  longlong in_RAX;
  char unaff_BL;
  byte unaff_BH;
  char *unaff_RSI;
  char *unaff_RDI;
  char unaff_R12B;
  
  param_1[0x3b] = param_1[0x3b] ^ unaff_BH;
  param_2[0x79] = param_2[0x79] + (char)param_2;
  *param_1 = *param_1 + unaff_R12B;
  *unaff_RDI = *unaff_RDI + (char)param_1;
  if (*unaff_RDI != '\0') {
    *param_2 = *param_2 + (char)param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(char *)(in_RAX + -0x61ffc5bb) = *(char *)(in_RAX + -0x61ffc5bb) + (char)in_RAX;
  *param_1 = *param_1;
  cVar1 = (char)unaff_RDI;
  *unaff_RSI = *unaff_RSI + cVar1;
  *unaff_RDI = *unaff_RDI + cVar1;
  if (*unaff_RDI != '\0') {
    *unaff_RDI = *unaff_RDI + cVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  unaff_RDI[-0x61ffc5bb] = unaff_RDI[-0x61ffc5bb] + cVar1;
  *param_1 = *param_1 + unaff_BL;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

