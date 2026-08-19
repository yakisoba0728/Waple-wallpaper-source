// Function: FUN_1404b6c74
// Addr: 1404b6c74
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b6c74(undefined8 param_1,int param_2)

{
  int *in_RAX;
  
  *in_RAX = *in_RAX + param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

