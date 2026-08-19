// Function: FUN_1404c872c
// Addr: 1404c872c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c872c(char *param_1,char *param_2)

{
  uint *puVar1;
  code *pcVar2;
  undefined3 uVar3;
  byte bVar4;
  uint uVar5;
  byte bVar8;
  byte *in_RAX;
  byte *pbVar6;
  byte *pbVar7;
  char *pcVar9;
  char *unaff_RBX;
  undefined4 *unaff_RSI;
  undefined4 *unaff_RDI;
  char unaff_R12B;
  
  pbVar6 = (byte *)(unaff_RBX + (longlong)param_1 * 2 + 0x2052100);
  *pbVar6 = *pbVar6 << 1 | (char)*pbVar6 < '\0';
  bVar4 = (byte)in_RAX;
  cRam000000010d4c8f6d = cRam000000010d4c8f6d + bVar4;
  *unaff_RDI = *unaff_RSI;
  *in_RAX = *in_RAX ^ bVar4;
  *param_1 = *param_1 + unaff_R12B;
  bVar4 = bVar4 | *(byte *)((longlong)in_RAX * 2);
  pbVar6 = (byte *)CONCAT62((int6)((ulonglong)in_RAX >> 0x10),
                            CONCAT11((char)((ulonglong)in_RAX >> 8),bVar4));
  uVar5 = (int)CONCAT71((int7)((ulonglong)pbVar6 >> 8),bVar4 | *pbVar6) + 0x3000964;
  pbVar6 = (byte *)(ulonglong)uVar5;
  bVar4 = (byte)uVar5;
  *pbVar6 = *pbVar6 ^ bVar4;
  bVar8 = (byte)(uVar5 >> 8);
  *(byte *)((longlong)unaff_RSI + -0x799fffcb) =
       *(byte *)((longlong)unaff_RSI + -0x799fffcb) | bVar8;
  *param_1 = *param_1 + unaff_R12B;
  *param_2 = *param_2 + bVar4;
  *pbVar6 = *pbVar6 + bVar4;
  uVar3 = (undefined3)(uVar5 >> 8);
  bVar4 = in(10);
  pbVar6 = (byte *)(ulonglong)CONCAT31(uVar3,bVar4);
  *unaff_RBX = *unaff_RBX + bVar4;
  *pbVar6 = *pbVar6 ^ bVar4;
  *(byte *)((longlong)unaff_RSI + -0x799fffca) =
       *(byte *)((longlong)unaff_RSI + -0x799fffca) | bVar8;
  *param_1 = *param_1 + unaff_R12B;
  *pbVar6 = *pbVar6 + bVar4;
  pcVar9 = (char *)CONCAT62((int6)((ulonglong)param_1 >> 0x10),
                            CONCAT11((char)((ulonglong)param_1 >> 8) + (char)param_1,(char)param_1))
  ;
  *(undefined4 *)((longlong)unaff_RDI + 6) = *(undefined4 *)((longlong)unaff_RSI + 6);
  *pbVar6 = *pbVar6 ^ bVar4;
  *pcVar9 = *pcVar9 + unaff_R12B;
  *pbVar6 = *pbVar6 + bVar4;
  pbVar6 = (byte *)(ulonglong)CONCAT31(uVar3,bVar4 * '\x02');
  puVar1 = (uint *)((longlong)unaff_RSI + 0xe);
  *(undefined4 *)((longlong)unaff_RDI + 10) = *(undefined4 *)((longlong)unaff_RSI + 10);
  *pbVar6 = *pbVar6 ^ bVar4 * '\x02';
  pcVar2 = (code *)swi(0xa5);
  pbVar7 = (byte *)(*pcVar2)();
  bVar4 = (byte)pbVar7;
  *pbVar7 = *pbVar7 ^ bVar4;
  pbVar6 = (byte *)(unaff_RBX + (longlong)pcVar9 * 2 + 0x3070100);
  *pbVar6 = *pbVar6 << 1 | (char)*pbVar6 < '\0';
  *(char *)((longlong)unaff_RDI + 0xe) = *(char *)((longlong)unaff_RDI + 0xe) + bVar4;
  if (pcVar9 == (char *)0x1) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *pbVar7 = *pbVar7 + bVar4;
  *puVar1 = *puVar1 & (uint)puVar1;
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}

