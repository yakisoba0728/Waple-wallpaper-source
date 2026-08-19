// Function: FUN_1404bf020
// Addr: 1404bf020
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404bf020(char *param_1,longlong param_2)

{
  byte *pbVar1;
  byte bVar5;
  int in_EAX;
  uint uVar2;
  uint *puVar3;
  char *pcVar4;
  char cVar6;
  char cVar7;
  char *unaff_RBX;
  longlong unaff_RBP;
  undefined4 *unaff_RSI;
  undefined4 *unaff_RDI;
  byte in_CF;
  
  cVar7 = (char)((ulonglong)param_2 >> 8);
  cVar6 = (char)param_2;
  *(int *)((longlong)param_1 * 2) = *(int *)((longlong)param_1 * 2) + (int)param_2 + (uint)in_CF;
  uVar2 = in_EAX + 0x834;
  *unaff_RDI = *unaff_RSI;
  *param_1 = *param_1 + (char)(uVar2 >> 8);
  unaff_RDI[1] = unaff_RSI[1];
  *(char *)(ulonglong)uVar2 = *(char *)(ulonglong)uVar2 + cVar6;
  bRam000000000021004b = bRam000000000021004b + 'K';
  *(undefined1 *)(unaff_RBP + -0x5adeffda) = *(undefined1 *)(unaff_RBP + -0x5adeffda);
  bRam000000000021004b = bRam000000000021004b + cVar6;
  puVar3 = (uint *)CONCAT62(0x21,CONCAT11(cVar7 + (bRam000000000021004b | 0x4b),bRam000000000021004b
                                         ) | 0x4b);
  uVar2 = (uint)puVar3 | *puVar3;
  pcVar4 = (char *)(ulonglong)uVar2;
  param_1[param_2] = param_1[param_2] + cVar7;
  *(char *)((longlong)param_1 * 2) = *(char *)((longlong)param_1 * 2) + cVar6;
  pcVar4[(longlong)param_1] = pcVar4[(longlong)param_1] + cVar7;
  *pcVar4 = *pcVar4 + (char)uVar2;
  unaff_RDI[2] = unaff_RSI[2];
  *param_1 = *param_1 + (char)(uVar2 >> 8);
  unaff_RDI[3] = unaff_RSI[3];
  *pcVar4 = *pcVar4 + cVar6;
  pbVar1 = (byte *)(param_2 + 4);
  bVar5 = (byte)((uint)(iRam000000000801004b + 0x801004b) >> 8);
  *pbVar1 = *pbVar1 | bVar5;
  param_1 = param_1 + -1;
  if (param_1 == (char *)0x0 || *pbVar1 == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *param_1 = *param_1 + bVar5;
  *unaff_RBX = *unaff_RBX + bVar5;
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}

