// Function: FUN_1404c0790
// Addr: 1404c0790
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x0001404c076a) */

void FUN_1404c0790(int param_1,char param_2)

{
  char *pcVar1;
  int *piVar2;
  byte *in_RAX;
  uint *puVar3;
  char unaff_BL;
  undefined7 unaff_00000019;
  longlong unaff_RBP;
  
  piVar2 = (int *)(unaff_RBP + 0x20f88c00 + CONCAT71(unaff_00000019,unaff_BL));
  *piVar2 = *piVar2 + param_1;
  in_RAX[unaff_RBP * 8 + -0x2783ffdf] = in_RAX[unaff_RBP * 8 + -0x2783ffdf] + (byte)in_RAX;
  puVar3 = (uint *)CONCAT71((int7)((ulonglong)in_RAX >> 8),(byte)in_RAX & *in_RAX);
  pcVar1 = (char *)((ulonglong)((uint)puVar3 & *puVar3) - 0x68);
  *pcVar1 = *pcVar1 + unaff_BL;
  pcVar1 = (char *)(CONCAT71(unaff_00000019,unaff_BL) + -0x78);
  *pcVar1 = *pcVar1 + param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

