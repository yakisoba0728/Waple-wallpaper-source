// Function: FUN_1404d6c78
// Addr: 1404d6c78
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x0001404d6c95) */

void FUN_1404d6c78(undefined8 param_1,undefined8 param_2,char param_3,char *param_4)

{
  ulonglong in_RAX;
  
  if (*(char *)(in_RAX ^ 0x30) != (char)(char *)(in_RAX ^ 0x30)) {
    *param_4 = *param_4 + param_3;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

