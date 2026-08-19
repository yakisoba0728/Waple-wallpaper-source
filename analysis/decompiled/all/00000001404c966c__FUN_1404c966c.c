// Function: FUN_1404c966c
// Addr: 1404c966c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404c9743) overlaps instruction at (ram,0x0001404c9740)
    */

void FUN_1404c966c(longlong param_1,undefined8 param_2,char param_3)

{
  uint uVar1;
  byte bVar2;
  uint uVar3;
  char cVar5;
  uint *in_RAX;
  undefined7 uVar6;
  byte bVar7;
  char *pcVar8;
  byte bVar9;
  char cVar10;
  undefined6 uVar11;
  byte unaff_BL;
  uint *unaff_RSI;
  longlong unaff_RDI;
  char unaff_R12B;
  uint *puVar4;
  
  uVar11 = (undefined6)((ulonglong)param_2 >> 0x10);
  cVar10 = (char)((ulonglong)param_2 >> 8);
  *(char *)((longlong)unaff_RSI + (longlong)in_RAX) =
       *(char *)((longlong)unaff_RSI + (longlong)in_RAX) + cVar10;
  bVar9 = (byte)param_2 ^ unaff_BL;
  *in_RAX = *in_RAX ^ (uint)in_RAX;
  uVar6 = (undefined7)((ulonglong)in_RAX >> 8);
  bVar2 = (char)in_RAX + (char)param_1;
  puVar4 = (uint *)CONCAT71(uVar6,bVar2);
  pcVar8 = (char *)(param_1 + -1);
  cVar5 = (char)((ulonglong)in_RAX >> 8);
  if (pcVar8 == (char *)0x0 || bVar2 == 0) {
    *pcVar8 = *pcVar8 + cVar5;
    *(byte *)puVar4 = (byte)*puVar4 + bVar2;
    *(byte *)puVar4 = (byte)*puVar4 + cVar10;
    *(char *)(unaff_RDI + -0x26) = *(char *)(unaff_RDI + -0x26) + bVar2;
    *puVar4 = *puVar4 ^ (uint)puVar4;
    uRam00000001b4519694 = uRam00000001b4519694 & (uint)puVar4;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (SCARRY1((char)in_RAX,(char)param_1) == (char)bVar2 < '\0') {
    *pcVar8 = *pcVar8 + cVar5;
    *(byte *)puVar4 = (byte)*puVar4 + bVar2;
    *(byte *)((longlong)puVar4 + -0x30ffce25) = *(byte *)((longlong)puVar4 + -0x30ffce25) + cVar5;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *pcVar8 = *pcVar8 + bVar2;
  *(byte *)CONCAT62(uVar11,CONCAT11(cVar10,bVar9)) =
       *(byte *)CONCAT62(uVar11,CONCAT11(cVar10,bVar9)) | bVar2;
  uVar3 = *puVar4;
  bVar7 = (byte)pcVar8;
  uVar1 = *puVar4;
  *(byte *)puVar4 = (byte)*puVar4 + bVar7;
  if (!CARRY1((byte)uVar3,bVar7)) {
    if (SCARRY1((byte)uVar1,bVar7)) {
      uVar3 = (int)CONCAT71(uVar6,bVar2 + (byte)*puVar4) + 0x76000d64;
      puVar4 = (uint *)(ulonglong)uVar3;
      while( true ) {
        *puVar4 = *puVar4 ^ uVar3;
        pcVar8 = pcVar8 + -1;
        if (pcVar8 == (char *)0x0 || *puVar4 == 0) break;
        *(char *)((longlong)unaff_RSI + -7) = *(char *)((longlong)unaff_RSI + -7) + cVar10;
      }
      *puVar4 = *puVar4 ^ uVar3;
      *pcVar8 = *pcVar8 + unaff_R12B;
      *(char *)unaff_RSI = (char)*unaff_RSI + (char)unaff_RSI;
      do {
        *(char *)((longlong)puVar4 + -7) = *(char *)((longlong)puVar4 + -7) + cVar10;
        *unaff_RSI = *unaff_RSI ^ (uint)unaff_RSI;
        pcVar8 = pcVar8 + -1;
      } while (pcVar8 != (char *)0x0 && *unaff_RSI != 0);
      *unaff_RSI = *unaff_RSI ^ (uint)unaff_RSI;
      *pcVar8 = *pcVar8 + unaff_R12B;
      *(char *)puVar4 = (char)*puVar4 + (char)uVar3;
      do {
        *(char *)((longlong)puVar4 + -7) = *(char *)((longlong)puVar4 + -7) + bVar9;
        *puVar4 = *puVar4 ^ uVar3;
      } while (*puVar4 == 0);
      *puVar4 = *puVar4 ^ uVar3;
      *pcVar8 = *pcVar8 + param_3;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    *puVar4 = *puVar4 - (int)pcVar8;
  }
  *pcVar8 = *pcVar8 + (char)((ulonglong)pcVar8 >> 8);
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}

