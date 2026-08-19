// Function: FUN_1404b9cdc
// Addr: 1404b9cdc
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404b9ce2) overlaps instruction at (ram,0x0001404b9ce1)
    */

void FUN_1404b9cdc(int *param_1,char param_2,char *param_3,char *param_4)

{
  char *pcVar1;
  char cVar2;
  byte bVar3;
  byte bVar4;
  char cVar6;
  ulonglong in_RAX;
  byte *pbVar5;
  char unaff_BL;
  byte unaff_BH;
  undefined6 unaff_0000001a;
  longlong unaff_RBP;
  undefined1 *unaff_RSI;
  undefined1 *unaff_RDI;
  char in_R10B;
  undefined7 in_register_00000091;
  
  *unaff_RDI = *unaff_RSI;
  *param_4 = *param_4 + (char)in_RAX;
  pbVar5 = (byte *)(in_RAX & 0xffffffffffffff06);
  cVar6 = (char)((ulonglong)pbVar5 >> 8);
  pbVar5[(longlong)(unaff_RDI + 1) * 4] = pbVar5[(longlong)(unaff_RDI + 1) * 4] + cVar6;
  bVar4 = (byte)pbVar5;
  *pbVar5 = *pbVar5 & bVar4;
  *param_1 = *param_1 + (int)pbVar5;
  *(char *)CONCAT71(in_register_00000091,in_R10B) =
       *(char *)CONCAT71(in_register_00000091,in_R10B) + (char)param_4;
  cVar2 = *(char *)CONCAT71(in_register_00000091,in_R10B);
  *pbVar5 = *pbVar5 >> 1 | *pbVar5 << 7;
  if (((*pbVar5 & 0x40) != 0) != (char)*pbVar5 < '\0') {
    pcVar1 = (char *)((in_RAX & 0xffffffffffffff00) + unaff_RBP * 2);
    *pcVar1 = *pcVar1 + (char)((in_RAX & 0xffffffffffffff00) >> 8);
    *param_3 = *param_3 + in_R10B;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (cVar2 < '\0') {
    *pbVar5 = *pbVar5 + param_2;
    *param_4 = *param_4 + -8;
    *pbVar5 = *pbVar5 + bVar4;
    *pbVar5 = *pbVar5 + cVar6;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  pbVar5 = pbVar5 + -8;
  bVar3 = *pbVar5;
  *pbVar5 = *pbVar5 + unaff_BH;
  if (SBORROW1(bVar4,CARRY1(bVar3,unaff_BH))) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  pcVar1 = (char *)(CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + -0x38);
  *pcVar1 = *pcVar1 + unaff_BL;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

