// Function: FUN_1404b0570
// Addr: 1404b0570
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b0570(undefined8 param_1,int param_2,byte param_3,char *param_4)

{
  char cVar1;
  char cVar2;
  undefined1 uVar3;
  int in_EAX;
  uint uVar4;
  byte *pbVar7;
  byte *pbVar8;
  byte bVar9;
  undefined1 unaff_BL;
  char unaff_BH;
  undefined2 unaff_0000001a;
  undefined4 unaff_0000001c;
  char *unaff_RSI;
  byte bVar10;
  byte unaff_R12B;
  longlong unaff_R13;
  longlong in_FS_OFFSET;
  byte in_CF;
  uint *puVar5;
  char *pcVar6;
  
  cVar1 = cRam000000014b7b11e9;
  uVar4 = in_EAX + param_2 + (uint)in_CF;
  puVar5 = (uint *)(ulonglong)uVar4;
  pbVar8 = (byte *)CONCAT71((int7)((ulonglong)param_1 >> 8),cRam000000014b7b11e9);
  cVar2 = (char)uVar4;
  cRam000000014b7b11e9 = cRam000000014b7b11e9 + (char)param_1;
  *(char *)puVar5 = (char)*puVar5 + cVar2;
  iRam0000000141680587 = iRam0000000141680587 + CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL))
  ;
  *unaff_RSI = *unaff_RSI + cVar1;
  pbVar7 = (byte *)((longlong)puVar5 + (longlong)unaff_RSI);
  *pbVar7 = *pbVar7 >> 3 | *pbVar7 << 5;
  *(char *)puVar5 = (char)*puVar5 + cVar2;
  *puVar5 = *puVar5 & (uint)pbVar8;
  bVar9 = (byte)param_2;
  bVar10 = param_3 + unaff_R12B;
  uVar4 = CONCAT22((short)(uVar4 >> 0x10),CONCAT11((byte)(uVar4 >> 8) | bVar9,cVar2 + (char)*puVar5)
                  ) + 0x15574500 + (uint)CARRY1(param_3,unaff_R12B);
  cVar2 = (char)((ulonglong)param_1 >> 8);
  (&stack0x4f21002b)[uVar4] = (&stack0x4f21002b)[uVar4] + cVar2;
  uVar3 = in(0x4c);
  uVar4 = CONCAT31((int3)((uVar4 & *(uint *)(ulonglong)uVar4) + 0xe4ffb40c >> 8),uVar3);
  pcVar6 = (char *)(ulonglong)uVar4;
  *pcVar6 = *pcVar6 + bVar9;
  if (*pcVar6 == '\0') {
    uVar4 = uVar4 + 0x15574500 + (uint)CARRY1(bVar10,unaff_R12B);
    (&stack0x2001001b)[(longlong)(ulonglong)uVar4] =
         (&stack0x2001001b)[(longlong)(ulonglong)uVar4] + cVar2;
    *pbVar8 = *pbVar8 & ((byte)uVar4 | *(byte *)(ulonglong)uVar4);
    *param_4 = *param_4 + bVar9;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *pcVar6 = *pcVar6 + cVar1;
  pbVar7 = (byte *)(in_FS_OFFSET + unaff_R13 + 0x57);
  bVar9 = *pbVar7;
  *pbVar7 = *pbVar7 + bVar10;
  uVar4 = uVar4 + 0x15578500 + (uint)CARRY1(bVar9,bVar10);
  pbVar7 = (byte *)(ulonglong)uVar4;
  (&stack0x00210023)[(longlong)pbVar7] = (&stack0x00210023)[(longlong)pbVar7] + unaff_BH;
  bVar9 = *pbVar7;
  *pbVar7 = *pbVar7 + (byte)uVar4;
  uVar4 = uVar4 + 0x15578500 + (uint)CARRY1(bVar9,(byte)uVar4);
  pbVar7 = (byte *)(ulonglong)uVar4;
  (&stack0x0021001b)[(longlong)pbVar7] = (&stack0x0021001b)[(longlong)pbVar7] + unaff_BH;
  bVar9 = *pbVar7;
  *pbVar7 = *pbVar7 + (byte)uVar4;
  if (pbVar8 + -1 == (byte *)0x0 || *pbVar7 == 0) {
    (&stack0x0021001b)[uVar4 + 0x15574500 + (uint)CARRY1(bVar9,(byte)uVar4)] =
         (&stack0x0021001b)[uVar4 + 0x15574500 + (uint)CARRY1(bVar9,(byte)uVar4)] +
         (char)((ulonglong)(pbVar8 + -1) >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  pbVar7 = (byte *)(CONCAT44(unaff_0000001c,CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL))) +
                   0x15);
  *pbVar7 = *pbVar7 ^ (byte)((uint)param_2 >> 8);
  unaff_RSI[-0x6bffea8d] = unaff_RSI[-0x6bffea8d] + unaff_BH;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

