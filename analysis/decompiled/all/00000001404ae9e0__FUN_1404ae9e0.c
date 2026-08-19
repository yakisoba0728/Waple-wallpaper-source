// Function: FUN_1404ae9e0
// Addr: 1404ae9e0
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404ae9e0(char *param_1,undefined2 param_2)

{
  char *pcVar1;
  byte *pbVar2;
  byte bVar3;
  ushort uVar4;
  byte bVar7;
  short sVar5;
  short *in_RAX;
  undefined6 uVar8;
  bool bVar9;
  short *psVar6;
  
  *(char *)((longlong)in_RAX + (longlong)param_1) =
       *(char *)((longlong)in_RAX + (longlong)param_1) + (char)((ushort)param_2 >> 8);
  pbVar2 = (byte *)((longlong)in_RAX + 0x79001365);
  bVar3 = *pbVar2;
  bVar7 = (byte)((ulonglong)in_RAX >> 8);
  *pbVar2 = *pbVar2 + bVar7;
  uVar4 = (ushort)CARRY1(bVar3,bVar7);
  sVar5 = (short)in_RAX + *in_RAX;
  bVar9 = SCARRY2((short)in_RAX,*in_RAX) != SCARRY2(sVar5,uVar4);
  uVar8 = (undefined6)((ulonglong)in_RAX >> 0x10);
  sVar5 = sVar5 + uVar4;
  psVar6 = (short *)CONCAT62(uVar8,sVar5);
  if (-1 < sVar5) {
    *param_1 = *param_1;
    *(char *)psVar6 = (char)*psVar6 + (char)sVar5;
    pbVar2 = (byte *)((longlong)psVar6 + 0x79001365);
    bVar3 = *pbVar2;
    bVar7 = (byte)((ushort)sVar5 >> 8);
    *pbVar2 = *pbVar2 + bVar7;
    sVar5 = sVar5 + *psVar6 + (ushort)CARRY1(bVar3,bVar7);
    if (sVar5 < 0) goto code_r0x0001404aea1d;
    *param_1 = *param_1 + (char)sVar5;
    bVar9 = false;
    psVar6 = (short *)(ulonglong)((uint)CONCAT62(uVar8,sVar5) | 0x57ed0956);
  }
  if (!bVar9) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  pcVar1 = (char *)(((ulonglong)psVar6 ^ 10) + 0x68);
  *pcVar1 = *pcVar1 + (char)((ulonglong)psVar6 ^ 10);
  in(param_2);
code_r0x0001404aea1d:
  *param_1 = *param_1 + -8;
  in(param_2);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

