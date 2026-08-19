// Function: FUN_1404ce638
// Addr: 1404ce638
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404ce686) overlaps instruction at (ram,0x0001404ce684)
    */

void FUN_1404ce638(char *param_1,char *param_2)

{
  char cVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  char *in_RAX;
  uint *puVar5;
  byte *pbVar6;
  char cVar7;
  byte unaff_BH;
  uint unaff_EDI;
  char *pcVar8;
  
  cVar7 = (char)((ulonglong)param_2 >> 8);
  cVar1 = (char)in_RAX;
  *param_2 = *param_2 + cVar1;
  cRam00000000e04cea79 = cRam00000000e04cea79 + cVar1;
  bRam000000017d6d974b = bRam000000017d6d974b & unaff_BH;
  in_RAX[0x210049e1] = in_RAX[0x210049e1] + cVar1;
  *param_2 = *param_2 + cVar1;
  *in_RAX = *in_RAX + cVar1;
  puVar5 = (uint *)((ulonglong)in_RAX ^ 4);
  cVar1 = (char)((ulonglong)in_RAX >> 8);
  *(char *)(puVar5 + -0x13bff0b8) = (char)puVar5[-0x13bff0b8] + cVar1;
  bRam000000018a2e6663 = bRam000000018a2e6663 & unaff_BH;
  *param_1 = *param_1 + cVar1;
  cVar2 = (char)puVar5;
  *(char *)puVar5 = (char)*puVar5 + cVar2;
  *(char *)(puVar5 + -0x13bff0b8) = (char)puVar5[-0x13bff0b8] + cVar1;
  bRam000000018a2e6673 = bRam000000018a2e6673 & unaff_BH;
  cVar1 = *param_1;
  *param_1 = *param_1 + cVar2;
  if (SCARRY1(cVar1,cVar2)) {
    iVar4 = (uint)puVar5 + *puVar5;
    puVar5 = (uint *)(ulonglong)
                     CONCAT31((int3)((uint)iVar4 >> 8),
                              ((char)iVar4 + 'x') - CARRY4((uint)puVar5,*puVar5));
  }
  *(char *)(puVar5 + -0xe) = (char)puVar5[-0xe] + cVar7;
  *(char *)puVar5 = (char)*puVar5 + (char)puVar5;
  pcVar8 = (char *)(ulonglong)(unaff_EDI ^ *(uint *)((longlong)puVar5 + -0x57d1ffff));
  uVar3 = (uint)CONCAT71((int7)((ulonglong)puVar5 >> 8),(char)puVar5 + (char)*puVar5) & 0x1c000398;
  *(char *)((ulonglong)uVar3 * 2) = (char)uVar3;
  uVar3 = CONCAT31((int3)(uVar3 >> 8),(char)uVar3 + 'x') + 0x6680c00;
  cVar1 = (char)uVar3;
  *pcVar8 = *pcVar8 + cVar1;
  pbVar6 = (byte *)(param_1 + -1);
  *pbVar6 = *pbVar6 + cVar1;
  *pbVar6 = *pbVar6 ^ (byte)pbVar6;
  *(char *)(ulonglong)uVar3 = *(char *)(ulonglong)uVar3 + cVar7;
  *(char *)(ulonglong)(uint)(int)(short)uVar3 = *(char *)(ulonglong)(uint)(int)(short)uVar3 + cVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

