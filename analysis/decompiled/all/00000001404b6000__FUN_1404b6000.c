// Function: FUN_1404b6000
// Addr: 1404b6000
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b6000(char *param_1,longlong param_2,undefined8 param_3,char *param_4)

{
  char *pcVar1;
  char *in_RAX;
  longlong unaff_RDI;
  
  *param_4 = *param_4 + '\b';
  *in_RAX = *in_RAX + (char)in_RAX;
  pcVar1 = (char *)(unaff_RDI + 0x4a + param_2 * 4);
  *pcVar1 = *pcVar1 + (char)param_1;
  *param_1 = *param_1 + (char)((ulonglong)in_RAX >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

