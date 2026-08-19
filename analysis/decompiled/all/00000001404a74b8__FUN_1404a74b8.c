// Function: FUN_1404a74b8
// Addr: 1404a74b8
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a74b8(char *param_1,uint *param_2)

{
  code *pcVar1;
  byte bVar2;
  byte *in_RAX;
  char *pcVar3;
  uint uVar6;
  char unaff_BL;
  char unaff_BH;
  longlong unaff_RSI;
  char cVar4;
  byte bVar5;
  
  uVar6 = (uint)param_1;
  bVar2 = (byte)in_RAX | *in_RAX;
  *param_2 = *param_2 | uVar6;
  bVar5 = (byte)((ulonglong)in_RAX >> 8);
  cVar4 = bVar5 + (byte)param_1;
  pcVar3 = (char *)CONCAT62((int6)((ulonglong)in_RAX >> 0x10),CONCAT11(cVar4,bVar2));
  if (CARRY1(bVar5,(byte)param_1)) {
    *param_1 = *param_1 + cVar4;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *param_2 = *param_2 | uVar6;
  (&stack0xfffffffffffffff8)[unaff_RSI * 2] = (&stack0xfffffffffffffff8)[unaff_RSI * 2] + unaff_BL;
  *param_1 = *param_1 + (char)&stack0xfffffffffffffff8;
  *pcVar3 = *pcVar3 + bVar2;
  *(char *)param_2 = (char)*param_2 + unaff_BH;
  *param_2 = *param_2 | uVar6;
  *(char *)(unaff_RSI + 9) = *(char *)(unaff_RSI + 9) + (char)param_2;
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

