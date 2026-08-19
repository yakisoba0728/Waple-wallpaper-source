// Function: FUN_1404b85a8
// Addr: 1404b85a8
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b85a8(char *param_1,undefined8 param_2)

{
  char cVar1;
  char *in_RAX;
  uint unaff_ESP;
  
  cVar1 = *in_RAX;
  *param_1 = *param_1 + (char)((ulonglong)in_RAX >> 8);
  *(uint *)((longlong)in_RAX * 2) = *(uint *)((longlong)in_RAX * 2) & (uint)in_RAX;
  *(uint *)(param_1 + CONCAT71((int7)((ulonglong)param_2 >> 8),(char)param_2 + cVar1)) =
       *(uint *)(param_1 + CONCAT71((int7)((ulonglong)param_2 >> 8),(char)param_2 + cVar1)) &
       unaff_ESP;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

