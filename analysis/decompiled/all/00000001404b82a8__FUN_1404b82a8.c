// Function: FUN_1404b82a8
// Addr: 1404b82a8
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404b82c8) overlaps instruction at (ram,0x0001404b82c7)
    */

void FUN_1404b82a8(undefined1 param_1,char *param_2)

{
  uint uVar1;
  int unaff_EBX;
  undefined4 unaff_0000001c;
  int *unaff_RSI;
  char *unaff_RDI;
  
  uVar1 = (uint)(short)CONCAT71(0xa87a00,bRam00000000a87a0009 | 9);
  uVar1 = uVar1 | *(uint *)(ulonglong)uVar1;
  *(undefined1 *)((ulonglong)uVar1 * 2) = param_1;
  if (-1 < (int)uVar1) {
    *unaff_RDI = *unaff_RDI + (char)((ulonglong)param_2 >> 8);
    *param_2 = *param_2 + (char)unaff_EBX;
    *param_2 = *param_2 + (char)unaff_EBX;
    *unaff_RSI = *unaff_RSI + unaff_EBX;
    *(char *)CONCAT44(unaff_0000001c,unaff_EBX) =
         *(char *)CONCAT44(unaff_0000001c,unaff_EBX) + (char)param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

