// Function: FUN_1404d7e04
// Addr: 1404d7e04
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404d7e13) overlaps instruction at (ram,0x0001404d7e11)
    */

void FUN_1404d7e04(byte *param_1,char *param_2)

{
  byte bVar1;
  undefined4 uVar2;
  byte bVar3;
  undefined4 *in_RAX;
  char unaff_BL;
  undefined7 unaff_00000019;
  char *unaff_RSI;
  
  param_2[0x4c] = param_2[0x4c] - unaff_BL;
  bVar1 = *param_1;
  bVar3 = (byte)((ulonglong)in_RAX >> 8);
  *param_1 = *param_1 + bVar3;
  uVar2 = *in_RAX;
  *(char *)CONCAT71(unaff_00000019,unaff_BL) = *(char *)CONCAT71(unaff_00000019,unaff_BL) + unaff_BL
  ;
  if (*(char *)CONCAT71(unaff_00000019,unaff_BL) == '\0') {
    *param_2 = *param_2 + (((char)param_1 - (char)uVar2) - CARRY1(bVar1,bVar3));
  }
  *unaff_RSI = *unaff_RSI + (char)param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

