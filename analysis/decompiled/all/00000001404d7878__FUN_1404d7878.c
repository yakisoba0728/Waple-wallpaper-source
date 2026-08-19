// Function: FUN_1404d7878
// Addr: 1404d7878
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d7878(byte *param_1,uint param_2)

{
  char *pcVar1;
  byte bVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  char cVar7;
  uint *in_RAX;
  char cVar8;
  char cVar9;
  char unaff_BL;
  longlong unaff_RSI;
  longlong unaff_RDI;
  char *pcVar6;
  
  cVar9 = (char)(param_2 >> 8);
  cVar8 = (char)param_2;
  *(uint *)(&stack0x00000000 + (longlong)in_RAX) =
       *(uint *)(&stack0x00000000 + (longlong)in_RAX) & param_2;
  (&stack0x00000000)[(longlong)in_RAX * 8] = (&stack0x00000000)[(longlong)in_RAX * 8] + cVar8;
  uVar4 = (uint)in_RAX | *in_RAX;
  uVar5 = uVar4 + 0x60000a54;
  pcVar6 = (char *)(ulonglong)uVar5;
  if (-0x60000a55 < (int)uVar4) {
    param_1[0x7c] = param_1[0x7c] + cVar9;
    pcVar1 = (char *)(unaff_RDI + 0x4d + unaff_RSI * 2);
    *pcVar1 = *pcVar1 + cVar8;
    cVar7 = (char)(uVar5 >> 8);
    *param_1 = *param_1 + cVar7;
    bVar3 = (byte)uVar5;
    *pcVar6 = *pcVar6 + bVar3;
    pcVar6[0x7c] = pcVar6[0x7c] + cVar7;
    param_1[0x7c] = param_1[0x7c] + cVar9;
    pcVar1 = (char *)(unaff_RDI + 0x4d + unaff_RSI * 2);
    *pcVar1 = *pcVar1 + cVar8;
    bVar2 = *param_1;
    *param_1 = *param_1 + bVar3;
    *pcVar6 = (*pcVar6 - (char)param_1) - CARRY1(bVar2,bVar3);
    *pcVar6 = *pcVar6 + unaff_BL;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

