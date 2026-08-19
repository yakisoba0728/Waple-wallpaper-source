// Function: FUN_1404cd9ac
// Addr: 1404cd9ac
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404cd9ac(char *param_1,undefined8 param_2,char param_3)

{
  char *pcVar1;
  
  *param_1 = *param_1 + param_3;
  pcVar1 = (char *)(CONCAT71((int7)((ulonglong)param_1 >> 8),0xf) + -0x53fff998);
  *pcVar1 = *pcVar1 + (char)((ulonglong)param_2 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

