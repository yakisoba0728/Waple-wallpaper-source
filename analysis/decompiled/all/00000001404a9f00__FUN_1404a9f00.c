// Function: FUN_1404a9f00
// Addr: 1404a9f00
// Size: 1 bytes


void FUN_1404a9f00(char *param_1,char param_2)

{
  char *pcVar1;
  char cVar2;
  uint in_EAX;
  uint uVar3;
  uint uVar4;
  longlong unaff_RBX;
  char unaff_SPL;
  undefined7 unaff_00000021;
  longlong unaff_RBP;
  longlong unaff_RSI;
  byte in_CF;
  char in_SF;
  char in_OF;
  char *pcVar5;
  
  if (in_OF == in_SF) {
    pcVar1 = (char *)(unaff_RSI + unaff_RBX * 4);
    *pcVar1 = *pcVar1 + param_2;
    *param_1 = *param_1 + unaff_SPL;
    in_EAX = in_EAX & 0xffffff06;
    pcVar1 = (char *)(CONCAT71(unaff_00000021,unaff_SPL) + unaff_RSI * 8);
    *pcVar1 = *pcVar1 + (char)(in_EAX >> 8);
    in_CF = 0;
  }
  cVar2 = in(0x2d);
  uVar4 = CONCAT31((int3)(in_EAX + 0x80034c4 + (uint)in_CF >> 8),cVar2);
  *(char *)(unaff_RBP + 0x7c) = *(char *)(unaff_RBP + 0x7c) + cVar2;
  uVar3 = uVar4 | 0xd7c8700;
  pcVar1 = (char *)(unaff_RSI + unaff_RBX * 4);
  *pcVar1 = *pcVar1 + (char)(uVar3 >> 8);
  *param_1 = *param_1 + unaff_SPL;
  *(char *)(ulonglong)uVar3 = *(char *)(ulonglong)uVar3 + cVar2;
  *(char *)(unaff_RBP + 0x7c) = *(char *)(unaff_RBP + 0x7c) + cVar2;
  uVar4 = uVar4 | 0xd7c8700;
  pcVar5 = (char *)(ulonglong)uVar4;
  pcVar1 = (char *)(unaff_RSI + unaff_RBX * 4);
  *pcVar1 = *pcVar1 + (char)(uVar4 >> 8);
  *param_1 = *param_1 + unaff_SPL;
  *pcVar5 = *pcVar5 + (char)param_1;
  *pcVar5 = *pcVar5 + cVar2;
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}

