// Function: FUN_1404a44a8
// Addr: 1404a44a8
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a44a8(undefined8 param_1,uint param_2)

{
  char *pcVar1;
  byte bVar2;
  uint uVar3;
  longlong in_RAX;
  undefined1 unaff_BL;
  char unaff_BH;
  undefined6 unaff_0000001a;
  longlong unaff_RSI;
  undefined4 unaff_EDI;
  undefined4 unaff_0000003c;
  byte *pbVar4;
  
  *(uint *)(unaff_RSI + in_RAX) = *(uint *)(unaff_RSI + in_RAX) & param_2;
  (&stack0x00000000)[unaff_RSI * 8] = (&stack0x00000000)[unaff_RSI * 8] + (char)param_2;
  uVar3 = (int)in_RAX + 0x7d40c00;
  pbVar4 = (byte *)(ulonglong)uVar3;
  bVar2 = (byte)uVar3;
  (&stack0x00000000)[(longlong)pbVar4 * 8] = (&stack0x00000000)[(longlong)pbVar4 * 8] + bVar2;
  *pbVar4 = *pbVar4 | bVar2;
  *(undefined4 *)(CONCAT44(unaff_0000003c,unaff_EDI) + 7) = unaff_EDI;
  pcVar1 = (char *)(CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + -0x3bfff881);
  *pcVar1 = *pcVar1 + unaff_BH;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

