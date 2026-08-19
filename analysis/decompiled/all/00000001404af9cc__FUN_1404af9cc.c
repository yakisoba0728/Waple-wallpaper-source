// Function: FUN_1404af9cc
// Addr: 1404af9cc
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404af9cc(char *param_1,undefined2 param_2)

{
  char *pcVar1;
  byte *pbVar2;
  char cVar3;
  char cVar4;
  uint uVar5;
  char *in_RAX;
  undefined7 uVar7;
  longlong lVar6;
  char unaff_SPL;
  undefined7 unaff_00000021;
  uint unaff_EBP;
  undefined4 unaff_0000002c;
  longlong unaff_RSI;
  uint *unaff_RDI;
  
  *(uint *)(in_RAX + (longlong)param_1) = *(uint *)(in_RAX + (longlong)param_1) & unaff_EBP;
  pcVar1 = (char *)(CONCAT71(unaff_00000021,unaff_SPL) + unaff_RSI * 8);
  *pcVar1 = *pcVar1 + (char)((ulonglong)param_1 >> 8);
  *in_RAX = *in_RAX + '\x1e';
  uVar7 = (undefined7)((ulonglong)in_RAX >> 8);
  cVar4 = in(0x81);
  *(byte *)CONCAT71(unaff_00000021,unaff_SPL) =
       *(char *)CONCAT71(unaff_00000021,unaff_SPL) + (byte)param_2;
  LOCK();
  cVar3 = *(char *)CONCAT71(uVar7,cVar4);
  *(char *)CONCAT71(uVar7,cVar4) = cVar4;
  lVar6 = CONCAT71(uVar7,cVar3);
  UNLOCK();
  pbVar2 = (byte *)(CONCAT44(unaff_0000002c,unaff_EBP) + lVar6 * 4);
  *pbVar2 = *pbVar2 | (byte)param_2;
  uVar5 = (uint)lVar6;
  out(param_2,uVar5);
  uVar5 = (uint)CONCAT71(uVar7,cVar3 + (uVar5 < *unaff_RDI)) ^ 0xe80014b0;
  *param_1 = *param_1 + unaff_SPL;
  *(char *)(ulonglong)uVar5 = *(char *)(ulonglong)uVar5 + (char)uVar5;
  uVar5 = CONCAT31((int3)(uVar5 >> 8),(char)uVar5 + (uVar5 < unaff_RDI[1])) ^ 0xe80014b0;
  *param_1 = *param_1 + unaff_SPL;
  *(char *)(ulonglong)uVar5 = *(char *)(ulonglong)uVar5 + (char)uVar5;
  out(param_2,CONCAT31((int3)(uVar5 >> 8),(char)uVar5 + (uVar5 < unaff_RDI[2])));
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

