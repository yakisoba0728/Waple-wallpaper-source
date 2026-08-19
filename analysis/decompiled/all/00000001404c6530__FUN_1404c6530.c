// Function: FUN_1404c6530
// Addr: 1404c6530
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c6530(char *param_1,longlong param_2)

{
  longlong in_RAX;
  char unaff_R12B;
  
  *(char *)(param_2 + 0x642c002f) = *(char *)(param_2 + 0x642c002f) - (char)param_2;
  *param_1 = *param_1 + unaff_R12B;
  *(char *)(in_RAX * 2) = *(char *)(in_RAX * 2) + (char)in_RAX;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

