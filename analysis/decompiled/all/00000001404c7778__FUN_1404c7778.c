// Function: FUN_1404c7778
// Addr: 1404c7778
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404c7779) overlaps instruction at (ram,0x0001404c7778)
    */

void FUN_1404c7778(char *param_1)

{
  char *pcVar1;
  byte bVar2;
  byte bVar3;
  byte *in_RAX;
  char unaff_BL;
  undefined7 unaff_00000019;
  int unaff_ESI;
  undefined4 unaff_00000034;
  int *piVar4;
  
  while( true ) {
    uRam00000001b4517780 = uRam00000001b4517780 & (uint)in_RAX;
    bVar3 = (byte)in_RAX;
    bVar2 = *in_RAX;
    piVar4 = (int *)CONCAT71((int7)((ulonglong)in_RAX >> 8),bVar3 + bVar2);
    if (!SCARRY1(bVar3,*in_RAX)) break;
    *piVar4 = (*piVar4 - unaff_ESI) - (uint)CARRY1(bVar3,*in_RAX);
    param_1[CONCAT71(unaff_00000019,unaff_BL) + 0x30] =
         param_1[CONCAT71(unaff_00000019,unaff_BL) + 0x30] + unaff_BL;
    pcVar1 = (char *)(CONCAT44(unaff_00000034,unaff_ESI) + 0x4c +
                     CONCAT44(unaff_00000034,unaff_ESI) * 2);
    *pcVar1 = *pcVar1 + bVar3 + bVar2;
    *param_1 = *param_1 + (char)((ulonglong)in_RAX >> 8);
    in_RAX = (byte *)(ulonglong)((int)piVar4 + 0x74050002);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

