// Function: FUN_1404d7250
// Addr: 1404d7250
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404d732c) overlaps instruction at (ram,0x0001404d732b)
    */
/* WARNING: Removing unreachable block (ram,0x0001404d72ef) */
/* WARNING: Removing unreachable block (ram,0x0001404d72bb) */
/* WARNING: Removing unreachable block (ram,0x0001404d72df) */
/* WARNING: Removing unreachable block (ram,0x0001404d733c) */
/* WARNING: Removing unreachable block (ram,0x0001404d7307) */
/* WARNING: Removing unreachable block (ram,0x0001404d72ab) */
/* WARNING: Removing unreachable block (ram,0x0001404d72bf) */
/* WARNING: Removing unreachable block (ram,0x0001404d72b9) */

void FUN_1404d7250(char *param_1,byte *param_2)

{
  uint uVar1;
  char *in_RAX;
  longlong lVar2;
  char *unaff_RDI;
  bool in_OF;
  
  if (!in_OF) {
    lVar2 = CONCAT71((int7)((ulonglong)in_RAX >> 8),uRam3c0040e8160040e7);
    *unaff_RDI = *unaff_RDI + (char)((ulonglong)param_2 >> 8);
    unaff_RDI[lVar2] = unaff_RDI[lVar2] & (byte)param_1;
    uVar1 = (uint)lVar2 ^ 0xdc00384d;
    *(uint *)(ulonglong)uVar1 = *(uint *)(ulonglong)uVar1 & uVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *param_1 = *param_1 + (char)((ulonglong)in_RAX >> 8);
  *param_2 = *param_2 | (byte)in_RAX;
  *in_RAX = *in_RAX + (byte)param_1;
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}

