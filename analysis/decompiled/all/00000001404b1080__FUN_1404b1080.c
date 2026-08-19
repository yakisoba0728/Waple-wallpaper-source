// Function: FUN_1404b1080
// Addr: 1404b1080
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b1080(char *param_1,undefined8 param_2)

{
  char *pcVar1;
  byte bVar2;
  byte bVar3;
  int in_EAX;
  uint uVar4;
  byte bVar6;
  undefined6 uVar7;
  byte bVar8;
  longlong unaff_RBX;
  char unaff_SPL;
  char *unaff_RSI;
  uint *unaff_RDI;
  longlong in_FS_OFFSET;
  byte *pbVar5;
  
  bVar8 = (byte)((ulonglong)param_2 >> 8);
  uVar7 = (undefined6)((ulonglong)param_1 >> 0x10);
  bVar6 = (byte)((ulonglong)param_1 >> 8);
  pbVar5 = (byte *)(unaff_RBX + -0x54c7ffeb);
  bVar2 = *pbVar5;
  *pbVar5 = *pbVar5 + bVar6;
  uVar4 = in_EAX + 0x4b0f8400 + (uint)CARRY1(bVar2,bVar6);
  pbVar5 = (byte *)(ulonglong)uVar4;
  *param_1 = *param_1 + (char)(uVar4 >> 8);
  bVar3 = (byte)uVar4;
  *unaff_RSI = *unaff_RSI + bVar3;
  *pbVar5 = *pbVar5 + bVar3;
  pbVar5[in_FS_OFFSET] = pbVar5[in_FS_OFFSET] | bVar3;
  *(byte *)((longlong)unaff_RDI + (longlong)pbVar5) =
       *(byte *)((longlong)unaff_RDI + (longlong)pbVar5) + (char)param_2;
  unaff_RSI[(longlong)pbVar5] = unaff_RSI[(longlong)pbVar5] + bVar8;
  bVar2 = *pbVar5;
  *pbVar5 = *pbVar5 + bVar3;
  *unaff_RDI = uVar4;
  uVar4 = uVar4 + 0x15ab3800 + (uint)CARRY1(bVar2,bVar3);
  *(char *)((longlong)unaff_RDI + (longlong)(param_1 + 0x521004f)) =
       *(char *)((longlong)unaff_RDI + (longlong)(param_1 + 0x521004f)) + (char)uVar4;
  uVar4 = CONCAT31((int3)(uVar4 >> 8),(char)uVar4 + *(char *)(ulonglong)uVar4);
  uVar4 = CONCAT31((int3)(uVar4 + 0x40000c64 >> 8),*unaff_RSI) + 0x15aceb00 +
          (uint)(0xbffff39b < uVar4);
  pcVar1 = (char *)((ulonglong)uVar4 + 2);
  *pcVar1 = *pcVar1 + bVar6;
  *param_1 = *param_1 + unaff_SPL;
  *(char *)CONCAT62(uVar7,CONCAT11(bVar6 + bVar8,(char)param_1)) =
       *(char *)CONCAT62(uVar7,CONCAT11(bVar6 + bVar8,(char)param_1)) +
       (char)((CONCAT31((int3)(uVar4 + 0xc4050002 >> 8),unaff_RSI[1]) | 0x15aceb00) + 0x4b0fd800 +
              (uint)CARRY1(bVar6,bVar8) >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

