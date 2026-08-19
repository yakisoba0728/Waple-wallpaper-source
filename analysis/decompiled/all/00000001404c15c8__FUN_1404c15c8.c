// Function: FUN_1404c15c8
// Addr: 1404c15c8
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c15c8(undefined8 param_1)

{
  undefined8 in_RAX;
  char *pcVar1;
  char in_CF;
  
  pcVar1 = (char *)CONCAT71((int7)((ulonglong)in_RAX >> 8),(char)in_RAX + 'L' + in_CF);
  *pcVar1 = *pcVar1 + (char)((ulonglong)param_1 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

