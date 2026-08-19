// Function: FUN_1404d7e00
// Addr: 1404d7e00
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404d7e13) overlaps instruction at (ram,0x0001404d7e11)
    */

void FUN_1404d7e00(byte *param_1)

{
  byte bVar1;
  undefined4 uVar2;
  char *in_RAX;
  char unaff_BL;
  undefined7 unaff_00000019;
  char *unaff_RSI;
  byte unaff_R12B;
  char *unaff_retaddr;
  
  *in_RAX = *in_RAX + (char)((ulonglong)param_1 >> 8);
  bVar1 = *param_1;
  *param_1 = *param_1 + unaff_R12B;
  uVar2 = *(undefined4 *)in_RAX;
  *(char *)CONCAT71(unaff_00000019,unaff_BL) = *(char *)CONCAT71(unaff_00000019,unaff_BL) + unaff_BL
  ;
  if (*(char *)CONCAT71(unaff_00000019,unaff_BL) == '\0') {
    *unaff_retaddr = *unaff_retaddr + (((char)param_1 - (char)uVar2) - CARRY1(bVar1,unaff_R12B));
  }
  *unaff_RSI = *unaff_RSI + (char)unaff_retaddr;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

