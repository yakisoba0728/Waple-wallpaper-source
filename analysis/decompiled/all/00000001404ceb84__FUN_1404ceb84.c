// Function: FUN_1404ceb84
// Addr: 1404ceb84
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404ceb84(byte *param_1,longlong param_2)

{
  byte bVar1;
  char cVar2;
  byte *pbVar4;
  byte bVar5;
  undefined1 uVar6;
  char *in_RAX;
  char cVar8;
  undefined1 unaff_BL;
  char unaff_BH;
  undefined6 unaff_0000001a;
  longlong unaff_RSI;
  bool bVar9;
  undefined2 in_FPUControlWord;
  char cVar3;
  char *pcVar7;
  
  cVar8 = (char)param_2;
  *(char *)(unaff_RSI + 0x33) = *(char *)(unaff_RSI + 0x33) + unaff_BH;
  bVar5 = (byte)in_RAX;
  if ((char)bVar5 < *in_RAX) {
    *in_RAX = *in_RAX + bVar5;
    uVar6 = in(0xb);
    pcVar7 = (char *)CONCAT71((int7)((ulonglong)in_RAX >> 8),uVar6);
    *pcVar7 = *pcVar7 + cVar8;
    *(undefined2 *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) = in_FPUControlWord;
    *(undefined2 *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) = in_FPUControlWord;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  bVar1 = *param_1;
  *param_1 = *param_1 + bVar5;
  pbVar4 = (byte *)((longlong)in_RAX * 2);
  bVar9 = CARRY1(*pbVar4,bVar5) || CARRY1(*pbVar4 + bVar5,CARRY1(bVar1,bVar5));
  *pbVar4 = *pbVar4 + bVar5 + CARRY1(bVar1,bVar5);
  pcVar7 = (char *)(param_2 + 0xc);
  cVar2 = *pcVar7;
  cVar3 = *pcVar7;
  *pcVar7 = cVar3 + cVar8 + bVar9;
  if (SCARRY1(cVar2,cVar8) == SCARRY1(cVar3 + cVar8,bVar9)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  pcVar7 = (char *)(ulonglong)((int)in_RAX + 0xa34);
  *(undefined2 *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) = in_FPUControlWord;
  *pcVar7 = *pcVar7 + cVar8;
  *(undefined2 *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) = in_FPUControlWord;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

