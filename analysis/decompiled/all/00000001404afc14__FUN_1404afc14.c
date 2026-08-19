// Function: FUN_1404afc14
// Addr: 1404afc14
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x0001404afc1a) */
/* WARNING: Removing unreachable block (ram,0x0001404afc3b) */
/* WARNING: Removing unreachable block (ram,0x0001404afc4f) */

void FUN_1404afc14(undefined1 *param_1,char *param_2)

{
  char *in_RAX;
  
  *param_1 = *param_1;
  *param_2 = *param_2 + (char)in_RAX;
  *in_RAX = *in_RAX + (char)in_RAX;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

