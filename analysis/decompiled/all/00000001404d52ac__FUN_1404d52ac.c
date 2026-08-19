// Function: FUN_1404d52ac
// Addr: 1404d52ac
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d52ac(char *param_1,undefined8 param_2,undefined8 param_3,char *param_4)

{
  char cVar1;
  undefined8 in_RAX;
  char *pcVar2;
  char *unaff_RSI;
  char unaff_R12B;
  
  cVar1 = *unaff_RSI;
  pcVar2 = (char *)CONCAT71((int7)((ulonglong)in_RAX >> 8),cVar1);
  *param_4 = *param_4 + unaff_R12B;
  *pcVar2 = *pcVar2 + cVar1;
  *param_1 = *param_1 + unaff_R12B;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

