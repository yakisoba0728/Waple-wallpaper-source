// Function: FUN_1404a3e2c
// Addr: 1404a3e2c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a3e2c(char *param_1,undefined2 param_2)

{
  char cVar1;
  char *in_RAX;
  
  cVar1 = *in_RAX;
  *param_1 = *param_1 + (char)((ulonglong)in_RAX >> 8);
  in(CONCAT11((char)((ushort)param_2 >> 8),(char)param_2 + cVar1));
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

