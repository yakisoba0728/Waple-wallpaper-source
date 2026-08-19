// Function: FUN_1404a3638
// Addr: 1404a3638
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a3638(ulonglong param_1,char *param_2)

{
  char *in_RAX;
  
  *(char *)(param_1 & 0xffffffffffffff49) =
       *(char *)(param_1 & 0xffffffffffffff49) + (char)((ulonglong)in_RAX >> 8);
  *param_2 = *param_2 + (char)in_RAX;
  *in_RAX = *in_RAX + (char)in_RAX;
  *(char *)((ulonglong)in_RAX ^ 4) = *(char *)((ulonglong)in_RAX ^ 4) + (char)param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

