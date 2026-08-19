// Function: FUN_1404b7da8
// Addr: 1404b7da8
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b7da8(char *param_1)

{
  byte *pbVar1;
  byte bVar2;
  char cVar4;
  int in_EAX;
  uint uVar5;
  undefined1 unaff_BL;
  byte unaff_BH;
  undefined6 unaff_0000001a;
  char *unaff_RSI;
  byte in_CF;
  byte bVar3;
  char *pcVar6;
  
  pbVar1 = (byte *)(CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + -0x44a8ffe3);
  bVar2 = *pbVar1;
  bVar3 = *pbVar1;
  *pbVar1 = bVar3 + unaff_BH + in_CF;
  uVar5 = (in_EAX + -0x4b7ca400) - (uint)(CARRY1(bVar2,unaff_BH) || CARRY1(bVar3 + unaff_BH,in_CF));
  *param_1 = *param_1 + (char)(uVar5 >> 8);
  *unaff_RSI = *unaff_RSI + (char)uVar5;
  *(char *)(ulonglong)uVar5 = *(char *)(ulonglong)uVar5 + (char)uVar5;
  cVar4 = in(0xb);
  pcVar6 = (char *)(ulonglong)CONCAT31((int3)(uVar5 >> 8),cVar4);
  *pcVar6 = *pcVar6 + cVar4;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

