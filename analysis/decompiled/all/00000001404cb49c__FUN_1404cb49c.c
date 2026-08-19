// Function: FUN_1404cb49c
// Addr: 1404cb49c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404cb4e3) overlaps instruction at (ram,0x0001404cb4e2)
    */

void FUN_1404cb49c(longlong param_1,longlong param_2,char param_3)

{
  undefined3 uVar1;
  char cVar2;
  char cVar3;
  byte bVar4;
  uint uVar5;
  ulonglong in_RAX;
  undefined7 uVar9;
  uint *puVar7;
  char *pcVar10;
  char cVar11;
  byte bVar12;
  char unaff_BL;
  undefined7 unaff_00000019;
  char *unaff_RSI;
  byte *unaff_RDI;
  char unaff_R12B;
  uint *unaff_retaddr;
  char *pcVar6;
  byte *pbVar8;
  
  bVar12 = (byte)((ulonglong)param_2 >> 8);
  cVar11 = (char)param_2;
  uVar9 = (undefined7)(in_RAX >> 8);
  cVar2 = *(char *)(CONCAT71(unaff_00000019,unaff_BL) + (in_RAX & 0xff));
  pcVar6 = (char *)CONCAT71(uVar9,cVar2);
  pcVar10 = (char *)(param_1 + -1);
  cVar3 = (char)unaff_retaddr;
  if (pcVar10 == (char *)0x0) {
    pcVar6[(longlong)unaff_RSI * 8 + 0x210049] = pcVar6[(longlong)unaff_RSI * 8 + 0x210049];
    *pcVar6 = *pcVar6 + cVar2;
    puVar7 = (uint *)CONCAT71(uVar9,0xe2);
    uVar5 = (uint)puVar7 ^ *puVar7;
    uVar1 = (undefined3)(uVar5 >> 8);
    bVar4 = *(byte *)(CONCAT71(unaff_00000019,unaff_BL) + ((ulonglong)uVar5 & 0xff));
    pbVar8 = (byte *)(ulonglong)CONCAT31(uVar1,bVar4);
    pcVar10 = (char *)(param_1 + -2);
    if (pcVar10 == (char *)0x0) {
      pbVar8[(longlong)unaff_RSI * 8 + 0x10010049] = pbVar8[(longlong)unaff_RSI * 8 + 0x10010049];
      *pbVar8 = *pbVar8 | bVar4;
      *unaff_RSI = *unaff_RSI + bVar12;
      *pbVar8 = *pbVar8 + cVar11;
      pbVar8 = (byte *)((ulonglong)(CONCAT31(uVar1,bVar4) | 0xe0) + 7);
      *pbVar8 = *pbVar8 | bVar12;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (pcVar10 == (char *)0x0) {
      uVar5 = (uint)unaff_retaddr ^ *unaff_retaddr;
      uVar5 = uVar5 ^ *(uint *)(ulonglong)uVar5;
      cVar2 = (char)uVar5 + 'L';
      pcVar6 = (char *)(ulonglong)CONCAT31((int3)(uVar5 >> 8),cVar2);
      cRam0000000000000000 = cRam0000000000000000 + unaff_R12B;
      *pcVar6 = *pcVar6 + cVar2;
      *pcVar6 = *pcVar6 + cVar11;
      in(0x33);
      *(byte *)CONCAT71(unaff_00000019,unaff_BL) =
           *(char *)CONCAT71(unaff_00000019,unaff_BL) + bVar12;
      in(0x33);
      *(char *)((longlong)unaff_RSI * 4) = *(char *)((longlong)unaff_RSI * 4) + unaff_BL;
      cRam0000000000000000 = cRam0000000000000000 + param_3;
      *(char *)CONCAT71(unaff_00000019,unaff_BL) =
           *(char *)CONCAT71(unaff_00000019,unaff_BL) + cVar11;
      uRamfffffffffffffff8 = 0;
      *(char *)CONCAT71(unaff_00000019,unaff_BL) =
           *(char *)CONCAT71(unaff_00000019,unaff_BL) + cVar11;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    *pcVar10 = *pcVar10 + cVar3;
code_r0x0001404cb4ed:
    *(char *)(param_2 * 5) = *(char *)(param_2 * 5) + (char)pcVar10;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  bVar4 = (byte)((ulonglong)unaff_retaddr >> 8);
  if (pcVar10 == (char *)0x0) {
    *unaff_retaddr = *unaff_retaddr | (uint)unaff_retaddr;
    pcVar6 = (char *)((ulonglong)unaff_retaddr | 0x74);
    *pcVar6 = *pcVar6 + (char)pcVar6;
    *unaff_RDI = *unaff_RDI | bVar4;
  }
  else {
    cVar2 = bVar4 * '\x02';
    pcVar6 = (char *)CONCAT62((int6)((ulonglong)unaff_retaddr >> 0x10),CONCAT11(cVar2,cVar3));
    *pcVar10 = *pcVar10 + cVar2;
    *pcVar6 = *pcVar6 + cVar3;
    *pcVar6 = *pcVar6 + bVar12;
    if (pcVar10 != (char *)0x0) {
      pcVar6[-0x1d] = pcVar6[-0x1d] + 'L';
      in(0xb3);
      *pcVar10 = *pcVar10 + param_3;
      goto code_r0x0001404cb4ed;
    }
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

