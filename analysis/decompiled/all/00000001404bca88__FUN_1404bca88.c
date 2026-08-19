// Function: FUN_1404bca88
// Addr: 1404bca88
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404bcac1) overlaps instruction at (ram,0x0001404bcabf)
    */

void FUN_1404bca88(char *param_1,undefined8 param_2,undefined8 param_3,char *param_4)

{
  uint *puVar1;
  undefined3 uVar2;
  byte bVar3;
  uint uVar4;
  uint *in_RAX;
  char *pcVar5;
  ulonglong uVar6;
  byte *pbVar7;
  byte bVar8;
  char cVar9;
  undefined4 uVar11;
  char unaff_BL;
  undefined7 unaff_00000019;
  char cVar12;
  undefined8 *unaff_RBP;
  byte *unaff_RSI;
  int iVar10;
  
  uVar11 = (undefined4)((ulonglong)param_2 >> 0x20);
  bVar8 = (byte)param_1;
  cVar12 = (char)unaff_RBP + '\b';
  *param_4 = *param_4 + cVar12;
  *(char *)in_RAX = (char)*in_RAX + (char)in_RAX;
  cVar9 = (char)param_2 + bVar8;
  iVar10 = CONCAT31((int3)((ulonglong)param_2 >> 8),cVar9);
  *(byte *)CONCAT71(unaff_00000019,unaff_BL) =
       *(byte *)CONCAT71(unaff_00000019,unaff_BL) | (byte)((ulonglong)in_RAX >> 8);
  *(char *)((longlong)param_1 * 2) =
       *(char *)((longlong)param_1 * 2) + (char)((ulonglong)param_1 >> 8);
  uVar4 = (uint)in_RAX & *in_RAX;
  pcVar5 = (char *)((ulonglong)uVar4 ^ 0xc9);
  *param_4 = *param_4 + cVar12;
  *unaff_RSI = *unaff_RSI + (char)pcVar5;
  *pcVar5 = *pcVar5 + (char)pcVar5;
  uVar2 = (undefined3)(uVar4 >> 8);
  cVar12 = in(0x19);
  pcVar5 = (char *)(ulonglong)CONCAT31(uVar2,cVar12);
  *pcVar5 = *pcVar5 + cVar12;
  bVar3 = (byte)(uVar4 >> 8);
  if (*pcVar5 == '\0') {
    *param_1 = *param_1 + bVar3;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *pcVar5 = *pcVar5 + cVar12;
  uVar6 = (ulonglong)CONCAT31(uVar2,cVar12) ^ 0x1b;
  *(char *)(uVar6 - 0x35ffdcf8) = *(char *)(uVar6 - 0x35ffdcf8) + bVar3;
  *(byte *)CONCAT71(unaff_00000019,unaff_BL) = *(byte *)CONCAT71(unaff_00000019,unaff_BL) | bVar3;
  *(char *)((longlong)param_1 * 9) = *(char *)((longlong)param_1 * 9) + unaff_BL;
  *param_4 = *param_4 + (char)uVar6;
  uVar4 = (uint)uVar6 | *(uint *)CONCAT71(unaff_00000019,unaff_BL);
  pcVar5 = (char *)(ulonglong)uVar4;
  *(byte *)CONCAT71(unaff_00000019,unaff_BL) = *(char *)CONCAT71(unaff_00000019,unaff_BL) + bVar8;
  *(int *)CONCAT44(uVar11,iVar10) = *(int *)CONCAT44(uVar11,iVar10) + iVar10;
  cVar12 = (char)uVar4;
  pcVar5[(longlong)unaff_RSI * 2] = pcVar5[(longlong)unaff_RSI * 2] + cVar12;
  *pcVar5 = *pcVar5 + cVar12;
  puVar1 = (uint *)(CONCAT71(unaff_00000019,unaff_BL) + 6);
  *puVar1 = *puVar1 & (uint)param_1;
  pbVar7 = (byte *)(CONCAT71(unaff_00000019,unaff_BL) + 0x34);
  bVar3 = *pbVar7;
  *pbVar7 = *pbVar7 + bVar8;
  bVar3 = cVar12 + CARRY1(bVar3,bVar8);
  unaff_RSI[CONCAT44(uVar11,iVar10)] = unaff_RSI[CONCAT44(uVar11,iVar10)] | (byte)(uVar4 >> 8);
  pcVar5 = (char *)(ulonglong)
                   (CONCAT31((int3)(uVar4 >> 8),bVar3 + 0x54) + 0x2366f000 + (uint)(0xab < bVar3));
  *pcVar5 = *pcVar5 + cVar9;
  *unaff_RBP = &UNK_1404bcae1;
  pbVar7 = (byte *)func_0x0001614c16aa();
  *pbVar7 = *pbVar7 | (byte)pbVar7;
  *unaff_RSI = (byte)pbVar7;
  *pbVar7 = *pbVar7 + (char)((ulonglong)pbVar7 >> 8);
  if (-1 < (char)*pbVar7) {
    *(char *)CONCAT71(unaff_00000019,unaff_BL) =
         *(char *)CONCAT71(unaff_00000019,unaff_BL) + (char)iVar10;
    *unaff_RBP = 0xffffffffe4080008;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

