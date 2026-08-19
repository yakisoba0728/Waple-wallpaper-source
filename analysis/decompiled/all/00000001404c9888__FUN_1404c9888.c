// Function: FUN_1404c9888
// Addr: 1404c9888
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c9888(char *param_1,char param_2,char param_3)

{
  char cVar1;
  byte bVar2;
  uint uVar3;
  char *in_RAX;
  char *pcVar4;
  char unaff_BH;
  longlong unaff_RSI;
  uint unaff_EDI;
  uint *puVar5;
  
  *in_RAX = *in_RAX + (char)in_RAX;
  *in_RAX = *in_RAX + unaff_BH;
  *param_1 = *param_1 + param_3;
  (&stack0x00000000)[unaff_RSI] = (&stack0x00000000)[unaff_RSI] + param_2;
  pcVar4 = (char *)(ulonglong)(unaff_EDI & 0x20011400);
  cVar1 = *pcVar4;
  *pcVar4 = *pcVar4 + (char)param_1;
  if (!SCARRY1(cVar1,(char)param_1)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  uVar3 = CONCAT31((int3)((unaff_EDI & 0x20011400) >> 8),*pcVar4);
  uVar3 = (uVar3 + 0x42830642) - (uint)(0x9ffff98b < uVar3);
  bVar2 = (byte)uVar3 ^ *(byte *)(ulonglong)uVar3;
  uVar3 = CONCAT31((int3)(uVar3 >> 8),bVar2);
  puVar5 = (uint *)(ulonglong)uVar3;
  *puVar5 = *puVar5 & uVar3;
  *(byte *)puVar5 = (char)*puVar5 + bVar2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

