// Function: FUN_1404c1dbc
// Addr: 1404c1dbc
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c1dbc(char *param_1,byte param_2)

{
  undefined8 in_RAX;
  char *pcVar1;
  char unaff_BL;
  
  param_2 = (byte)in_RAX & param_2;
  pcVar1 = (char *)CONCAT71((int7)((ulonglong)in_RAX >> 8),param_2);
  *pcVar1 = *pcVar1 + (char)((ulonglong)param_1 >> 8);
  *pcVar1 = *pcVar1 + param_2;
  *param_1 = *param_1 + unaff_BL;
  cRam000000014d4c2b21 = cRam000000014d4c2b21 + (char)param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

