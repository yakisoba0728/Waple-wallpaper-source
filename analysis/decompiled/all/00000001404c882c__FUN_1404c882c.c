// Function: FUN_1404c882c
// Addr: 1404c882c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c882c(char *param_1,uint *param_2,char param_3)

{
  char *pcVar1;
  longlong in_RAX;
  char unaff_BH;
  uint unaff_EDI;
  undefined4 unaff_0000003c;
  
  pcVar1 = (char *)(CONCAT44(unaff_0000003c,unaff_EDI) + in_RAX * 4);
  *pcVar1 = *pcVar1 + (char)in_RAX;
  *param_1 = *param_1 + param_3;
  *param_2 = *param_2 | (uint)in_RAX;
  *param_1 = *param_1 + (char)param_1;
  *(uint *)(param_1 + 0xe) = *(uint *)(param_1 + 0xe) & unaff_EDI;
  param_1[-0x2c] = param_1[-0x2c] + unaff_BH;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

