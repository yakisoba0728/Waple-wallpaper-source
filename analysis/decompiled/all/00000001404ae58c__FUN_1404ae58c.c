// Function: FUN_1404ae58c
// Addr: 1404ae58c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404ae58c(longlong param_1,longlong param_2)

{
  byte *pbVar1;
  undefined3 uVar2;
  uint uVar3;
  byte bVar4;
  byte bVar5;
  undefined1 uVar6;
  char cVar7;
  uint uVar8;
  uint *in_RAX;
  ulonglong uVar9;
  uint *puVar11;
  char *pcVar12;
  byte bVar13;
  undefined1 unaff_BL;
  char unaff_BH;
  undefined6 unaff_0000001a;
  byte *unaff_RSI;
  char *pcVar14;
  longlong unaff_RDI;
  byte in_CF;
  char in_ZF;
  char *pcVar10;
  
  cVar7 = (char)((ulonglong)param_2 >> 8);
  bVar13 = (byte)param_2;
  pcVar12 = (char *)(param_1 + -1);
  if (pcVar12 == (char *)0x0 || in_ZF != '\0') {
    uVar8 = (int)in_RAX + *in_RAX + (uint)in_CF | *(uint *)(param_1 + 0x12);
    pbVar1 = (byte *)((ulonglong)uVar8 + 0x21004ae4);
    bVar5 = *pbVar1;
    *pbVar1 = *pbVar1 + bVar13;
    uVar2 = (undefined3)(uVar8 >> 8);
    bVar4 = (char)uVar8 + '\x06' + CARRY1(bVar5,bVar13);
    (&stack0x00000000)[(longlong)unaff_RSI * 2] =
         (&stack0x00000000)[(longlong)unaff_RSI * 2] + bVar13;
    bVar5 = *(byte *)(ulonglong)CONCAT31(uVar2,bVar4);
    *(char *)(param_1 + 0x7e403ff) = *(char *)(param_1 + 0x7e403ff) + cVar7;
    pcVar10 = (char *)((ulonglong)CONCAT31(uVar2,bVar4 | bVar5) + 0x44);
    *pcVar10 = *pcVar10 + cVar7;
    uVar9 = (ulonglong)unaff_RSI & 0xffffffff;
    *(char *)(unaff_RDI + 0x4a) = *(char *)(unaff_RDI + 0x4a) - (char)uVar9;
    *pcVar12 = *pcVar12 + (char)(uVar9 >> 8);
    bVar5 = (char)uVar9 + 2;
    unaff_RSI = (byte *)CONCAT71((int7)(uVar9 >> 8),bVar5);
    (&stack0x00000000)[param_2 * 8] = (&stack0x00000000)[param_2 * 8] + bVar5;
    *unaff_RSI = *unaff_RSI | bVar5;
    uVar6 = in(0x4a);
    *pcVar12 = *pcVar12 + '\x13';
    in_RAX = (uint *)(CONCAT71(0xc80013,uVar6) | 6);
    (&stack0x00000000)[(longlong)in_RAX * 8] =
         (&stack0x00000000)[(longlong)in_RAX * 8] + (char)pcVar12;
  }
  *in_RAX = *in_RAX | (uint)in_RAX;
  pcVar12[CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL))] =
       pcVar12[CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL))] |
       (byte)((ulonglong)in_RAX >> 8);
  cVar7 = in(0xe4);
  pcVar10 = (char *)CONCAT71(0xdc0013,cVar7);
  *pcVar12 = *pcVar12;
  *pcVar10 = *pcVar10 + cVar7;
  pcVar10[-0x23ffecbc] = pcVar10[-0x23ffecbc] + unaff_BH;
  bVar5 = in(0xe4);
  puVar11 = (uint *)CONCAT71(0xdc0013,bVar5);
  *pcVar12 = *pcVar12;
  *(byte *)puVar11 = (byte)*puVar11 + bVar5;
  unaff_RSI[-0x47ffecbc] = unaff_RSI[-0x47ffecbc] + bVar13;
  *puVar11 = *puVar11 & (uint)puVar11;
  uVar8 = *puVar11;
  uVar3 = *puVar11;
  *(byte *)puVar11 = (byte)*puVar11 + bVar5;
  if (!SCARRY1((byte)uVar3,bVar5)) {
    pcVar10 = (char *)((ulonglong)unaff_RSI & 0xffffffff);
    pcVar14 = (char *)(ulonglong)((uint)puVar11 + *puVar11 + (uint)CARRY1((byte)uVar8,bVar5));
    *(char *)(unaff_RDI + 0x4a) = *(char *)(unaff_RDI + 0x4a) - (char)pcVar10;
    *pcVar12 = *pcVar12 + (char)((ulonglong)pcVar10 >> 8);
    *pcVar14 = *pcVar14 + (char)pcVar12;
    *pcVar10 = *pcVar10 + (char)pcVar10;
    cVar7 = in(7);
    pcVar12 = (char *)CONCAT71((int7)((ulonglong)pcVar10 >> 8),cVar7);
    *pcVar12 = *pcVar12 + cVar7;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  unaff_RSI[0x28001344] = unaff_RSI[0x28001344] + bVar13;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

