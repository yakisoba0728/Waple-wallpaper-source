// Function: FUN_1404a5a90
// Addr: 1404a5a90
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a5a90(longlong param_1)

{
  uint *puVar1;
  char cVar2;
  undefined3 uVar3;
  char cVar6;
  int in_EAX;
  uint uVar4;
  byte *pbVar5;
  char *unaff_RSI;
  char *unaff_retaddr;
  char *pcStackX_8;
  
  uVar4 = in_EAX + 0xc0000e74;
  pbVar5 = (byte *)(ulonglong)uVar4;
  *pbVar5 = (byte)param_1;
  cVar6 = (char)(uVar4 >> 8);
  *(char *)(param_1 + -0x77) = *(char *)(param_1 + -0x77) + cVar6;
  *pbVar5 = *pbVar5 | (byte)uVar4;
  cVar2 = *unaff_RSI;
  uVar3 = (undefined3)(uVar4 >> 8);
  *unaff_retaddr = *unaff_retaddr + '\b';
  *(char *)(ulonglong)CONCAT31(uVar3,cVar2) = *(char *)(ulonglong)CONCAT31(uVar3,cVar2) + cVar2;
  pbVar5 = (byte *)(ulonglong)CONCAT31(uVar3,cVar2 * '\x02');
  *pbVar5 = (byte)unaff_retaddr;
  unaff_retaddr[-0x77] = unaff_retaddr[-0x77] + cVar6;
  *pbVar5 = *pbVar5 | cVar2 * '\x02';
  cVar2 = unaff_RSI[1];
  *pcStackX_8 = *pcStackX_8 + cVar2;
  puVar1 = (uint *)((ulonglong)(CONCAT31(uVar3,cVar2) | 0x420d0005) + 8);
  *puVar1 = *puVar1 | (int)(unaff_RSI + 1) + 1U;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

