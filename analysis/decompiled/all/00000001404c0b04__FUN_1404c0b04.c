// Function: FUN_1404c0b04
// Addr: 1404c0b04
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c0b04(int *param_1,char *param_2)

{
  char *in_RAX;
  uint unaff_EDI;
  undefined4 unaff_0000003c;
  char in_CF;
  
  in_RAX[4] = (in_RAX[4] - (char)((ulonglong)param_1 >> 8)) - in_CF;
  *param_2 = *param_2 + (char)in_RAX;
  *in_RAX = *in_RAX + (char)in_RAX;
  *param_1 = *param_1 + (int)&stack0x00000000;
  *(uint *)(in_RAX + 4) = *(uint *)(in_RAX + 4) & unaff_EDI;
  *(char *)CONCAT44(unaff_0000003c,unaff_EDI) =
       *(char *)CONCAT44(unaff_0000003c,unaff_EDI) + (char)param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

