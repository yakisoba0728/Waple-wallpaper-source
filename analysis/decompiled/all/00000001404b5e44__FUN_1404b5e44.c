// Function: FUN_1404b5e44
// Addr: 1404b5e44
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b5e44(undefined8 param_1,longlong param_2,undefined8 param_3,char *param_4)

{
  char unaff_retaddr;
  
  *(char *)(param_2 + 0x34) = *(char *)(param_2 + 0x34) + (char)param_2;
  *param_4 = *param_4 + unaff_retaddr + '\b';
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

