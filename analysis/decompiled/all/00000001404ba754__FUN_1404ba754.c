// Function: FUN_1404ba754
// Addr: 1404ba754
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404ba755) overlaps instruction at (ram,0x0001404ba754)
    */

void FUN_1404ba754(undefined8 param_1,longlong param_2,undefined8 param_3,undefined1 *param_4)

{
  byte *pbVar1;
  char *pcVar2;
  byte bVar3;
  byte *in_RAX;
  char cVar4;
  byte bVar6;
  char unaff_BH;
  longlong unaff_RBP;
  longlong unaff_RSI;
  char in_CF;
  longlong lVar5;
  
  cVar4 = (char)param_1 + (char)((ulonglong)param_1 >> 8) + in_CF;
  lVar5 = CONCAT71((int7)((ulonglong)param_1 >> 8),cVar4);
  bVar3 = (byte)in_RAX;
  *in_RAX = *in_RAX & bVar3;
  bVar6 = (byte)param_2;
  if ((char)*in_RAX < '\0') {
    pcVar2 = (char *)(lVar5 + 0x20 + unaff_RBP * 8);
    *pcVar2 = *pcVar2 + unaff_BH;
    *(char *)(param_2 + 0x200020e9) = *(char *)(param_2 + 0x200020e9) + cVar4;
    *param_4 = *param_4;
    *in_RAX = *in_RAX + bVar3;
    *in_RAX = *in_RAX + bVar6;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *in_RAX = *in_RAX & bVar3;
  *(int *)(in_RAX + unaff_RSI) = *(int *)(in_RAX + unaff_RSI) + (int)param_2;
  pbVar1 = in_RAX + lVar5;
  bVar3 = *pbVar1;
  *pbVar1 = *pbVar1 + bVar6;
  if (lVar5 == 1 || (int)in_RAX + 0x7f00900 + (uint)CARRY1(bVar3,bVar6) == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

