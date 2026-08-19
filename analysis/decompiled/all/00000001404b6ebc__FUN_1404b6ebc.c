// Function: FUN_1404b6ebc
// Addr: 1404b6ebc
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404b6eca) overlaps instruction at (ram,0x0001404b6ec9)
    */

void FUN_1404b6ebc(char param_1,char *param_2)

{
  *param_2 = *param_2 + param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

