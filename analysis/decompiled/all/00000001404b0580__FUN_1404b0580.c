// Function: FUN_1404b0580
// Addr: 1404b0580
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b0580(byte *param_1,undefined8 param_2,byte param_3,char *param_4)

{
  undefined1 uVar1;
  int in_EAX;
  uint uVar2;
  byte *pbVar5;
  char cVar6;
  byte bVar7;
  undefined1 unaff_BL;
  char unaff_BH;
  undefined6 unaff_0000001a;
  longlong unaff_RSI;
  byte bVar8;
  byte unaff_R12B;
  longlong unaff_R13;
  longlong in_FS_OFFSET;
  byte in_CF;
  uint *puVar3;
  char *pcVar4;
  
  bVar7 = (byte)param_2;
  uVar2 = (in_EAX + -0xe005001) - (uint)in_CF;
  puVar3 = (uint *)(ulonglong)uVar2;
  pbVar5 = (byte *)((longlong)puVar3 + unaff_RSI);
  *pbVar5 = *pbVar5 >> 3 | *pbVar5 << 5;
  *(char *)puVar3 = (char)*puVar3 + (char)uVar2;
  *puVar3 = *puVar3 & (uint)param_1;
  bVar8 = param_3 + unaff_R12B;
  uVar2 = CONCAT22((short)(uVar2 >> 0x10),
                   CONCAT11((byte)(uVar2 >> 8) | bVar7,(char)uVar2 + (char)*puVar3)) + 0x15574500 +
          (uint)CARRY1(param_3,unaff_R12B);
  cVar6 = (char)((ulonglong)param_1 >> 8);
  (&stack0x4f21003b)[uVar2] = (&stack0x4f21003b)[uVar2] + cVar6;
  uVar1 = in(0x4c);
  uVar2 = CONCAT31((int3)((uVar2 & *(uint *)(ulonglong)uVar2) + 0xe4ffb40c >> 8),uVar1);
  pcVar4 = (char *)(ulonglong)uVar2;
  *pcVar4 = *pcVar4 + bVar7;
  if (*pcVar4 == '\0') {
    uVar2 = uVar2 + 0x15574500 + (uint)CARRY1(bVar8,unaff_R12B);
    (&stack0x2001002b)[(longlong)(ulonglong)uVar2] =
         (&stack0x2001002b)[(longlong)(ulonglong)uVar2] + cVar6;
    *param_1 = *param_1 & ((byte)uVar2 | *(byte *)(ulonglong)uVar2);
    *param_4 = *param_4 + bVar7;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *pcVar4 = *pcVar4 + (char)param_1;
  pbVar5 = (byte *)(in_FS_OFFSET + unaff_R13 + 0x57);
  bVar7 = *pbVar5;
  *pbVar5 = *pbVar5 + bVar8;
  uVar2 = uVar2 + 0x15578500 + (uint)CARRY1(bVar7,bVar8);
  pbVar5 = (byte *)(ulonglong)uVar2;
  (&stack0x00210033)[(longlong)pbVar5] = (&stack0x00210033)[(longlong)pbVar5] + unaff_BH;
  bVar7 = *pbVar5;
  *pbVar5 = *pbVar5 + (byte)uVar2;
  uVar2 = uVar2 + 0x15578500 + (uint)CARRY1(bVar7,(byte)uVar2);
  pbVar5 = (byte *)(ulonglong)uVar2;
  (&stack0x0021002b)[(longlong)pbVar5] = (&stack0x0021002b)[(longlong)pbVar5] + unaff_BH;
  bVar7 = *pbVar5;
  *pbVar5 = *pbVar5 + (byte)uVar2;
  if (param_1 + -1 == (byte *)0x0 || *pbVar5 == 0) {
    (&stack0x0021002b)[uVar2 + 0x15574500 + (uint)CARRY1(bVar7,(byte)uVar2)] =
         (&stack0x0021002b)[uVar2 + 0x15574500 + (uint)CARRY1(bVar7,(byte)uVar2)] +
         (char)((ulonglong)(param_1 + -1) >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  pbVar5 = (byte *)(CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + 0x15);
  *pbVar5 = *pbVar5 ^ (byte)((ulonglong)param_2 >> 8);
  *(char *)(unaff_RSI + -0x6bffea8d) = *(char *)(unaff_RSI + -0x6bffea8d) + unaff_BH;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

