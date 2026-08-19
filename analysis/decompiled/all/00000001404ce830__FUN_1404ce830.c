// Function: FUN_1404ce830
// Addr: 1404ce830
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404ce87e) overlaps instruction at (ram,0x0001404ce87d)
    */

void FUN_1404ce830(char *param_1,char *param_2)

{
  char cVar1;
  char *in_RAX;
  char unaff_BL;
  byte unaff_BH;
  char *unaff_RSI;
  char *unaff_RDI;
  char unaff_R12B;
  
  param_1[0x3b] = param_1[0x3b] ^ unaff_BH;
  param_2[0x79] = param_2[0x79] + (char)param_2;
  *param_1 = *param_1 + unaff_R12B;
  *in_RAX = *in_RAX + (char)in_RAX;
  *in_RAX = *in_RAX + (char)((ulonglong)param_2 >> 8);
  if (*in_RAX < '\0') {
    param_2[0x79] = param_2[0x79] + (char)param_2;
    *param_1 = *param_1 + unaff_R12B;
    *unaff_RDI = *unaff_RDI + (char)param_1;
    if (*unaff_RDI != '\0') {
      *param_2 = *param_2 + (char)param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    in_RAX[-0x61ffc5bb] = in_RAX[-0x61ffc5bb] + (char)in_RAX;
    *param_1 = *param_1;
    cVar1 = (char)unaff_RDI;
    *unaff_RSI = *unaff_RSI + cVar1;
    *unaff_RDI = *unaff_RDI + cVar1;
    in_RAX = unaff_RDI;
    if (*unaff_RDI != '\0') {
      *unaff_RDI = *unaff_RDI + cVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  in_RAX[-0x61ffc5bb] = in_RAX[-0x61ffc5bb] + (char)in_RAX;
  *param_1 = *param_1 + unaff_BL;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

