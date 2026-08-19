// Function: FUN_1404aac48
// Addr: 1404aac48
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404aac48(char *param_1,char *param_2)

{
  byte bVar1;
  char cVar2;
  uint in_EAX;
  uint uVar3;
  byte *pbVar4;
  char unaff_SPL;
  bool bVar7;
  char *pcVar5;
  byte bVar6;
  
  uVar3 = in_EAX + 0xe0000834;
  pbVar4 = (byte *)(ulonglong)uVar3;
  bVar7 = true;
  if (in_EAX < 0x1ffff7cc) {
    bVar6 = *pbVar4;
    bVar1 = (byte)uVar3;
    *pbVar4 = *pbVar4 + bVar1;
    bVar7 = false;
    if (CARRY1(bVar6,bVar1)) {
      pbVar4[0x15] = pbVar4[0x15] + (char)param_2;
      *param_1 = *param_1 + unaff_SPL;
      *pbVar4 = *pbVar4 + bVar1;
      bVar6 = (byte)(uVar3 >> 8);
      bVar7 = CARRY1(bVar1,bVar6);
      pbVar4 = (byte *)(ulonglong)CONCAT31((int3)(uVar3 >> 8),bVar1 + bVar6);
      goto code_r0x0001404aac5d;
    }
  }
  else {
code_r0x0001404aac5d:
    if (bVar7) goto code_r0x0001404aac6d;
    bVar7 = CARRY1(*pbVar4,(byte)pbVar4);
    *pbVar4 = *pbVar4 + (byte)pbVar4;
  }
  if (!bVar7) {
    cVar2 = in(0xb);
    pcVar5 = (char *)CONCAT71((int7)((ulonglong)pbVar4 >> 8),cVar2);
    *pcVar5 = *pcVar5 + cVar2;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  pbVar4[0x15] = pbVar4[0x15] + (char)param_2;
  *param_1 = *param_1 + unaff_SPL;
  *param_2 = *param_2 + (char)param_1;
  *pbVar4 = *pbVar4 + (char)pbVar4;
code_r0x0001404aac6d:
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}

