// Function: FUN_1404c1dd4
// Addr: 1404c1dd4
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c1dd4(char *param_1,byte param_2)

{
  undefined8 in_RAX;
  char *pcVar1;
  
  param_2 = (byte)in_RAX & param_2;
  pcVar1 = (char *)CONCAT71((int7)((ulonglong)in_RAX >> 8),param_2);
  *pcVar1 = *pcVar1 + (char)((ulonglong)param_1 >> 8);
  *pcVar1 = *pcVar1 + param_2;
  *param_1 = *param_1 + (char)((ulonglong)in_RAX >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

