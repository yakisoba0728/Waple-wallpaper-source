// Function: FUN_1404d2d18
// Addr: 1404d2d18
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404d2d53) overlaps instruction at (ram,0x0001404d2d49)
    */
/* WARNING: Removing unreachable block (ram,0x0001404d2d3d) */
/* WARNING: Removing unreachable block (ram,0x0001404d2d46) */
/* WARNING: Removing unreachable block (ram,0x0001404d2d72) */
/* WARNING: Removing unreachable block (ram,0x0001404d2d82) */
/* WARNING: Removing unreachable block (ram,0x0001404d2d57) */

void FUN_1404d2d18(char *param_1,char param_2,char *param_3)

{
  char cVar1;
  longlong in_RAX;
  undefined7 uVar3;
  char unaff_BL;
  char *unaff_RSI;
  bool in_CF;
  char *pcVar2;
  
  if (!in_CF) {
    uVar3 = (undefined7)((ulonglong)in_RAX >> 8);
    cVar1 = (char)in_RAX * '\x02';
    pcVar2 = (char *)(CONCAT71(uVar3,cVar1) + -0x12f7ffd5);
    *pcVar2 = *pcVar2 + -2;
    cVar1 = cVar1 + *param_3;
    pcVar2 = (char *)CONCAT71(uVar3,cVar1);
    *pcVar2 = *pcVar2 + cVar1;
    *param_1 = *param_1 + param_2;
    uRam00000001458f3637 = uRam00000001458f3637 | (uint)pcVar2;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *unaff_RSI = *unaff_RSI + unaff_BL + '\x01';
                    /* WARNING: Bad instruction - Truncating control flow here */
  *(char *)(in_RAX + 0x4840002b) = *(char *)(in_RAX + 0x4840002b) + -0x50;
                    /* WARNING: Bad instruction - Truncating control flow here */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

