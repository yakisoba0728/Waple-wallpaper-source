// Function: FUN_1404a94c8
// Addr: 1404a94c8
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404a9505) overlaps instruction at (ram,0x0001404a9500)
    */

void FUN_1404a94c8(undefined8 param_1,int *param_2)

{
  byte bVar1;
  byte bVar2;
  char cVar3;
  uint in_EAX;
  uint uVar4;
  char *pcVar5;
  byte bVar7;
  undefined2 uVar8;
  undefined4 uVar9;
  undefined1 uVar10;
  byte bVar11;
  undefined2 uVar12;
  undefined4 uVar13;
  longlong unaff_RBX;
  ulonglong uVar14;
  undefined1 *puVar15;
  char *pcVar16;
  uint *unaff_RSI;
  byte in_CF;
  char *pcVar6;
  
  bVar2 = bRam000000014baaa143;
  uVar13 = (undefined4)((ulonglong)param_2 >> 0x20);
  uVar12 = (undefined2)((ulonglong)param_2 >> 0x10);
  uVar10 = SUB81(param_2,0);
  uVar9 = (undefined4)((ulonglong)param_1 >> 0x20);
  uVar8 = (undefined2)((ulonglong)param_1 >> 0x10);
  bVar7 = (byte)((ulonglong)param_1 >> 8);
  uVar4 = (uint)&stack0x00000000 + in_EAX;
  uVar14 = (ulonglong)(uVar4 + in_CF);
  uVar4 = in_EAX + (int)param_2 +
          (uint)(CARRY4((uint)&stack0x00000000,in_EAX) || CARRY4(uVar4,(uint)in_CF));
  bRam000000014baaa143 = bRam000000014baaa143 + (char)param_1;
  puVar15 = (undefined1 *)(uVar14 - 8);
  *(ulonglong *)(uVar14 - 8) = (ulonglong)uVar4;
  *param_2 = *param_2 + CONCAT22(uVar8,CONCAT11(bVar7,bVar2));
  pcVar5 = (char *)(ulonglong)uVar4;
  bVar11 = (byte)((ulonglong)param_2 >> 8) |
           *(byte *)(unaff_RBX + CONCAT44(uVar9,CONCAT22(uVar8,CONCAT11(bVar7,bVar2))));
  bVar1 = *(byte *)CONCAT44(uVar13,CONCAT22(uVar12,CONCAT11(bVar11,uVar10)));
  *(byte *)CONCAT44(uVar13,CONCAT22(uVar12,CONCAT11(bVar11,uVar10))) =
       *(char *)CONCAT44(uVar13,CONCAT22(uVar12,CONCAT11(bVar11,uVar10))) + bVar2;
  if (!CARRY1(bVar1,bVar2)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (*(char *)CONCAT44(uVar13,CONCAT22(uVar12,CONCAT11(bVar11,uVar10))) == '\0') {
    pcVar5 = (char *)(uVar14 - 8 & 0xffffffff);
    puVar15 = (undefined1 *)(ulonglong)uVar4;
  }
  *pcVar5 = *pcVar5 + (char)pcVar5;
  cVar3 = (char)*unaff_RSI;
  pcVar6 = (char *)(ulonglong)*unaff_RSI;
  *(char *)CONCAT44(uVar9,CONCAT22(uVar8,CONCAT11(bVar7,bVar2))) =
       *(char *)CONCAT44(uVar9,CONCAT22(uVar8,CONCAT11(bVar7,bVar2))) + (char)puVar15;
  *(char *)CONCAT44(uVar13,CONCAT22(uVar12,CONCAT11(bVar11,uVar10))) =
       *(char *)CONCAT44(uVar13,CONCAT22(uVar12,CONCAT11(bVar11,uVar10))) + cVar3;
  *pcVar6 = *pcVar6 + cVar3;
  pcVar5 = pcVar6;
  pcVar16 = puVar15;
  if (*pcVar6 == '\0') {
    pcVar5 = (char *)((ulonglong)puVar15 & 0xffffffff);
    pcVar16 = pcVar6;
  }
  *pcVar5 = *pcVar5 + (char)pcVar5;
  cVar3 = (char)unaff_RSI[1];
  pcVar5 = (char *)(ulonglong)unaff_RSI[1];
  *(char *)CONCAT44(uVar9,CONCAT22(uVar8,CONCAT11(bVar7,bVar2))) =
       *(char *)CONCAT44(uVar9,CONCAT22(uVar8,CONCAT11(bVar7,bVar2))) + (char)pcVar16;
  *pcVar5 = *pcVar5 + cVar3;
  *pcVar5 = *pcVar5 + cVar3;
  uVar4 = unaff_RSI[2];
  *(char *)CONCAT44(uVar9,CONCAT22(uVar8,CONCAT11(bVar7,bVar2))) =
       *(char *)CONCAT44(uVar9,CONCAT22(uVar8,CONCAT11(bVar7,bVar2))) + (char)pcVar16;
  uVar4 = uVar4 + 0x74050002;
  *(byte *)(ulonglong)uVar4 = *(byte *)(ulonglong)uVar4 | (byte)uVar4;
  *(byte *)(unaff_RSI + -0x145dfffa) = (byte)unaff_RSI[-0x145dfffa] ^ bVar7;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

