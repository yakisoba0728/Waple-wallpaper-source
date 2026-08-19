// Function: FUN_1404b3360
// Addr: 1404b3360
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

char FUN_1404b3360(char *param_1,char *param_2)

{
  char *pcVar1;
  char cVar2;
  char cVar3;
  longlong in_RAX;
  char *unaff_RDI;
  
  *param_1 = *param_1;
  cVar2 = (char)unaff_RDI;
  *param_2 = *param_2 + cVar2;
  *unaff_RDI = *unaff_RDI + cVar2;
  cVar3 = (char)((ulonglong)unaff_RDI >> 8);
  if (*unaff_RDI != '\0') {
    return cVar2 + cVar3;
  }
  pcVar1 = (char *)(in_RAX + 0x4a + (longlong)param_2 * 4);
  *pcVar1 = *pcVar1 + (char)param_1;
  *param_1 = *param_1 + cVar3;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

