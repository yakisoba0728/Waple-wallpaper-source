// Function: FUN_1404ba1b4
// Addr: 1404ba1b4
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404ba203) overlaps instruction at (ram,0x0001404ba201)
    */

void FUN_1404ba1b4(undefined8 param_1,byte *param_2)

{
  ushort uVar1;
  byte bVar2;
  byte bVar3;
  uint uVar4;
  byte *in_RAX;
  byte *pbVar5;
  undefined1 uVar6;
  byte bVar7;
  undefined2 uVar8;
  undefined4 uVar9;
  char unaff_BL;
  char unaff_BH;
  undefined6 unaff_0000001a;
  undefined1 *unaff_RSI;
  undefined1 *puVar10;
  longlong unaff_RDI;
  bool bVar11;
  
  uVar9 = (undefined4)((ulonglong)param_1 >> 0x20);
  uVar8 = (undefined2)((ulonglong)param_1 >> 0x10);
  uVar6 = (undefined1)param_1;
  bVar2 = (byte)in_RAX;
  in_RAX[0xa21004b] = in_RAX[0xa21004b] + bVar2;
  bVar7 = (byte)((ulonglong)param_1 >> 8) | in_RAX[4];
  bVar11 = CARRY1(bRam00000001804badfd,bVar2);
  bRam00000001804badfd = bRam00000001804badfd + bVar2;
  puVar10 = unaff_RSI;
  if (bVar11 || bRam00000001804badfd == '\0') {
    unaff_RSI[0x77] = unaff_RSI[0x77] + bVar7;
    *in_RAX = *in_RAX & bVar2;
    param_2[CONCAT44(uVar9,CONCAT22(uVar8,CONCAT11(bVar7,uVar6))) * 2 + 0x2002100] =
         param_2[CONCAT44(uVar9,CONCAT22(uVar8,CONCAT11(bVar7,uVar6))) * 2 + 0x2002100];
    in_RAX[4] = in_RAX[4] + bVar7;
    in_RAX[0x77] = in_RAX[0x77] + bVar2;
    *in_RAX = *in_RAX & bVar2;
    puVar10 = unaff_RSI + 1;
    out(*unaff_RSI,(short)param_2);
    if (*in_RAX == 0) {
      in_RAX[0x21004ab4] = in_RAX[0x21004ab4] + bVar2;
      *in_RAX = *in_RAX + bVar2;
      goto code_r0x0001404ba1eb;
    }
    *(char *)CONCAT44(uVar9,CONCAT22(uVar8,CONCAT11(bVar7,uVar6))) =
         *(char *)CONCAT44(uVar9,CONCAT22(uVar8,CONCAT11(bVar7,uVar6))) +
         (char)((ulonglong)in_RAX >> 8);
  }
  else {
code_r0x0001404ba1eb:
    in_RAX[0x77] = in_RAX[0x77] + bVar2;
    *in_RAX = *in_RAX & bVar2;
    out(*puVar10,(short)param_2);
    if (*in_RAX != 0) goto code_r0x0001404ba213;
    in_RAX[0x1004ab4] = in_RAX[0x1004ab4] + bVar2;
    unaff_BH = unaff_BH + bVar7;
  }
  uVar4 = (uint)in_RAX | *(uint *)CONCAT44(uVar9,CONCAT22(uVar8,CONCAT11(bVar7,uVar6)));
  bVar2 = ((char)uVar4 - *(char *)(ulonglong)uVar4) + 0x70;
  in_RAX = (byte *)(ulonglong)CONCAT31((int3)(uVar4 >> 8),bVar2);
  *in_RAX = *in_RAX ^ bVar2;
code_r0x0001404ba213:
  *(char *)CONCAT44(uVar9,CONCAT22(uVar8,CONCAT11(bVar7,uVar6))) =
       *(char *)CONCAT44(uVar9,CONCAT22(uVar8,CONCAT11(bVar7,uVar6))) +
       (char)((ulonglong)in_RAX >> 8);
  uVar1 = (short)in_RAX - 10;
  *(char *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) =
       *(char *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + unaff_BL;
  bVar2 = *param_2;
  *param_2 = *param_2 + (byte)param_2;
  pbVar5 = (byte *)(ulonglong)(uint)(int)(short)(uVar1 | 0x2400);
  bVar3 = (byte)uVar1;
  *pbVar5 = *pbVar5 + bVar3 + CARRY1(bVar2,(byte)param_2);
  *(uint *)(pbVar5 + 0x7b500011) =
       *(uint *)(pbVar5 + 0x7b500011) | CONCAT22(uVar8,CONCAT11(bVar7,uVar6));
  *pbVar5 = *pbVar5 & bVar3;
  if (-1 < (char)*pbVar5) {
    *pbVar5 = *pbVar5 + bVar7;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(char *)(unaff_RDI + 0x7c) = *(char *)(unaff_RDI + 0x7c) + bVar3;
  *pbVar5 = *pbVar5 & bVar3;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

