// Function: FUN_1404d00c0
// Addr: 1404d00c0
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d00c0(char *param_1,char param_2)

{
  char *pcVar1;
  int *piVar2;
  char in_AL;
  char cVar3;
  undefined7 in_register_00000001;
  int *unaff_RSI;
  int *unaff_RDI;
  char unaff_R12B;
  
  if (*unaff_RSI == *unaff_RDI) {
    *param_1 = *param_1 + unaff_R12B;
    *(char *)CONCAT71(in_register_00000001,in_AL) =
         *(char *)CONCAT71(in_register_00000001,in_AL) + in_AL;
    pcVar1 = (char *)(CONCAT71(in_register_00000001,in_AL) + 0x7b00401e);
    *pcVar1 = *pcVar1 + param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  cVar3 = in_AL + (char)param_1;
  param_1 = param_1 + -1;
  if (param_1 == (char *)0x0 || cVar3 == '\0') {
    *param_1 = *param_1 + cVar3;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  piVar2 = (int *)(CONCAT71(in_register_00000001,cVar3) + 0x11 +
                  CONCAT71(in_register_00000001,cVar3));
  *piVar2 = *piVar2 + -1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

