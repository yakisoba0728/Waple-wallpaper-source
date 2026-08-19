// Function: FUN_14049fcf4
// Addr: 14049fcf4
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_14049fcf4(longlong param_1,undefined2 param_2,undefined8 param_3,char *param_4)

{
  byte bVar1;
  char cVar2;
  char cVar6;
  int in_EAX;
  uint uVar3;
  char *pcVar5;
  char cVar8;
  char *pcVar7;
  undefined1 unaff_BL;
  char unaff_BH;
  undefined6 unaff_0000001a;
  char *unaff_RSI;
  longlong unaff_RDI;
  byte in_CF;
  byte *pbVar4;
  
  uVar3 = in_EAX + 0xff01142 + (uint)in_CF;
  pbVar4 = (byte *)(ulonglong)uVar3;
  pcVar7 = (char *)(param_1 + -1);
  if (pcVar7 == (char *)0x0 || uVar3 == 0) {
    *(byte *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) =
         *(byte *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) >> 1 |
         *(char *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) << 7;
    *pcVar7 = *pcVar7;
    pbVar4[7] = pbVar4[7] | (byte)(uVar3 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  uRam00000001744efd10 = uRam00000001744efd10 & uVar3;
  *pbVar4 = *pbVar4 | (byte)uVar3;
  uVar3 = CONCAT31((int3)(uVar3 >> 8),uRamc0000300a6000300);
  out(param_2,uVar3);
  *param_4 = *param_4;
  uVar3 = uVar3 | 0x640d0004;
  bVar1 = (byte)uVar3 | *(byte *)(ulonglong)uVar3;
  *(byte *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) =
       *(char *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + bVar1 + 0x54;
  cVar8 = (char)((ulonglong)pcVar7 >> 8);
  unaff_RSI[0x38000300] = unaff_RSI[0x38000300] + cVar8;
  *param_4 = *param_4;
  uVar3 = CONCAT31((int3)(uVar3 >> 8),bVar1) + 0x8a050956;
  uVar3 = uVar3 | *(uint *)(ulonglong)uVar3;
  pcVar5 = (char *)(ulonglong)uVar3;
  cVar2 = (char)uVar3;
  *(char *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) =
       *(char *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + cVar2;
  *unaff_RSI = *unaff_RSI + cVar2;
  *(uint *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) =
       *(int *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + uVar3;
  (&stack0x00000049)[(unaff_RDI + 1) * 8] = (&stack0x00000049)[(unaff_RDI + 1) * 8] + (char)pcVar7;
  cVar6 = (char)(uVar3 >> 8);
  *pcVar7 = *pcVar7 + cVar6;
  *pcVar5 = *pcVar5 + cVar2;
  unaff_RSI[0x6000300] = unaff_RSI[0x6000300] + cVar8;
  *(uint *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) =
       *(int *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + uVar3;
  (&stack0x00000049)[(unaff_RDI + 1) * 8] = (&stack0x00000049)[(unaff_RDI + 1) * 8] + (char)pcVar7;
  *pcVar7 = *pcVar7 + cVar6;
  *pcVar5 = *pcVar5 + cVar2;
  unaff_RSI[-0x51fffd00] = unaff_RSI[-0x51fffd00] + cVar6;
  *(char *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) =
       *(char *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + cVar2;
  *pcVar5 = *pcVar5 + unaff_BH;
  *param_4 = *param_4;
  *pcVar5 = *pcVar5 + cVar2;
  pcVar5[-0x59fffd00] = pcVar5[-0x59fffd00] + cVar6;
  *(char *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) =
       *(char *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + cVar2;
  out(param_2,CONCAT31((int3)(uVar3 >> 8),cVar2 * '\x02'));
  *param_4 = *param_4 + cVar2 * '\x02';
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

