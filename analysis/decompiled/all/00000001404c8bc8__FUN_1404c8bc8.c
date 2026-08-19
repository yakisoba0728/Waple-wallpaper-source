// Function: FUN_1404c8bc8
// Addr: 1404c8bc8
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c8bc8(byte *param_1,int *param_2)

{
  uint uVar1;
  uint uVar2;
  byte bVar3;
  byte bVar7;
  int in_EAX;
  int iVar4;
  uint *puVar5;
  char *pcVar6;
  char cVar8;
  char cVar9;
  char cVar10;
  undefined2 uVar11;
  undefined4 uVar12;
  byte unaff_BL;
  undefined7 unaff_00000019;
  longlong unaff_RBP;
  int unaff_ESI;
  byte *unaff_RDI;
  char unaff_R12B;
  byte in_CF;
  
  uVar12 = (undefined4)((ulonglong)param_2 >> 0x20);
  uVar11 = (undefined2)((ulonglong)param_2 >> 0x10);
  cVar10 = (char)((ulonglong)param_2 >> 8);
  cVar8 = (char)param_1;
  *(uint *)(param_1 + (longlong)param_2) =
       (*(int *)(param_1 + (longlong)param_2) - unaff_ESI) - (uint)in_CF;
  bVar3 = *param_1;
  *param_1 = *param_1 + unaff_BL;
  iVar4 = in_EAX + 0x11e013f0 + (uint)CARRY1(bVar3,unaff_BL);
  *unaff_RDI = *unaff_RDI >> 1 | *unaff_RDI << 7;
  *param_2 = *param_2 + (int)param_2;
  uVar1 = *(uint *)(ulonglong)CONCAT31((int3)((uint)iVar4 >> 8),(char)iVar4 + *param_1);
  puVar5 = (uint *)(ulonglong)uVar1;
  cVar9 = (char)param_2 + *(char *)((longlong)puVar5 + 0x21);
  bVar3 = (byte)uVar1;
  *(byte *)CONCAT44(uVar12,CONCAT22(uVar11,CONCAT11(cVar10,cVar9))) =
       *(byte *)CONCAT44(uVar12,CONCAT22(uVar11,CONCAT11(cVar10,cVar9))) | bVar3;
  *(char *)puVar5 = (char)*puVar5 + cVar8;
  if ((char)*puVar5 == '\0') {
    *puVar5 = *puVar5 & uVar1;
    *(byte *)puVar5 = (char)*puVar5 + bVar3;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  bVar7 = (byte)(uVar1 >> 8);
  *(byte *)(puVar5 + -0x19) = (char)puVar5[-0x19] + bVar7;
  *puVar5 = *puVar5 ^ uVar1;
  if (*puVar5 == 0) {
    *puVar5 = *puVar5 ^ uVar1;
    pcVar6 = (char *)((ulonglong)uVar1 | 0x8b);
    *param_1 = *param_1 + unaff_R12B;
    *(byte *)CONCAT44(uVar12,CONCAT22(uVar11,CONCAT11(cVar10,cVar9))) =
         *(byte *)CONCAT44(uVar12,CONCAT22(uVar11,CONCAT11(cVar10,cVar9))) | (byte)pcVar6;
    *pcVar6 = *pcVar6 + cVar8;
    bVar3 = in(0x5e);
    uVar2 = CONCAT31((int3)(uVar1 >> 8),bVar3);
    *(char *)(unaff_RBP + -100) = *(char *)(unaff_RBP + -100) + cVar10;
    *(uint *)(ulonglong)uVar2 = *(uint *)(ulonglong)uVar2 ^ uVar2;
    uVar1 = CONCAT22((short)(uVar1 >> 0x10),CONCAT11(0x9f,bVar3));
    puVar5 = (uint *)(ulonglong)uVar1;
    *puVar5 = *puVar5 ^ uVar1;
    pcVar6 = (char *)(CONCAT71(unaff_00000019,unaff_BL) + 0x2721004c);
    *pcVar6 = *pcVar6 - cVar8;
    *(byte *)puVar5 = (byte)*puVar5 | bVar3;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *param_1 = *param_1 + bVar3;
  param_1[0x31] = param_1[0x31] ^ bVar7;
  param_1[-0x7563ffcf] = param_1[-0x7563ffcf] + cVar9;
  *param_1 = *param_1 + unaff_R12B;
  *(byte *)puVar5 = (char)*puVar5 + bVar3;
  *(char *)puVar5 = (char)*puVar5 + cVar10;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

