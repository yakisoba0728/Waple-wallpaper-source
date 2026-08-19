// Function: FUN_1404a2de8
// Addr: 1404a2de8
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a2de8(byte *param_1,undefined8 param_2)

{
  uint *puVar1;
  undefined3 uVar2;
  char cVar3;
  byte bVar4;
  char cVar5;
  byte bVar9;
  int in_EAX;
  uint uVar6;
  char *pcVar7;
  char unaff_BL;
  longlong unaff_RSI;
  bool in_OF;
  byte *pbVar8;
  
  if (in_OF) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  uVar6 = in_EAX + 0x5786c00;
  *(char *)(ulonglong)uVar6 = *(char *)(ulonglong)uVar6 + (char)uVar6;
  uVar6 = in_EAX + 0x5576bb6;
  pcVar7 = (char *)(ulonglong)uVar6;
  cVar5 = *pcVar7;
  cVar3 = (char)uVar6;
  *pcVar7 = *pcVar7 + cVar3;
  if (!SCARRY1(cVar5,cVar3)) {
    uVar6 = in_EAX + 0xacfd7b6;
    *(char *)(ulonglong)uVar6 = *(char *)(ulonglong)uVar6 + (char)uVar6;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  iRam0000000145cc017b = iRam0000000145cc017b + 0x4a2d8400;
  bVar4 = *param_1;
  bVar9 = (byte)(uVar6 >> 8);
  *param_1 = *param_1 + bVar9;
  uVar2 = (undefined3)(uVar6 >> 8);
  bVar4 = (cVar3 + -6) - CARRY1(bVar4,bVar9);
  pbVar8 = (byte *)(ulonglong)CONCAT31(uVar2,bVar4);
  (&stack0x00000000)[unaff_RSI * 8] = (&stack0x00000000)[unaff_RSI * 8] + unaff_BL;
  *pbVar8 = *pbVar8 | bVar4;
  bVar4 = bVar4 - 0x2c | *(byte *)(ulonglong)CONCAT31(uVar2,bVar4 - 0x2c);
  uVar6 = CONCAT22((short)(uVar6 >> 0x10),CONCAT11(bVar9 | bVar4,bVar4));
  *(int *)(ulonglong)uVar6 = *(int *)(ulonglong)uVar6 + uVar6;
  puVar1 = (uint *)(param_1 + -0x7deefffb);
  bVar4 = (byte)param_1 & 0x1f;
  *puVar1 = *puVar1 << bVar4 | *puVar1 >> 0x20 - bVar4;
  uVar6 = uVar6 + 0x4a2d9000;
  pcVar7 = (char *)(ulonglong)uVar6;
  cVar3 = (char)(uVar6 >> 8);
  *param_1 = *param_1 + cVar3;
  cVar5 = (char)uVar6;
  *pcVar7 = *pcVar7 + cVar5;
  iRam0000000145cc3fa7 = iRam0000000145cc3fa7 + 0x4a2d9000;
  *param_1 = *param_1 + cVar3;
  *pcVar7 = *pcVar7 + cVar5;
  *pcVar7 = *pcVar7 + (char)((ulonglong)param_2 >> 8);
  iRam0000000145cc01b7 = iRam0000000145cc01b7 + 0x4a2d8400;
  *param_1 = *param_1 + cVar5;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

