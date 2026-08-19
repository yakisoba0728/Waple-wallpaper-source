// Function: FUN_1404d57dc
// Addr: 1404d57dc
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d57dc(undefined8 param_1,undefined8 param_2,char param_3,char *param_4)

{
  char *pcVar1;
  char unaff_SIL;
  char unaff_R12B;
  
  pcVar1 = (char *)CONCAT71(0xb90400,unaff_SIL + '@');
  *param_4 = *param_4 + unaff_R12B;
  *pcVar1 = *pcVar1 + unaff_SIL + '@';
  *param_4 = *param_4 + param_3;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

