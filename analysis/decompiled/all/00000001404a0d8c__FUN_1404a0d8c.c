// Function: FUN_1404a0d8c
// Addr: 1404a0d8c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404a0dc5) overlaps instruction at (ram,0x0001404a0dc2)
    */

void FUN_1404a0d8c(char *param_1,uint *param_2)

{
  char cVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint *puVar7;
  char unaff_BL;
  longlong unaff_RBP;
  char *unaff_RSI;
  char *pcVar6;
  byte *pbVar8;
  
  uVar3 = in(0x49);
  *param_1 = *param_1 + (char)(uVar3 >> 8);
  *unaff_RSI = *unaff_RSI + (char)uVar3;
  *(char *)(ulonglong)uVar3 = *(char *)(ulonglong)uVar3 + (char)uVar3;
  cVar1 = in(8);
  pcVar6 = (char *)(ulonglong)CONCAT31((int3)(uVar3 >> 8),cVar1);
  *pcVar6 = *pcVar6 + cVar1;
  if (*pcVar6 == '\0') {
    uVar3 = in(0x49);
    pcVar6 = (char *)(ulonglong)uVar3;
  }
  *pcVar6 = *pcVar6 + (char)pcVar6;
  puVar7 = (uint *)((ulonglong)pcVar6 ^ 0xd);
  cVar1 = (char)((ulonglong)pcVar6 >> 8);
  *(char *)((longlong)puVar7 + -0x3afffc72) = *(char *)((longlong)puVar7 + -0x3afffc72) + cVar1;
  *(char *)(unaff_RBP + 0x49) = *(char *)(unaff_RBP + 0x49) + cVar1;
  *param_1 = *param_1 + (char)puVar7;
  *param_2 = *param_2 | (uint)puVar7;
  *param_1 = *param_1 + (byte)param_1;
  bVar2 = (byte)param_1 & 7;
  bRam0000000148622f97 = bRam0000000148622f97 << bVar2 | bRam0000000148622f97 >> 8 - bVar2;
  *(char *)puVar7 = (char)*puVar7 + unaff_BL;
  if ((char)*puVar7 != '\0') {
    uVar3 = (uint)puVar7 | *puVar7;
    uVar4 = uVar3 | 0x7f40434;
    *(char *)((ulonglong)uVar4 - 0x59fffc6f) =
         *(char *)((ulonglong)uVar4 - 0x59fffc6f) + ((byte)uVar3 | 0x34);
    iVar5 = (int)param_1 + *(int *)((ulonglong)param_1 & 0xffffffff);
    *(char *)(ulonglong)uVar4 = *(char *)(ulonglong)uVar4 + (char)((uint)iVar5 >> 8);
    bVar2 = (char)iVar5 + 2;
    pbVar8 = (byte *)(ulonglong)CONCAT31((int3)((uint)iVar5 >> 8),bVar2);
    (&stack0x00000000)[(longlong)param_2 * 8] = (&stack0x00000000)[(longlong)param_2 * 8] + bVar2;
    *pbVar8 = *pbVar8 | bVar2;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}

