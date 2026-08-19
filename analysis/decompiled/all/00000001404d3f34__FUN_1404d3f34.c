// Function: FUN_1404d3f34
// Addr: 1404d3f34
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d3f34(undefined8 param_1,char *param_2,char param_3,char *param_4)

{
  *param_4 = *param_4 + param_3;
  *param_2 = *param_2 + (char)param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

