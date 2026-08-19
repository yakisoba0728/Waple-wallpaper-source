// Function: FUN_1404b090c
// Addr: 1404b090c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b090c(char *param_1,char *param_2)

{
  byte bVar1;
  byte bVar2;
  char cVar6;
  char cVar7;
  uint uVar3;
  int in_EAX;
  char *pcVar5;
  char cVar8;
  longlong unaff_RBP;
  char *unaff_RSI;
  byte in_CF;
  bool in_SF;
  byte *pbVar4;
  
  cVar7 = (char)((ulonglong)param_2 >> 8);
  cVar8 = (char)param_2;
  if (!in_SF) {
    cVar7 = (char)(in_EAX + 0x4b059400 + (uint)in_CF >> 8);
    *param_1 = *param_1 + cVar7;
    *param_2 = *param_2 + cVar7;
    in(4);
    *unaff_RSI = *unaff_RSI + cVar8;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  pbVar4 = (byte *)(unaff_RBP + -0x7ad0ffeb);
  bVar1 = *pbVar4;
  bVar2 = *pbVar4 - (byte)in_EAX;
  *pbVar4 = bVar2 - in_CF;
  uVar3 = in_EAX + 0x4b078c00 + (uint)(bVar1 < (byte)in_EAX || bVar2 < in_CF);
  pbVar4 = (byte *)(ulonglong)uVar3;
  cVar6 = (char)(uVar3 >> 8);
  *param_1 = *param_1 + cVar6;
  *pbVar4 = *pbVar4 + (byte)uVar3;
  *pbVar4 = *pbVar4 + cVar8;
  pbVar4[unaff_RBP + 0x21004b] = pbVar4[unaff_RBP + 0x21004b] + cVar8;
  uVar3 = CONCAT22((short)(uVar3 >> 0x10),CONCAT11(cVar6 * '\x02' + cVar8,(byte)uVar3 | *pbVar4));
  uVar3 = uVar3 | *(uint *)(ulonglong)uVar3;
  pcVar5 = (char *)(ulonglong)uVar3;
  param_2[(longlong)param_1] = param_2[(longlong)param_1] + cVar7;
  *(char *)((longlong)param_1 * 2) = *(char *)((longlong)param_1 * 2) + (char)(uVar3 >> 8);
  pcVar5[(longlong)param_1] = pcVar5[(longlong)param_1] + cVar7;
  *pcVar5 = *pcVar5 + cVar8;
  pcVar5[unaff_RBP + 0x1a21004b] = pcVar5[unaff_RBP + 0x1a21004b] + cVar8;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

