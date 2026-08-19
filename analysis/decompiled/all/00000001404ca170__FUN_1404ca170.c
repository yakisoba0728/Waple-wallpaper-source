// Function: FUN_1404ca170
// Addr: 1404ca170
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404ca170(longlong param_1,char *param_2)

{
  char *pcVar1;
  char cVar2;
  longlong unaff_RBX;
  
  pcVar1 = (char *)(unaff_RBX + param_1);
  cVar2 = *pcVar1;
  *pcVar1 = *pcVar1 + (char)param_2;
  if (!SCARRY1(cVar2,(char)param_2)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *param_2 = *param_2 + (char)param_1;
  *param_2 = *param_2 + (char)param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

