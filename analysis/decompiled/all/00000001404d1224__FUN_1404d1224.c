// Function: FUN_1404d1224
// Addr: 1404d1224
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d1224(char *param_1,uint *param_2,char param_3,byte *param_4)

{
  byte bVar1;
  uint uVar2;
  char cVar4;
  longlong in_RAX;
  char *pcVar3;
  char cVar5;
  byte bVar6;
  undefined6 uVar7;
  longlong unaff_RSI;
  longlong unaff_RDI;
  byte unaff_R12B;
  
  uVar7 = (undefined6)((ulonglong)param_2 >> 0x10);
  cVar5 = (char)param_2;
  *param_2 = *param_2 & (uint)param_1;
  bVar6 = (byte)((ulonglong)param_2 >> 8) | *(byte *)(unaff_RDI + in_RAX);
  uVar2 = (int)in_RAX + 0xa0000b54;
  *(char *)((ulonglong)uVar2 + 0x11) = *(char *)((ulonglong)uVar2 + 0x11) + (char)param_1;
  bVar1 = *param_4;
  *param_4 = *param_4 + unaff_R12B;
  (&stack0x00000000)[unaff_RSI * 8] = (&stack0x00000000)[unaff_RSI * 8] + cVar5;
  uVar2 = CONCAT22((short)(uVar2 >> 0x10),
                   CONCAT11((byte)(uVar2 >> 8) | (&stack0x00000000)[(longlong)param_1],
                            (char)uVar2 + '\b' + CARRY1(bVar1,unaff_R12B))) + 0xe7000a34;
  pcVar3 = (char *)(ulonglong)uVar2;
  param_1[CONCAT62(uVar7,CONCAT11(bVar6,cVar5)) + 0x4d] =
       param_1[CONCAT62(uVar7,CONCAT11(bVar6,cVar5)) + 0x4d] + cVar5;
  cVar4 = (char)(uVar2 >> 8);
  *param_1 = *param_1 + cVar4;
  *pcVar3 = *pcVar3 + (char)uVar2;
  param_1[CONCAT62(uVar7,CONCAT11(bVar6,cVar5)) + 0x4d] =
       param_1[CONCAT62(uVar7,CONCAT11(bVar6,cVar5)) + 0x4d] + cVar5;
  *param_1 = *param_1 + cVar4;
  *pcVar3 = *pcVar3 + (char)uVar2;
  pcVar3[-0x18ffc5de] = pcVar3[-0x18ffc5de] + cVar4;
  pcVar3[0x11] = pcVar3[0x11] + (char)param_1;
  *param_4 = *param_4 + param_3;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

