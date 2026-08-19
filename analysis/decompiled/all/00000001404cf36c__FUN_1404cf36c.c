// Function: FUN_1404cf36c
// Addr: 1404cf36c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404cf36c(byte *param_1,char *param_2,byte param_3,char *param_4)

{
  char cVar1;
  char cVar2;
  byte bVar3;
  uint uVar4;
  uint *in_RAX;
  undefined7 uVar9;
  ulonglong uVar6;
  uint *puVar7;
  byte bVar10;
  int iVar11;
  byte *pbVar12;
  char cVar13;
  undefined1 unaff_BL;
  undefined7 unaff_00000019;
  longlong unaff_RBP;
  longlong unaff_RSI;
  uint *unaff_RDI;
  char unaff_R12B;
  bool in_ZF;
  char *pcVar5;
  byte *pbVar8;
  
  cVar13 = (char)((ulonglong)param_2 >> 8);
  if (in_ZF) {
    *(char *)(unaff_RSI + 0x50003c75) = *(char *)(unaff_RSI + 0x50003c75) + (char)param_1;
    *param_4 = *param_4 + (char)in_RAX;
    uVar4 = (uint)in_RAX;
    *unaff_RDI = uVar4;
    *in_RAX = *in_RAX | uVar4;
    unaff_RDI[1] = uVar4;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(char *)in_RAX = (char)*in_RAX + (char)param_1;
  uVar9 = (undefined7)((ulonglong)in_RAX >> 8);
  pcVar5 = (char *)(((ulonglong)in_RAX ^ 0x12) + 0x2d);
  *pcVar5 = *pcVar5 + cVar13;
  *param_2 = *param_2 + -8;
  cVar2 = (char)((ulonglong)in_RAX ^ 0x12);
  cVar1 = cVar2 * '\x02';
  pcVar5 = (char *)CONCAT71(uVar9,cVar1);
  *param_1 = *param_1 + unaff_R12B;
  *pcVar5 = *pcVar5 + cVar1;
  pcVar5[0x2d] = pcVar5[0x2d] + cVar13;
  *param_2 = *param_2 + -8;
  cVar2 = cVar2 * '\x04';
  *param_1 = *param_1 + unaff_R12B;
  *param_2 = *param_2 + cVar2;
  *(char *)CONCAT71(uVar9,cVar2) = *(char *)CONCAT71(uVar9,cVar2) + cVar2;
  uVar6 = CONCAT71(uVar9,cVar2) ^ 0x12;
  pcVar5 = (char *)(uVar6 + 0x2d);
  *pcVar5 = *pcVar5 + cVar13;
  *param_2 = *param_2 + -8;
  puVar7 = (uint *)CONCAT71(uVar9,(char)uVar6 * '\x02');
  bVar3 = *param_1;
  *param_1 = *param_1 + param_3;
  iVar11 = (int)param_1 + *puVar7 + (uint)CARRY1(bVar3,param_3);
  *(char *)CONCAT71(unaff_00000019,unaff_BL) =
       *(char *)CONCAT71(unaff_00000019,unaff_BL) + (char)param_2;
  uVar4 = (uint)puVar7 | *puVar7;
  pbVar8 = (byte *)(ulonglong)uVar4;
  *(char *)CONCAT71(unaff_00000019,unaff_BL) =
       *(char *)CONCAT71(unaff_00000019,unaff_BL) + (char)param_2;
  bVar10 = (byte)iVar11 ^ (byte)*unaff_RDI;
  pbVar12 = (byte *)((ulonglong)CONCAT31((int3)((uint)iVar11 >> 8),bVar10) - 1);
  bVar3 = (byte)uVar4;
  if (pbVar12 == (byte *)0x0 || bVar10 == 0) {
    *(undefined1 *)CONCAT71(unaff_00000019,unaff_BL) =
         *(undefined1 *)CONCAT71(unaff_00000019,unaff_BL);
    uRam00000001b451f3fc = uRam00000001b451f3fc & uVar4;
    *pbVar8 = *pbVar8 | bVar3;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (*pbVar8 == bVar3) {
    bVar10 = *pbVar12;
    *pbVar12 = *pbVar12 + param_3;
    *(char *)((longlong)pbVar8 * 2) =
         (*(char *)((longlong)pbVar8 * 2) - bVar3) - CARRY1(bVar10,param_3);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *pbVar12 = *pbVar12 + unaff_R12B;
  puVar7 = (uint *)(ulonglong)(uVar4 + 0xf4050002);
  *puVar7 = *puVar7 | uVar4 + 0xf4050002;
  if (*puVar7 != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  pbVar12[unaff_RBP] = pbVar12[unaff_RBP] + cVar13;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

