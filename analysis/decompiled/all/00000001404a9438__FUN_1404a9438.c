// Function: FUN_1404a9438
// Addr: 1404a9438
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a9438(char *param_1,char *param_2,undefined8 param_3,char *param_4)

{
  char unaff_SPL;
  char *unaff_RDI;
  
  *param_4 = *param_4 + unaff_SPL;
  *unaff_RDI = *unaff_RDI + (char)param_1;
  cRam9360000ca329000c = in(5);
  *param_2 = *param_2 + (char)param_1;
  cRam9360000ca329000c = cRam9360000ca329000c + 'T';
  *param_1 = *param_1 + unaff_SPL;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

