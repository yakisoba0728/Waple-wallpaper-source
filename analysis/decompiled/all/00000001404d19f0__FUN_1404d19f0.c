// Function: FUN_1404d19f0
// Addr: 1404d19f0
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404d1a5a) overlaps instruction at (ram,0x0001404d1a58)
    */
/* WARNING: Removing unreachable block (ram,0x0001404d1a2f) */
/* WARNING: Removing unreachable block (ram,0x0001404d1a3b) */
/* WARNING: Removing unreachable block (ram,0x0001404d1a37) */
/* WARNING: Removing unreachable block (ram,0x0001404d1a55) */
/* WARNING: Removing unreachable block (ram,0x0001404d1a49) */
/* WARNING: Removing unreachable block (ram,0x0001404d1a4b) */
/* WARNING: Removing unreachable block (ram,0x0001404d1a56) */

void FUN_1404d19f0(undefined8 param_1,char *param_2)

{
  char *pcVar1;
  byte bVar2;
  byte *in_RAX;
  
  *param_2 = *param_2 + (char)in_RAX;
  bVar2 = (byte)((ulonglong)in_RAX >> 8) | *in_RAX;
  pcVar1 = (char *)(CONCAT62((int6)((ulonglong)in_RAX >> 0x10),CONCAT11(bVar2,(char)in_RAX)) +
                   0x202c504);
  *pcVar1 = *pcVar1 + bVar2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

