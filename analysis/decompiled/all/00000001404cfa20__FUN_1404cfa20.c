// Function: FUN_1404cfa20
// Addr: 1404cfa20
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x0001404cfa3d) */

void FUN_1404cfa20(char *param_1,uint *param_2,char param_3)

{
  *param_1 = *param_1 + param_3;
  *param_2 = *param_2 & (uint)param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

