// Function: FUN_1404a9490
// Addr: 1404a9490
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a9490(undefined8 param_1,longlong param_2,undefined8 param_3,char *param_4)

{
  undefined8 in_RAX;
  char unaff_SPL;
  char in_CF;
  
  *(char *)(param_2 + -0x13d3fff4) =
       (*(char *)(param_2 + -0x13d3fff4) - (char)((ulonglong)in_RAX >> 8)) - in_CF;
  *param_4 = *param_4 + unaff_SPL;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

