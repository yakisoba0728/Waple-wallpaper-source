// Function: FUN_1404b0594
// Addr: 1404b0594
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b0594(longlong param_1,undefined8 param_2,char *param_3,char *param_4)

{
  byte bVar1;
  undefined1 uVar2;
  char cVar3;
  uint uVar4;
  char *in_RAX;
  byte *pbVar6;
  undefined1 unaff_BL;
  char unaff_BH;
  undefined6 unaff_0000001a;
  longlong unaff_RSI;
  byte bVar7;
  byte unaff_R12B;
  longlong unaff_R13;
  longlong in_FS_OFFSET;
  byte in_CF;
  char in_ZF;
  char *pcVar5;
  
  bVar7 = (byte)param_3;
  pbVar6 = (byte *)(param_1 + -1);
  if (pbVar6 != (byte *)0x0 && in_ZF == '\0') {
    in_RAX[0x23] = in_RAX[0x23] + unaff_BH;
    *in_RAX = *in_RAX + (char)in_RAX;
    *param_3 = *param_3 + (char)in_RAX;
    cVar3 = in(0x4c);
    pcVar5 = (char *)CONCAT71((int7)((ulonglong)in_RAX >> 8),cVar3);
    *pcVar5 = *pcVar5 + cVar3;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  uVar4 = (int)in_RAX + 0x15574500 + (uint)in_CF;
  cVar3 = (char)((ulonglong)pbVar6 >> 8);
  (&stack0x4f21004b)[uVar4] = (&stack0x4f21004b)[uVar4] + cVar3;
  uVar2 = in(0x4c);
  uVar4 = CONCAT31((int3)((uVar4 & *(uint *)(ulonglong)uVar4) + 0xe4ffb40c >> 8),uVar2);
  pcVar5 = (char *)(ulonglong)uVar4;
  *pcVar5 = *pcVar5 + (char)param_2;
  if (*pcVar5 != '\0') {
    *pcVar5 = *pcVar5 + (char)pbVar6;
    pbVar6 = (byte *)(in_FS_OFFSET + unaff_R13 + 0x57);
    bVar1 = *pbVar6;
    *pbVar6 = *pbVar6 + bVar7;
    uVar4 = uVar4 + 0x15578500 + (uint)CARRY1(bVar1,bVar7);
    pbVar6 = (byte *)(ulonglong)uVar4;
    (&stack0x00210043)[(longlong)pbVar6] = (&stack0x00210043)[(longlong)pbVar6] + unaff_BH;
    bVar7 = *pbVar6;
    *pbVar6 = *pbVar6 + (byte)uVar4;
    uVar4 = uVar4 + 0x15578500 + (uint)CARRY1(bVar7,(byte)uVar4);
    pbVar6 = (byte *)(ulonglong)uVar4;
    (&stack0x0021003b)[(longlong)pbVar6] = (&stack0x0021003b)[(longlong)pbVar6] + unaff_BH;
    bVar7 = *pbVar6;
    *pbVar6 = *pbVar6 + (byte)uVar4;
    if (param_1 + -2 == 0 || *pbVar6 == 0) {
      (&stack0x0021003b)[uVar4 + 0x15574500 + (uint)CARRY1(bVar7,(byte)uVar4)] =
           (&stack0x0021003b)[uVar4 + 0x15574500 + (uint)CARRY1(bVar7,(byte)uVar4)] +
           (char)((ulonglong)(param_1 + -2) >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    pbVar6 = (byte *)(CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + 0x15);
    *pbVar6 = *pbVar6 ^ (byte)((ulonglong)param_2 >> 8);
    *(char *)(unaff_RSI + -0x6bffea8d) = *(char *)(unaff_RSI + -0x6bffea8d) + unaff_BH;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  uVar4 = uVar4 + 0x15574500 + (uint)CARRY1(bVar7,unaff_R12B);
  (&stack0x2001003b)[(longlong)(ulonglong)uVar4] =
       (&stack0x2001003b)[(longlong)(ulonglong)uVar4] + cVar3;
  *pbVar6 = *pbVar6 & ((byte)uVar4 | *(byte *)(ulonglong)uVar4);
  *param_4 = *param_4 + (char)param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

