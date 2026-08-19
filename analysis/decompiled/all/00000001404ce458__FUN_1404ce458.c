// Function: FUN_1404ce458
// Addr: 1404ce458
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404ce4d4) overlaps instruction at (ram,0x0001404ce4d3)
    */
/* WARNING: Removing unreachable block (ram,0x0001404ce469) */
/* WARNING: Removing unreachable block (ram,0x0001404ce473) */
/* WARNING: Removing unreachable block (ram,0x0001404ce4bf) */
/* WARNING: Removing unreachable block (ram,0x0001404ce4d2) */
/* WARNING: Removing unreachable block (ram,0x0001404ce4cb) */
/* WARNING: Removing unreachable block (ram,0x0001404ce4cd) */
/* WARNING: Removing unreachable block (ram,0x0001404ce4d3) */
/* WARNING: Removing unreachable block (ram,0x0001404ce4da) */
/* WARNING: Removing unreachable block (ram,0x0001404ce4e8) */

void FUN_1404ce458(char *param_1,char param_2)

{
  char cVar1;
  char *in_RAX;
  
  cVar1 = *in_RAX;
  *param_1 = *param_1 + param_2;
  uRam00000001460eed63 =
       uRam00000001460eed63 | (uint)CONCAT71((int7)((ulonglong)in_RAX >> 8),(char)in_RAX + cVar1);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

