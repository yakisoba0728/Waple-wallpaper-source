// Function: FUN_1404c9700
// Addr: 1404c9700
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404c9743) overlaps instruction at (ram,0x0001404c9740)
    */

void FUN_1404c9700(longlong param_1,byte *param_2,char param_3)

{
  byte bVar1;
  byte bVar3;
  uint uVar4;
  uint *in_RAX;
  byte *pbVar5;
  byte bVar8;
  char *pcVar9;
  char cVar10;
  uint *unaff_RSI;
  char unaff_R12B;
  byte bVar2;
  uint *puVar6;
  undefined7 uVar7;
  
  cVar10 = (char)((ulonglong)param_2 >> 8);
  *in_RAX = *in_RAX & (uint)in_RAX;
  *(char *)in_RAX = (char)*in_RAX + (char)in_RAX;
  bVar3 = bRamc80031dcbe0031dc;
  uVar7 = (undefined7)((ulonglong)in_RAX >> 8);
  pbVar5 = (byte *)CONCAT71(uVar7,bRamc80031dcbe0031dc);
  pcVar9 = (char *)(param_1 + -1);
  puVar6 = unaff_RSI;
  if (pcVar9 != (char *)0x0 && (char)*in_RAX != '\0') {
code_r0x0001404c975c:
    *pcVar9 = *pcVar9 + unaff_R12B;
    *(char *)puVar6 = (char)*puVar6 + (char)puVar6;
    do {
      *(char *)((longlong)puVar6 + -7) = *(char *)((longlong)puVar6 + -7) + (char)param_2;
      *puVar6 = *puVar6 ^ (uint)puVar6;
    } while (*puVar6 == 0);
    *puVar6 = *puVar6 ^ (uint)puVar6;
    *pcVar9 = *pcVar9 + param_3;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *pcVar9 = *pcVar9 + bRamc80031dcbe0031dc;
  *param_2 = *param_2 | bVar3;
  bVar1 = *pbVar5;
  bVar8 = (byte)pcVar9;
  bVar2 = *pbVar5;
  *pbVar5 = *pbVar5 + bVar8;
  if (!CARRY1(bVar1,bVar8)) {
    if (SCARRY1(bVar2,bVar8)) {
      uVar4 = (int)CONCAT71(uVar7,bVar3 + *pbVar5) + 0x76000d64;
      puVar6 = (uint *)(ulonglong)uVar4;
      while( true ) {
        *puVar6 = *puVar6 ^ uVar4;
        pcVar9 = pcVar9 + -1;
        if (pcVar9 == (char *)0x0 || *puVar6 == 0) break;
        *(char *)((longlong)unaff_RSI + -7) = *(char *)((longlong)unaff_RSI + -7) + cVar10;
      }
      *puVar6 = *puVar6 ^ uVar4;
      *pcVar9 = *pcVar9 + unaff_R12B;
      *(char *)unaff_RSI = (char)*unaff_RSI + (char)unaff_RSI;
      do {
        *(char *)((longlong)puVar6 + -7) = *(char *)((longlong)puVar6 + -7) + cVar10;
        *unaff_RSI = *unaff_RSI ^ (uint)unaff_RSI;
        pcVar9 = pcVar9 + -1;
      } while (pcVar9 != (char *)0x0 && *unaff_RSI != 0);
      *unaff_RSI = *unaff_RSI ^ (uint)unaff_RSI;
      goto code_r0x0001404c975c;
    }
    *(int *)pbVar5 = *(int *)pbVar5 - (int)pcVar9;
  }
  *pcVar9 = *pcVar9 + (char)((ulonglong)pcVar9 >> 8);
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}

