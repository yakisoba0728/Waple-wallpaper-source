// Function: FUN_1404cb74c
// Addr: 1404cb74c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404cb74c(byte *param_1,uint param_2)

{
  uint *puVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined3 uVar6;
  char cVar7;
  byte bVar8;
  int iVar9;
  char cVar11;
  undefined8 in_RAX;
  char cVar12;
  byte bVar13;
  char unaff_BL;
  byte bVar14;
  char unaff_BH;
  undefined2 unaff_0000001a;
  undefined4 unaff_0000001c;
  longlong unaff_RBP;
  uint unaff_ESI;
  undefined4 unaff_00000034;
  longlong unaff_RDI;
  bool bVar15;
  char *pcVar10;
  
  cVar12 = (char)((ulonglong)param_1 >> 8);
  cVar7 = ((byte)in_RAX & (byte)param_2) + (byte)param_2;
  pcVar10 = (char *)CONCAT71((int7)((ulonglong)in_RAX >> 8),cVar7);
  *pcVar10 = *pcVar10 + cVar7;
  bVar2 = *param_1;
  bVar8 = (byte)((ulonglong)in_RAX >> 8);
  *param_1 = *param_1 + bVar8;
  uVar3 = (uint)CARRY1(bVar2,bVar8);
  uVar5 = (uint)pcVar10 + 0x3be2fff6;
  bVar15 = (uint)pcVar10 < 0xc41d000a || uVar5 < uVar3;
  iVar9 = uVar5 - uVar3;
  cVar7 = (byte)iVar9 - bVar15;
  puVar1 = (uint *)(unaff_RBP +
                   CONCAT44(unaff_0000001c,CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL))));
  uVar4 = (uint)((byte)iVar9 < bVar15);
  uVar3 = *puVar1;
  uVar5 = *puVar1;
  *puVar1 = (uVar5 - unaff_ESI) - uVar4;
  cVar11 = (char)((uint)iVar9 >> 8) +
           *(char *)(CONCAT44(unaff_00000034,unaff_ESI) +
                    CONCAT44(unaff_0000001c,CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)))) +
           (uVar3 < unaff_ESI || uVar5 - unaff_ESI < uVar4);
  param_2 = param_2 | *(uint *)(unaff_RDI +
                               CONCAT44(unaff_0000001c,
                                        CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL))));
  uVar6 = (undefined3)(CONCAT22((short)((uint)iVar9 >> 0x10),CONCAT11(cVar11,cVar7)) >> 8);
  bVar13 = (byte)param_2;
  bVar14 = unaff_BL + unaff_BH * '\x02';
  cVar7 = cVar7 + bVar13 + -100;
  pcVar10 = (char *)(CONCAT44(unaff_00000034,unaff_ESI) + 0x4c +
                    CONCAT44(unaff_00000034,unaff_ESI) * 4);
  *pcVar10 = *pcVar10 + cVar12;
  *param_1 = *param_1 + cVar11;
  *(char *)(ulonglong)CONCAT31(uVar6,cVar7) = *(char *)(ulonglong)CONCAT31(uVar6,cVar7) + cVar7;
  bVar8 = cVar7 + bVar13 + 0x68;
  pcVar10 = (char *)(CONCAT44(unaff_00000034,unaff_ESI) + 0x4c +
                    CONCAT44(unaff_00000034,unaff_ESI) * 4);
  *pcVar10 = *pcVar10 + cVar12;
  bVar2 = *param_1;
  *param_1 = *param_1 + bVar14;
  pcVar10 = (char *)((ulonglong)CONCAT31(uVar6,bVar8) * 2);
  *pcVar10 = (*pcVar10 - bVar8) - CARRY1(bVar2,bVar14);
  puVar1 = (uint *)((ulonglong)param_2 + 0x6003e005);
  *puVar1 = *puVar1 | unaff_ESI;
  pcVar10 = (char *)(ulonglong)CONCAT31(uVar6,bVar8 & bVar13);
  *pcVar10 = *pcVar10 + (char)param_1;
  *pcVar10 = *pcVar10 + (bVar8 & bVar13);
  *(uint *)(pcVar10 + (longlong)param_1) =
       *(uint *)(pcVar10 + (longlong)param_1) & CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,bVar14));
  (&stack0x00000000)[CONCAT44(unaff_00000034,unaff_ESI) * 8] =
       (&stack0x00000000)[CONCAT44(unaff_00000034,unaff_ESI) * 8] + bVar14;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

