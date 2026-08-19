// Function: FUN_1404c7bfc
// Addr: 1404c7bfc
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c7bfc(undefined8 param_1,byte param_2)

{
  char *pcVar1;
  undefined8 in_RAX;
  
  param_2 = (byte)in_RAX & param_2;
  pcVar1 = (char *)(CONCAT71((int7)((ulonglong)in_RAX >> 8),param_2) + 0x21000001);
  *pcVar1 = *pcVar1 + param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

